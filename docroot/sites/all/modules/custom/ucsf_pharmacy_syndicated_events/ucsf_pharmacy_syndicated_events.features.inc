<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucsf_pharmacy_syndicated_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
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
function ucsf_pharmacy_syndicated_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ucsf_pharmacy_syndicated_events_node_info() {
  $items = array(
    'recurring_event' => array(
      'name' => t('Recurring Event'),
      'base' => 'node_content',
      'description' => t('Note: all recurring events nodes should link back to a canonical event page using either references or taxo, views, and private nodes...
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'syndicated_event' => array(
      'name' => t('Syndicated Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Event name'),
      'help' => '',
    ),
  );
  return $items;
}
