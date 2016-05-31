<?php
/*
 * Contains all Forms and form functions for the ucsf_eds_profiles module
 */

/*
 * Replacement node/add/ucsf-person form
 */
function ucsf_eds_profiles_add_person($form, &$form_state) {
  $form['email'] = array(
    '#type' => 'textfield',
    '#title' => t('UCSF email address'),
    '#description' => t('Use the email address as used in the UCSF EDS/LDAP system.'),
    //'#default_value' => '',
    '#size' => 60,
    '#maxlength' => 128,
    '#required' => TRUE,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  return $form;
}

/*
 * Replacement node/add/ucsf-person form validation
 */
function ucsf_eds_profiles_add_person_validate($form, &$form_state) {
  $identifier = $form_state['values']['email'];
  if (empty($identifier)) {
    return;
  }

  if (is_numeric($identifier)) {
    //only if exists
    if (!ucsf_eds_profiles_check_existing_record($identifier,$identifier)) {
      return;
    }
    //quick check here
    list($ldap, $profile) = ucsf_eds_profiles_get_data($identifier, FALSE, TRUE);
    // Quiet = False, is_form = true (use form_set_error on email field)
  }
  else {
    list($ldap, $profile) = ucsf_eds_profiles_get_data($identifier, FALSE, TRUE);
    // Quiet = False, is_form = true (use form_set_error on email field)
    if (!ucsf_eds_profiles_check_existing_record($identifier,$ldap['ucsfeduidnumber'][0])) {
      return;
    }

  }
  // Additional data validation 

  // Validation complete pass data to submit
  $form_state['profile'] = $profile;
  $form_state['ldap'] = $ldap;
}

function ucsf_eds_profiles_check_existing_record($identifier,$ucid) {

    //query against the DB table
    $db_result = db_select('ucsf_eds_profiles_nodes', 'n')
      ->fields('n')
      ->condition('ucid', $ucid,'=')
      ->execute()
      ->fetchAssoc();

    if(!empty($db_result['nid'])){
      $nid = $db_result['nid'];
      if (node_load($nid)){
        //dpm($nid);
        //node exists do some stuff to warn people
        
        $l = l(t('@identifier', array('@identifier' => $identifier)), 'node/' . $nid);
        form_set_error('email', t('UCSF Person specified already exists -- Updating external data for: !identifier.', array('!identifier' => $l)));
        //update the existing node!
        ucsf_eds_profiles_update_node($nid, FALSE);
        return FALSE;
      } 
      else {
        //node missing but is being re-added, delete old record
        $num_deleted = db_delete('ucsf_eds_profiles_nodes')
          ->condition('nid', $nid)
          ->execute();
        $message = "Removing orphaned nid " . $nid . " for replacement in module node table for person " . $identifier;
        ucsf_eds_profiles_log($message, NULL, array(), 'status', TRUE, TRUE);
      }
    }
  return TRUE;
}


/*
 * Replacement node/add/ucsf-person form submit
 */
function ucsf_eds_profiles_add_person_submit($form, &$form_state) {
  global $user;
  $ldap = $form_state['ldap'];
  $profile = $form_state['profile'];

  //Create an Entity with wrapper
  $node = entity_create('node', array('type' => 'ucsf_person'));
  $entity = entity_metadata_wrapper('node',  $node);
  // Specify the author
  $node->uid = $user->uid;
  
  // Add/Update the fields in the entity
  ucsf_eds_profiles_add_update($entity, $ldap, $profile);

  // Uncomment to display raw data
  //dpm($form_state['profile']);
  //dpm($form_state['ldap']);
  //dpm($node);

  //Write nid email relationship into module's DB table
  $record = array (
    "nid" => $node->nid,
    "ucid" => $ldap['ucsfeduidnumber'][0],
  );
  drupal_write_record('ucsf_eds_profiles_nodes', $record);

  // Redirect to the new node edit page
  drupal_goto('node/' . $node->nid . '/edit');
}

/**
 *
 * implments hook_node_presave()
 *
 */
function ucsf_eds_profiles_node_presave($node){
  //check that node is type ucsf_person
  if ($node->type == 'ucsf_person') {
    //other presave work could go in here

    //see if address fields are missing --ok to just check for state since address is all or nothing on 4 main fields incl state (admin area) 
    if (empty($node->field_person_address_postal['und'][0]['administrative_area'])) {
       //if so unset country... fixes display issue due to outstanding bug for address field
       $node->field_person_address_postal['und'][0]['country']="";
    }
    //same thing for pp address
    if (empty($node->field_private_practice_address['und'][0]['administrative_area'])) {
      $node->field_priavte_practice_address['und'][0]['country']="";
    }
  }
}

/**
 * Implements hook_form_BASE_FORM_ID_alter for UCSF Person node edit form
 */
function ucsf_eds_profiles_form_ucsf_person_node_form_alter(&$form, &$form_state, $form_id) {
  //add the css for making style changes to the edit page
  drupal_add_css(drupal_get_path('module', 'ucsf_eds_profiles') . '/ucsf_eds_profiles_edit_form.css', array('group' => CSS_DEFAULT, 'every_page' => FALSE));


  // Add the title field source.
  $form['title']['#description'] = t('via EDS:displayName, EDS:ucsfEduDegree');

  // Disable fields updated by EDS/LDAP or Profiles
  $fields = array(
    'title',
    'field_person_ucid',
    'field_person_first_name',
    'field_person_middle_name',
    'field_person_last_name',
    'field_person_eds_degrees',
    'field_person_preferred_name',
    'field_person_email',
    'field_campus_phone',
    'field_private_practice_phone',
    'field_private_practice_address',
    'field_person_fax',
    'field_person_research_biography',
    'field_person_publications_list',
    'field_person_keywords_profiles',
    'field_person_payroll_title',
    'field_person_working_title',
    'field_person_primary_dept',
    'field_profiles_link',
    'field_person_type',
    'field_person_type_full',
    'field_import_messages',
    'field_person_address_postal',
    'field_profiles_honors_awards',
    'field_person_display_name',
  );
  foreach($fields as $field) {
    $form[$field]['#disabled'] = TRUE;
  }
}

/**
* Implements hook_menu().
*/
function ucsf_eds_profiles_menu() {
  $items = array();

  $items['node/%node/external'] = array(
    'title' => 'EDS/Profiles Update',
    'page callback' => 'ucsf_eds_profiles_update_action',
    'page arguments' => array(1),
    'access callback' => 'ucsf_eds_profiles_update_access',
    'access arguments' => array('update', 1),
    'type' => MENU_LOCAL_TASK,
  );
  return $items;
}

/**
 * Access Callback
 **/
function ucsf_eds_profiles_update_access($op,$node){
  if ($node->type == 'ucsf_person') {
    return node_access($op,$node);
  } else {
    return false;
  }
}
/**
* Page callback.
*/
function ucsf_eds_profiles_update_action($node) {
  $nid = $node->nid;
  ucsf_eds_profiles_update_node($nid, FALSE);
  drupal_goto( 'node/' . $nid );
//  dpm($node);
//  dpm(node_load($node->nid));
//  node_page_view(node_load($node->nid));


  //drupal_goto(drupal_get_path_alias("node/".$nid));
}
