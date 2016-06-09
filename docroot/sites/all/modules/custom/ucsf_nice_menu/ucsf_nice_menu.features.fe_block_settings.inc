<?php
/**
 * @file
 * ucsf_nice_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ucsf_nice_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => '1',
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'orange' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'orange',
        'weight' => '-15',
      ),
      'teal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'teal',
        'weight' => '-15',
      ),
      'ucsf_base' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ucsf_base',
        'weight' => '-15',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['nice_menus-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => '1',
    'module' => 'nice_menus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'orange' => array(
        'region' => 'header',
        'status' => '1',
        'theme' => 'orange',
        'weight' => '-16',
      ),
      'teal' => array(
        'region' => 'header',
        'status' => '1',
        'theme' => 'teal',
        'weight' => '-16',
      ),
      'ucsf_base' => array(
        'region' => 'header',
        'status' => '1',
        'theme' => 'ucsf_base',
        'weight' => '-16',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  return $export;
}
