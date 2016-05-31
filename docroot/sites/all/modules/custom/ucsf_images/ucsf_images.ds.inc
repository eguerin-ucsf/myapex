<?php
/**
 * @file
 * ucsf_images.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function ucsf_images_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'featured';
  $ds_view_mode->label = 'Featured';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['featured'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'full';
  $ds_view_mode->label = 'Full';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['full'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'half';
  $ds_view_mode->label = 'Half';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['half'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'original_cropped';
  $ds_view_mode->label = 'Original Cropped';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['original_cropped'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'quarter';
  $ds_view_mode->label = 'Quarter';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['quarter'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sixth';
  $ds_view_mode->label = 'Sixth';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['sixth'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'square_half';
  $ds_view_mode->label = 'Square Half';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['square_half'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'square_quarter';
  $ds_view_mode->label = 'Square Quarter';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['square_quarter'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'square_sixth';
  $ds_view_mode->label = 'Square Sixth';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['square_sixth'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'square_third';
  $ds_view_mode->label = 'Square Third';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['square_third'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'square_thumbnail';
  $ds_view_mode->label = 'Square Thumbnail';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['square_thumbnail'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'third';
  $ds_view_mode->label = 'Third';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['third'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'thumbnail';
  $ds_view_mode->label = 'Thumbnail';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['thumbnail'] = $ds_view_mode;

  return $export;
}
