<?php
/**
 * @file
 * ucsf_pharmacy_images.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucsf_pharmacy_images_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ucsf_pharmacy_images_image_default_styles() {
  $styles = array();

  // Exported image style: featured_spotlight.
  $styles['featured_spotlight'] = array(
    'name' => 'featured_spotlight',
    'label' => 'featured_spotlight',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '940',
          'height' => '400',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: featured_view.
  $styles['featured_view'] = array(
    'name' => 'featured_view',
    'label' => 'featured_view',
    'effects' => array(
      46 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '360',
          'height' => '360',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: panopoly_image_featured.
  $styles['panopoly_image_featured'] = array(
    'name' => 'panopoly_image_featured',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '480',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
      3 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '480',
          'height' => '260',
          'anchor' => 'center-center',
        ),
        'weight' => '3',
      ),
    ),
    'label' => 'panopoly_image_featured',
  );

  // Exported image style: panopoly_image_full.
  $styles['panopoly_image_full'] = array(
    'name' => 'panopoly_image_full',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '960',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
    ),
    'label' => 'panopoly_image_full',
  );

  // Exported image style: panopoly_image_half.
  $styles['panopoly_image_half'] = array(
    'name' => 'panopoly_image_half',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '480',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'panopoly_image_half',
  );

  // Exported image style: panopoly_image_quarter.
  $styles['panopoly_image_quarter'] = array(
    'name' => 'panopoly_image_quarter',
    'effects' => array(
      5 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '240',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'panopoly_image_quarter',
  );

  // Exported image style: panopoly_image_spotlight.
  $styles['panopoly_image_spotlight'] = array(
    'name' => 'panopoly_image_spotlight',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most use',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '960',
          'height' => '560',
        ),
        'weight' => '2',
      ),
    ),
    'label' => 'panopoly_image_spotlight',
  );

  // Exported image style: panopoly_image_square.
  $styles['panopoly_image_square'] = array(
    'name' => 'panopoly_image_square',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '200',
          'height' => '200',
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'panopoly_image_square',
  );

  // Exported image style: panopoly_image_thumbnail.
  $styles['panopoly_image_thumbnail'] = array(
    'name' => 'panopoly_image_thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '80',
          'height' => '80',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'panopoly_image_thumbnail',
  );

  // Exported image style: panopoly_image_video.
  $styles['panopoly_image_video'] = array(
    'name' => 'panopoly_image_video',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '560',
          'height' => '314',
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'panopoly_image_video',
  );

  // Exported image style: pharmacy_full.
  $styles['pharmacy_full'] = array(
    'name' => 'pharmacy_full',
    'label' => 'Pharmacy Full',
    'effects' => array(
      30 => array(
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
        'weight' => '1',
      ),
      29 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '940',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: pharmacy_half.
  $styles['pharmacy_half'] = array(
    'name' => 'pharmacy_half',
    'label' => 'Pharmacy Half',
    'effects' => array(
      31 => array(
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
        'weight' => '1',
      ),
      32 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '460',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: pharmacy_quarter.
  $styles['pharmacy_quarter'] = array(
    'name' => 'pharmacy_quarter',
    'label' => 'Pharmacy Quarter',
    'effects' => array(
      33 => array(
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
      34 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '220',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: pharmacy_sixth.
  $styles['pharmacy_sixth'] = array(
    'name' => 'pharmacy_sixth',
    'label' => 'Pharmacy Sixth',
    'effects' => array(
      35 => array(
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
        'weight' => '1',
      ),
      36 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '140',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: pharmacy_square_half.
  $styles['pharmacy_square_half'] = array(
    'name' => 'pharmacy_square_half',
    'label' => 'Pharmacy Square Half',
    'effects' => array(
      61 => array(
        'label' => 'Manual Crop: Reuse cropped style',
        'help' => 'Reuse a crop selection from another Manual Crop enabled image style.',
        'effect callback' => 'manualcrop_reuse_effect',
        'form callback' => 'manualcrop_reuse_form',
        'summary theme' => 'manualcrop_reuse_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'square_crop',
        ),
        'weight' => '-10',
      ),
      36 => array(
        'label' => 'Dimesionless Square Crop',
        'help' => 'Crops excess portions of an image to make the longer side the same as the smaller.  Uses Smartcrop if available',
        'effect callback' => 'square_crop_crop_effect',
        'module' => 'square_crop',
        'name' => 'square_crop',
        'data' => array(),
        'weight' => '-9',
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
          'width' => '460',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '-8',
      ),
    ),
  );

  // Exported image style: pharmacy_square_quarter.
  $styles['pharmacy_square_quarter'] = array(
    'name' => 'pharmacy_square_quarter',
    'label' => 'Pharmacy Square Quarter',
    'effects' => array(
      66 => array(
        'label' => 'Manual Crop: Reuse cropped style',
        'help' => 'Reuse a crop selection from another Manual Crop enabled image style.',
        'effect callback' => 'manualcrop_reuse_effect',
        'form callback' => 'manualcrop_reuse_form',
        'summary theme' => 'manualcrop_reuse_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'square_crop',
        ),
        'weight' => '-10',
      ),
      71 => array(
        'label' => 'Dimesionless Square Crop',
        'help' => 'Crops excess portions of an image to make the longer side the same as the smaller.  Uses Smartcrop if available',
        'effect callback' => 'square_crop_crop_effect',
        'module' => 'square_crop',
        'name' => 'square_crop',
        'data' => array(),
        'weight' => '-9',
      ),
      76 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '220',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '-8',
      ),
    ),
  );

  // Exported image style: pharmacy_square_sixth.
  $styles['pharmacy_square_sixth'] = array(
    'name' => 'pharmacy_square_sixth',
    'label' => 'Pharmacy Square Sixth',
    'effects' => array(
      81 => array(
        'label' => 'Manual Crop: Reuse cropped style',
        'help' => 'Reuse a crop selection from another Manual Crop enabled image style.',
        'effect callback' => 'manualcrop_reuse_effect',
        'form callback' => 'manualcrop_reuse_form',
        'summary theme' => 'manualcrop_reuse_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'square_crop',
        ),
        'weight' => '-10',
      ),
      86 => array(
        'label' => 'Dimesionless Square Crop',
        'help' => 'Crops excess portions of an image to make the longer side the same as the smaller.  Uses Smartcrop if available',
        'effect callback' => 'square_crop_crop_effect',
        'module' => 'square_crop',
        'name' => 'square_crop',
        'data' => array(),
        'weight' => '-9',
      ),
      91 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '140',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '-8',
      ),
    ),
  );

  // Exported image style: pharmacy_square_third.
  $styles['pharmacy_square_third'] = array(
    'name' => 'pharmacy_square_third',
    'label' => 'Pharmacy Square Third',
    'effects' => array(
      96 => array(
        'label' => 'Manual Crop: Reuse cropped style',
        'help' => 'Reuse a crop selection from another Manual Crop enabled image style.',
        'effect callback' => 'manualcrop_reuse_effect',
        'form callback' => 'manualcrop_reuse_form',
        'summary theme' => 'manualcrop_reuse_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'square_crop',
        ),
        'weight' => '-10',
      ),
      101 => array(
        'label' => 'Dimesionless Square Crop',
        'help' => 'Crops excess portions of an image to make the longer side the same as the smaller.  Uses Smartcrop if available',
        'effect callback' => 'square_crop_crop_effect',
        'module' => 'square_crop',
        'name' => 'square_crop',
        'data' => array(),
        'weight' => '-9',
      ),
      106 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '300',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '-8',
      ),
    ),
  );

  // Exported image style: pharmacy_square_thumbnail.
  $styles['pharmacy_square_thumbnail'] = array(
    'name' => 'pharmacy_square_thumbnail',
    'label' => 'Pharmacy Square Thumbnail',
    'effects' => array(
      111 => array(
        'label' => 'Manual Crop: Reuse cropped style',
        'help' => 'Reuse a crop selection from another Manual Crop enabled image style.',
        'effect callback' => 'manualcrop_reuse_effect',
        'form callback' => 'manualcrop_reuse_form',
        'summary theme' => 'manualcrop_reuse_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'square_crop',
        ),
        'weight' => '-10',
      ),
      116 => array(
        'label' => 'Dimesionless Square Crop',
        'help' => 'Crops excess portions of an image to make the longer side the same as the smaller.  Uses Smartcrop if available',
        'effect callback' => 'square_crop_crop_effect',
        'module' => 'square_crop',
        'name' => 'square_crop',
        'data' => array(),
        'weight' => '-9',
      ),
      121 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '90',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '-8',
      ),
    ),
  );

  // Exported image style: pharmacy_third.
  $styles['pharmacy_third'] = array(
    'name' => 'pharmacy_third',
    'label' => 'Pharmacy Third',
    'effects' => array(
      37 => array(
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
        'weight' => '1',
      ),
      38 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '300',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: pharmacy_three_quarters.
  $styles['pharmacy_three_quarters'] = array(
    'name' => 'pharmacy_three_quarters',
    'label' => 'Pharmacy Three Quarters',
    'effects' => array(
      132 => array(
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
      133 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '705',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: pharmacy_thumbnail.
  $styles['pharmacy_thumbnail'] = array(
    'name' => 'pharmacy_thumbnail',
    'label' => 'Pharmacy Thumbnail',
    'effects' => array(
      58 => array(
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
      59 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '90',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: square_preview.
  $styles['square_preview'] = array(
    'name' => 'square_preview',
    'label' => 'square_preview',
    'effects' => array(
      41 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '150',
          'height' => '150',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: square_thumbnail_small.
  $styles['square_thumbnail_small'] = array(
    'name' => 'square_thumbnail_small',
    'label' => 'square_thumbnail_small',
    'effects' => array(
      51 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '100',
          'height' => '100',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: subtle_spotlight.
  $styles['subtle_spotlight'] = array(
    'name' => 'subtle_spotlight',
    'label' => 'subtle_spotlight',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '450',
          'height' => '332',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
