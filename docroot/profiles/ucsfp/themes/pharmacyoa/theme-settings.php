<?php

/**
 * Implementation of hook_form_system_theme_settings_alter() 
 */
function pharmacyoa_form_system_theme_settings_alter(&$form, $form_state) {

  // Upaate the "Toogle Display" to something clearer
  $form['theme_settings']['#title'] = t('Theme Display Settings');

  // Change Weighting of Default Setting Fields
  $form['theme_settings']['#weight'] = 20;
  $form['logo']['#weight']           = 30;
  $form['favicon']['#weight']        = 40;

  // Subsite Options
  $form['subsite_options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Subsite Options'),
    '#description' => t('If this is toggled on as a subsite, header and design will be adjusted to relect its relation.'),
  );

  // Define the subsite flag
  $form['subsite_options']['subsite'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use this as a subsite.'),
    '#default_value' => theme_get_setting('subsite'),
  );

  // Define the subsite parent title
  $form['subsite_options']['subsite_parent_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Parent site title'),
    '#description' => t('Define the parent site title'),
    '#default_value' => theme_get_setting('subsite_parent_title') ? theme_get_setting('subsite_parent_title') : "School of Pharmacy",
  );

  // Define the subsite parent url
  $form['subsite_options']['subsite_parent_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Parent site url'),
    '#description' => t('Define the parent site web address when clicked. Must provide full url. Example: http://pharmacy.ucsf.edu'),
    '#default_value' => theme_get_setting('subsite_parent_url') ? theme_get_setting('subsite_parent_url') : "http://pharmacy.ucsf.edu",
  );


  // Define the contact information fieldset
  $form['contact_information'] = array(
    '#type' => 'fieldset',
    '#title' => t('Contact Information in Footer'),
  );

  // Define the phone number
  $form['contact_information']['phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Phone Number'),
    '#default_value' => theme_get_setting('phone'),
  );

  // Define your fax number
  $form['contact_information']['fax'] = array(
    '#type' => 'textfield',
    '#title' => t('Fax Number'),
    '#default_value' => theme_get_setting('fax'),
  );

  // Define your address
  $form['contact_information']['address'] = array(
    '#type' => 'textarea',
    '#title' => t('Address'),
    '#rows' => 3,
    '#default_value' => theme_get_setting('address'),
  );

  // Define a Make a Gift fieldset
  $form['make_a_gift'] = array(
    '#type' => 'fieldset', 
    '#title' => t('Make a Gift'),
  );

  // Define the Make a Gift link
  $form['make_a_gift']['make_a_gift_link'] = array(
    '#type' => 'textfield',
    '#title' => 'Make A Gift Link',
    '#default_value' => theme_get_setting('make_a_gift_link'),
  );

  // Define a Footer Quote fieldset
  $form['footer_quote'] = array(
    '#type' => 'fieldset', 
    '#title' => t('Footer quote'),
  );

  // Define the quote text
  $form['footer_quote']['footer_quote_text'] = array(
    '#type' => 'textarea',
    '#title' => t('Quote text'),
    '#rows' => 3,
    '#default_value' => theme_get_setting('footer_quote_text'),
  );

  // Define the social media links
  $form['social_media'] = array(
    '#type' => 'fieldset',
    '#title' => t('Social Media Links in Footer'),
  );

  // Define the twitter link
  $form['social_media']['twitter_link'] = array(
    '#type' => 'textfield',
    '#title' => 'Twitter',
    '#default_value' => theme_get_setting('twitter_link'),
  );

  // Define the facebook link
  $form['social_media']['facebook_link'] = array(
    '#type' => 'textfield',
    '#title' => 'Facebook',
    '#default_value' => theme_get_setting('facebook_link'),
  );

  // Define the youtube link
  $form['social_media']['youtube_link'] = array(
    '#type' => 'textfield',
    '#title' => 'YouTube',
    '#default_value' => theme_get_setting('youtube_link'),
  );

  // Update the image settings to include seal
  $form['logo']['#title'] = 'Image settings';
  $default_seal = theme_get_setting('default_seal');
  $form['logo']['default_seal'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use the default seal'), 
    '#tree' => FALSE,
    '#description' => t('Check here if you want the theme to use the seal supplied with it'),
    '#default_value' => (empty($default_seal)) ? 1 : $default_seal,
  );
  $seal_path = theme_get_setting('seal_path');
  // If $seal_path is a public:// URI, display the path relative to the files
  // directory; stream wrappers are not end-user friendly.
  if (file_uri_scheme($seal_path) == 'public') {
    $seal_path = file_uri_target($seal_path);
  }
  $form['logo']['seal_settings'] = array(
    '#type' => 'container',
    '#states' => array(
      'invisible' => array(
        'input[name="default_seal"]' => array(
          'checked' => TRUE,
        ),
      ),
    ),
    'seal_path' => array(
      '#type' => 'textfield',
      '#title' => 'Path to custom seal',
      '#default_value' => '',
      '#description' => 'The path to the file you would like to use as your seal file instead of the default seal.',
      '#default_value' => $seal_path,
    ),
    'seal_upload' => array(
      '#type' => 'file',
      '#title' => 'Upload logo image',
      '#maxlength' => 40,
      '#description' => 'If you don\'t have direct file access to the server, use this field to upload your seal.',
    ),
  );

  $form['#submit'][] = 'pharmacyoa_theme_settings_submit';
  $form['#validate'][] = 'pharmacyoa_theme_settings_validate';
}

/**
 * Custom Validation Hook
 */
function pharmacyoa_theme_settings_validate($form, &$form_state) {
  // Handle file uploads.
  $validators = array('file_validate_is_image' => array());

  // Check for a new uploaded logo.
  $file = file_save_upload('seal_upload', $validators);
  if (isset($file)) {
    // File upload was attempted.
    if ($file) {
      // Put the temporary file in form_values so we can save it on submit.
      $form_state['values']['seal_upload'] = $file;
    }
    else {
      // File upload failed.
      form_set_error('seal_upload', t('The seal could not be uploaded.'));
    }
  }

  // If the user provided a path for a seal file, make sure a file
  // exists at that path.
  if ($form_state['values']['seal_path']) {
    $path = _system_theme_settings_validate_path($form_state['values']['seal_path']);
    if (!$path) {
      form_set_error('seal_path', t('The custom seal path is invalid.'));
    }
  }
}

/**
 * Custom Submit Hook
 */
function pharmacyoa_theme_settings_submit($form, &$form_state) {
  $values = $form_state['values'];

  // If the user uploaded a new seal, save it to a permanent location
  // and use it in place of the default theme-provided file.
  if ($file = $values['seal_upload']) {
    unset($values['seal_upload']);
    $filename = file_unmanaged_copy($file->uri);
    $values['default_seal'] = 0;
    $values['seal_path'] = $filename;
    $values['toggle_seal'] = 1;
  }

  // If the user entered a path relative to the system files directory for
  // a seal, store a public:// URI so the theme system can handle it.
  if (!empty($values['seal_path'])) {
    $values['seal_path'] = _system_theme_settings_validate_path($values['seal_path']);
  }

  // Save the values to $form_state
  if (!empty($values['seal_path'])) {
    $form_state['values']['seal_path'] = $values['seal_path'];
  }
  if (!empty($values['toggle_seal'])) {
    $form_state['values']['toggle_seal'] = $values['toggle_seal'];
  }
  $form_state['values']['default_seal'] = $values['default_seal'];
}
