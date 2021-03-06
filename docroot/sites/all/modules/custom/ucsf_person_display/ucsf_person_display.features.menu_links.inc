<?php
/**
 * @file
 * ucsf_person_display.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ucsf_person_display_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:people
  $menu_links['main-menu:people'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people',
    'router_path' => 'people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'People',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('People');


  return $menu_links;
}
