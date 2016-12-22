<?php
/**
 * @file
 * myapex_ed_updates.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function myapex_ed_updates_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ed_updates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Provider-Updates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Welcome to Apex ED News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_posted_date',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_document_upload' => 'field_document_upload',
    'field_document_upload_1' => 'field_document_upload_1',
    'path' => 'path',
    'field_reference_target' => 'field_reference_target',
    'field_posted_date' => 'field_posted_date',
    'field_priority' => 'field_priority',
    'body' => 'body',
    'title' => 'title',
    'field_what_you_need_tags' => 'field_what_you_need_tags',
  );
  $handler->display->display_options['style_options']['default'] = 'field_posted_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_document_upload' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_upload_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reference_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_posted_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_what_you_need_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_tip_sheet_target_id']['id'] = 'field_tip_sheet_target_id';
  $handler->display->display_options['relationships']['field_tip_sheet_target_id']['table'] = 'field_data_field_tip_sheet';
  $handler->display->display_options['relationships']['field_tip_sheet_target_id']['field'] = 'field_tip_sheet_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_referenced_content_target_id']['id'] = 'field_referenced_content_target_id';
  $handler->display->display_options['relationships']['field_referenced_content_target_id']['table'] = 'field_data_field_referenced_content';
  $handler->display->display_options['relationships']['field_referenced_content_target_id']['field'] = 'field_referenced_content_target_id';
  /* Field: Content: Document Upload */
  $handler->display->display_options['fields']['field_document_upload']['id'] = 'field_document_upload';
  $handler->display->display_options['fields']['field_document_upload']['table'] = 'field_data_field_document_upload';
  $handler->display->display_options['fields']['field_document_upload']['field'] = 'field_document_upload';
  $handler->display->display_options['fields']['field_document_upload']['relationship'] = 'field_tip_sheet_target_id';
  $handler->display->display_options['fields']['field_document_upload']['label'] = '';
  $handler->display->display_options['fields']['field_document_upload']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_document_upload']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_document_upload']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Document Upload */
  $handler->display->display_options['fields']['field_document_upload_1']['id'] = 'field_document_upload_1';
  $handler->display->display_options['fields']['field_document_upload_1']['table'] = 'field_data_field_document_upload';
  $handler->display->display_options['fields']['field_document_upload_1']['field'] = 'field_document_upload';
  $handler->display->display_options['fields']['field_document_upload_1']['relationship'] = 'field_referenced_content_target_id';
  $handler->display->display_options['fields']['field_document_upload_1']['label'] = '';
  $handler->display->display_options['fields']['field_document_upload_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_upload_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_upload_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_document_upload_1']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_document_upload_1']['settings'] = array(
    'text' => '[file:name]',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_referenced_content_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Field: Content: Referenced Target */
  $handler->display->display_options['fields']['field_reference_target']['id'] = 'field_reference_target';
  $handler->display->display_options['fields']['field_reference_target']['table'] = 'field_data_field_reference_target';
  $handler->display->display_options['fields']['field_reference_target']['field'] = 'field_reference_target';
  $handler->display->display_options['fields']['field_reference_target']['label'] = '';
  $handler->display->display_options['fields']['field_reference_target']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reference_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reference_target']['type'] = 'text_plain';
  /* Field: Content: Posted Date */
  $handler->display->display_options['fields']['field_posted_date']['id'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['field'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_posted_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_posted_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_posted_date']['settings'] = array(
    'format_type' => 'month_and_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_priority']['id'] = 'field_priority';
  $handler->display->display_options['fields']['field_priority']['table'] = 'field_data_field_priority';
  $handler->display->display_options['fields']['field_priority']['field'] = 'field_priority';
  $handler->display->display_options['fields']['field_priority']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3><a href="[field_document_upload_1][field_reference_target]">[title]</a></h3>
[body]
[field_document_upload]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_what_you_need_tags']['id'] = 'field_what_you_need_tags';
  $handler->display->display_options['fields']['field_what_you_need_tags']['table'] = 'field_data_field_what_you_need_tags';
  $handler->display->display_options['fields']['field_what_you_need_tags']['field'] = 'field_what_you_need_tags';
  $handler->display->display_options['fields']['field_what_you_need_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_what_you_need_tags']['delta_offset'] = '0';
  /* Contextual filter: Provider Filter */
  $handler->display->display_options['arguments']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['arguments']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['arguments']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['arguments']['field_tags_tid']['ui_name'] = 'Provider Filter';
  $handler->display->display_options['arguments']['field_tags_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_tags_tid']['title'] = '%1';
  $handler->display->display_options['arguments']['field_tags_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_tags_tid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_tags_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tags_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_tags_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_tags_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_tags_tid']['validate_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['field_tags_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_tags_tid']['validate']['fail'] = 'empty';
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
    'ed_updates' => 'ed_updates',
  );
  /* Filter criterion: Content: Priority (field_priority) */
  $handler->display->display_options['filters']['field_priority_value']['id'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['table'] = 'field_data_field_priority';
  $handler->display->display_options['filters']['field_priority_value']['field'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_priority_value']['expose']['operator_id'] = 'field_priority_value_op';
  $handler->display->display_options['filters']['field_priority_value']['expose']['label'] = 'Priority (field_priority)';
  $handler->display->display_options['filters']['field_priority_value']['expose']['operator'] = 'field_priority_value_op';
  $handler->display->display_options['filters']['field_priority_value']['expose']['identifier'] = 'field_priority_value';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Priority (field_priority) */
  $handler->display->display_options['filters']['field_priority_value']['id'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['table'] = 'field_data_field_priority';
  $handler->display->display_options['filters']['field_priority_value']['field'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['group'] = 1;
  $handler->display->display_options['filters']['field_priority_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_priority_value']['expose']['operator_id'] = 'field_priority_value_op';
  $handler->display->display_options['filters']['field_priority_value']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_priority_value']['expose']['operator'] = 'field_priority_value_op';
  $handler->display->display_options['filters']['field_priority_value']['expose']['identifier'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    11 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ed_updates' => 'ed_updates',
  );
  /* Filter criterion: Content: Type (field_what_you_need_tags) */
  $handler->display->display_options['filters']['field_what_you_need_tags_tid']['id'] = 'field_what_you_need_tags_tid';
  $handler->display->display_options['filters']['field_what_you_need_tags_tid']['table'] = 'field_data_field_what_you_need_tags';
  $handler->display->display_options['filters']['field_what_you_need_tags_tid']['field'] = 'field_what_you_need_tags_tid';
  $handler->display->display_options['filters']['field_what_you_need_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_what_you_need_tags_tid']['expose']['operator_id'] = 'field_what_you_need_tags_tid_op';
  $handler->display->display_options['filters']['field_what_you_need_tags_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_what_you_need_tags_tid']['expose']['operator'] = 'field_what_you_need_tags_tid_op';
  $handler->display->display_options['filters']['field_what_you_need_tags_tid']['expose']['identifier'] = 'field_what_you_need_tags_tid';
  $handler->display->display_options['filters']['field_what_you_need_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    11 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_what_you_need_tags_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_what_you_need_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_what_you_need_tags_tid']['vocabulary'] = 'ed_update_needs';
  $handler->display->display_options['path'] = 'provider-updates';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['ed_updates'] = $view;

  return $export;
}
