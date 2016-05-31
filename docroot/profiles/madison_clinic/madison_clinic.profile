<?php
/**
 * @file
 * Enables modules and site configuration for a Madison Clinic site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function madison_clinic_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name.
  $form['site_information']['site_name']['#default_value'] = t('The Madison Clinic');
  // Set a default country
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
}
