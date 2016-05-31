<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_events.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ucsf_pharmacy_syndicated_events_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'syndicated_events';
  $feeds_importer->config = array(
    'name' => 'Syndicated Events',
    'description' => '',
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
          'xpathparser:1' => 'nid',
          'xpathparser:0' => 'event_title',
          'xpathparser:2' => 'date_long',
          'xpathparser:3' => 'date_mdy',
          'xpathparser:6' => 'image_path',
          'xpathparser:7' => 'image_alt',
          'xpathparser:8' => 'image_caption',
          'xpathparser:9' => 'image_credit_title',
          'xpathparser:10' => 'image_credit_link',
          'xpathparser:11' => 'event_body',
          'xpathparser:12' => 'url_path',
          'xpathparser:13' => 'event_published',
          'xpathparser:14' => 'unit_sort_codes',
          'xpathparser:16' => 'trackback',
          'xpathparser:17' => 'date_tbd',
          'xpathparser:19' => 'sort_date',
          'xpathparser:20' => 'filter_end_date',
          'xpathparser:21' => 'filter_end_date',
          'xpathparser:22' => 'event_location',
          'xpathparser:23' => 'event_location_url',
          'xpathparser:24' => 'event_audience',
        ),
        'rawXML' => array(
          'xpathparser:1' => 0,
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
          'xpathparser:21' => 0,
          'xpathparser:22' => 0,
          'xpathparser:23' => 0,
          'xpathparser:24' => 0,
        ),
        'context' => '//result/item',
        'exp' => array(
          'errors' => 0,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 0,
            'xpathparser:1' => 0,
            'xpathparser:0' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:19' => 0,
            'xpathparser:20' => 0,
            'xpathparser:21' => 0,
            'xpathparser:22' => 0,
            'xpathparser:23' => 0,
            'xpathparser:24' => 0,
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
            'source' => 'xpathparser:1',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_event_date_long',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_event_date_mdy',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_event_image',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_event_image:alt',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_event_image_caption',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_event_image_credit:title',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_event_image_credit:url',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:11',
            'target' => 'body',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:12',
            'target' => 'path_alias',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:13',
            'target' => 'status',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_event_syndication_info',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:16',
            'target' => 'field_event_trackback_plain',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_event_tbd',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:19',
            'target' => 'field_event_sort_date:start',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_event_filter_date:start',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:21',
            'target' => 'field_event_sort_date:end',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:22',
            'target' => 'field_event_location:title',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'xpathparser:23',
            'target' => 'field_event_location:url',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'xpathparser:24',
            'target' => 'field_event_audience',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'webedit',
        'skip_hash_check' => 1,
        'bundle' => 'syndicated_event',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['syndicated_events'] = $feeds_importer;

  return $export;
}
