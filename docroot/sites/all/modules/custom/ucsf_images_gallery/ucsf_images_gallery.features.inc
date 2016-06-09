<?php
/**
 * @file
 * ucsf_images_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucsf_images_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ucsf_images_gallery_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ucsf_images_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: ucsf_gallery.
  $styles['ucsf_gallery'] = array(
    'name' => 'ucsf_gallery',
    'label' => 'ucsf_gallery',
    'effects' => array(
      36 => array(
        'label' => 'Manual Crop: Reuse cropped style',
        'help' => 'Reuse a crop selection from another Manual Crop enabled image style.',
        'effect callback' => 'manualcrop_reuse_effect',
        'form callback' => 'manualcrop_reuse_form',
        'summary theme' => 'manualcrop_reuse_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'original_cropped',
        ),
        'weight' => '0',
      ),
      41 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '1024',
          'height' => '1024',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ucsf_images_gallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
