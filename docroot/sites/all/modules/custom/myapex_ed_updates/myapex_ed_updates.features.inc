<?php
/**
 * @file
 * myapex_ed_updates.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myapex_ed_updates_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
 * Implements hook_views_api().
 */
function myapex_ed_updates_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function myapex_ed_updates_node_info() {
  $items = array(
    'ed_updates' => array(
      'name' => t('ED Updates'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Emergency & CDU Providers: APeX Updates'),
      'help' => '',
    ),
  );
  return $items;
}
