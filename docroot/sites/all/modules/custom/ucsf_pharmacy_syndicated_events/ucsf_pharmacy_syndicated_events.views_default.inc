<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ucsf_pharmacy_syndicated_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'syndicated_events';
  $view->description = 'Administrative view to show events.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_page_target_id']['id'] = 'field_event_page_target_id';
  $handler->display->display_options['relationships']['field_event_page_target_id']['table'] = 'field_data_field_event_page';
  $handler->display->display_options['relationships']['field_event_page_target_id']['field'] = 'field_event_page_target_id';
  $handler->display->display_options['relationships']['field_event_page_target_id']['label'] = 'recurring parent';
  /* Field: Content: event trackback plain */
  $handler->display->display_options['fields']['field_event_trackback_plain']['id'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['table'] = 'field_data_field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['field'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['label'] = '';
  $handler->display->display_options['fields']['field_event_trackback_plain']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['type'] = 'text_plain';
  /* Field: Content: Event Page */
  $handler->display->display_options['fields']['field_event_page']['id'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['table'] = 'field_data_field_event_page';
  $handler->display->display_options['fields']['field_event_page']['field'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['text'] = 'node/[field_event_page-target_id]';
  $handler->display->display_options['fields']['field_event_page']['empty'] = '[field_event_trackback_plain]';
  $handler->display->display_options['fields']['field_event_page']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_event_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_event_page]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event text location */
  $handler->display->display_options['fields']['field_event_text_location']['id'] = 'field_event_text_location';
  $handler->display->display_options['fields']['field_event_text_location']['table'] = 'field_data_field_event_text_location';
  $handler->display->display_options['fields']['field_event_text_location']['field'] = 'field_event_text_location';
  $handler->display->display_options['fields']['field_event_text_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_text_location']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_event_page_target_id';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['preserve_tags'] = '<b><strong><em><i><u>';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<b><strong><em><i><u>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '[body_1]';
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Sort criterion: Content: Event Date &amp; Time -  start date (field_event_sort_date) */
  $handler->display->display_options['sorts']['field_event_sort_date_value']['id'] = 'field_event_sort_date_value';
  $handler->display->display_options['sorts']['field_event_sort_date_value']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['sorts']['field_event_sort_date_value']['field'] = 'field_event_sort_date_value';
  /* Contextual filter: Content: Event Date &amp; Time -  start date (field_event_sort_date) */
  $handler->display->display_options['arguments']['field_event_sort_date_value']['id'] = 'field_event_sort_date_value';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['field'] = 'field_event_sort_date_value';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recurring_event' => 'recurring_event',
    'syndicated_event' => 'syndicated_event',
  );
  /* Filter criterion: Content: Date &quot;To be determined&quot; (field_event_tbd) */
  $handler->display->display_options['filters']['field_event_tbd_value']['id'] = 'field_event_tbd_value';
  $handler->display->display_options['filters']['field_event_tbd_value']['table'] = 'field_data_field_event_tbd';
  $handler->display->display_options['filters']['field_event_tbd_value']['field'] = 'field_event_tbd_value';
  $handler->display->display_options['filters']['field_event_tbd_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_tbd_value']['value'] = array(
    1 => '1',
  );

  /* Display: Sidebar of Upcoming Events */
  $handler = $view->new_display('panel_pane', 'Sidebar of Upcoming Events', 'upcoming_events');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="more-link"><a href="/events">SEE ALL &gt;</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'ds_code';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: event trackback plain */
  $handler->display->display_options['fields']['field_event_trackback_plain']['id'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['table'] = 'field_data_field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['field'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['label'] = '';
  $handler->display->display_options['fields']['field_event_trackback_plain']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['type'] = 'text_plain';
  /* Field: Content: Event Page */
  $handler->display->display_options['fields']['field_event_page']['id'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['table'] = 'field_data_field_event_page';
  $handler->display->display_options['fields']['field_event_page']['field'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['text'] = 'node/[field_event_page-target_id]';
  $handler->display->display_options['fields']['field_event_page']['empty'] = '[field_event_trackback_plain]';
  $handler->display->display_options['fields']['field_event_page']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_event_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Event image credit */
  $handler->display->display_options['fields']['field_event_image_credit']['id'] = 'field_event_image_credit';
  $handler->display->display_options['fields']['field_event_image_credit']['table'] = 'field_data_field_event_image_credit';
  $handler->display->display_options['fields']['field_event_image_credit']['field'] = 'field_event_image_credit';
  $handler->display->display_options['fields']['field_event_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_event_image_credit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_credit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_credit']['alter']['text'] = '<div class="views_field_event_image_credit">Image credit: [field_event_image_credit]</div>';
  $handler->display->display_options['fields']['field_event_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image_credit']['click_sort_column'] = 'url';
  /* Field: Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['ui_name'] = 'Image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_image']['alter']['text'] = '<a href="[field_event_trackback_plain]">[field_event_image]</a>[field_event_image_credit]';
  $handler->display->display_options['fields']['field_event_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_image']['element_class'] = 'listing-image';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'pharmacy_square_sixth',
    'image_link' => '',
  );
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_event_page]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Date & Time */
  $handler->display->display_options['fields']['field_event_sort_date']['id'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['field'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_sort_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_sort_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_sort_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_sort_date']['settings'] = array(
    'format_type' => 'mdy',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event date mdy */
  $handler->display->display_options['fields']['field_event_date_mdy']['id'] = 'field_event_date_mdy';
  $handler->display->display_options['fields']['field_event_date_mdy']['table'] = 'field_data_field_event_date_mdy';
  $handler->display->display_options['fields']['field_event_date_mdy']['field'] = 'field_event_date_mdy';
  $handler->display->display_options['fields']['field_event_date_mdy']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_mdy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_mdy']['empty'] = '[field_event_sort_date]';
  /* Field: recurring parent body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_event_page_target_id';
  $handler->display->display_options['fields']['body_1']['ui_name'] = 'recurring parent body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<b><strong><em><i><u>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '[body_1]';
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recurring_event' => 'recurring_event',
    'syndicated_event' => 'syndicated_event',
  );
  /* Filter criterion: Content: Date &quot;To be determined&quot; (field_event_tbd) */
  $handler->display->display_options['filters']['field_event_tbd_value']['id'] = 'field_event_tbd_value';
  $handler->display->display_options['filters']['field_event_tbd_value']['table'] = 'field_data_field_event_tbd';
  $handler->display->display_options['filters']['field_event_tbd_value']['field'] = 'field_event_tbd_value';
  $handler->display->display_options['filters']['field_event_tbd_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_tbd_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Event Date &amp; Time - end date (field_event_sort_date:value2) */
  $handler->display->display_options['filters']['field_event_sort_date_value2']['id'] = 'field_event_sort_date_value2';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['field'] = 'field_event_sort_date_value2';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['default_date'] = 'now';
  $handler->display->display_options['pane_title'] = 'Sidebar of Upcoming Events';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Monthly Calendar */
  $handler = $view->new_display('panel_pane', 'Monthly Calendar', 'monthly_calendar');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'panopoly_page' => '#ffffff',
    'syndicated_event' => '#ffffff',
    'openacademy_news' => '#ffffff',
    'openacademy_person' => '#ffffff',
    'openacademy_publication' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: event trackback plain */
  $handler->display->display_options['fields']['field_event_trackback_plain']['id'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['table'] = 'field_data_field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['field'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['label'] = '';
  $handler->display->display_options['fields']['field_event_trackback_plain']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['type'] = 'text_plain';
  /* Field: Content: Event Page */
  $handler->display->display_options['fields']['field_event_page']['id'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['table'] = 'field_data_field_event_page';
  $handler->display->display_options['fields']['field_event_page']['field'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['text'] = 'node/[field_event_page-target_id]';
  $handler->display->display_options['fields']['field_event_page']['empty'] = '[field_event_trackback_plain]';
  $handler->display->display_options['fields']['field_event_page']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_event_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_event_page]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Monthly Calendar';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'date_argument' => array(
      'type' => 'none',
      'context' => 'entity:fieldable_panels_pane.vuuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Event Date',
    ),
    'field_event_type_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Event Type',
    ),
  );

  /* Display: Monthly Mini Calendar */
  $handler = $view->new_display('panel_pane', 'Monthly Mini Calendar', 'monthly_mini_calendar');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mmini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'panopoly_page' => '#ffffff',
    'syndicated_event' => '#ffffff',
    'openacademy_news' => '#ffffff',
    'openacademy_person' => '#ffffff',
    'openacademy_publication' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: event trackback plain */
  $handler->display->display_options['fields']['field_event_trackback_plain']['id'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['table'] = 'field_data_field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['field'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['label'] = '';
  $handler->display->display_options['fields']['field_event_trackback_plain']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['type'] = 'text_plain';
  /* Field: Content: Event Page */
  $handler->display->display_options['fields']['field_event_page']['id'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['table'] = 'field_data_field_event_page';
  $handler->display->display_options['fields']['field_event_page']['field'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['text'] = 'node/[field_event_page-target_id]';
  $handler->display->display_options['fields']['field_event_page']['empty'] = '[field_event_trackback_plain]';
  $handler->display->display_options['fields']['field_event_page']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_event_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_event_page]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Monthly Mini Calendar';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'date_argument' => array(
      'type' => 'none',
      'context' => 'node_edit_form.field_event_sort_date',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Date: Date (node)',
    ),
    'field_event_type_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Event Type',
    ),
  );

  /* Display: All Events */
  $handler = $view->new_display('panel_pane', 'All Events', 'all_events');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: event trackback plain */
  $handler->display->display_options['fields']['field_event_trackback_plain']['id'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['table'] = 'field_data_field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['field'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['label'] = '';
  $handler->display->display_options['fields']['field_event_trackback_plain']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['type'] = 'text_plain';
  /* Field: Content: Event Page */
  $handler->display->display_options['fields']['field_event_page']['id'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['table'] = 'field_data_field_event_page';
  $handler->display->display_options['fields']['field_event_page']['field'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['text'] = 'node/[field_event_page-target_id]';
  $handler->display->display_options['fields']['field_event_page']['empty'] = '[field_event_trackback_plain]';
  $handler->display->display_options['fields']['field_event_page']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_event_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Event image credit */
  $handler->display->display_options['fields']['field_event_image_credit']['id'] = 'field_event_image_credit';
  $handler->display->display_options['fields']['field_event_image_credit']['table'] = 'field_data_field_event_image_credit';
  $handler->display->display_options['fields']['field_event_image_credit']['field'] = 'field_event_image_credit';
  $handler->display->display_options['fields']['field_event_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_event_image_credit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_credit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_credit']['alter']['text'] = '<div class="views_field_event_image_credit">Image credit: [field_event_image_credit]</div>';
  $handler->display->display_options['fields']['field_event_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image_credit']['click_sort_column'] = 'url';
  /* Field: Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['ui_name'] = 'Image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_image']['alter']['text'] = '<a href="[field_event_trackback_plain]">[field_event_image]</a>[field_event_image_credit]';
  $handler->display->display_options['fields']['field_event_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_image']['element_class'] = 'listing-image';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'pharmacy_square_sixth',
    'image_link' => '',
  );
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_event_page]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Date & Time */
  $handler->display->display_options['fields']['field_event_sort_date']['id'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['field'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_sort_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_sort_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_sort_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_sort_date']['settings'] = array(
    'format_type' => 'mdy',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event date mdy */
  $handler->display->display_options['fields']['field_event_date_mdy']['id'] = 'field_event_date_mdy';
  $handler->display->display_options['fields']['field_event_date_mdy']['table'] = 'field_data_field_event_date_mdy';
  $handler->display->display_options['fields']['field_event_date_mdy']['field'] = 'field_event_date_mdy';
  $handler->display->display_options['fields']['field_event_date_mdy']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_mdy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_mdy']['empty'] = '[field_event_sort_date]';
  /* Field: recurring parent title */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_event_page_target_id';
  $handler->display->display_options['fields']['body_1']['ui_name'] = 'recurring parent title';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<b><strong><em><i><u>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '[body_1]';
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recurring_event' => 'recurring_event',
    'syndicated_event' => 'syndicated_event',
  );
  $handler->display->display_options['pane_title'] = 'All Events';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_event_type_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Event Type (field_event_type)',
    ),
  );

  /* Display: Day (Page) */
  $handler = $view->new_display('page', 'Day (Page)', 'daily_calendar_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'panopoly_page' => '#ffffff',
    'biblio' => '#ffffff',
    'openacademy_course' => '#ffffff',
    'syndicated_event' => '#ffffff',
    'openacademy_news' => '#ffffff',
    'openacademy_person' => '#ffffff',
    'openacademy_publication' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Event Date &amp; Time -  start date (field_event_sort_date) */
  $handler->display->display_options['arguments']['field_event_sort_date_value']['id'] = 'field_event_sort_date_value';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['field'] = 'field_event_sort_date_value';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['granularity'] = 'day';
  $handler->display->display_options['path'] = 'events/calendar/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Day View';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: All Upcoming Events */
  $handler = $view->new_display('panel_pane', 'All Upcoming Events', 'all_upcoming_events');
  $handler->display->display_options['display_description'] = 'Full listing of only upcoming events.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'lite';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>There are no upcoming events at this time.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'webedit';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: event trackback plain */
  $handler->display->display_options['fields']['field_event_trackback_plain']['id'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['table'] = 'field_data_field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['field'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['label'] = '';
  $handler->display->display_options['fields']['field_event_trackback_plain']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['type'] = 'text_plain';
  /* Field: Content: Event Page */
  $handler->display->display_options['fields']['field_event_page']['id'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['table'] = 'field_data_field_event_page';
  $handler->display->display_options['fields']['field_event_page']['field'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['text'] = 'node/[field_event_page-target_id]';
  $handler->display->display_options['fields']['field_event_page']['empty'] = '[field_event_trackback_plain]';
  $handler->display->display_options['fields']['field_event_page']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_event_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Event image credit */
  $handler->display->display_options['fields']['field_event_image_credit']['id'] = 'field_event_image_credit';
  $handler->display->display_options['fields']['field_event_image_credit']['table'] = 'field_data_field_event_image_credit';
  $handler->display->display_options['fields']['field_event_image_credit']['field'] = 'field_event_image_credit';
  $handler->display->display_options['fields']['field_event_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_event_image_credit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_credit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_credit']['alter']['text'] = '<div class="views_field_event_image_credit">Image credit: [field_event_image_credit]</div>';
  $handler->display->display_options['fields']['field_event_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image_credit']['click_sort_column'] = 'url';
  /* Field: Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['ui_name'] = 'Image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_image']['alter']['text'] = '<a href="[field_event_trackback_plain]">[field_event_image]</a>[field_event_image_credit]';
  $handler->display->display_options['fields']['field_event_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_image']['element_class'] = 'listing-image';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'file_view_mode' => 'square_sixth',
  );
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_event_page]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Date & Time */
  $handler->display->display_options['fields']['field_event_sort_date']['id'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['field'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_sort_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_sort_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_sort_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event date long */
  $handler->display->display_options['fields']['field_event_date_long']['id'] = 'field_event_date_long';
  $handler->display->display_options['fields']['field_event_date_long']['table'] = 'field_data_field_event_date_long';
  $handler->display->display_options['fields']['field_event_date_long']['field'] = 'field_event_date_long';
  $handler->display->display_options['fields']['field_event_date_long']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_long']['empty'] = '[field_event_sort_date]';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_event_page_target_id';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['preserve_tags'] = '<b><strong><em><i><u>';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<b><strong><em><i><u>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '[body_1]';
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recurring_event' => 'recurring_event',
    'syndicated_event' => 'syndicated_event',
  );
  /* Filter criterion: Content: Event Date &amp; Time - end date (field_event_sort_date:value2) */
  $handler->display->display_options['filters']['field_event_sort_date_value2']['id'] = 'field_event_sort_date_value2';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['field'] = 'field_event_sort_date_value2';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['default_date'] = 'now';
  $handler->display->display_options['pane_title'] = 'All Events';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_event_type_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Event Type (field_event_type)',
    ),
  );

  /* Display: All Past Events */
  $handler = $view->new_display('panel_pane', 'All Past Events', 'all_past_events');
  $handler->display->display_options['display_description'] = 'Full Listing of all events that have passed.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'lite';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: event trackback plain */
  $handler->display->display_options['fields']['field_event_trackback_plain']['id'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['table'] = 'field_data_field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['field'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['label'] = '';
  $handler->display->display_options['fields']['field_event_trackback_plain']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['type'] = 'text_plain';
  /* Field: Content: Event Page */
  $handler->display->display_options['fields']['field_event_page']['id'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['table'] = 'field_data_field_event_page';
  $handler->display->display_options['fields']['field_event_page']['field'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['text'] = 'node/[field_event_page-target_id]';
  $handler->display->display_options['fields']['field_event_page']['empty'] = '[field_event_trackback_plain]';
  $handler->display->display_options['fields']['field_event_page']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_event_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Event image credit */
  $handler->display->display_options['fields']['field_event_image_credit']['id'] = 'field_event_image_credit';
  $handler->display->display_options['fields']['field_event_image_credit']['table'] = 'field_data_field_event_image_credit';
  $handler->display->display_options['fields']['field_event_image_credit']['field'] = 'field_event_image_credit';
  $handler->display->display_options['fields']['field_event_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_event_image_credit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_credit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_credit']['alter']['text'] = '<div class="views_field_event_image_credit">Image credit: [field_event_image_credit]</div>';
  $handler->display->display_options['fields']['field_event_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_credit']['click_sort_column'] = 'url';
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_event_page]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['ui_name'] = 'Image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_image']['alter']['text'] = '<a href="[field_event_trackback_plain]">[field_event_image]</a>[field_event_image_credit]';
  $handler->display->display_options['fields']['field_event_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_image']['element_class'] = 'listing-image';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'file_view_mode' => 'square_sixth',
  );
  /* Field: Content: Event Date & Time */
  $handler->display->display_options['fields']['field_event_sort_date']['id'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['field'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_sort_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_sort_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_sort_date']['settings'] = array(
    'format_type' => 'mdy',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event date mdy */
  $handler->display->display_options['fields']['field_event_date_mdy']['id'] = 'field_event_date_mdy';
  $handler->display->display_options['fields']['field_event_date_mdy']['table'] = 'field_data_field_event_date_mdy';
  $handler->display->display_options['fields']['field_event_date_mdy']['field'] = 'field_event_date_mdy';
  $handler->display->display_options['fields']['field_event_date_mdy']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_mdy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_mdy']['empty'] = '[field_event_sort_date]';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_event_page_target_id';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['preserve_tags'] = '<b><strong><em><i><u>';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<b><strong><em><i><u>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '[body_1]';
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Date &amp; Time -  start date (field_event_sort_date) */
  $handler->display->display_options['sorts']['field_event_sort_date_value']['id'] = 'field_event_sort_date_value';
  $handler->display->display_options['sorts']['field_event_sort_date_value']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['sorts']['field_event_sort_date_value']['field'] = 'field_event_sort_date_value';
  $handler->display->display_options['sorts']['field_event_sort_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recurring_event' => 'recurring_event',
    'syndicated_event' => 'syndicated_event',
  );
  /* Filter criterion: Content: Event Date &amp; Time - end date (field_event_sort_date:value2) */
  $handler->display->display_options['filters']['field_event_sort_date_value2']['id'] = 'field_event_sort_date_value2';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['field'] = 'field_event_sort_date_value2';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Date &quot;To be determined&quot; (field_event_tbd) */
  $handler->display->display_options['filters']['field_event_tbd_value']['id'] = 'field_event_tbd_value';
  $handler->display->display_options['filters']['field_event_tbd_value']['table'] = 'field_data_field_event_tbd';
  $handler->display->display_options['filters']['field_event_tbd_value']['field'] = 'field_event_tbd_value';
  $handler->display->display_options['filters']['field_event_tbd_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_tbd_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['pane_title'] = 'All Events';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_event_type_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Event Type (field_event_type)',
    ),
  );

  /* Display: Titles of Upcoming Events */
  $handler = $view->new_display('panel_pane', 'Titles of Upcoming Events', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="more-link"><a href="/events">SEE ALL &gt;</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'ds_code';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: event trackback plain */
  $handler->display->display_options['fields']['field_event_trackback_plain']['id'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['table'] = 'field_data_field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['field'] = 'field_event_trackback_plain';
  $handler->display->display_options['fields']['field_event_trackback_plain']['label'] = '';
  $handler->display->display_options['fields']['field_event_trackback_plain']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_trackback_plain']['type'] = 'text_plain';
  /* Field: Content: Event Page */
  $handler->display->display_options['fields']['field_event_page']['id'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['table'] = 'field_data_field_event_page';
  $handler->display->display_options['fields']['field_event_page']['field'] = 'field_event_page';
  $handler->display->display_options['fields']['field_event_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_page']['alter']['text'] = 'node/[field_event_page-target_id]';
  $handler->display->display_options['fields']['field_event_page']['empty'] = '[field_event_trackback_plain]';
  $handler->display->display_options['fields']['field_event_page']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_event_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_event_page]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Date & Time */
  $handler->display->display_options['fields']['field_event_sort_date']['id'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['field'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_sort_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_sort_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recurring_event' => 'recurring_event',
    'syndicated_event' => 'syndicated_event',
  );
  /* Filter criterion: Content: Date &quot;To be determined&quot; (field_event_tbd) */
  $handler->display->display_options['filters']['field_event_tbd_value']['id'] = 'field_event_tbd_value';
  $handler->display->display_options['filters']['field_event_tbd_value']['table'] = 'field_data_field_event_tbd';
  $handler->display->display_options['filters']['field_event_tbd_value']['field'] = 'field_event_tbd_value';
  $handler->display->display_options['filters']['field_event_tbd_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_tbd_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Event Date &amp; Time - end date (field_event_sort_date:value2) */
  $handler->display->display_options['filters']['field_event_sort_date_value2']['id'] = 'field_event_sort_date_value2';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['field'] = 'field_event_sort_date_value2';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_sort_date_value2']['default_date'] = 'now';
  $handler->display->display_options['pane_title'] = 'Titles of Upcoming Events';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Month (Page) */
  $handler = $view->new_display('page', 'Month (Page)', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'panopoly_page' => '#ffffff',
    'biblio' => '#ffffff',
    'openacademy_course' => '#ffffff',
    'syndicated_event' => '#ffffff',
    'openacademy_news' => '#ffffff',
    'openacademy_person' => '#ffffff',
    'openacademy_publication' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Event Date &amp; Time -  start date (field_event_sort_date) */
  $handler->display->display_options['arguments']['field_event_sort_date_value']['id'] = 'field_event_sort_date_value';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['field'] = 'field_event_sort_date_value';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_sort_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'events/calendar/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Month';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['syndicated_events'] = $view;

  return $export;
}
