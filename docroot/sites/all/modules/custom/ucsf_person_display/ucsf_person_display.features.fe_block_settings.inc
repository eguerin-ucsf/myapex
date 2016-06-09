<?php
/**
 * @file
 * ucsf_person_display.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ucsf_person_display_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-ucsf_person_view-block_1'] = array(
    'cache' => -1,
    'css_class' => 'person-block',
    'custom' => '0',
    'delta' => 'ucsf_person_view-block_1',
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
        'weight' => '2',
      ),
      'teal' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'teal',
        'weight' => '2',
      ),
      'ucsf_base' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'ucsf_base',
        'weight' => '2',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-ucsf_person_view-block_2'] = array(
    'cache' => -1,
    'css_class' => 'person-contact',
    'custom' => '0',
    'delta' => 'ucsf_person_view-block_2',
    'module' => 'views',
    'node_types' => array(
      0 => 'ucsf_person',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'orange' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'orange',
        'weight' => '-10',
      ),
      'teal' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'teal',
        'weight' => '-10',
      ),
      'ucsf_base' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'ucsf_base',
        'weight' => '-10',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
