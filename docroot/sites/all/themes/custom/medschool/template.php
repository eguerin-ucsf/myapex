<?php

/* Override Search form elements */
function medschool_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {
    $form['search_block_form']['#title'] = t('Search'); // Change the text on the label element
    $form['search_block_form']['#title_display'] = 'invisible'; // Toggle label visibilty
    //$form['search_block_form']['#size'] = 16;  // define size of the textfield
    $form['search_block_form']['#default_value'] = t('Search'); // Set a default value for the textfield
    //$form['actions']['submit']['#value'] = t('GO!');  Change the text on the submit button
    $form['actions']['submit'] = array('#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/images/search_icon.gif');

// Add extra attributes to the text box
    $form['search_block_form']['#attributes']['onblur'] = "if (this.value == '') {this.value = 'Search';}";
    $form['search_block_form']['#attributes']['onfocus'] = "if (this.value == 'Search') {this.value = '';}";
    // Prevent user from searching the default text
    $form['#attributes']['onsubmit'] = "if(this.search_block_form.value=='Search'){ alert('Please enter a search'); return false; }";
  }
}

// Remove search form on the results page
function medschool_page_alter(&$page) {
  // This assumes everything being output in the "content" page region.

  // Logged in
  if (!empty($page['content']['system_main']['content']['search_form'])) {
    unset($page['content']['system_main']['content']['search_form']);
  }

  // Not logged in
  if (!empty($page['content']['system_main']['search_form'])) {
    unset($page['content']['system_main']['search_form']);
  }
}

/* Use the site name to add a body class specific to the each site sharing the SOM theme */
/*
function medschool_preprocess_html (&$variables) {
	$sitename = variable_get('site_name', '');
	$site_class = ereg_replace('[^A-Za-z0-9]', '', $sitename );
	$variables['classes_array'][] = $site_class;
}
*/

// Decide to load either 'school' view or 'public' view based on IP
function medschool_preprocess_page (&$variables) {

//Override or insert variables into the page template.
  if (isset($variables['node']->type)) {
    $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
  }

// Decide to load either 'school' view or 'public' view based on IP
	$variables['ipaddress'] = ip_address();
		
	$variables['clientip'] = explode( '.' , $variables['ipaddress'] );
		
	//	Collect first two octets of IP
	$variables['ipab'] = $variables['clientip'][0] . '.' . $variables['clientip'][1];

	$variables['ucsf_internal'] = FALSE;
	//	If visitor's IP originates from UC Network default to internal page view
	switch($variables['ipab']):
		case '64.54':
		case '128.218':
		case '169.230':
		case '10.6':
		case '10.7':
		case '10.8':
		case '10.9':
		case '10.10':
		case '10.11':
		$variables['ucsf_internal'] = TRUE;
		break;
	endswitch;
	
//	Toggle between 'school' view and 'public'
	$flag = drupal_is_front_page();
	if ($flag) {
		if($_GET['p']=='0'): $variables['ucsf_internal'] = TRUE;
		else: 
		if($_GET['p']=='1'): $variables['ucsf_internal'] = FALSE;
		endif;
		endif;
	}
	
	
}









