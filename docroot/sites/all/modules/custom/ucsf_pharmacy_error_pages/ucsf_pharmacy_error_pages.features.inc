<?php
/**
 * @file
 * ucsf_pharmacy_error_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucsf_pharmacy_error_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
