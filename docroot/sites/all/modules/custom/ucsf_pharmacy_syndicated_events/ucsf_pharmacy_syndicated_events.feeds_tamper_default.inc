<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_events.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ucsf_pharmacy_syndicated_events_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_events-xpathparser_0-html_entity_decode';
  $feeds_tamper->importer = 'syndicated_events';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndicated_events-xpathparser_0-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_events-xpathparser_13-find_replace_yes';
  $feeds_tamper->importer = 'syndicated_events';
  $feeds_tamper->source = 'xpathparser:13';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'yes',
    'replace' => '1',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace yes';
  $export['syndicated_events-xpathparser_13-find_replace_yes'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_events-xpathparser_17-find_replace_no';
  $feeds_tamper->importer = 'syndicated_events';
  $feeds_tamper->source = 'xpathparser:17';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'no',
    'replace' => '0',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace no';
  $export['syndicated_events-xpathparser_17-find_replace_no'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_events-xpathparser_17-find_replace_yes';
  $feeds_tamper->importer = 'syndicated_events';
  $feeds_tamper->source = 'xpathparser:17';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'yes',
    'replace' => '1',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace yes';
  $export['syndicated_events-xpathparser_17-find_replace_yes'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_events-xpathparser_22-html_entity_decode';
  $feeds_tamper->importer = 'syndicated_events';
  $feeds_tamper->source = 'xpathparser:22';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndicated_events-xpathparser_22-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_events-xpathparser_24-explode';
  $feeds_tamper->importer = 'syndicated_events';
  $feeds_tamper->source = 'xpathparser:24';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ', ',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['syndicated_events-xpathparser_24-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_events-xpathparser_24-html_entity_decode';
  $feeds_tamper->importer = 'syndicated_events';
  $feeds_tamper->source = 'xpathparser:24';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndicated_events-xpathparser_24-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_events-xpathparser_6-find_replace';
  $feeds_tamper->importer = 'syndicated_events';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'public://',
    'replace' => 'sites/pharmacy.ucsf.edu/files/styles/pharmacy_square_third/public/',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace public';
  $export['syndicated_events-xpathparser_6-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_events-xpathparser_6-find_replace_regex';
  $feeds_tamper->importer = 'syndicated_events';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/(youtube|vimeo)\\:\\/\\/v\\/(.*)/',
    'replace' => 'sites/pharmacy.ucsf.edu/files/styles/pharmacy_square_third/public/media-\\1/\\2.jpg',
    'limit' => '1',
    'real_limit' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace REGEX youtube|vimeo';
  $export['syndicated_events-xpathparser_6-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_events-xpathparser_7-html_entity_decode';
  $feeds_tamper->importer = 'syndicated_events';
  $feeds_tamper->source = 'xpathparser:7';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndicated_events-xpathparser_7-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_events-xpathparser_9-html_entity_decode';
  $feeds_tamper->importer = 'syndicated_events';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndicated_events-xpathparser_9-html_entity_decode'] = $feeds_tamper;

  return $export;
}
