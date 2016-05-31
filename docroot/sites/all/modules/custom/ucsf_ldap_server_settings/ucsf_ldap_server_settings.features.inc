<?php
/**
 * @file
 * ucsf_ldap_server_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucsf_ldap_server_settings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ldap_servers" && $api == "ldap_servers") {
    return array("version" => "1");
  }
}
