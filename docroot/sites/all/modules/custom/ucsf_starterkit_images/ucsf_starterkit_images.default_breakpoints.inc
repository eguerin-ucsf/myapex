<?php
/**
 * @file
 * ucsf_starterkit_images.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function ucsf_starterkit_images_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.full';
  $breakpoint->name = 'Full';
  $breakpoint->breakpoint = '(min-width: 536px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 6;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.full'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.half';
  $breakpoint->name = 'Half';
  $breakpoint->breakpoint = '(min-width: 834px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 11;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.half'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.half_is_three_quarters';
  $breakpoint->name = 'Half is Three Quarters';
  $breakpoint->breakpoint = '(min-width: 485px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 5;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.half_is_three_quarters'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.mobile';
  $breakpoint->name = 'Mobile';
  $breakpoint->breakpoint = '(min-width: 0px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.mobile'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.mobile_quarter_from_third';
  $breakpoint->name = 'Mobile Quarter From Third';
  $breakpoint->breakpoint = '(min-width: 187px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.mobile_quarter_from_third'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.mobile_third_is_full';
  $breakpoint->name = 'Mobile Third is Full';
  $breakpoint->breakpoint = '(min-width: 277px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.mobile_third_is_full'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.mobile_to_regular';
  $breakpoint->name = 'Mobile to Regular';
  $breakpoint->breakpoint = '(min-width: 380px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.mobile_to_regular'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.quarter';
  $breakpoint->name = 'Quarter';
  $breakpoint->breakpoint = '(min-width: 830px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 10;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.quarter'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.quarter_from_third';
  $breakpoint->name = 'Quarter From Third';
  $breakpoint->breakpoint = '(min-width: 604px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 7;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.quarter_from_third'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.quarter_from_third_from_half';
  $breakpoint->name = 'Quarter From Third From Half';
  $breakpoint->breakpoint = '(min-width: 410px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 4;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.quarter_from_third_from_half'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.third_';
  $breakpoint->name = 'Third ';
  $breakpoint->breakpoint = '(min-width: 896px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 12;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.third_'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.third_from_half';
  $breakpoint->name = 'Third From Half';
  $breakpoint->breakpoint = '(min-width: 608px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 8;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.third_from_half'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.three_quarters';
  $breakpoint->name = 'Three Quarters';
  $breakpoint->breakpoint = '(min-width: 714px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 9;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.three_quarters'] = $breakpoint;

  return $export;
}
