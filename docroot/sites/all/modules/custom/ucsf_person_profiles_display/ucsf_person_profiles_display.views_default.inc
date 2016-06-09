<?php
/**
 * @file
 * ucsf_person_profiles_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ucsf_person_profiles_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ucsf_profiles_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'UCSF Profiles View';
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
    'image_style' => 'medium',
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

  /* Display: Profile Block */
  $handler = $view->new_display('block', 'Profile Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['display_description'] = 'Block with research bio and publications';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Research Biography */
  $handler->display->display_options['fields']['field_person_research_biography']['id'] = 'field_person_research_biography';
  $handler->display->display_options['fields']['field_person_research_biography']['table'] = 'field_data_field_person_research_biography';
  $handler->display->display_options['fields']['field_person_research_biography']['field'] = 'field_person_research_biography';
  $handler->display->display_options['fields']['field_person_research_biography']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_person_research_biography']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_research_biography']['hide_empty'] = TRUE;
  /* Field: Content: Publications */
  $handler->display->display_options['fields']['field_person_publications_list']['id'] = 'field_person_publications_list';
  $handler->display->display_options['fields']['field_person_publications_list']['table'] = 'field_data_field_person_publications_list';
  $handler->display->display_options['fields']['field_person_publications_list']['field'] = 'field_person_publications_list';
  $handler->display->display_options['fields']['field_person_publications_list']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_person_publications_list']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_publications_list']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_person_publications_list']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_person_publications_list']['multi_type'] = 'ol';
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
  $translatables['ucsf_profiles_view'] = array(
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
    t('Profile Block'),
    t('<none>'),
    t('Block with research bio and publications'),
    t('Research Biography'),
    t('Publications'),
  );
  $export['ucsf_profiles_view'] = $view;

  return $export;
}
