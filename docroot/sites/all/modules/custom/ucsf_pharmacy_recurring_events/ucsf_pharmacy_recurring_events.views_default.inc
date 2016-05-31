<?php
/**
 * @file
 * ucsf_pharmacy_recurring_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ucsf_pharmacy_recurring_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'recurring_events_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Recurring Events Grid';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_sort_date' => 'field_event_sort_date',
    'field_map_address_1' => 'field_map_address_1',
    'field_map_address' => 'field_map_address',
    'field_map_address_2' => 'field_map_address_2',
    'field_event_location' => 'field_event_location',
    'field_event_registration_cost' => 'field_event_registration_cost',
    'field_event_registration_link' => 'field_event_registration_link',
    'field_event_registration_link_1' => 'field_event_registration_link_1',
    'field_event_registration_period' => 'field_event_registration_period',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_sort_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_map_address_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_map_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_map_address_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_event_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_event_registration_cost' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_event_registration_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_event_registration_link_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_event_registration_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Field: Content: Event Date & Time */
  $handler->display->display_options['fields']['field_event_sort_date']['id'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['field'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_event_sort_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_map_address_1']['id'] = 'field_map_address_1';
  $handler->display->display_options['fields']['field_map_address_1']['table'] = 'field_data_field_map_address';
  $handler->display->display_options['fields']['field_map_address_1']['field'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address_1']['label'] = 'Raw Address';
  $handler->display->display_options['fields']['field_map_address_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_1']['alter']['text'] = '[field_map_address_1]';
  $handler->display->display_options['fields']['field_map_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_address_1']['hide_empty'] = TRUE;
  /* Field: Address and Map */
  $handler->display->display_options['fields']['field_map_address']['id'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address']['table'] = 'field_data_field_map_address';
  $handler->display->display_options['fields']['field_map_address']['field'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address']['ui_name'] = 'Address and Map';
  $handler->display->display_options['fields']['field_map_address']['label'] = '';
  $handler->display->display_options['fields']['field_map_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_map_address']['alter']['text'] = '[field_map_address_1]<br />
[field_map_address]';
  $handler->display->display_options['fields']['field_map_address']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_map_address']['alter']['preserve_tags'] = '<a> <br>';
  $handler->display->display_options['fields']['field_map_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_address']['empty'] = '[field_map_address_1]';
  $handler->display->display_options['fields']['field_map_address']['type'] = 'simple_gmap';
  $handler->display->display_options['fields']['field_map_address']['settings'] = array(
    'include_map' => 0,
    'include_static_map' => 0,
    'iframe_width' => '200',
    'iframe_height' => '200',
    'include_link' => 1,
    'link_text' => 'View map',
    'zoom_level' => '14',
    'information_bubble' => 1,
    'include_text' => 0,
    'map_type' => 'm',
    'langcode' => 'en',
  );
  /* Field: Address Separator */
  $handler->display->display_options['fields']['field_map_address_2']['id'] = 'field_map_address_2';
  $handler->display->display_options['fields']['field_map_address_2']['table'] = 'field_data_field_map_address';
  $handler->display->display_options['fields']['field_map_address_2']['field'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address_2']['ui_name'] = 'Address Separator';
  $handler->display->display_options['fields']['field_map_address_2']['label'] = '';
  $handler->display->display_options['fields']['field_map_address_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_2']['alter']['text'] = '<br />';
  $handler->display->display_options['fields']['field_map_address_2']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['alter']['text'] = '[field_event_location][field_map_address_2][field_map_address]';
  $handler->display->display_options['fields']['field_event_location']['click_sort_column'] = 'url';
  /* Field: Content: Cost */
  $handler->display->display_options['fields']['field_event_registration_cost']['id'] = 'field_event_registration_cost';
  $handler->display->display_options['fields']['field_event_registration_cost']['table'] = 'field_data_field_event_registration_cost';
  $handler->display->display_options['fields']['field_event_registration_cost']['field'] = 'field_event_registration_cost';
  $handler->display->display_options['fields']['field_event_registration_cost']['hide_empty'] = TRUE;
  /* Field: Content: Registration Link */
  $handler->display->display_options['fields']['field_event_registration_link']['id'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['table'] = 'field_data_field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['field'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_registration_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_registration_link']['alter']['text'] = '<a href="[field_event_registration_link]">Register</a>';
  $handler->display->display_options['fields']['field_event_registration_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_registration_link']['click_sort_column'] = 'url';
  /* Field: Registration link separator */
  $handler->display->display_options['fields']['field_event_registration_link_1']['id'] = 'field_event_registration_link_1';
  $handler->display->display_options['fields']['field_event_registration_link_1']['table'] = 'field_data_field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link_1']['field'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link_1']['ui_name'] = 'Registration link separator';
  $handler->display->display_options['fields']['field_event_registration_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_registration_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_registration_link_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_registration_link_1']['alter']['text'] = ' - ';
  $handler->display->display_options['fields']['field_event_registration_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_registration_link_1']['click_sort_column'] = 'url';
  /* Field: Content: Registration Period */
  $handler->display->display_options['fields']['field_event_registration_period']['id'] = 'field_event_registration_period';
  $handler->display->display_options['fields']['field_event_registration_period']['table'] = 'field_data_field_event_registration_period';
  $handler->display->display_options['fields']['field_event_registration_period']['field'] = 'field_event_registration_period';
  $handler->display->display_options['fields']['field_event_registration_period']['label'] = 'Registration';
  $handler->display->display_options['fields']['field_event_registration_period']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_registration_period']['alter']['text'] = '[field_event_registration_period][field_event_registration_link_1][field_event_registration_link]';
  $handler->display->display_options['fields']['field_event_registration_period']['empty'] = '[field_event_registration_link]';
  $handler->display->display_options['fields']['field_event_registration_period']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Contextual filter: Content: Event Page (field_event_page) */
  $handler->display->display_options['arguments']['field_event_page_target_id']['id'] = 'field_event_page_target_id';
  $handler->display->display_options['arguments']['field_event_page_target_id']['table'] = 'field_data_field_event_page';
  $handler->display->display_options['arguments']['field_event_page_target_id']['field'] = 'field_event_page_target_id';
  $handler->display->display_options['arguments']['field_event_page_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_page_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_event_page_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_page_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_page_target_id']['summary_options']['items_per_page'] = '25';
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
  );

  /* Display: Recurring Events Grid */
  $handler = $view->new_display('panel_pane', 'Recurring Events Grid', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Date & Time */
  $handler->display->display_options['fields']['field_event_sort_date']['id'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['field'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['label'] = 'When';
  $handler->display->display_options['fields']['field_event_sort_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_map_address_1']['id'] = 'field_map_address_1';
  $handler->display->display_options['fields']['field_map_address_1']['table'] = 'field_data_field_map_address';
  $handler->display->display_options['fields']['field_map_address_1']['field'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address_1']['label'] = 'Raw Address';
  $handler->display->display_options['fields']['field_map_address_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_1']['alter']['text'] = '[field_map_address_1]';
  $handler->display->display_options['fields']['field_map_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_address_1']['hide_empty'] = TRUE;
  /* Field: Address and Map */
  $handler->display->display_options['fields']['field_map_address']['id'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address']['table'] = 'field_data_field_map_address';
  $handler->display->display_options['fields']['field_map_address']['field'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address']['ui_name'] = 'Address and Map';
  $handler->display->display_options['fields']['field_map_address']['label'] = '';
  $handler->display->display_options['fields']['field_map_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_map_address']['alter']['text'] = '[field_map_address_1]<br />
[field_map_address]';
  $handler->display->display_options['fields']['field_map_address']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_map_address']['alter']['preserve_tags'] = '<a> <br>';
  $handler->display->display_options['fields']['field_map_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_address']['empty'] = '[field_map_address_1]';
  $handler->display->display_options['fields']['field_map_address']['type'] = 'simple_gmap';
  $handler->display->display_options['fields']['field_map_address']['settings'] = array(
    'include_map' => 0,
    'include_static_map' => 0,
    'iframe_width' => '200',
    'iframe_height' => '200',
    'include_link' => 1,
    'link_text' => 'View map',
    'zoom_level' => '14',
    'information_bubble' => 1,
    'include_text' => 0,
    'map_type' => 'm',
    'langcode' => 'en',
  );
  /* Field: Address Separator */
  $handler->display->display_options['fields']['field_map_address_2']['id'] = 'field_map_address_2';
  $handler->display->display_options['fields']['field_map_address_2']['table'] = 'field_data_field_map_address';
  $handler->display->display_options['fields']['field_map_address_2']['field'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address_2']['ui_name'] = 'Address Separator';
  $handler->display->display_options['fields']['field_map_address_2']['label'] = '';
  $handler->display->display_options['fields']['field_map_address_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_2']['alter']['text'] = '<br />';
  $handler->display->display_options['fields']['field_map_address_2']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['alter']['text'] = '[field_event_location][field_map_address_2][field_map_address]';
  $handler->display->display_options['fields']['field_event_location']['click_sort_column'] = 'url';
  /* Field: Content: Cost */
  $handler->display->display_options['fields']['field_event_registration_cost']['id'] = 'field_event_registration_cost';
  $handler->display->display_options['fields']['field_event_registration_cost']['table'] = 'field_data_field_event_registration_cost';
  $handler->display->display_options['fields']['field_event_registration_cost']['field'] = 'field_event_registration_cost';
  $handler->display->display_options['fields']['field_event_registration_cost']['hide_empty'] = TRUE;
  /* Field: Content: Registration Period */
  $handler->display->display_options['fields']['field_event_registration_period']['id'] = 'field_event_registration_period';
  $handler->display->display_options['fields']['field_event_registration_period']['table'] = 'field_data_field_event_registration_period';
  $handler->display->display_options['fields']['field_event_registration_period']['field'] = 'field_event_registration_period';
  $handler->display->display_options['fields']['field_event_registration_period']['label'] = 'Registration Opens';
  $handler->display->display_options['fields']['field_event_registration_period']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Registration Link */
  $handler->display->display_options['fields']['field_event_registration_link']['id'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['table'] = 'field_data_field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['field'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_registration_link']['alter']['text'] = '<a href="[field_event_registration_link]">Register</a>';
  $handler->display->display_options['fields']['field_event_registration_link']['element_class'] = 'button';
  $handler->display->display_options['fields']['field_event_registration_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_registration_link']['click_sort_column'] = 'url';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[edit]';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_event_page_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Event Page (field_event_page)',
    ),
  );

  /* Display: Recurring Events Review - page */
  $handler = $view->new_display('page', 'Recurring Events Review - page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recurring Events Review';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_sort_date' => 'field_event_sort_date',
    'title' => 'title',
    'field_map_address_1' => 'field_map_address_1',
    'field_map_address' => 'field_map_address',
    'field_map_address_2' => 'field_map_address_2',
    'field_event_location' => 'field_event_location',
    'field_event_registration_cost' => 'field_event_registration_cost',
    'field_event_registration_link' => 'field_event_registration_link',
    'field_event_registration_link_1' => 'field_event_registration_link_1',
    'field_event_registration_period' => 'field_event_registration_period',
    'status' => 'status',
    'clone_node' => 'clone_node',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_sort_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_sort_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_map_address_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_map_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_map_address_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_event_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_event_registration_cost' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_event_registration_link' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_event_registration_link_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_event_registration_period' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'clone_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_page_target_id']['id'] = 'field_event_page_target_id';
  $handler->display->display_options['relationships']['field_event_page_target_id']['table'] = 'field_data_field_event_page';
  $handler->display->display_options['relationships']['field_event_page_target_id']['field'] = 'field_event_page_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Date & Time */
  $handler->display->display_options['fields']['field_event_sort_date']['id'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['field'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_event_sort_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_event_page_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Parent';
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_map_address_1']['id'] = 'field_map_address_1';
  $handler->display->display_options['fields']['field_map_address_1']['table'] = 'field_data_field_map_address';
  $handler->display->display_options['fields']['field_map_address_1']['field'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address_1']['label'] = 'Raw Address';
  $handler->display->display_options['fields']['field_map_address_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_1']['alter']['text'] = '[field_map_address_1]';
  $handler->display->display_options['fields']['field_map_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_address_1']['empty'] = '[field_event_location]';
  /* Field: Address and Map */
  $handler->display->display_options['fields']['field_map_address']['id'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address']['table'] = 'field_data_field_map_address';
  $handler->display->display_options['fields']['field_map_address']['field'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address']['ui_name'] = 'Address and Map';
  $handler->display->display_options['fields']['field_map_address']['label'] = '';
  $handler->display->display_options['fields']['field_map_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_map_address']['alter']['text'] = '[field_map_address_1]<br />
[field_map_address]';
  $handler->display->display_options['fields']['field_map_address']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_map_address']['alter']['preserve_tags'] = '<a> <br>';
  $handler->display->display_options['fields']['field_map_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_address']['empty'] = '[field_map_address_1]';
  $handler->display->display_options['fields']['field_map_address']['type'] = 'simple_gmap';
  $handler->display->display_options['fields']['field_map_address']['settings'] = array(
    'include_map' => 0,
    'include_static_map' => 0,
    'iframe_width' => '200',
    'iframe_height' => '200',
    'include_link' => 1,
    'link_text' => 'View map',
    'zoom_level' => '14',
    'information_bubble' => 1,
    'include_text' => 0,
    'map_type' => 'm',
    'langcode' => 'en',
  );
  /* Field: Address Separator */
  $handler->display->display_options['fields']['field_map_address_2']['id'] = 'field_map_address_2';
  $handler->display->display_options['fields']['field_map_address_2']['table'] = 'field_data_field_map_address';
  $handler->display->display_options['fields']['field_map_address_2']['field'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address_2']['ui_name'] = 'Address Separator';
  $handler->display->display_options['fields']['field_map_address_2']['label'] = '';
  $handler->display->display_options['fields']['field_map_address_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_2']['alter']['text'] = '<br />';
  $handler->display->display_options['fields']['field_map_address_2']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['alter']['text'] = '[field_event_location][field_map_address_2][field_map_address]';
  $handler->display->display_options['fields']['field_event_location']['click_sort_column'] = 'url';
  /* Field: Content: Cost */
  $handler->display->display_options['fields']['field_event_registration_cost']['id'] = 'field_event_registration_cost';
  $handler->display->display_options['fields']['field_event_registration_cost']['table'] = 'field_data_field_event_registration_cost';
  $handler->display->display_options['fields']['field_event_registration_cost']['field'] = 'field_event_registration_cost';
  $handler->display->display_options['fields']['field_event_registration_cost']['hide_empty'] = TRUE;
  /* Field: Content: Registration Link */
  $handler->display->display_options['fields']['field_event_registration_link']['id'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['table'] = 'field_data_field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['field'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['label'] = 'Register';
  $handler->display->display_options['fields']['field_event_registration_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_registration_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_registration_link']['alter']['text'] = '<a href="[field_event_registration_link]">Register</a>';
  $handler->display->display_options['fields']['field_event_registration_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_registration_link']['type'] = 'link_plain';
  /* Field: Registration link separator */
  $handler->display->display_options['fields']['field_event_registration_link_1']['id'] = 'field_event_registration_link_1';
  $handler->display->display_options['fields']['field_event_registration_link_1']['table'] = 'field_data_field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link_1']['field'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link_1']['ui_name'] = 'Registration link separator';
  $handler->display->display_options['fields']['field_event_registration_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_registration_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_registration_link_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_registration_link_1']['alter']['text'] = ' - ';
  $handler->display->display_options['fields']['field_event_registration_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_registration_link_1']['click_sort_column'] = 'url';
  /* Field: Content: Registration Period */
  $handler->display->display_options['fields']['field_event_registration_period']['id'] = 'field_event_registration_period';
  $handler->display->display_options['fields']['field_event_registration_period']['table'] = 'field_data_field_event_registration_period';
  $handler->display->display_options['fields']['field_event_registration_period']['field'] = 'field_event_registration_period';
  $handler->display->display_options['fields']['field_event_registration_period']['label'] = 'Registration';
  $handler->display->display_options['fields']['field_event_registration_period']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_registration_period']['alter']['text'] = '[field_event_registration_period][field_event_registration_link_1][field_event_registration_link]';
  $handler->display->display_options['fields']['field_event_registration_period']['empty'] = '[field_event_registration_link]';
  $handler->display->display_options['fields']['field_event_registration_period']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['clone_node']['text'] = 'Clone';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[edit_node] ([status]) ([clone_node])';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
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
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search titles';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'field_event_sort_date';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Location (field_event_location:title) */
  $handler->display->display_options['filters']['field_event_location_title']['id'] = 'field_event_location_title';
  $handler->display->display_options['filters']['field_event_location_title']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['filters']['field_event_location_title']['field'] = 'field_event_location_title';
  $handler->display->display_options['filters']['field_event_location_title']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_event_location_title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_location_title']['expose']['operator_id'] = 'field_event_location_title_op';
  $handler->display->display_options['filters']['field_event_location_title']['expose']['label'] = 'Location (title)';
  $handler->display->display_options['filters']['field_event_location_title']['expose']['operator'] = 'field_event_location_title_op';
  $handler->display->display_options['filters']['field_event_location_title']['expose']['identifier'] = 'field_event_location_title';
  $handler->display->display_options['filters']['field_event_location_title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_event_location_title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_event_location_title']['expose']['autocomplete_field'] = 'field_event_sort_date';
  $handler->display->display_options['filters']['field_event_location_title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_event_location_title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_event_location_title']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'admin/content/recurring-event-review';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Recurring Events review';
  $handler->display->display_options['menu']['description'] = 'Review all Recurring Event items';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Recurring Events Grid - No Time */
  $handler = $view->new_display('panel_pane', 'Recurring Events Grid - No Time', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Date & Time */
  $handler->display->display_options['fields']['field_event_sort_date']['id'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['field'] = 'field_event_sort_date';
  $handler->display->display_options['fields']['field_event_sort_date']['label'] = 'When';
  $handler->display->display_options['fields']['field_event_sort_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_map_address_1']['id'] = 'field_map_address_1';
  $handler->display->display_options['fields']['field_map_address_1']['table'] = 'field_data_field_map_address';
  $handler->display->display_options['fields']['field_map_address_1']['field'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address_1']['label'] = 'Raw Address';
  $handler->display->display_options['fields']['field_map_address_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_1']['alter']['text'] = '[field_map_address_1]';
  $handler->display->display_options['fields']['field_map_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_address_1']['hide_empty'] = TRUE;
  /* Field: Address and Map */
  $handler->display->display_options['fields']['field_map_address']['id'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address']['table'] = 'field_data_field_map_address';
  $handler->display->display_options['fields']['field_map_address']['field'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address']['ui_name'] = 'Address and Map';
  $handler->display->display_options['fields']['field_map_address']['label'] = '';
  $handler->display->display_options['fields']['field_map_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_map_address']['alter']['text'] = '[field_map_address_1]<br />
[field_map_address]';
  $handler->display->display_options['fields']['field_map_address']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_map_address']['alter']['preserve_tags'] = '<a> <br>';
  $handler->display->display_options['fields']['field_map_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_address']['empty'] = '[field_map_address_1]';
  $handler->display->display_options['fields']['field_map_address']['type'] = 'simple_gmap';
  $handler->display->display_options['fields']['field_map_address']['settings'] = array(
    'include_map' => 0,
    'include_static_map' => 0,
    'iframe_width' => '200',
    'iframe_height' => '200',
    'include_link' => 1,
    'link_text' => 'View map',
    'zoom_level' => '14',
    'information_bubble' => 1,
    'include_text' => 0,
    'map_type' => 'm',
    'langcode' => 'en',
  );
  /* Field: Address Separator */
  $handler->display->display_options['fields']['field_map_address_2']['id'] = 'field_map_address_2';
  $handler->display->display_options['fields']['field_map_address_2']['table'] = 'field_data_field_map_address';
  $handler->display->display_options['fields']['field_map_address_2']['field'] = 'field_map_address';
  $handler->display->display_options['fields']['field_map_address_2']['ui_name'] = 'Address Separator';
  $handler->display->display_options['fields']['field_map_address_2']['label'] = '';
  $handler->display->display_options['fields']['field_map_address_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_map_address_2']['alter']['text'] = '<br />';
  $handler->display->display_options['fields']['field_map_address_2']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['alter']['text'] = '[field_event_location][field_map_address_2][field_map_address]';
  $handler->display->display_options['fields']['field_event_location']['click_sort_column'] = 'url';
  /* Field: Content: Cost */
  $handler->display->display_options['fields']['field_event_registration_cost']['id'] = 'field_event_registration_cost';
  $handler->display->display_options['fields']['field_event_registration_cost']['table'] = 'field_data_field_event_registration_cost';
  $handler->display->display_options['fields']['field_event_registration_cost']['field'] = 'field_event_registration_cost';
  $handler->display->display_options['fields']['field_event_registration_cost']['hide_empty'] = TRUE;
  /* Field: Content: Registration Period */
  $handler->display->display_options['fields']['field_event_registration_period']['id'] = 'field_event_registration_period';
  $handler->display->display_options['fields']['field_event_registration_period']['table'] = 'field_data_field_event_registration_period';
  $handler->display->display_options['fields']['field_event_registration_period']['field'] = 'field_event_registration_period';
  $handler->display->display_options['fields']['field_event_registration_period']['label'] = 'Registration Opens';
  $handler->display->display_options['fields']['field_event_registration_period']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Registration Link */
  $handler->display->display_options['fields']['field_event_registration_link']['id'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['table'] = 'field_data_field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['field'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_registration_link']['alter']['text'] = '<a href="[field_event_registration_link]">Register</a>';
  $handler->display->display_options['fields']['field_event_registration_link']['element_class'] = 'button';
  $handler->display->display_options['fields']['field_event_registration_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_registration_link']['click_sort_column'] = 'url';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[edit]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Date &amp; Time -  start date (field_event_sort_date) */
  $handler->display->display_options['sorts']['field_event_sort_date_value']['id'] = 'field_event_sort_date_value';
  $handler->display->display_options['sorts']['field_event_sort_date_value']['table'] = 'field_data_field_event_sort_date';
  $handler->display->display_options['sorts']['field_event_sort_date_value']['field'] = 'field_event_sort_date_value';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_event_page_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Event Page (field_event_page)',
    ),
  );
  $export['recurring_events_grid'] = $view;

  return $export;
}
