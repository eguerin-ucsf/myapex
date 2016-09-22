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
  $view->human_name = 'ED-Updates';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
    'field_reference_doc' => 'field_reference_doc',
    'field_posted_date' => 'field_posted_date',
    'field_priority' => 'field_priority',
    'body' => 'body',
    'title' => 'title',
    'field_notification_type' => 'field_notification_type',
    'field_what_do_you_need_tags' => 'field_what_do_you_need_tags',
    'field_tags' => 'field_tags',
  );
  $handler->display->display_options['style_options']['default'] = 'field_posted_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reference_doc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_posted_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
    'field_notification_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_what_do_you_need_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Posted Date */
  $handler->display->display_options['fields']['field_posted_date']['id'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['table'] = 'field_data_field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['field'] = 'field_posted_date';
  $handler->display->display_options['fields']['field_posted_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_posted_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_posted_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_posted_date']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Notification Type */
  $handler->display->display_options['fields']['field_notification_type']['id'] = 'field_notification_type';
  $handler->display->display_options['fields']['field_notification_type']['table'] = 'field_data_field_notification_type';
  $handler->display->display_options['fields']['field_notification_type']['field'] = 'field_notification_type';
  $handler->display->display_options['fields']['field_notification_type']['label'] = 'Style';
  $handler->display->display_options['fields']['field_notification_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_notification_type']['element_label_colon'] = FALSE;
  /* Field: Content: Reference Document */
  $handler->display->display_options['fields']['field_reference_doc']['id'] = 'field_reference_doc';
  $handler->display->display_options['fields']['field_reference_doc']['table'] = 'field_data_field_reference_doc';
  $handler->display->display_options['fields']['field_reference_doc']['field'] = 'field_reference_doc';
  $handler->display->display_options['fields']['field_reference_doc']['label'] = '';
  $handler->display->display_options['fields']['field_reference_doc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reference_doc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reference_doc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reference_doc']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reference_doc']['type'] = 'file_url_plain';
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
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_reference_doc]">[title]</a>
[body]
<span class="notification_type">[field_notification_type]</span>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: What do you need tags */
  $handler->display->display_options['fields']['field_what_do_you_need_tags']['id'] = 'field_what_do_you_need_tags';
  $handler->display->display_options['fields']['field_what_do_you_need_tags']['table'] = 'field_data_field_what_do_you_need_tags';
  $handler->display->display_options['fields']['field_what_do_you_need_tags']['field'] = 'field_what_do_you_need_tags';
  $handler->display->display_options['fields']['field_what_do_you_need_tags']['label'] = 'Type';
  $handler->display->display_options['fields']['field_what_do_you_need_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_what_do_you_need_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_what_do_you_need_tags']['delta_offset'] = '0';
  /* Field: Content: Who are you tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'Provider(s)';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ed_updates' => 'ed_updates',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Priority (field_priority) */
  $handler->display->display_options['filters']['field_priority_value']['id'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['table'] = 'field_data_field_priority';
  $handler->display->display_options['filters']['field_priority_value']['field'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['value'] = array(
    'all' => 'all',
    1 => '1',
    2 => '2',
    0 => '0',
    -1 => '-1',
  );
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
  /* Filter criterion: Type */
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['id'] = 'field_what_do_you_need_tags_tid';
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['table'] = 'field_data_field_what_do_you_need_tags';
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['field'] = 'field_what_do_you_need_tags_tid';
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['ui_name'] = 'Type';
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['expose']['operator_id'] = 'field_what_do_you_need_tags_tid_op';
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['expose']['operator'] = 'field_what_do_you_need_tags_tid_op';
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['expose']['identifier'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    11 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['group_info']['label'] = 'What do you need tags (field_what_do_you_need_tags)';
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['group_info']['identifier'] = 'field_what_do_you_need_tags_tid';
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['vocabulary'] = 'what_do_you_need_';
  $handler->display->display_options['filters']['field_what_do_you_need_tags_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Who are you tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    7 => '7',
    8 => '8',
    14 => '14',
    11 => '11',
    9 => '9',
    12 => '12',
    294 => '294',
    272 => '272',
    292 => '292',
    221 => '221',
    268 => '268',
    265 => '265',
    266 => '266',
    13 => '13',
    308 => '308',
    3 => '3',
    1 => '1',
    5 => '5',
    289 => '289',
    4 => '4',
    6 => '6',
    295 => '295',
    275 => '275',
    2 => '2',
    284 => '284',
    270 => '270',
    226 => '226',
    15 => '15',
    26 => '26',
    28 => '28',
    27 => '27',
    29 => '29',
    30 => '30',
    297 => '297',
    43 => '43',
    302 => '302',
    22 => '22',
    23 => '23',
    25 => '25',
    24 => '24',
    293 => '293',
    42 => '42',
    274 => '274',
    31 => '31',
    32 => '32',
    33 => '33',
    287 => '287',
    17 => '17',
    298 => '298',
    35 => '35',
    271 => '271',
    34 => '34',
    36 => '36',
    37 => '37',
    39 => '39',
    38 => '38',
    286 => '286',
    283 => '283',
    16 => '16',
    40 => '40',
    41 => '41',
    277 => '277',
    306 => '306',
    278 => '278',
    18 => '18',
    21 => '21',
    19 => '19',
  );
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Provider';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => 0,
    1 => '1',
    3 => 0,
    6 => 0,
    11 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['group_info']['label'] = 'Who are you tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['group_info']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_tags_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_tags_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'apex-updates';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['ed_updates'] = $view;

  return $export;
}
