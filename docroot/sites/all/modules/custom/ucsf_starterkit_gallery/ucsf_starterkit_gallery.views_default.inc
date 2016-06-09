<?php
/**
 * @file
 * ucsf_starterkit_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ucsf_starterkit_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: gallery header */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['ui_name'] = 'gallery header';
  $handler->display->display_options['header']['area_text_custom']['content'] = '[body]';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  /* Footer: gallery footer */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['ui_name'] = 'gallery footer';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '[field_gallery_footer]';
  $handler->display->display_options['footer']['area_text_custom']['tokenize'] = TRUE;
  /* Relationship: Content: Images (field_gallery_image:fid) */
  $handler->display->display_options['relationships']['field_gallery_image_fid']['id'] = 'field_gallery_image_fid';
  $handler->display->display_options['relationships']['field_gallery_image_fid']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['relationships']['field_gallery_image_fid']['field'] = 'field_gallery_image_fid';
  $handler->display->display_options['relationships']['field_gallery_image_fid']['required'] = TRUE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: File: Alt text */
  $handler->display->display_options['fields']['field_file_image_alt_text']['id'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['table'] = 'field_data_field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['field'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['relationship'] = 'field_gallery_image_fid';
  $handler->display->display_options['fields']['field_file_image_alt_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_alt_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_alt_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_alt_text']['empty'] = 'image';
  /* Field: File: Description */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['relationship'] = 'field_gallery_image_fid';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['text'] = '<div class="gallery-caption" id="gallery-caption-[counter]">[field_image_caption-value]</div>';
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['element_wrapper_class'] = 'gallery-hidden';
  $handler->display->display_options['fields']['field_image_caption']['empty'] = '<div class="gallery-caption" id="gallery-caption-[counter]"></div>';
  /* Field: Image (ucsf_gallery) */
  $handler->display->display_options['fields']['field_gallery_image_1']['id'] = 'field_gallery_image_1';
  $handler->display->display_options['fields']['field_gallery_image_1']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_1']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_1']['ui_name'] = 'Image (ucsf_gallery)';
  $handler->display->display_options['fields']['field_gallery_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['text'] = '<img src="[field_gallery_image_1]" alt="[field_file_image_alt_text]" />';
  $handler->display->display_options['fields']['field_gallery_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_gallery_image_1']['settings'] = array(
    'image_style' => 'ucsf_gallery',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image_1']['delta_offset'] = '0';
  /* Field: This is the linked image on the page (quarter) */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['ui_name'] = 'This is the linked image on the page (quarter)';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['text'] = '<a href="[field_gallery_image_1]" data-rel="ucsf-images-gallery" class="colorbox-load" title="[counter]"><img src="[field_gallery_image]" alt="[field_file_image_alt_text]" /></a>';
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'starterkit_square_quarter',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['multi_type'] = 'ul';
  /* Field: Content: Gallery footer */
  $handler->display->display_options['fields']['field_gallery_footer']['id'] = 'field_gallery_footer';
  $handler->display->display_options['fields']['field_gallery_footer']['table'] = 'field_data_field_gallery_footer';
  $handler->display->display_options['fields']['field_gallery_footer']['field'] = 'field_gallery_footer';
  $handler->display->display_options['fields']['field_gallery_footer']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_footer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_footer']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'gallery' => 'gallery',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery' => 'gallery',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Gallery content';

  /* Display: Gallery landing page */
  $handler = $view->new_display('page', 'Gallery landing page', 'gallery_landing_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gallery';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Images (field_gallery_image:fid) */
  $handler->display->display_options['relationships']['field_gallery_image_fid']['id'] = 'field_gallery_image_fid';
  $handler->display->display_options['relationships']['field_gallery_image_fid']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['relationships']['field_gallery_image_fid']['field'] = 'field_gallery_image_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Alt text */
  $handler->display->display_options['fields']['field_file_image_alt_text']['id'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['table'] = 'field_data_field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['field'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['relationship'] = 'field_gallery_image_fid';
  $handler->display->display_options['fields']['field_file_image_alt_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_alt_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_alt_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_alt_text']['group_column'] = 'entity_id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Image (square half) */
  $handler->display->display_options['fields']['field_gallery_image_1']['id'] = 'field_gallery_image_1';
  $handler->display->display_options['fields']['field_gallery_image_1']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_1']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_1']['ui_name'] = 'Image (square half)';
  $handler->display->display_options['fields']['field_gallery_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['text'] = '<a href="[path]"><img typeof="foaf:Image" src="[field_gallery_image_1]" alt="[field_file_image_alt_text]" class="ucsf-images-fill-parent"></a>';
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_gallery_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_gallery_image_1']['settings'] = array(
    'image_style' => 'starterkit_square_half',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image_1']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_gallery_image_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery_image_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image_1']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Count: Images */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_gallery_image']['ui_name'] = 'Count: Images';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['alter']['text'] = '<img typeof="foaf:Image" src="[field_gallery_image]" alt="[field_file_image_alt_text]">';
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['separator'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['suffix'] = ' images';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery' => 'gallery',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['path'] = 'gallery';
  $translatables['gallery'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[body]'),
    t('[field_gallery_footer]'),
    t('image from field_gallery_image'),
    t('image'),
    t('<div class="gallery-caption" id="gallery-caption-[counter]">[field_image_caption-value]</div>'),
    t('<div class="gallery-caption" id="gallery-caption-[counter]"></div>'),
    t('<img src="[field_gallery_image_1]" alt="[field_file_image_alt_text]" />'),
    t('<a href="[field_gallery_image_1]" data-rel="ucsf-images-gallery" class="colorbox-load" title="[counter]"><img src="[field_gallery_image]" alt="[field_file_image_alt_text]" /></a>'),
    t('All'),
    t('Block'),
    t('Gallery content'),
    t('Gallery landing page'),
    t('Gallery'),
    t('<a href="[path]"><img typeof="foaf:Image" src="[field_gallery_image_1]" alt="[field_file_image_alt_text]"></a>'),
    t('<img typeof="foaf:Image" src="[field_gallery_image]" alt="[field_file_image_alt_text]">'),
  );
  $export['gallery'] = $view;

  return $export;
}
