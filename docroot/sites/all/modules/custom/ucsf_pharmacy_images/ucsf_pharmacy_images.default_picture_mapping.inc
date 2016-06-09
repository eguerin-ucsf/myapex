<?php
/**
 * @file
 * ucsf_pharmacy_images.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function ucsf_pharmacy_images_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'media_full';
  $picture_mapping->breakpoint_group = 'media_full';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => 'pharmacy_sixth',
    ),
    'custom.user.mobile_half_to_sixth' => array(
      '1x' => 'pharmacy_quarter',
    ),
    'custom.user.mobile_half_to_quarter' => array(
      '1x' => 'pharmacy_third',
    ),
    'custom.user.mobile_half_to_third' => array(
      '1x' => 'pharmacy_half',
    ),
    'custom.user.large_min' => array(
      '1x' => 'pharmacy_full',
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
      '1x' => 'pharmacy_sixth',
    ),
    'custom.user.mobile_half_to_sixth' => array(
      '1x' => 'pharmacy_quarter',
    ),
    'custom.user.mobile_half_to_quarter' => array(
      '1x' => 'pharmacy_third',
    ),
    'custom.user.mobile_half_to_third' => array(
      '1x' => 'pharmacy_half',
    ),
    'custom.user.large_min' => array(
      '1x' => 'pharmacy_third',
    ),
    'custom.user.half_to_third' => array(
      '1x' => 'pharmacy_half',
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
      '1x' => 'pharmacy_sixth',
    ),
    'custom.user.mobile_quarter_to_sixth' => array(
      '1x' => 'pharmacy_quarter',
    ),
    'custom.user.large_min' => array(
      '1x' => 'pharmacy_sixth',
    ),
    'custom.user.quarter_to_sixth' => array(
      '1x' => 'pharmacy_quarter',
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
      '1x' => 'pharmacy_square_sixth',
    ),
    'custom.user.mobile_half_to_sixth' => array(
      '1x' => 'pharmacy_square_quarter',
    ),
    'custom.user.mobile_half_to_quarter' => array(
      '1x' => 'pharmacy_square_third',
    ),
    'custom.user.mobile_half_to_third' => array(
      '1x' => 'pharmacy_square_half',
    ),
    'custom.user.large_min' => array(
      '1x' => 'pharmacy_square_third',
    ),
    'custom.user.half_to_third' => array(
      '1x' => 'pharmacy_square_half',
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
      '1x' => 'pharmacy_square_sixth',
    ),
    'custom.user.mobile_quarter_to_sixth' => array(
      '1x' => 'pharmacy_square_quarter',
    ),
    'custom.user.large_min' => array(
      '1x' => 'pharmacy_square_sixth',
    ),
    'custom.user.quarter_to_sixth' => array(
      '1x' => 'pharmacy_square_quarter',
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
      '1x' => 'pharmacy_square_sixth',
    ),
    'custom.user.mobile_half_to_sixth' => array(
      '1x' => 'pharmacy_square_quarter',
    ),
    'custom.user.mobile_half_to_quarter' => array(
      '1x' => 'pharmacy_square_third',
    ),
    'custom.user.mobile_half_to_third' => array(
      '1x' => 'pharmacy_square_half',
    ),
    'custom.user.large_min' => array(
      '1x' => 'pharmacy_square_quarter',
    ),
    'custom.user.third_to_quarter' => array(
      '1x' => 'pharmacy_square_third',
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
      '1x' => 'pharmacy_sixth',
    ),
    'custom.user.mobile_half_to_sixth' => array(
      '1x' => 'pharmacy_quarter',
    ),
    'custom.user.mobile_half_to_quarter' => array(
      '1x' => 'pharmacy_third',
    ),
    'custom.user.mobile_half_to_third' => array(
      '1x' => 'pharmacy_half',
    ),
    'custom.user.large_min' => array(
      '1x' => 'pharmacy_quarter',
    ),
    'custom.user.third_to_quarter' => array(
      '1x' => 'pharmacy_third',
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
      '1x' => 'pharmacy_sixth',
    ),
    'custom.user.mobile_half_to_sixth' => array(
      '1x' => 'pharmacy_quarter',
    ),
    'custom.user.mobile_half_to_quarter' => array(
      '1x' => 'pharmacy_third',
    ),
    'custom.user.mobile_quarter_to_sixth' => array(
      '1x' => 'pharmacy_third',
    ),
    'custom.user.mobile_half_to_third' => array(
      '1x' => 'pharmacy_half',
    ),
    'custom.user.large_min' => array(
      '1x' => 'pharmacy_half',
    ),
    'custom.user.three_quarters' => array(
      '1x' => 'pharmacy_three_quarters',
    ),
  );
  $export['media_three_quarters'] = $picture_mapping;

  return $export;
}
