<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_people_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ucsf_pharmacy_syndicated_people_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'people';
  $view->description = 'Main views for listing people on the People section of the website.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'People Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_person_trackback_plain' => 'field_person_trackback_plain',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_person_trackback_plain' => array(
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
  );
  /* Relationship: Content: Person Primary Department (field_person_primary_department) */
  $handler->display->display_options['relationships']['field_person_primary_department_tid']['id'] = 'field_person_primary_department_tid';
  $handler->display->display_options['relationships']['field_person_primary_department_tid']['table'] = 'field_data_field_person_primary_department';
  $handler->display->display_options['relationships']['field_person_primary_department_tid']['field'] = 'field_person_primary_department_tid';
  /* Field: Content: Person trackback_plain */
  $handler->display->display_options['fields']['field_person_trackback_plain']['id'] = 'field_person_trackback_plain';
  $handler->display->display_options['fields']['field_person_trackback_plain']['table'] = 'field_data_field_person_trackback_plain';
  $handler->display->display_options['fields']['field_person_trackback_plain']['field'] = 'field_person_trackback_plain';
  $handler->display->display_options['fields']['field_person_trackback_plain']['label'] = '';
  $handler->display->display_options['fields']['field_person_trackback_plain']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_trackback_plain']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_trackback_plain']['type'] = 'text_plain';
  /* Field: Content: Person Image Credit */
  $handler->display->display_options['fields']['field_person_image_credit']['id'] = 'field_person_image_credit';
  $handler->display->display_options['fields']['field_person_image_credit']['table'] = 'field_data_field_person_image_credit';
  $handler->display->display_options['fields']['field_person_image_credit']['field'] = 'field_person_image_credit';
  $handler->display->display_options['fields']['field_person_image_credit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_image_credit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_image_credit']['alter']['text'] = '<div class="views_field_person_image_credit">Image credit: [field_person_image_credit]</div>';
  $handler->display->display_options['fields']['field_person_image_credit']['click_sort_column'] = 'url';
  /* Field: Content: Person headshot */
  $handler->display->display_options['fields']['field_person_headshot']['id'] = 'field_person_headshot';
  $handler->display->display_options['fields']['field_person_headshot']['table'] = 'field_data_field_person_headshot';
  $handler->display->display_options['fields']['field_person_headshot']['field'] = 'field_person_headshot';
  $handler->display->display_options['fields']['field_person_headshot']['label'] = '';
  $handler->display->display_options['fields']['field_person_headshot']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_headshot']['alter']['text'] = '<a href=\'[field_person_trackback_plain]\'>[field_person_headshot]</a>[field_person_image_credit]';
  $handler->display->display_options['fields']['field_person_headshot']['alter']['path'] = '[field_person_trackback_plain]';
  $handler->display->display_options['fields']['field_person_headshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_headshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_headshot']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_person_headshot']['settings'] = array(
    'file_view_mode' => 'square_sixth',
  );
  /* Field: Name */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Name';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]<br />';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_person_trackback_plain]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Person admin title */
  $handler->display->display_options['fields']['field_person_admin_title']['id'] = 'field_person_admin_title';
  $handler->display->display_options['fields']['field_person_admin_title']['table'] = 'field_data_field_person_admin_title';
  $handler->display->display_options['fields']['field_person_admin_title']['field'] = 'field_person_admin_title';
  $handler->display->display_options['fields']['field_person_admin_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_admin_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_admin_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_admin_title']['alter']['text'] = '<div class=\'person_do_title\'>[field_person_admin_title]</div>';
  $handler->display->display_options['fields']['field_person_admin_title']['element_label_colon'] = FALSE;
  /* Field: Content: Person working title */
  $handler->display->display_options['fields']['field_person_working_title']['id'] = 'field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['table'] = 'field_data_field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['field'] = 'field_person_working_title';
  $handler->display->display_options['fields']['field_person_working_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_working_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_working_title']['alter']['text'] = '[field_person_working_title]<br />';
  $handler->display->display_options['fields']['field_person_working_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_working_title']['element_default_classes'] = FALSE;
  /* Field: Content: Person Primary Department */
  $handler->display->display_options['fields']['field_person_primary_department']['id'] = 'field_person_primary_department';
  $handler->display->display_options['fields']['field_person_primary_department']['table'] = 'field_data_field_person_primary_department';
  $handler->display->display_options['fields']['field_person_primary_department']['field'] = 'field_person_primary_department';
  $handler->display->display_options['fields']['field_person_primary_department']['label'] = '';
  $handler->display->display_options['fields']['field_person_primary_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_primary_department']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_primary_department']['alter']['text'] = '[field_person_primary_department]';
  $handler->display->display_options['fields']['field_person_primary_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_primary_department']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Person site link */
  $handler->display->display_options['fields']['field_person_site_link']['id'] = 'field_person_site_link';
  $handler->display->display_options['fields']['field_person_site_link']['table'] = 'field_data_field_person_site_link';
  $handler->display->display_options['fields']['field_person_site_link']['field'] = 'field_person_site_link';
  $handler->display->display_options['fields']['field_person_site_link']['label'] = '';
  $handler->display->display_options['fields']['field_person_site_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_site_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_site_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_person_site_link']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_person_site_link']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=person_name><h2>[title]</h2></div>
[field_person_admin_title]
<div class=person_working_title>[field_person_working_title]</div>
<div class=person_dept>[field_person_primary_department]</div>
<div class=person_links>[field_person_site_link]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Person research area */
  $handler->display->display_options['fields']['field_person_research_area']['id'] = 'field_person_research_area';
  $handler->display->display_options['fields']['field_person_research_area']['table'] = 'field_data_field_person_research_area';
  $handler->display->display_options['fields']['field_person_research_area']['field'] = 'field_person_research_area';
  $handler->display->display_options['fields']['field_person_research_area']['label'] = '';
  $handler->display->display_options['fields']['field_person_research_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_research_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_research_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_person_research_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_person_research_area']['multi_type'] = 'ul';
  /* Field: Research Area - Display */
  $handler->display->display_options['fields']['field_person_research_area_1']['id'] = 'field_person_research_area_1';
  $handler->display->display_options['fields']['field_person_research_area_1']['table'] = 'field_data_field_person_research_area';
  $handler->display->display_options['fields']['field_person_research_area_1']['field'] = 'field_person_research_area';
  $handler->display->display_options['fields']['field_person_research_area_1']['ui_name'] = 'Research Area - Display';
  $handler->display->display_options['fields']['field_person_research_area_1']['label'] = '';
  $handler->display->display_options['fields']['field_person_research_area_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_research_area_1']['alter']['text'] = '<h3>Research Area</h3>
[field_person_research_area]';
  $handler->display->display_options['fields']['field_person_research_area_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_research_area_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_person_research_area_1']['delta_offset'] = '0';
  /* Field: Content: Person clinical experise */
  $handler->display->display_options['fields']['field_person_clinical_experise']['id'] = 'field_person_clinical_experise';
  $handler->display->display_options['fields']['field_person_clinical_experise']['table'] = 'field_data_field_person_clinical_experise';
  $handler->display->display_options['fields']['field_person_clinical_experise']['field'] = 'field_person_clinical_experise';
  $handler->display->display_options['fields']['field_person_clinical_experise']['label'] = '';
  $handler->display->display_options['fields']['field_person_clinical_experise']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_clinical_experise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_clinical_experise']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_person_clinical_experise']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_person_clinical_experise']['multi_type'] = 'ul';
  /* Field: Clinical Research - display */
  $handler->display->display_options['fields']['field_person_clinical_experise_1']['id'] = 'field_person_clinical_experise_1';
  $handler->display->display_options['fields']['field_person_clinical_experise_1']['table'] = 'field_data_field_person_clinical_experise';
  $handler->display->display_options['fields']['field_person_clinical_experise_1']['field'] = 'field_person_clinical_experise';
  $handler->display->display_options['fields']['field_person_clinical_experise_1']['ui_name'] = 'Clinical Research - display';
  $handler->display->display_options['fields']['field_person_clinical_experise_1']['label'] = '';
  $handler->display->display_options['fields']['field_person_clinical_experise_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_clinical_experise_1']['alter']['text'] = '<h3>Clinical Specialty</h3>
[field_person_clinical_experise]';
  $handler->display->display_options['fields']['field_person_clinical_experise_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_clinical_experise_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_person_clinical_experise_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_person_clinical_experise_1']['delta_offset'] = '0';
  /* Sort criterion: Content: Person last name (field_person_last_name) */
  $handler->display->display_options['sorts']['field_person_last_name_value']['id'] = 'field_person_last_name_value';
  $handler->display->display_options['sorts']['field_person_last_name_value']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['sorts']['field_person_last_name_value']['field'] = 'field_person_last_name_value';
  /* Sort criterion: Content: Person first name (field_person_first_name) */
  $handler->display->display_options['sorts']['field_person_first_name_value']['id'] = 'field_person_first_name_value';
  $handler->display->display_options['sorts']['field_person_first_name_value']['table'] = 'field_data_field_person_first_name';
  $handler->display->display_options['sorts']['field_person_first_name_value']['field'] = 'field_person_first_name_value';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Faculty members engaged in this research area';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'person_clinical_expertise' => 'person_clinical_expertise',
    'research_areas' => 'research_areas',
  );
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'syndicated_person' => 'syndicated_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page-All */
  $handler = $view->new_display('page', 'Page-All', 'page_1');
  $handler->display->display_options['path'] = 'people/all';

  /* Display: Page - Faculty */
  $handler = $view->new_display('page', 'Page - Faculty', 'page_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'syndicated_person' => 'syndicated_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Person type text (field_person_type_text) */
  $handler->display->display_options['filters']['field_person_type_text_value']['id'] = 'field_person_type_text_value';
  $handler->display->display_options['filters']['field_person_type_text_value']['table'] = 'field_data_field_person_type_text';
  $handler->display->display_options['filters']['field_person_type_text_value']['field'] = 'field_person_type_text_value';
  $handler->display->display_options['filters']['field_person_type_text_value']['value'] = 'faculty';
  $handler->display->display_options['path'] = 'people/faculty';

  /* Display: Page - Staff */
  $handler = $view->new_display('page', 'Page - Staff', 'page_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'syndicated_person' => 'syndicated_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Person type text (field_person_type_text) */
  $handler->display->display_options['filters']['field_person_type_text_value']['id'] = 'field_person_type_text_value';
  $handler->display->display_options['filters']['field_person_type_text_value']['table'] = 'field_data_field_person_type_text';
  $handler->display->display_options['filters']['field_person_type_text_value']['field'] = 'field_person_type_text_value';
  $handler->display->display_options['filters']['field_person_type_text_value']['value'] = 'staff';
  $handler->display->display_options['path'] = 'people/staff';

  /* Display: Page-Department Leadership */
  $handler = $view->new_display('page', 'Page-Department Leadership', 'page_5');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Person Primary Department (field_person_primary_department) */
  $handler->display->display_options['relationships']['field_person_primary_department_tid']['id'] = 'field_person_primary_department_tid';
  $handler->display->display_options['relationships']['field_person_primary_department_tid']['table'] = 'field_data_field_person_primary_department';
  $handler->display->display_options['relationships']['field_person_primary_department_tid']['field'] = 'field_person_primary_department_tid';
  /* Relationship: Content: Person headshot (field_person_headshot:fid) */
  $handler->display->display_options['relationships']['field_person_headshot_fid']['id'] = 'field_person_headshot_fid';
  $handler->display->display_options['relationships']['field_person_headshot_fid']['table'] = 'field_data_field_person_headshot';
  $handler->display->display_options['relationships']['field_person_headshot_fid']['field'] = 'field_person_headshot_fid';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'dept leadership queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'dept_leadership_queue' => 'dept_leadership_queue',
    'featured_spotlight' => 0,
    'subtle_spotlight' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['path'] = 'people/department-leadership';

  /* Display: Page - Faculty by Area */
  $handler = $view->new_display('page', 'Page - Faculty by Area', 'page_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Person trackback_plain */
  $handler->display->display_options['fields']['field_person_trackback_plain']['id'] = 'field_person_trackback_plain';
  $handler->display->display_options['fields']['field_person_trackback_plain']['table'] = 'field_data_field_person_trackback_plain';
  $handler->display->display_options['fields']['field_person_trackback_plain']['field'] = 'field_person_trackback_plain';
  $handler->display->display_options['fields']['field_person_trackback_plain']['label'] = '';
  $handler->display->display_options['fields']['field_person_trackback_plain']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_trackback_plain']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_trackback_plain']['type'] = 'text_plain';
  /* Field: Name */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Name';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]<br />';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_person_trackback_plain]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'syndicated_person' => 'syndicated_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Person type text (field_person_type_text) */
  $handler->display->display_options['filters']['field_person_type_text_value']['id'] = 'field_person_type_text_value';
  $handler->display->display_options['filters']['field_person_type_text_value']['table'] = 'field_data_field_person_type_text';
  $handler->display->display_options['filters']['field_person_type_text_value']['field'] = 'field_person_type_text_value';
  $handler->display->display_options['filters']['field_person_type_text_value']['value'] = 'faculty';
  $handler->display->display_options['path'] = 'people/faculty/area/%';

  /* Display: Faculty by Area */
  $handler = $view->new_display('panel_pane', 'Faculty by Area', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Faculty members:';
  $handler->display->display_options['display_description'] = '(provide TID for research area)';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'columns-2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Person trackback_plain */
  $handler->display->display_options['fields']['field_person_trackback_plain']['id'] = 'field_person_trackback_plain';
  $handler->display->display_options['fields']['field_person_trackback_plain']['table'] = 'field_data_field_person_trackback_plain';
  $handler->display->display_options['fields']['field_person_trackback_plain']['field'] = 'field_person_trackback_plain';
  $handler->display->display_options['fields']['field_person_trackback_plain']['label'] = '';
  $handler->display->display_options['fields']['field_person_trackback_plain']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_trackback_plain']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_trackback_plain']['type'] = 'text_plain';
  /* Field: Name */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Name';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]<br />';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_person_trackback_plain]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'syndicated_person' => 'syndicated_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Person type text (field_person_type_text) */
  $handler->display->display_options['filters']['field_person_type_text_value']['id'] = 'field_person_type_text_value';
  $handler->display->display_options['filters']['field_person_type_text_value']['table'] = 'field_data_field_person_type_text';
  $handler->display->display_options['filters']['field_person_type_text_value']['field'] = 'field_person_type_text_value';
  $handler->display->display_options['filters']['field_person_type_text_value']['value'] = 'faculty';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:file.field_file_image_alt_text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'TID of Research or Clinical area (Content: Has taxonomy term ID)',
    ),
  );
  $export['people'] = $view;

  return $export;
}
