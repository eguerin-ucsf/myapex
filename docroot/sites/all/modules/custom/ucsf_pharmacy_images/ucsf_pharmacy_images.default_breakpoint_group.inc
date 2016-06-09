<?php
/**
 * @file
 * ucsf_pharmacy_images.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function ucsf_pharmacy_images_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.user.mobile';
  $breakpoints[] = 'custom.user.mobile_half_to_sixth';
  $breakpoints[] = 'custom.user.mobile_half_to_quarter';
  $breakpoints[] = 'custom.user.mobile_half_to_third';
  $breakpoints[] = 'custom.user.large_min';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_full';
  $breakpoint_group->name = 'Media Full';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_full'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.user.mobile';
  $breakpoints[] = 'custom.user.mobile_half_to_sixth';
  $breakpoints[] = 'custom.user.mobile_half_to_quarter';
  $breakpoints[] = 'custom.user.mobile_half_to_third';
  $breakpoints[] = 'custom.user.large_min';
  $breakpoints[] = 'custom.user.half_to_third';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_half';
  $breakpoint_group->name = 'Media Half';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_half'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.user.mobile';
  $breakpoints[] = 'custom.user.mobile_quarter_to_sixth';
  $breakpoints[] = 'custom.user.large_min';
  $breakpoints[] = 'custom.user.quarter_to_sixth';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_quarter';
  $breakpoint_group->name = 'Media_Quarter';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_quarter'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.user.mobile';
  $breakpoints[] = 'custom.user.mobile_half_to_sixth';
  $breakpoints[] = 'custom.user.mobile_half_to_quarter';
  $breakpoints[] = 'custom.user.mobile_half_to_third';
  $breakpoints[] = 'custom.user.large_min';
  $breakpoints[] = 'custom.user.half_to_third';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_square_half';
  $breakpoint_group->name = 'Media Square Half';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_square_half'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.user.mobile';
  $breakpoints[] = 'custom.user.mobile_quarter_to_sixth';
  $breakpoints[] = 'custom.user.large_min';
  $breakpoints[] = 'custom.user.quarter_to_sixth';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_square_quarter';
  $breakpoint_group->name = 'Media Square Quarter';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_square_quarter'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.user.mobile';
  $breakpoints[] = 'custom.user.mobile_half_to_sixth';
  $breakpoints[] = 'custom.user.mobile_half_to_quarter';
  $breakpoints[] = 'custom.user.mobile_half_to_third';
  $breakpoints[] = 'custom.user.large_min';
  $breakpoints[] = 'custom.user.third_to_quarter';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_square_third';
  $breakpoint_group->name = 'Media Square Third';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_square_third'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.user.mobile';
  $breakpoints[] = 'custom.user.mobile_half_to_sixth';
  $breakpoints[] = 'custom.user.mobile_half_to_quarter';
  $breakpoints[] = 'custom.user.mobile_half_to_third';
  $breakpoints[] = 'custom.user.large_min';
  $breakpoints[] = 'custom.user.third_to_quarter';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_third';
  $breakpoint_group->name = 'Media Third';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_third'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.user.mobile';
  $breakpoints[] = 'custom.user.mobile_half_to_sixth';
  $breakpoints[] = 'custom.user.mobile_half_to_quarter';
  $breakpoints[] = 'custom.user.mobile_quarter_to_sixth';
  $breakpoints[] = 'custom.user.mobile_half_to_third';
  $breakpoints[] = 'custom.user.large_min';
  $breakpoints[] = 'custom.user.three_quarters';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_three_quarters';
  $breakpoint_group->name = 'Media Three Quarters';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_three_quarters'] = $breakpoint_group;

  return $export;
}
