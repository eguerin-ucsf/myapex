<?php
/**
 * @file
 * ucsf_person_profiles_extended.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucsf_person_profiles_extended_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
