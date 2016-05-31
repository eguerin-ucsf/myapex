<?php
/**
 * @file
 * ucsf_starterkit_gallery.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ucsf_starterkit_gallery_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-gallery-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'gallery-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'gallery',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'orange' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'orange',
        'weight' => '0',
      ),
      'teal' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'teal',
        'weight' => '0',
      ),
      'ucsf_base' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'ucsf_base',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
