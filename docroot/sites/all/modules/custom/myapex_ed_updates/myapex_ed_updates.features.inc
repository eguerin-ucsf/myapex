<?php
/**
 * @file
 * myapex_ed_updates.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myapex_ed_updates_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function myapex_ed_updates_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function myapex_ed_updates_node_info() {
  $items = array(
    'ed_updates' => array(
      'name' => t('Provider Updates'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Provider Updates'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
