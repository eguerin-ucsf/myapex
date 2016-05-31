<?php
/**
 * @file
 * ucsf_person_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucsf_person_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ucsf_person_content_type_node_info() {
  $items = array(
    'ucsf_person' => array(
      'name' => t('UCSF Person'),
      'base' => 'node_content',
      'description' => t('A person profile specific to UCSF, fields automatically update from EDS and Profile.'),
      'has_title' => '1',
      'title_label' => t('Full name'),
      'help' => '',
    ),
  );
  return $items;
}
