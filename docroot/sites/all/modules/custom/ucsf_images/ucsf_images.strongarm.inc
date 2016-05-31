<?php
/**
 * @file
 * ucsf_images.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ucsf_images_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'media_link' => array(
        'custom_settings' => FALSE,
      ),
      'media_original' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'media_full' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'test' => array(
        'custom_settings' => TRUE,
      ),
      'half' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'syndication_uri' => array(
        'custom_settings' => FALSE,
      ),
      'wysiwyg' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'fourth' => array(
        'custom_settings' => TRUE,
      ),
      'quarter' => array(
        'custom_settings' => TRUE,
      ),
      'sixth' => array(
        'custom_settings' => TRUE,
      ),
      'third' => array(
        'custom_settings' => TRUE,
      ),
      'original_cropped' => array(
        'custom_settings' => TRUE,
      ),
      'original' => array(
        'custom_settings' => TRUE,
      ),
      'square_half' => array(
        'custom_settings' => TRUE,
      ),
      'square_quarter' => array(
        'custom_settings' => TRUE,
      ),
      'square_sixth' => array(
        'custom_settings' => TRUE,
      ),
      'square_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'square_third' => array(
        'custom_settings' => TRUE,
      ),
      'three_quarters' => array(
        'custom_settings' => TRUE,
      ),
      'raw_square' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '0',
        ),
        'preview' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'media_link' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'media_original' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'test' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'half' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'featured' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'thumbnail' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'syndication_uri' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'fourth' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'quarter' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'sixth' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'third' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'media_full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'original_cropped' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'original' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'square_half' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'square_quarter' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'square_sixth' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'square_thumbnail' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'wysiwyg' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'square_third' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'three_quarters' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'raw_square' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'media_link' => array(
        'custom_settings' => FALSE,
      ),
      'media_original' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'media_full' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'half' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'syndication_uri' => array(
        'custom_settings' => FALSE,
      ),
      'wysiwyg' => array(
        'custom_settings' => TRUE,
      ),
      'quarter' => array(
        'custom_settings' => TRUE,
      ),
      'sixth' => array(
        'custom_settings' => TRUE,
      ),
      'third' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'square_half' => array(
        'custom_settings' => TRUE,
      ),
      'square_quarter' => array(
        'custom_settings' => TRUE,
      ),
      'square_sixth' => array(
        'custom_settings' => TRUE,
      ),
      'square_third' => array(
        'custom_settings' => TRUE,
      ),
      'square_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'original_cropped' => array(
        'custom_settings' => FALSE,
      ),
      'three_quarters' => array(
        'custom_settings' => TRUE,
      ),
      'raw_square' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '0',
        ),
        'preview' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'media_original' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'featured' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'thumbnail' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'syndication_uri' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'half' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'media_full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'quarter' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'sixth' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'third' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'square_half' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'square_quarter' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'square_sixth' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'square_third' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'square_thumbnail' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'three_quarters' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_image_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_file_wysiwyg_view_mode_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_image_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'default' => 'default',
    'featured' => 'featured',
    'teaser' => 'teaser',
    'full' => 'full',
    'preview' => 'preview',
    'rss' => 'rss',
    'search_index' => 'search_index',
    'search_result' => 'search_result',
    'media_link' => 'media_link',
    'wysiwyg' => 'wysiwyg',
    'token' => 'token',
    'media_full' => 0,
    'half' => 0,
    'original_cropped' => 0,
    'media_original' => 0,
    'quarter' => 0,
    'three_quarters' => 0,
    'sixth' => 0,
    'raw_square' => 0,
    'square_half' => 0,
    'square_quarter' => 0,
    'square_sixth' => 0,
    'square_third' => 0,
    'square_thumbnail' => 0,
    'third' => 0,
    'thumbnail' => 0,
  );
  $export['media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_video_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_file_wysiwyg_view_mode_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_video_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'default' => 'default',
    'original_cropped' => 'original_cropped',
    'media_original' => 'media_original',
    'raw_square' => 'raw_square',
    'square_half' => 'square_half',
    'square_quarter' => 'square_quarter',
    'square_sixth' => 'square_sixth',
    'square_third' => 'square_third',
    'square_thumbnail' => 'square_thumbnail',
    'featured' => 'featured',
    'teaser' => 'teaser',
    'full' => 'full',
    'preview' => 'preview',
    'rss' => 'rss',
    'search_index' => 'search_index',
    'search_result' => 'search_result',
    'media_link' => 'media_link',
    'wysiwyg' => 'wysiwyg',
    'token' => 'token',
    'media_full' => 0,
    'half' => 0,
    'quarter' => 0,
    'three_quarters' => 0,
    'sixth' => 0,
    'third' => 0,
    'thumbnail' => 0,
  );
  $export['media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_image_pattern';
  $strongarm->value = '';
  $export['pathauto_file_image_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_pattern';
  $strongarm->value = '';
  $export['pathauto_file_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_video_pattern';
  $strongarm->value = '';
  $export['pathauto_file_video_pattern'] = $strongarm;

  return $export;
}
