<?php
/**
 * @file
 * ucsf_pharmacy_sliders.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucsf_pharmacy_sliders_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
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
function ucsf_pharmacy_sliders_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function ucsf_pharmacy_sliders_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: featured_spotlight
  $nodequeues['featured_spotlight'] = array(
    'name' => 'featured_spotlight',
    'title' => 'Hero Slider',
    'subqueue_title' => '',
    'size' => '0',
    'link' => 'Add to Hero',
    'link_remove' => 'Remove from Hero',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '1',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'large_slider',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: subtle_spotlight
  $nodequeues['subtle_spotlight'] = array(
    'name' => 'subtle_spotlight',
    'title' => 'Subtle Spotlight',
    'subqueue_title' => '',
    'size' => '0',
    'link' => 'Add to Spotlight',
    'link_remove' => 'Remove from Spotlight',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '1',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'large_slider',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function ucsf_pharmacy_sliders_image_default_styles() {
  $styles = array();

  // Exported image style: pharmacy_hero.
  $styles['pharmacy_hero'] = array(
    'name' => 'pharmacy_hero',
    'label' => 'Pharmacy Hero',
    'effects' => array(
      1 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => '940',
          'height' => '400',
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 1,
          'style_name' => 'pharmacy_hero',
        ),
        'weight' => '-10',
      ),
      11 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => '400',
          'upscale' => 0,
        ),
        'weight' => '-9',
      ),
    ),
  );

  // Exported image style: pharmacy_spotlight.
  $styles['pharmacy_spotlight'] = array(
    'name' => 'pharmacy_spotlight',
    'label' => 'Pharmacy Spotlight',
    'effects' => array(
      146 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => '274',
          'height' => '332',
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'pharmacy_spotlight',
        ),
        'weight' => '0',
      ),
      151 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '274',
          'height' => '332',
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
function ucsf_pharmacy_sliders_node_info() {
  $items = array(
    'large_slider' => array(
      'name' => t('Hero/Spotlight Slider'),
      'base' => 'node_content',
      'description' => t('Slider images for main spotlight or the subtle spotlight ad.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
