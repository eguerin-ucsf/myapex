<?php
/**
 * @file
 * ucsf_images.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucsf_images_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ucsf_images_image_default_styles() {
  $styles = array();

  // Exported image style: original_cropped.
  $styles['original_cropped'] = array(
    'name' => 'original_cropped',
    'label' => 'Standard Crop',
    'effects' => array(
      27 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => '',
          'height' => '',
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'original_cropped',
        ),
        'weight' => '0',
      ),
    ),
  );

  // Exported image style: square_crop.
  $styles['square_crop'] = array(
    'name' => 'square_crop',
    'label' => 'Square crop',
    'effects' => array(
      46 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => '640',
          'height' => '640',
          'upscale' => 0,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 1,
          'style_name' => 'square_crop',
        ),
        'weight' => '0',
      ),
      51 => array(
        'label' => 'Dimesionless Square Crop',
        'help' => 'Crops excess portions of an image to make the longer side the same as the smaller.  Uses Smartcrop if available',
        'effect callback' => 'square_crop_crop_effect',
        'module' => 'square_crop',
        'name' => 'square_crop',
        'data' => array(),
        'weight' => '2',
      ),
      56 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '640',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '3',
      ),
    ),
  );

  return $styles;
}
