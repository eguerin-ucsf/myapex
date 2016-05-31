<?php
/**
 * @file
 * ucsf_pharmacy_funding_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucsf_pharmacy_funding_section_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ucsf_pharmacy_funding_section_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ucsf_pharmacy_funding_section_node_info() {
  $items = array(
    'funding' => array(
      'name' => t('Funding'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
