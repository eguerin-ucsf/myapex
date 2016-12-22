<?php
/**
 * @file
 * myapex_ed_updates.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function myapex_ed_updates_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_provider-updates:node/add/ed-updates.
  $menu_links['navigation_provider-updates:node/add/ed-updates'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ed-updates',
    'router_path' => 'node/add/ed-updates',
    'link_title' => 'Provider Updates',
    'options' => array(
      'identifier' => 'navigation_provider-updates:node/add/ed-updates',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Provider Updates');

  return $menu_links;
}
