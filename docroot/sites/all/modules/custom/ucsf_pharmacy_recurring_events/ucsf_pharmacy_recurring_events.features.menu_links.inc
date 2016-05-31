<?php
/**
 * @file
 * ucsf_pharmacy_recurring_events.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ucsf_pharmacy_recurring_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/content/recurring-event-review
  $menu_links['management:admin/content/recurring-event-review'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/recurring-event-review',
    'router_path' => 'admin/content/recurring-event-review',
    'link_title' => 'Recurring Events review',
    'options' => array(
      'attributes' => array(
        'title' => 'Review all Recurring Event items',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Recurring Events review');


  return $menu_links;
}
