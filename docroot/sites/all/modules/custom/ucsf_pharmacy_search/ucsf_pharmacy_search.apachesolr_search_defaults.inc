<?php
/**
 * @file
 * ucsf_pharmacy_search.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function ucsf_pharmacy_search_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'all_5_pharmacy_sites';
  $searcher->label = 'All 5 Pharmacy Sites';
  $searcher->description = '';
  $searcher->search_path = 'search/all-pharmacy';
  $searcher->page_title = 'All Pharmacy Sites';
  $searcher->env_id = 'acquia_search_server_1';
  $searcher->settings = array(
    'fq' => array(
      0 => 'bundle:(*:* AND !syndicated_news AND !syndicated_media_coverage AND !syndicated_person AND !syndicated_event)',
      1 => 'hash:(2xnj6r OR f6z13t OR qhxdtv OR aqavoc OR in4y9y)',
    ),
    'apachesolr_search_custom_enable' => 1,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_per_page' => 10,
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_allow_user_input' => 0,
    'apachesolr_search_browse' => 'browse',
  );
  $export['all_5_pharmacy_sites'] = $searcher;

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'core_search';
  $searcher->label = 'Core Search';
  $searcher->description = 'Core Search';
  $searcher->search_path = 'search/site';
  $searcher->page_title = 'Site';
  $searcher->env_id = 'acquia_search_server_1';
  $searcher->settings = array(
    'fq' => array(),
    'apachesolr_search_custom_enable' => 0,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_per_page' => 10,
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_search_box' => TRUE,
    'apachesolr_search_allow_user_input' => 0,
    'apachesolr_search_browse' => 'browse',
  );
  $export['core_search'] = $searcher;

  return $export;
}
