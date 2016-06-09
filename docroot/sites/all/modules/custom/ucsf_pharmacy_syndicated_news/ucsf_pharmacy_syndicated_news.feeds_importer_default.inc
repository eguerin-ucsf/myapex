<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_news.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ucsf_pharmacy_syndicated_news_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'syndicated_news';
  $feeds_importer->config = array(
    'name' => 'Syndicated News',
    'description' => 'Imports news items from the UCSF School of Pharmacy site',
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
          'xpathparser:2' => 'title',
          'xpathparser:3' => 'field_subtitle',
          'xpathparser:4' => 'field_feature_type',
          'xpathparser:5' => 'image_rendered',
          'xpathparser:6' => 'image_field_alt',
          'xpathparser:7' => 'image_field_credit_title',
          'xpathparser:8' => 'field_body',
          'xpathparser:9' => 'field_keywords',
          'xpathparser:10' => 'field_category',
          'xpathparser:11' => 'item_path',
          'xpathparser:12' => 'item_author',
          'xpathparser:13' => 'item_published',
          'xpathparser:14' => 'item_post_date',
          'xpathparser:15' => 'image_field_caption',
          'xpathparser:16' => 'trackback',
          'xpathparser:20' => 'image_field_credit_title',
          'xpathparser:21' => 'image_field_credit_url',
          'xpathparser:22' => 'unit_sort_codes',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:20' => 0,
          'xpathparser:21' => 0,
          'xpathparser:22' => 0,
        ),
        'context' => '//result/item',
        'exp' => array(
          'errors' => 0,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:20' => 0,
            'xpathparser:21' => 0,
            'xpathparser:22' => 0,
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
            'source' => 'xpathparser:2',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_subtitle',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_feature_type',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_featured_image',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_featured_image:alt',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_featured_image:title',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:8',
            'target' => 'body',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_keywords',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          9 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_category',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          10 => array(
            'source' => 'xpathparser:11',
            'target' => 'path_alias',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_author',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          12 => array(
            'source' => 'xpathparser:13',
            'target' => 'status',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:14',
            'target' => 'created',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_featured_image_caption',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:16',
            'target' => 'field_trackback_plain',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_featured_image_credit:title',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:21',
            'target' => 'field_featured_image_credit:url',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:22',
            'target' => 'field_snews_syndication_info',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'webedit',
        'skip_hash_check' => 1,
        'bundle' => 'syndicated_news',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['syndicated_news'] = $feeds_importer;

  return $export;
}
