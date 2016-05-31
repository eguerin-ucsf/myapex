<?php
/**
 * @file
 * ucsf_admin_toolkit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucsf_admin_toolkit_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ucsf_admin_toolkit_views_api() {
  return array("version" => "3.0");
}
