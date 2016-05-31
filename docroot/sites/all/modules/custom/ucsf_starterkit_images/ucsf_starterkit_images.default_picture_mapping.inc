<?php
/**
 * @file
 * ucsf_starterkit_images.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function ucsf_starterkit_images_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'media_full';
  $picture_mapping->breakpoint_group = 'media_full';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => 'starter_kit_sixth',
    ),
    'custom.user.mobile_quarter_from_third' => array(
      '1x' => 'starter_kit_quarter',
    ),
    'custom.user.mobile_third_is_full' => array(
      '1x' => 'starter_kit_third',
    ),
    'custom.user.mobile_to_regular' => array(
      '1x' => 'starter_kit_half',
    ),
    'custom.user.full' => array(
      '1x' => 'starter_kit_full',
    ),
  );
  $export['media_full'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'media_half';
  $picture_mapping->breakpoint_group = 'media_half';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => 'starter_kit_sixth',
    ),
    'custom.user.mobile_quarter_from_third' => array(
      '1x' => 'starter_kit_quarter',
    ),
    'custom.user.mobile_third_is_full' => array(
      '1x' => 'starter_kit_third',
    ),
    'custom.user.mobile_to_regular' => array(
      '1x' => 'starter_kit_sixth',
    ),
    'custom.user.quarter_from_third_from_half' => array(
      '1x' => 'starter_kit_quarter',
    ),
    'custom.user.third_from_half' => array(
      '1x' => 'starter_kit_third',
    ),
    'custom.user.half' => array(
      '1x' => 'starter_kit_half',
    ),
  );
  $export['media_half'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'media_quarter';
  $picture_mapping->breakpoint_group = 'media_quarter';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => 'starter_kit_sixth',
    ),
    'custom.user.mobile_third_is_full' => array(
      '1x' => 'starter_kit_quarter',
    ),
    'custom.user.mobile_to_regular' => array(
      '1x' => 'starter_kit_sixth',
    ),
    'custom.user.quarter' => array(
      '1x' => 'starter_kit_quarter',
    ),
  );
  $export['media_quarter'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'media_square_half';
  $picture_mapping->breakpoint_group = 'media_square_half';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => 'starterkit_square_sixth',
    ),
    'custom.user.mobile_quarter_from_third' => array(
      '1x' => 'starterkit_square_quarter',
    ),
    'custom.user.mobile_third_is_full' => array(
      '1x' => 'starterkit_square_third',
    ),
    'custom.user.mobile_to_regular' => array(
      '1x' => 'starterkit_square_sixth',
    ),
    'custom.user.quarter_from_third_from_half' => array(
      '1x' => 'starterkit_square_quarter',
    ),
    'custom.user.third_from_half' => array(
      '1x' => 'starterkit_square_third',
    ),
    'custom.user.half' => array(
      '1x' => 'starterkit_square_half',
    ),
  );
  $export['media_square_half'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'media_square_quarter';
  $picture_mapping->breakpoint_group = 'media_square_quarter';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => 'starterkit_square_sixth',
    ),
    'custom.user.mobile_third_is_full' => array(
      '1x' => 'starterkit_square_quarter',
    ),
    'custom.user.mobile_to_regular' => array(
      '1x' => 'starterkit_square_sixth',
    ),
    'custom.user.quarter' => array(
      '1x' => 'starterkit_square_quarter',
    ),
  );
  $export['media_square_quarter'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'media_square_third';
  $picture_mapping->breakpoint_group = 'media_square_third';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => 'starterkit_square_sixth',
    ),
    'custom.user.mobile_quarter_from_third' => array(
      '1x' => 'starterkit_square_quarter',
    ),
    'custom.user.mobile_third_is_full' => array(
      '1x' => 'starterkit_square_third',
    ),
    'custom.user.mobile_to_regular' => array(
      '1x' => 'starterkit_square_sixth',
    ),
    'custom.user.quarter_from_third' => array(
      '1x' => 'starterkit_square_quarter',
    ),
    'custom.user.third_' => array(
      '1x' => 'starterkit_square_third',
    ),
  );
  $export['media_square_third'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'media_third';
  $picture_mapping->breakpoint_group = 'media_third';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => 'starter_kit_sixth',
    ),
    'custom.user.mobile_quarter_from_third' => array(
      '1x' => 'starter_kit_quarter',
    ),
    'custom.user.mobile_third_is_full' => array(
      '1x' => 'starter_kit_third',
    ),
    'custom.user.mobile_to_regular' => array(
      '1x' => 'starter_kit_sixth',
    ),
    'custom.user.quarter_from_third' => array(
      '1x' => 'starter_kit_quarter',
    ),
    'custom.user.third_' => array(
      '1x' => 'starter_kit_third',
    ),
  );
  $export['media_third'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'media_three_quarters';
  $picture_mapping->breakpoint_group = 'media_three_quarters';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => 'starter_kit_sixth',
    ),
    'custom.user.mobile_quarter_from_third' => array(
      '1x' => 'starter_kit_quarter',
    ),
    'custom.user.mobile_third_is_full' => array(
      '1x' => 'starter_kit_third',
    ),
    'custom.user.mobile_to_regular' => array(
      '1x' => 'starter_kit_third',
    ),
    'custom.user.half_is_three_quarters' => array(
      '1x' => 'starter_kit_half',
    ),
    'custom.user.full' => array(
      '1x' => 'starter_kit_full',
    ),
    'custom.user.three_quarters' => array(
      '1x' => 'starter_kit_three_quarters',
    ),
  );
  $export['media_three_quarters'] = $picture_mapping;

  return $export;
}
