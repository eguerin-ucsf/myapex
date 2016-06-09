<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_people.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ucsf_pharmacy_syndicated_people_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'syndicated_people';
  $feeds_importer->config = array(
    'name' => 'Syndicated People',
    'description' => 'Mirror people from the main School of Pharmacy site',
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
          'xpathparser:0' => 'id',
          'xpathparser:1' => 'person_name',
          'xpathparser:2' => 'image_path',
          'xpathparser:3' => 'image_alt',
          'xpathparser:4' => 'image_credit_title',
          'xpathparser:5' => 'image_credit_link',
          'xpathparser:6' => 'primary_department',
          'xpathparser:7' => 'clinical_expertise',
          'xpathparser:8' => 'display_name',
          'xpathparser:9' => 'research_area',
          'xpathparser:10' => 'site_link_title',
          'xpathparser:11' => 'site_link_link',
          'xpathparser:12' => 'working_title',
          'xpathparser:13' => 'published',
          'xpathparser:15' => 'trackback_url',
          'xpathparser:16' => 'relative_path',
          'xpathparser:19' => 'admin_title',
          'xpathparser:20' => 'person_type_extended',
          'xpathparser:21' => 'unit_sort_codes',
          'xpathparser:22' => 'last_name',
          'xpathparser:23' => 'first_name',
          'xpathparser:24' => 'what_i_do',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
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
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
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
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
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
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
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
            'source' => 'xpathparser:2',
            'target' => 'field_person_headshot',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_person_headshot:alt',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_person_image_credit:title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_person_image_credit:url',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_person_primary_department',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_person_clinical_experise',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_person_display_name',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_person_research_area',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_person_site_link:title',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_person_site_link:url',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_person_working_title',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:13',
            'target' => 'status',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_person_trackback_plain',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:16',
            'target' => 'path_alias',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:19',
            'target' => 'field_person_admin_title',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_person_type_text',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:21',
            'target' => 'field_person_department_code',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'xpathparser:22',
            'target' => 'field_person_last_name',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'xpathparser:23',
            'target' => 'field_person_first_name',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'xpathparser:24',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'webedit',
        'skip_hash_check' => 1,
        'bundle' => 'syndicated_person',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['syndicated_people'] = $feeds_importer;

  return $export;
}
