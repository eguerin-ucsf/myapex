<?php
/**
 * @file
 * ucsf_acquia_key.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ucsf_acquia_key_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_identifier';
  $strongarm->value = 'DJKV-23854';
  $export['acquia_identifier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_key';
  $strongarm->value = '004a60fe6a59b8a1dbd8cd2ebb0b1c7f';
  $export['acquia_key'] = $strongarm;

  return $export;
}
