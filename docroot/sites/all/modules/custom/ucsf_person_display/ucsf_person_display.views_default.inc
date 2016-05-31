<?php
/**
 * @file
 * ucsf_person_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ucsf_person_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ucsf_person_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'UCSF Person View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Headshot Photo */
  $handler->display->display_options['fields']['field_person_headshot_photo']['id'] = 'field_person_headshot_photo';
  $handler->display->display_options['fields']['field_person_headshot_photo']['table'] = 'field_data_field_person_headshot_photo';
  $handler->display->display_options['fields']['field_person_headshot_photo']['field'] = 'field_person_headshot_photo';
  $handler->display->display_options['fields']['field_person_headshot_photo']['label'] = '';
  $handler->display->display_options['fields']['field_person_headshot_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_headshot_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_headshot_photo']['settings'] = array(
    'image_style' => 'starter_kit_quarter',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['field_person_working_title']['id'] = 'field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['table'] = 'field_data_field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['field'] = 'field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_working_title']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_person_email']['id'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['table'] = 'field_data_field_person_email';
  $handler->display->display_options['fields']['field_person_email']['field'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_person_email']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Person Type (field_person_type) */
  $handler->display->display_options['arguments']['field_person_type_tid']['id'] = 'field_person_type_tid';
  $handler->display->display_options['arguments']['field_person_type_tid']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['arguments']['field_person_type_tid']['field'] = 'field_person_type_tid';
  $handler->display->display_options['arguments']['field_person_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_person_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_person_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_person_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_person_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_person_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_person_type_tid']['validate_options']['vocabularies'] = array(
    'openacademy_person_type' => 'openacademy_person_type',
  );
  $handler->display->display_options['arguments']['field_person_type_tid']['validate_options']['type'] = 'convert';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Address (field_person_address_postal:first_name) */
  $handler->display->display_options['filters']['field_person_address_postal_first_name']['id'] = 'field_person_address_postal_first_name';
  $handler->display->display_options['filters']['field_person_address_postal_first_name']['table'] = 'field_data_field_person_address_postal';
  $handler->display->display_options['filters']['field_person_address_postal_first_name']['field'] = 'field_person_address_postal_first_name';

  /* Display: People Page */
  $handler = $view->new_display('page', 'People Page', 'page');
  $handler->display->display_options['display_description'] = 'This is the page of people';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Headshot Photo */
  $handler->display->display_options['fields']['field_person_headshot_photo']['id'] = 'field_person_headshot_photo';
  $handler->display->display_options['fields']['field_person_headshot_photo']['table'] = 'field_data_field_person_headshot_photo';
  $handler->display->display_options['fields']['field_person_headshot_photo']['field'] = 'field_person_headshot_photo';
  $handler->display->display_options['fields']['field_person_headshot_photo']['label'] = '';
  $handler->display->display_options['fields']['field_person_headshot_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_headshot_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_headshot_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_headshot_photo']['empty'] = '<img src="/sites/all/modules/custom/ucsf_person_content_type/images/person-placeholder.png" alt="Person Placeholder Image" width="170" height="170" />';
  $handler->display->display_options['fields']['field_person_headshot_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_headshot_photo']['settings'] = array(
    'image_style' => 'starterkit_square_sixth',
    'image_link' => '',
  );
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['field_person_working_title']['id'] = 'field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['table'] = 'field_data_field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['field'] = 'field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_working_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_working_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_working_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_working_title']['type'] = 'text_plain';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_person_email']['id'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['table'] = 'field_data_field_person_email';
  $handler->display->display_options['fields']['field_person_email']['field'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_person_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_email']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="person-list-item">
<a href="/node/[nid]">[field_person_headshot_photo]</a>
<h2><a href="/node/[nid]">[title]</a></h2>
<p>[field_person_working_title]<br />
[field_person_email]
</p>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Last Name (field_person_last_name) */
  $handler->display->display_options['sorts']['field_person_last_name_value']['id'] = 'field_person_last_name_value';
  $handler->display->display_options['sorts']['field_person_last_name_value']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['sorts']['field_person_last_name_value']['field'] = 'field_person_last_name_value';
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
    'ucsf_person' => 'ucsf_person',
  );
  $handler->display->display_options['path'] = 'people';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'People';
  $handler->display->display_options['menu']['description'] = 'People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Person Block */
  $handler = $view->new_display('block', 'Person Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['display_description'] = 'Block with working title, what I do, research bio, and publications';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Profiles Link */
  $handler->display->display_options['fields']['field_profiles_link']['id'] = 'field_profiles_link';
  $handler->display->display_options['fields']['field_profiles_link']['table'] = 'field_data_field_profiles_link';
  $handler->display->display_options['fields']['field_profiles_link']['field'] = 'field_profiles_link';
  $handler->display->display_options['fields']['field_profiles_link']['label'] = '';
  $handler->display->display_options['fields']['field_profiles_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profiles_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_profiles_link']['alter']['text'] = '<br />[field_profiles_link]';
  $handler->display->display_options['fields']['field_profiles_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profiles_link']['click_sort_column'] = 'url';
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['field_person_working_title']['id'] = 'field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['table'] = 'field_data_field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['field'] = 'field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_working_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_working_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_working_title']['alter']['text'] = '<p>[field_person_working_title]
[field_profiles_link]</p>';
  $handler->display->display_options['fields']['field_person_working_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_working_title']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_person_working_title']['element_wrapper_class'] = 'byline';
  $handler->display->display_options['fields']['field_person_working_title']['hide_empty'] = TRUE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_person_address_postal']['id'] = 'field_person_address_postal';
  $handler->display->display_options['fields']['field_person_address_postal']['table'] = 'field_data_field_person_address_postal';
  $handler->display->display_options['fields']['field_person_address_postal']['field'] = 'field_person_address_postal';
  $handler->display->display_options['fields']['field_person_address_postal']['label'] = '';
  $handler->display->display_options['fields']['field_person_address_postal']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_address_postal']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_address_postal']['alter']['text'] = '<p>[field_person_address_postal]</p>';
  $handler->display->display_options['fields']['field_person_address_postal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_address_postal']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_person_address_postal']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_person_fax']['id'] = 'field_person_fax';
  $handler->display->display_options['fields']['field_person_fax']['table'] = 'field_data_field_person_fax';
  $handler->display->display_options['fields']['field_person_fax']['field'] = 'field_person_fax';
  $handler->display->display_options['fields']['field_person_fax']['label'] = '';
  $handler->display->display_options['fields']['field_person_fax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_fax']['alter']['text'] = 'fx: [field_person_fax]<br />';
  $handler->display->display_options['fields']['field_person_fax']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_campus_phone']['id'] = 'field_campus_phone';
  $handler->display->display_options['fields']['field_campus_phone']['table'] = 'field_data_field_campus_phone';
  $handler->display->display_options['fields']['field_campus_phone']['field'] = 'field_campus_phone';
  $handler->display->display_options['fields']['field_campus_phone']['label'] = '';
  $handler->display->display_options['fields']['field_campus_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campus_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_campus_phone']['alter']['text'] = 'ph: [field_campus_phone]<br />';
  $handler->display->display_options['fields']['field_campus_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Private Practice Address */
  $handler->display->display_options['fields']['field_private_practice_address']['id'] = 'field_private_practice_address';
  $handler->display->display_options['fields']['field_private_practice_address']['table'] = 'field_data_field_private_practice_address';
  $handler->display->display_options['fields']['field_private_practice_address']['field'] = 'field_private_practice_address';
  $handler->display->display_options['fields']['field_private_practice_address']['label'] = '';
  $handler->display->display_options['fields']['field_private_practice_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_private_practice_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_private_practice_address']['alter']['text'] = '<h4>Private Practice</h4>
<p>[field_private_practice_address]</p>';
  $handler->display->display_options['fields']['field_private_practice_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_private_practice_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_private_practice_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Private Practice Phone */
  $handler->display->display_options['fields']['field_private_practice_phone']['id'] = 'field_private_practice_phone';
  $handler->display->display_options['fields']['field_private_practice_phone']['table'] = 'field_data_field_private_practice_phone';
  $handler->display->display_options['fields']['field_private_practice_phone']['field'] = 'field_private_practice_phone';
  $handler->display->display_options['fields']['field_private_practice_phone']['label'] = '';
  $handler->display->display_options['fields']['field_private_practice_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_private_practice_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_private_practice_phone']['alter']['text'] = 'private practice: [field_private_practice_phone]<br />';
  $handler->display->display_options['fields']['field_private_practice_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_person_email']['id'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['table'] = 'field_data_field_person_email';
  $handler->display->display_options['fields']['field_person_email']['field'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_person_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_email']['alter']['text'] = '[field_person_working_title]

<p>em: [field_person_email]<br />
[field_campus_phone]
[field_private_practice_phone]
[field_person_fax]
</p>
[field_person_address_postal]
[field_private_practice_address]';
  $handler->display->display_options['fields']['field_person_email']['element_label_colon'] = FALSE;
  /* Field: Content: What I do */
  $handler->display->display_options['fields']['field_person_what_i_do_text']['id'] = 'field_person_what_i_do_text';
  $handler->display->display_options['fields']['field_person_what_i_do_text']['table'] = 'field_data_field_person_what_i_do_text';
  $handler->display->display_options['fields']['field_person_what_i_do_text']['field'] = 'field_person_what_i_do_text';
  $handler->display->display_options['fields']['field_person_what_i_do_text']['label'] = '';
  $handler->display->display_options['fields']['field_person_what_i_do_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_what_i_do_text']['alter']['text'] = '<h2>What I Do</h2>
[field_person_what_i_do_text]';
  $handler->display->display_options['fields']['field_person_what_i_do_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_what_i_do_text']['empty'] = '[field_person_email]';
  $handler->display->display_options['fields']['field_person_what_i_do_text']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'ucsf_person' => 'ucsf_person',
  );

  /* Display: Contact/Image Block */
  $handler = $view->new_display('block', 'Contact/Image Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['display_description'] = 'Block with profile image and contact information';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Headshot Photo */
  $handler->display->display_options['fields']['field_person_headshot_photo']['id'] = 'field_person_headshot_photo';
  $handler->display->display_options['fields']['field_person_headshot_photo']['table'] = 'field_data_field_person_headshot_photo';
  $handler->display->display_options['fields']['field_person_headshot_photo']['field'] = 'field_person_headshot_photo';
  $handler->display->display_options['fields']['field_person_headshot_photo']['label'] = '';
  $handler->display->display_options['fields']['field_person_headshot_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_headshot_photo']['empty'] = '<img src="/sites/all/modules/custom/ucsf_person_content_type/images/person-placeholder.png" alt="Person Placeholder Image" />';
  $handler->display->display_options['fields']['field_person_headshot_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_headshot_photo']['settings'] = array(
    'image_style' => 'starter_kit_half',
    'image_link' => '',
  );
  /* Field: Content: Profiles Link */
  $handler->display->display_options['fields']['field_profiles_link']['id'] = 'field_profiles_link';
  $handler->display->display_options['fields']['field_profiles_link']['table'] = 'field_data_field_profiles_link';
  $handler->display->display_options['fields']['field_profiles_link']['field'] = 'field_profiles_link';
  $handler->display->display_options['fields']['field_profiles_link']['label'] = '';
  $handler->display->display_options['fields']['field_profiles_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profiles_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_profiles_link']['alter']['text'] = '<br />[field_profiles_link]';
  $handler->display->display_options['fields']['field_profiles_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profiles_link']['click_sort_column'] = 'url';
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['field_person_working_title']['id'] = 'field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['table'] = 'field_data_field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['field'] = 'field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_working_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_working_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_working_title']['alter']['text'] = '<p>[field_person_working_title]
[field_profiles_link]</p>';
  $handler->display->display_options['fields']['field_person_working_title']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_campus_phone']['id'] = 'field_campus_phone';
  $handler->display->display_options['fields']['field_campus_phone']['table'] = 'field_data_field_campus_phone';
  $handler->display->display_options['fields']['field_campus_phone']['field'] = 'field_campus_phone';
  $handler->display->display_options['fields']['field_campus_phone']['label'] = '';
  $handler->display->display_options['fields']['field_campus_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campus_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_campus_phone']['alter']['text'] = 'ph: [field_campus_phone]<br />';
  $handler->display->display_options['fields']['field_campus_phone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_campus_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus_phone']['hide_empty'] = TRUE;
  /* Field: Content: Private Practice Phone */
  $handler->display->display_options['fields']['field_private_practice_phone']['id'] = 'field_private_practice_phone';
  $handler->display->display_options['fields']['field_private_practice_phone']['table'] = 'field_data_field_private_practice_phone';
  $handler->display->display_options['fields']['field_private_practice_phone']['field'] = 'field_private_practice_phone';
  $handler->display->display_options['fields']['field_private_practice_phone']['label'] = '';
  $handler->display->display_options['fields']['field_private_practice_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_private_practice_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_private_practice_phone']['alter']['text'] = 'private practice: [field_private_practice_phone]<br />';
  $handler->display->display_options['fields']['field_private_practice_phone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_private_practice_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_private_practice_phone']['hide_empty'] = TRUE;
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_person_fax']['id'] = 'field_person_fax';
  $handler->display->display_options['fields']['field_person_fax']['table'] = 'field_data_field_person_fax';
  $handler->display->display_options['fields']['field_person_fax']['field'] = 'field_person_fax';
  $handler->display->display_options['fields']['field_person_fax']['label'] = '';
  $handler->display->display_options['fields']['field_person_fax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_fax']['alter']['text'] = 'fx: [field_person_fax]<br />';
  $handler->display->display_options['fields']['field_person_fax']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_person_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_fax']['hide_empty'] = TRUE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_person_address_postal']['id'] = 'field_person_address_postal';
  $handler->display->display_options['fields']['field_person_address_postal']['table'] = 'field_data_field_person_address_postal';
  $handler->display->display_options['fields']['field_person_address_postal']['field'] = 'field_person_address_postal';
  $handler->display->display_options['fields']['field_person_address_postal']['label'] = '';
  $handler->display->display_options['fields']['field_person_address_postal']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_address_postal']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_address_postal']['alter']['text'] = '<p>[field_person_address_postal]</p>';
  $handler->display->display_options['fields']['field_person_address_postal']['element_type'] = '0';
  $handler->display->display_options['fields']['field_person_address_postal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_address_postal']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_person_address_postal']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_person_address_postal']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Private Practice Address */
  $handler->display->display_options['fields']['field_private_practice_address']['id'] = 'field_private_practice_address';
  $handler->display->display_options['fields']['field_private_practice_address']['table'] = 'field_data_field_private_practice_address';
  $handler->display->display_options['fields']['field_private_practice_address']['field'] = 'field_private_practice_address';
  $handler->display->display_options['fields']['field_private_practice_address']['label'] = '';
  $handler->display->display_options['fields']['field_private_practice_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_private_practice_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_private_practice_address']['alter']['text'] = '<h4>Private Practice</h4>
<p>[field_private_practice_address]</p>';
  $handler->display->display_options['fields']['field_private_practice_address']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_private_practice_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_private_practice_address']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_private_practice_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_private_practice_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_person_email']['id'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['table'] = 'field_data_field_person_email';
  $handler->display->display_options['fields']['field_person_email']['field'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_person_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_email']['alter']['text'] = '[field_person_working_title]

<p>em: [field_person_email]<br />
[field_campus_phone]
[field_private_practice_phone]
[field_person_fax]
</p>
[field_person_address_postal]
[field_private_practice_address]';
  $handler->display->display_options['fields']['field_person_email']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_person_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_email']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_person_email']['hide_empty'] = TRUE;
  /* Field: Content: What I do */
  $handler->display->display_options['fields']['field_person_what_i_do_text']['id'] = 'field_person_what_i_do_text';
  $handler->display->display_options['fields']['field_person_what_i_do_text']['table'] = 'field_data_field_person_what_i_do_text';
  $handler->display->display_options['fields']['field_person_what_i_do_text']['field'] = 'field_person_what_i_do_text';
  $handler->display->display_options['fields']['field_person_what_i_do_text']['label'] = '';
  $handler->display->display_options['fields']['field_person_what_i_do_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_what_i_do_text']['alter']['text'] = '[field_person_email]';
  $handler->display->display_options['fields']['field_person_what_i_do_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'ucsf_person' => 'ucsf_person',
  );
  $translatables['ucsf_person_view'] = array(
    t('Master'),
    t('People'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('People Page'),
    t('This is the page of people'),
    t('<img src="/sites/all/modules/custom/ucsf_person_content_type/images/person-placeholder.png" alt="Person Placeholder Image" width="200" height="200" />'),
    t('<div class="person-list-item">
<a href="/node/[nid]">[field_person_headshot_photo]</a>
<h2><a href="/node/[nid]">[title]</a></h2>
<p>[field_person_working_title]<br />
[field_person_email]
</p>
</div>'),
    t('Person Block'),
    t('<none>'),
    t('Block with working title, what I do, research bio, and publications'),
    t('<br />[field_profiles_link]'),
    t('<p>[field_person_working_title]
[field_profiles_link]</p>'),
    t('<p>[field_person_address_postal]</p>'),
    t('fx: [field_person_fax]<br />'),
    t('ph: [field_campus_phone]<br />'),
    t('<h4>Private Practice</h4>
<p>[field_private_practice_address]</p>'),
    t('private practice: [field_private_practice_phone]<br />'),
    t('[field_person_working_title]

<p>em: [field_person_email]<br />
[field_campus_phone]
[field_private_practice_phone]
[field_person_fax]
</p>
[field_person_address_postal]
[field_private_practice_address]'),
    t('<h2>What I Do</h2>
[field_person_what_i_do_text]'),
    t('[field_person_email]'),
    t('Contact/Image Block'),
    t('Block with profile image and contact information'),
    t('<img src="/sites/all/modules/custom/ucsf_person_content_type/images/person-placeholder.png" alt="Person Placeholder Image" />'),
  );
  $export['ucsf_person_view'] = $view;

  return $export;
}
