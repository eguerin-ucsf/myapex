<?php
/**
 * @file
 * ucsf_starterkit_images.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function ucsf_starterkit_images_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.user.mobile';
  $breakpoints[] = 'custom.user.mobile_quarter_from_third';
  $breakpoints[] = 'custom.user.mobile_third_is_full';
  $breakpoints[] = 'custom.user.mobile_to_regular';
  $breakpoints[] = 'custom.user.full';

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
  $breakpoints[] = 'custom.user.mobile_quarter_from_third';
  $breakpoints[] = 'custom.user.mobile_third_is_full';
  $breakpoints[] = 'custom.user.mobile_to_regular';
  $breakpoints[] = 'custom.user.quarter_from_third_from_half';
  $breakpoints[] = 'custom.user.third_from_half';
  $breakpoints[] = 'custom.user.half';

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
  $breakpoints[] = 'custom.user.mobile_third_is_full';
  $breakpoints[] = 'custom.user.mobile_to_regular';
  $breakpoints[] = 'custom.user.quarter';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_quarter';
  $breakpoint_group->name = 'Media Quarter';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_quarter'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.user.mobile';
  $breakpoints[] = 'custom.user.mobile_quarter_from_third';
  $breakpoints[] = 'custom.user.mobile_third_is_full';
  $breakpoints[] = 'custom.user.mobile_to_regular';
  $breakpoints[] = 'custom.user.quarter_from_third_from_half';
  $breakpoints[] = 'custom.user.third_from_half';
  $breakpoints[] = 'custom.user.half';

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
  $breakpoints[] = 'custom.user.mobile_third_is_full';
  $breakpoints[] = 'custom.user.mobile_to_regular';
  $breakpoints[] = 'custom.user.quarter';

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
  $breakpoints[] = 'custom.user.mobile_quarter_from_third';
  $breakpoints[] = 'custom.user.mobile_third_is_full';
  $breakpoints[] = 'custom.user.mobile_to_regular';
  $breakpoints[] = 'custom.user.quarter_from_third';
  $breakpoints[] = 'custom.user.third_';

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
  $breakpoints[] = 'custom.user.mobile_quarter_from_third';
  $breakpoints[] = 'custom.user.mobile_third_is_full';
  $breakpoints[] = 'custom.user.mobile_to_regular';
  $breakpoints[] = 'custom.user.quarter_from_third';
  $breakpoints[] = 'custom.user.third_';

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

  return $export;
}
