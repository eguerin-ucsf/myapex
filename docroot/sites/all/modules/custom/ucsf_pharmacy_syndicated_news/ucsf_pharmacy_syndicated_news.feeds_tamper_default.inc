<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_news.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ucsf_pharmacy_syndicated_news_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_10-explode';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:10';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['syndicated_news-xpathparser_10-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_10-html_entity_decode';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:10';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndicated_news-xpathparser_10-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_12-html_entity_decode';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:12';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndicated_news-xpathparser_12-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_13-find_replace';
  $feeds_tamper->importer = 'syndicated_news';
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
  $feeds_tamper->description = 'Find replace';
  $export['syndicated_news-xpathparser_13-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_13-find_replace2';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:13';
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
  $feeds_tamper->description = 'Find replace';
  $export['syndicated_news-xpathparser_13-find_replace2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_16-find_replace_regex';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:16';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/^.*src.?\\"/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['syndicated_news-xpathparser_16-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_16-find_replace_regex2';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:16';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/\\".*/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['syndicated_news-xpathparser_16-find_replace_regex2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_17-find_replace_regex';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:17';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/\\?.*/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace REGEX - IMG End';
  $export['syndicated_news-xpathparser_17-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_17-find_replace_regex_2';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:17';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/\\<h2.*h2\\>/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace REGEX - Hidden title';
  $export['syndicated_news-xpathparser_17-find_replace_regex_2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_17-find_replace_regex_3';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:17';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/.*?https?\\:\\/\\/[\\w\\.\\-]*\\//',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace REGEX - IMG Start';
  $export['syndicated_news-xpathparser_17-find_replace_regex_3'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_17-trim';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:17';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['syndicated_news-xpathparser_17-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_2-html_entity_decode';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndicated_news-xpathparser_2-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_20-html_entity_decode';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:20';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndicated_news-xpathparser_20-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_3-html_entity_decode';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndicated_news-xpathparser_3-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_4-html_entity_decode';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndicated_news-xpathparser_4-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_5-find_replace';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:5';
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
  $feeds_tamper->weight = 24;
  $feeds_tamper->description = 'Find replace public';
  $export['syndicated_news-xpathparser_5-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_5-find_replace_regex';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/(youtube|vimeo)\\:\\/\\/v\\/(.*)/',
    'replace' => 'sites/pharmacy.ucsf.edu/files/styles/pharmacy_square_third/public/media-\\1/\\2.jpg',
    'limit' => '1',
    'real_limit' => '1',
  );
  $feeds_tamper->weight = 23;
  $feeds_tamper->description = 'Find replace REGEX youtube|vimeo';
  $export['syndicated_news-xpathparser_5-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_9-explode';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['syndicated_news-xpathparser_9-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndicated_news-xpathparser_9-html_entity_decode';
  $feeds_tamper->importer = 'syndicated_news';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndicated_news-xpathparser_9-html_entity_decode'] = $feeds_tamper;

  return $export;
}
