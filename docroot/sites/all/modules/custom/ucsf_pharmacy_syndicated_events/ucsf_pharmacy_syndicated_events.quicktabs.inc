<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_events.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function ucsf_pharmacy_syndicated_events_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'events';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Events';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'syndicated_events',
      'display' => 'all_upcoming_events',
      'args' => '',
      'title' => 'Upcoming',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'syndicated_events',
      'display' => 'all_past_events',
      'args' => '',
      'title' => 'Past',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('Past');
  t('Upcoming');

  $export['events'] = $quicktabs;

  return $export;
}
