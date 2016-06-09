<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_coverage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ucsf_pharmacy_syndicated_coverage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_syndicated_media_coverage';
  $strongarm->value = 0;
  $export['diff_enable_revisions_page_node_syndicated_media_coverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_syndicated_media_coverage';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_syndicated_media_coverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_syndicated_media_coverage';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_syndicated_media_coverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__syndicated_media_coverage';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'search_index' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__syndicated_media_coverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'internal_nodes_action_syndicated_media_coverage';
  $strongarm->value = '301';
  $export['internal_nodes_action_syndicated_media_coverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'internal_nodes_nodes_syndicated_media_coverage';
  $strongarm->value = 0;
  $export['internal_nodes_nodes_syndicated_media_coverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'internal_nodes_url_syndicated_media_coverage';
  $strongarm->value = '[node:field-article-link:url]';
  $export['internal_nodes_url_syndicated_media_coverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_syndicated_media_coverage';
  $strongarm->value = array();
  $export['menu_options_syndicated_media_coverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_syndicated_media_coverage';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_syndicated_media_coverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_syndicated_media_coverage';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_syndicated_media_coverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_syndicated_media_coverage';
  $strongarm->value = '1';
  $export['node_preview_syndicated_media_coverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_syndicated_media_coverage';
  $strongarm->value = 0;
  $export['node_submitted_syndicated_media_coverage'] = $strongarm;

  return $export;
}
