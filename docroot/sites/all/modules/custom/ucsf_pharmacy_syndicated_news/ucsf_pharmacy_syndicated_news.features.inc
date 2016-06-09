<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucsf_pharmacy_syndicated_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
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
function ucsf_pharmacy_syndicated_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ucsf_pharmacy_syndicated_news_node_info() {
  $items = array(
    'syndicated_news' => array(
      'name' => t('Syndicated News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
