<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_coverage.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ucsf_pharmacy_syndicated_coverage_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'syndicated_media_coverage';
  $feeds_importer->config = array(
    'name' => 'Syndicated Media Coverage',
    'description' => 'Imports media coverage items from the UCSF School of Pharmacy site',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcherTimestamp',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'timestamp_query' => 'changed',
        'timestamp_format' => 'Y-m-d+H:i:s',
        'timestamp_adjustment' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'nid',
          'xpathparser:1' => 'title',
          'xpathparser:3' => 'item_published',
          'xpathparser:4' => 'item_post_date',
          'xpathparser:5' => 'field_keywords',
          'xpathparser:6' => 'field_category',
          'xpathparser:8' => 'field_article_source',
          'xpathparser:9' => 'field_original_title',
          'xpathparser:10' => 'field_article_date',
          'xpathparser:11' => 'field_related_profiles_text',
          'xpathparser:12' => 'field_article_link',
          'xpathparser:13' => 'unit_sort_codes',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
        ),
        'context' => '//result/item',
        'exp' => array(
          'errors' => 0,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'status',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:4',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_keywords_media',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_category_media',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_article_source',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_original_title',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_article_date:start',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_related_profile_text',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_article_link:url',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_smedia_syndication_info',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'webedit',
        'skip_hash_check' => 1,
        'bundle' => 'syndicated_media_coverage',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['syndicated_media_coverage'] = $feeds_importer;

  return $export;
}
