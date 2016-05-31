<?php
/**
* This plugin array is more or less self documenting
*/
$plugin = array(
  'single' => TRUE,  // Just do this one, it is needed.
  'title' => t('RSS Link'),  // Title to show up on the pane screen.
  'description' => t('Provides a site-specific link to an rss feed'), // Description to show up on the pane screen.
  'category' => t('RSS'), // A category to put this under.
  'edit form' => 'ucsf_pharmacy_central_taxonomy_rss_pane_custom_pane_edit_form', // A function that will return the settings form for the 
  'defaults' => array( // Array of defaults for the settings form. submit func requires this
    'rss_type' => '',
  ),
  'render callback' => 'ucsf_pharmacy_central_taxonomy_rss_pane_content_type_render', // A function that will return the renderable content.
  //'admin info' => 'mymod_pane_custom_pane_admin_info', // A function that will return the information displayed on the admin screen (optional).
  //'all contexts' => TRUE, // This is NEEDED to be able to use substitution strings in your pane.
);


/**
* Run-time rendering of the body of the block (content type)
* See ctools_plugin_examples for more advanced info
*/
function ucsf_pharmacy_central_taxonomy_rss_pane_content_type_render($subtype, $conf, $context = NULL) {
  /*
  //check for a sitecode variable
  if($sitecode = variable_get('ucsf_pharmacy_site_code',FALSE)){
    //check for a tid number inside it
    $sitecode = explode("_", $sitecode);
    if (isset($sitecode[1]) && is_numeric($sitecode[1])) {
      //set that number as the tid in the url
      $site = $sitecode[1];
    } else {
      //or set it to the special word all
      $site = "all";
    }
  } else {
    //also all if no code varible to begin with
    $site = "all";
  }*/
  $site = str_replace(" ", "-", variable_get('site_name','all'));
  
  //make sure there is a setting for the type of feed
  if (!empty($conf['rss_type'])){
    $type = $conf['rss_type'];
    //create block (pane) with link
    $block = new stdClass();
    $block->content = '<a class="pharmacy-rss-link" href="' . UCSF_PHARMACY_MAIN_URL . 'rss/' . $site . '/' .$type. '.xml"><span class="symbol">r</span><span class="pharmacy-rss-link-text"> RSS</a>';
    return $block;
  } else {
    return;
  }
}


/**
 * An edit form for the pane's settings.
 */
function ucsf_pharmacy_central_taxonomy_rss_pane_custom_pane_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  //radio button for syndication type selection
  $form['rss_type'] = array(
    '#type' => 'radios',
    '#title' => t('RSS Content Type'),
    '#default_value' => $conf['rss_type'],
    '#options' => drupal_map_assoc(array('news','events','coverage')),
  );
  //manually add the submit function cause it hate me
  $form['#submit'][] = "ucsf_pharmacy_central_taxonomy_rss_link_submit";

  return $form;
}
/**
 * Submit function, note anything in the formstate[conf] automatically gets saved
 * Notice, the magic that automatically does that for you.
 */
function ucsf_pharmacy_central_taxonomy_rss_link_submit(&$form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
} 