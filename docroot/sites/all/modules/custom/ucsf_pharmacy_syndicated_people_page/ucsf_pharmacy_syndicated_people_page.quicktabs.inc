<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_people_page.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function ucsf_pharmacy_syndicated_people_page_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'people';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'People';
  $quicktabs->tabs = array(
    0 => array(
      'machine_name' => 'people_faculty',
      'title' => 'Faculty',
      'weight' => '-99',
      'type' => 'qtabs',
    ),
    1 => array(
      'vid' => 'people',
      'display' => 'page_3',
      'args' => '',
      'title' => 'Staff',
      'weight' => '-98',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'people',
      'display' => 'page_5',
      'args' => '',
      'title' => 'Department Leadership',
      'weight' => '-96',
      'type' => 'view',
    ),
    3 => array(
      'nid' => 'alumni',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Alumni',
      'weight' => '-94',
      'type' => 'node',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Alumni');
  t('Department Leadership');
  t('Faculty');
  t('People');
  t('Staff');

  $export['people'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'people_faculty';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Faculty';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'people',
      'display' => 'page_2',
      'args' => '',
      'title' => 'Primary',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'nid' => 'jointfac',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Joint',
      'weight' => '-99',
      'type' => 'node',
    ),
    2 => array(
      'nid' => 'affilfac',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Affiliated',
      'weight' => '-98',
      'type' => 'node',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Affiliated');
  t('Faculty');
  t('Joint');
  t('Primary');

  $export['people_faculty'] = $quicktabs;

  return $export;
}
