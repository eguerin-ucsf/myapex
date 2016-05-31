<?php
/**
 * @file
 * ucsf_person_profiles_display.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ucsf_person_profiles_display_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-ucsf_profiles_view-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'ucsf_profiles_view-block_1',
    'module' => 'views',
    'node_types' => array(
      0 => 'ucsf_person',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'orange' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'orange',
        'weight' => '3',
      ),
      'teal' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'teal',
        'weight' => '3',
      ),
      'ucsf_base' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'ucsf_base',
        'weight' => '3',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
