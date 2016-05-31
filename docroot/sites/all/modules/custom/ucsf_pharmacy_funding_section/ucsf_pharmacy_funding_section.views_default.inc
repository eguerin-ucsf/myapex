<?php
/**
 * @file
 * ucsf_pharmacy_funding_section.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ucsf_pharmacy_funding_section_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'funding';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Funding';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Expenditures by funding source';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_funding_type';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_funding_amount' => 'field_funding_amount',
    'counter' => 0,
    'field_funding_type_1' => 0,
    'field_funding_amount_1' => 0,
    'field_funding_budget' => 0,
    'expression' => 0,
    'field_funding_type' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'counter' => '#2f7ed8',
    'field_funding_type_1' => '#0d233a',
    'field_funding_amount_1' => '#8bbc21',
    'field_funding_amount' => '#910000',
    'field_funding_budget' => '#1aadce',
    'expression' => '#492970',
    'field_funding_type' => '#f28f43',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  /* Relationship: Content: Funding categories (field_funding_categories) */
  $handler->display->display_options['relationships']['field_funding_categories_value']['id'] = 'field_funding_categories_value';
  $handler->display->display_options['relationships']['field_funding_categories_value']['table'] = 'field_data_field_funding_categories';
  $handler->display->display_options['relationships']['field_funding_categories_value']['field'] = 'field_funding_categories_value';
  $handler->display->display_options['relationships']['field_funding_categories_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_funding_categories_value']['delta'] = '-1';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '0';
  /* Field: Content: Fiscal year ending in: */
  $handler->display->display_options['fields']['field_funding_fiscal_year']['id'] = 'field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['table'] = 'field_data_field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['field'] = 'field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['label'] = '';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_fiscal_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_fiscal_year']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funding_fiscal_year']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Funding category */
  $handler->display->display_options['fields']['field_funding_type_1']['id'] = 'field_funding_type_1';
  $handler->display->display_options['fields']['field_funding_type_1']['table'] = 'field_data_field_funding_type';
  $handler->display->display_options['fields']['field_funding_type_1']['field'] = 'field_funding_type';
  $handler->display->display_options['fields']['field_funding_type_1']['relationship'] = 'field_funding_categories_value';
  /* Field: Amount (pretty) */
  $handler->display->display_options['fields']['field_funding_amount_1']['id'] = 'field_funding_amount_1';
  $handler->display->display_options['fields']['field_funding_amount_1']['table'] = 'field_data_field_funding_amount';
  $handler->display->display_options['fields']['field_funding_amount_1']['field'] = 'field_funding_amount';
  $handler->display->display_options['fields']['field_funding_amount_1']['relationship'] = 'field_funding_categories_value';
  $handler->display->display_options['fields']['field_funding_amount_1']['ui_name'] = 'Amount (pretty)';
  $handler->display->display_options['fields']['field_funding_amount_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_amount_1']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Amount CHART */
  $handler->display->display_options['fields']['field_funding_amount']['id'] = 'field_funding_amount';
  $handler->display->display_options['fields']['field_funding_amount']['table'] = 'field_data_field_funding_amount';
  $handler->display->display_options['fields']['field_funding_amount']['field'] = 'field_funding_amount';
  $handler->display->display_options['fields']['field_funding_amount']['relationship'] = 'field_funding_categories_value';
  $handler->display->display_options['fields']['field_funding_amount']['ui_name'] = 'Amount CHART';
  $handler->display->display_options['fields']['field_funding_amount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_amount']['alter']['text'] = '"[field_funding_amount-value]"';
  $handler->display->display_options['fields']['field_funding_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_amount']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Approximate operating budget */
  $handler->display->display_options['fields']['field_funding_budget']['id'] = 'field_funding_budget';
  $handler->display->display_options['fields']['field_funding_budget']['table'] = 'field_data_field_funding_budget';
  $handler->display->display_options['fields']['field_funding_budget']['field'] = 'field_funding_budget';
  $handler->display->display_options['fields']['field_funding_budget']['label'] = '';
  $handler->display->display_options['fields']['field_funding_budget']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_budget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_budget']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_funding_budget']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percentage';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '1';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['suffix'] = '%';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_funding_amount]/[field_funding_budget]*100';
  /* Field: Category CHART */
  $handler->display->display_options['fields']['field_funding_type']['id'] = 'field_funding_type';
  $handler->display->display_options['fields']['field_funding_type']['table'] = 'field_data_field_funding_type';
  $handler->display->display_options['fields']['field_funding_type']['field'] = 'field_funding_type';
  $handler->display->display_options['fields']['field_funding_type']['relationship'] = 'field_funding_categories_value';
  $handler->display->display_options['fields']['field_funding_type']['ui_name'] = 'Category CHART';
  $handler->display->display_options['fields']['field_funding_type']['label'] = '';
  $handler->display->display_options['fields']['field_funding_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_funding_type']['alter']['text'] = '[field_funding_type] 
[field_funding_amount_1]';
  $handler->display->display_options['fields']['field_funding_type']['element_label_colon'] = FALSE;
  /* Field: fy start */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['ui_name'] = 'fy start';
  $handler->display->display_options['fields']['expression_1']['label'] = '';
  $handler->display->display_options['fields']['expression_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression_1']['precision'] = '0';
  $handler->display->display_options['fields']['expression_1']['separator'] = '';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[field_funding_fiscal_year] - 1';
  /* Field: fy pretty */
  $handler->display->display_options['fields']['field_funding_fiscal_year_1']['id'] = 'field_funding_fiscal_year_1';
  $handler->display->display_options['fields']['field_funding_fiscal_year_1']['table'] = 'field_data_field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year_1']['field'] = 'field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year_1']['ui_name'] = 'fy pretty';
  $handler->display->display_options['fields']['field_funding_fiscal_year_1']['label'] = '';
  $handler->display->display_options['fields']['field_funding_fiscal_year_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_fiscal_year_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_fiscal_year_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: budget pretty */
  $handler->display->display_options['fields']['field_funding_budget_1']['id'] = 'field_funding_budget_1';
  $handler->display->display_options['fields']['field_funding_budget_1']['table'] = 'field_data_field_funding_budget';
  $handler->display->display_options['fields']['field_funding_budget_1']['field'] = 'field_funding_budget';
  $handler->display->display_options['fields']['field_funding_budget_1']['ui_name'] = 'budget pretty';
  $handler->display->display_options['fields']['field_funding_budget_1']['label'] = '';
  $handler->display->display_options['fields']['field_funding_budget_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_budget_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_budget_1']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Fiscal year ending in: (field_funding_fiscal_year) */
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['id'] = 'field_funding_fiscal_year_value';
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['table'] = 'field_data_field_funding_fiscal_year';
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['field'] = 'field_funding_fiscal_year_value';
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['order'] = 'DESC';
  /* Sort criterion: Field collection item: Amount (field_funding_amount) */
  $handler->display->display_options['sorts']['field_funding_amount_value']['id'] = 'field_funding_amount_value';
  $handler->display->display_options['sorts']['field_funding_amount_value']['table'] = 'field_data_field_funding_amount';
  $handler->display->display_options['sorts']['field_funding_amount_value']['field'] = 'field_funding_amount_value';
  $handler->display->display_options['sorts']['field_funding_amount_value']['relationship'] = 'field_funding_categories_value';
  $handler->display->display_options['sorts']['field_funding_amount_value']['order'] = 'DESC';
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
    'funding' => 'funding',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Current Pie */
  $handler = $view->new_display('panel_pane', 'Current Pie', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'category';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_funding_type';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_funding_amount' => 'field_funding_amount',
    'field_funding_type' => 'field_funding_type',
    'counter' => 0,
    'field_funding_type_1' => 0,
    'field_funding_amount_1' => 0,
    'field_funding_budget' => 0,
    'expression' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'counter' => '#2f7ed8',
    'field_funding_type_1' => '#0d233a',
    'field_funding_amount_1' => '#8bbc21',
    'field_funding_amount' => '#910000',
    'field_funding_budget' => '#1aadce',
    'expression' => '#492970',
    'field_funding_type' => '#f28f43',
  );
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Fiscal year [expression_1]-[field_funding_fiscal_year_1]
<br />
Approximate operating budget: [field_funding_budget_1]';
  $handler->display->display_options['header']['area']['format'] = 'webedit';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;

  /* Display: Current Table */
  $handler = $view->new_display('panel_pane', 'Current Table', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'category';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_funding_type_1' => 'field_funding_type_1',
    'field_funding_amount_1' => 'field_funding_amount_1',
    'field_funding_amount' => 'field_funding_amount',
    'field_funding_budget' => 'field_funding_budget',
    'expression' => 'expression',
    'field_funding_type' => 'field_funding_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_type_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_amount_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_budget' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Contextual Pie */
  $handler = $view->new_display('panel_pane', 'Contextual Pie', 'panel_pane_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'category';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_funding_type';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_funding_amount' => 'field_funding_amount',
    'counter' => 0,
    'field_funding_type_1' => 0,
    'field_funding_amount_1' => 0,
    'field_funding_budget' => 0,
    'expression' => 0,
    'field_funding_type' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'counter' => '#2f7ed8',
    'field_funding_type_1' => '#0d233a',
    'field_funding_amount_1' => '#8bbc21',
    'field_funding_amount' => '#910000',
    'field_funding_budget' => '#1aadce',
    'expression' => '#492970',
    'field_funding_type' => '#f28f43',
  );
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'funding' => 'funding',
  );
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
    'funding' => 'funding',
  );

  /* Display: Contextual Table */
  $handler = $view->new_display('panel_pane', 'Contextual Table', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'category';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_funding_type_1' => 'field_funding_type_1',
    'field_funding_amount_1' => 'field_funding_amount_1',
    'field_funding_type' => 'field_funding_type',
    'field_funding_amount' => 'field_funding_amount',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_funding_type_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_amount_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'funding' => 'funding',
  );
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
    'funding' => 'funding',
  );

  /* Display: table page */
  $handler = $view->new_display('page', 'table page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent expenditures by funding source';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_funding_type_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = '[field_funding_type]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="views-group views-group-first">';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '</div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: cat machine name */
  $handler->display->display_options['fields']['field_funding_type']['id'] = 'field_funding_type';
  $handler->display->display_options['fields']['field_funding_type']['table'] = 'field_data_field_funding_type';
  $handler->display->display_options['fields']['field_funding_type']['field'] = 'field_funding_type';
  $handler->display->display_options['fields']['field_funding_type']['relationship'] = 'field_funding_categories_value';
  $handler->display->display_options['fields']['field_funding_type']['ui_name'] = 'cat machine name';
  $handler->display->display_options['fields']['field_funding_type']['label'] = '';
  $handler->display->display_options['fields']['field_funding_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_funding_type']['alter']['text'] = '[field_funding_type-value]';
  $handler->display->display_options['fields']['field_funding_type']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Funding category */
  $handler->display->display_options['fields']['field_funding_type_1']['id'] = 'field_funding_type_1';
  $handler->display->display_options['fields']['field_funding_type_1']['table'] = 'field_data_field_funding_type';
  $handler->display->display_options['fields']['field_funding_type_1']['field'] = 'field_funding_type';
  $handler->display->display_options['fields']['field_funding_type_1']['relationship'] = 'field_funding_categories_value';
  $handler->display->display_options['fields']['field_funding_type_1']['label'] = '';
  $handler->display->display_options['fields']['field_funding_type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_type_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_funding_type_1']['alter']['text'] = '<span class="[field_funding_type]">[field_funding_type_1]</span>';
  $handler->display->display_options['fields']['field_funding_type_1']['element_label_colon'] = FALSE;
  /* Field: Amount CHART */
  $handler->display->display_options['fields']['field_funding_amount']['id'] = 'field_funding_amount';
  $handler->display->display_options['fields']['field_funding_amount']['table'] = 'field_data_field_funding_amount';
  $handler->display->display_options['fields']['field_funding_amount']['field'] = 'field_funding_amount';
  $handler->display->display_options['fields']['field_funding_amount']['relationship'] = 'field_funding_categories_value';
  $handler->display->display_options['fields']['field_funding_amount']['ui_name'] = 'Amount CHART';
  $handler->display->display_options['fields']['field_funding_amount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_amount']['alter']['text'] = '"[field_funding_amount-value]"';
  $handler->display->display_options['fields']['field_funding_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_amount']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Budget (value) */
  $handler->display->display_options['fields']['field_funding_budget']['id'] = 'field_funding_budget';
  $handler->display->display_options['fields']['field_funding_budget']['table'] = 'field_data_field_funding_budget';
  $handler->display->display_options['fields']['field_funding_budget']['field'] = 'field_funding_budget';
  $handler->display->display_options['fields']['field_funding_budget']['ui_name'] = 'Budget (value)';
  $handler->display->display_options['fields']['field_funding_budget']['label'] = '';
  $handler->display->display_options['fields']['field_funding_budget']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_budget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_budget']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_funding_budget']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Percentage (math expression) */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['ui_name'] = 'Percentage (math expression)';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['suffix'] = '%';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_funding_amount]/[field_funding_budget]*100';
  /* Field: Content: Fiscal year ending in: */
  $handler->display->display_options['fields']['field_funding_fiscal_year']['id'] = 'field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['table'] = 'field_data_field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['field'] = 'field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['label'] = '';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_fiscal_year']['alter']['text'] = '[field_funding_amount_1]';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['element_type'] = '0';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_fiscal_year']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funding_fiscal_year']['settings'] = array(
    'format_type' => 'mdy',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Amount (pretty) */
  $handler->display->display_options['fields']['field_funding_amount_1']['id'] = 'field_funding_amount_1';
  $handler->display->display_options['fields']['field_funding_amount_1']['table'] = 'field_data_field_funding_amount';
  $handler->display->display_options['fields']['field_funding_amount_1']['field'] = 'field_funding_amount';
  $handler->display->display_options['fields']['field_funding_amount_1']['relationship'] = 'field_funding_categories_value';
  $handler->display->display_options['fields']['field_funding_amount_1']['ui_name'] = 'Amount (pretty)';
  $handler->display->display_options['fields']['field_funding_amount_1']['label'] = '';
  $handler->display->display_options['fields']['field_funding_amount_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_funding_amount_1']['alter']['text'] = '<span class="view-funding-year"><a href="[path]">[field_funding_fiscal_year]</a> </span><span class="view-funding-amount">[field_funding_amount_1] </span><span class="view-funding-percentage">[expression]</span>';
  $handler->display->display_options['fields']['field_funding_amount_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_amount_1']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fiscal year ending in: (field_funding_fiscal_year) */
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['id'] = 'field_funding_fiscal_year_value';
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['table'] = 'field_data_field_funding_fiscal_year';
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['field'] = 'field_funding_fiscal_year_value';
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['order'] = 'DESC';
  /* Sort criterion: Field collection item: Amount (field_funding_amount) */
  $handler->display->display_options['sorts']['field_funding_amount_value']['id'] = 'field_funding_amount_value';
  $handler->display->display_options['sorts']['field_funding_amount_value']['table'] = 'field_data_field_funding_amount';
  $handler->display->display_options['sorts']['field_funding_amount_value']['field'] = 'field_funding_amount_value';
  $handler->display->display_options['sorts']['field_funding_amount_value']['relationship'] = 'field_funding_categories_value';
  $handler->display->display_options['sorts']['field_funding_amount_value']['order'] = 'DESC';
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
    'funding' => 'funding',
  );
  /* Filter criterion: Field collection item: Funding category (field_funding_type) */
  $handler->display->display_options['filters']['field_funding_type_value']['id'] = 'field_funding_type_value';
  $handler->display->display_options['filters']['field_funding_type_value']['table'] = 'field_data_field_funding_type';
  $handler->display->display_options['filters']['field_funding_type_value']['field'] = 'field_funding_type_value';
  $handler->display->display_options['filters']['field_funding_type_value']['relationship'] = 'field_funding_categories_value';
  $handler->display->display_options['filters']['field_funding_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_funding_type_value']['expose']['operator_id'] = 'field_funding_type_value_op';
  $handler->display->display_options['filters']['field_funding_type_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_funding_type_value']['expose']['operator'] = 'field_funding_type_value_op';
  $handler->display->display_options['filters']['field_funding_type_value']['expose']['identifier'] = 'field_funding_type_value';
  $handler->display->display_options['filters']['field_funding_type_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_funding_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Fiscal year ending in: (field_funding_fiscal_year) */
  $handler->display->display_options['filters']['field_funding_fiscal_year_value']['id'] = 'field_funding_fiscal_year_value';
  $handler->display->display_options['filters']['field_funding_fiscal_year_value']['table'] = 'field_data_field_funding_fiscal_year';
  $handler->display->display_options['filters']['field_funding_fiscal_year_value']['field'] = 'field_funding_fiscal_year_value';
  $handler->display->display_options['filters']['field_funding_fiscal_year_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_funding_fiscal_year_value']['default_date'] = 'now -7 years';
  $handler->display->display_options['path'] = 'about/funding/recent';

  /* Display: Awards Table */
  $handler = $view->new_display('panel_pane', 'Awards Table', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'awards';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_funding_fiscal_year' => 'field_funding_fiscal_year',
    'field_funding_federal_awards' => 'field_funding_federal_awards',
    'field_funding_non_federal' => 'field_funding_non_federal',
    'field_funding_total_awards' => 'field_funding_total_awards',
    'field_funding_federal_awards_1' => 'field_funding_federal_awards_1',
    'field_funding_non_federal_1' => 'field_funding_non_federal_1',
    'field_funding_total_awards_1' => 'field_funding_total_awards_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_funding_fiscal_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_federal_awards' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_non_federal' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_total_awards' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_federal_awards_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_non_federal_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_total_awards_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Fiscal year ending in: */
  $handler->display->display_options['fields']['field_funding_fiscal_year']['id'] = 'field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['table'] = 'field_data_field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['field'] = 'field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['label'] = 'Fiscal year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_fiscal_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Federal - Other */
  $handler->display->display_options['fields']['field_funding_federal_awards']['id'] = 'field_funding_federal_awards';
  $handler->display->display_options['fields']['field_funding_federal_awards']['table'] = 'field_data_field_funding_federal_awards';
  $handler->display->display_options['fields']['field_funding_federal_awards']['field'] = 'field_funding_federal_awards';
  $handler->display->display_options['fields']['field_funding_federal_awards']['label'] = 'RAW';
  $handler->display->display_options['fields']['field_funding_federal_awards']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_federal_awards']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_federal_awards']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_funding_non_federal']['id'] = 'field_funding_non_federal';
  $handler->display->display_options['fields']['field_funding_non_federal']['table'] = 'field_data_field_funding_non_federal';
  $handler->display->display_options['fields']['field_funding_non_federal']['field'] = 'field_funding_non_federal';
  $handler->display->display_options['fields']['field_funding_non_federal']['label'] = 'RAW';
  $handler->display->display_options['fields']['field_funding_non_federal']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_non_federal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_non_federal']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Total awards */
  $handler->display->display_options['fields']['field_funding_total_awards']['id'] = 'field_funding_total_awards';
  $handler->display->display_options['fields']['field_funding_total_awards']['table'] = 'field_data_field_funding_total_awards';
  $handler->display->display_options['fields']['field_funding_total_awards']['field'] = 'field_funding_total_awards';
  $handler->display->display_options['fields']['field_funding_total_awards']['label'] = 'RAW';
  $handler->display->display_options['fields']['field_funding_total_awards']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_total_awards']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_total_awards']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Federal - NIH */
  $handler->display->display_options['fields']['field_funding_nih_awards_1']['id'] = 'field_funding_nih_awards_1';
  $handler->display->display_options['fields']['field_funding_nih_awards_1']['table'] = 'field_data_field_funding_nih_awards';
  $handler->display->display_options['fields']['field_funding_nih_awards_1']['field'] = 'field_funding_nih_awards';
  $handler->display->display_options['fields']['field_funding_nih_awards_1']['label'] = 'RAW';
  $handler->display->display_options['fields']['field_funding_nih_awards_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_nih_awards_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_nih_awards_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funding_nih_awards_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['label'] = 'Federal - NIH';
  $handler->display->display_options['fields']['expression_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression_2']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['precision'] = '1';
  $handler->display->display_options['fields']['expression_2']['separator'] = '';
  $handler->display->display_options['fields']['expression_2']['prefix'] = '$';
  $handler->display->display_options['fields']['expression_2']['suffix'] = 'M';
  $handler->display->display_options['fields']['expression_2']['expression'] = '[field_funding_nih_awards_1]/1000000';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Federal - Other';
  $handler->display->display_options['fields']['expression_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['precision'] = '1';
  $handler->display->display_options['fields']['expression_1']['separator'] = '';
  $handler->display->display_options['fields']['expression_1']['prefix'] = '$';
  $handler->display->display_options['fields']['expression_1']['suffix'] = 'M';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[field_funding_federal_awards]/1000000';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_3']['id'] = 'expression_3';
  $handler->display->display_options['fields']['expression_3']['table'] = 'views';
  $handler->display->display_options['fields']['expression_3']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_3']['label'] = 'Other';
  $handler->display->display_options['fields']['expression_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression_3']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_3']['precision'] = '1';
  $handler->display->display_options['fields']['expression_3']['separator'] = '';
  $handler->display->display_options['fields']['expression_3']['prefix'] = '$';
  $handler->display->display_options['fields']['expression_3']['suffix'] = 'M';
  $handler->display->display_options['fields']['expression_3']['expression'] = '[field_funding_non_federal]/1000000';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Total Awards';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '1';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['prefix'] = '$';
  $handler->display->display_options['fields']['expression']['suffix'] = 'M';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_funding_total_awards]/1000000';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fiscal year ending in: (field_funding_fiscal_year) */
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['id'] = 'field_funding_fiscal_year_value';
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['table'] = 'field_data_field_funding_fiscal_year';
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['field'] = 'field_funding_fiscal_year_value';
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['order'] = 'DESC';
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
    'funding' => 'funding',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Awards Graph */
  $handler = $view->new_display('panel_pane', 'Awards Graph', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Federal and other research contracts and grants awarded (millions)';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'awards';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_funding_fiscal_year';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'expression_1' => 'expression_1',
    'expression_2' => 'expression_2',
    'expression_3' => 'expression_3',
    'expression' => 'expression',
    'field_funding_fiscal_year' => 0,
    'field_funding_total_awards' => 0,
    'field_funding_nih_awards' => 0,
    'field_funding_federal_awards' => 0,
    'field_funding_non_federal' => 0,
    'field_funding_federal_awards_1' => 0,
    'field_funding_non_federal_1' => 0,
    'field_funding_total_awards_1' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_funding_fiscal_year' => '#2f7ed8',
    'field_funding_total_awards' => '#910000',
    'field_funding_nih_awards' => '#77a1e5',
    'field_funding_federal_awards' => '#0d233a',
    'field_funding_non_federal' => '#8bbc21',
    'field_funding_federal_awards_1' => '#1aadce',
    'field_funding_non_federal_1' => '#492970',
    'field_funding_total_awards_1' => '#f28f43',
    'expression_1' => '#911716',
    'expression_2' => '#459acc',
    'expression_3' => '#000000',
    'expression' => '#73c334',
  );
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '90';
  $handler->display->display_options['style_options']['yaxis_prefix'] = '$';
  $handler->display->display_options['style_options']['yaxis_suffix'] = 'M';
  $handler->display->display_options['style_options']['yaxis_decimal_count'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Fiscal year ending in: */
  $handler->display->display_options['fields']['field_funding_fiscal_year']['id'] = 'field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['table'] = 'field_data_field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['field'] = 'field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_funding_fiscal_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Total awards */
  $handler->display->display_options['fields']['field_funding_total_awards']['id'] = 'field_funding_total_awards';
  $handler->display->display_options['fields']['field_funding_total_awards']['table'] = 'field_data_field_funding_total_awards';
  $handler->display->display_options['fields']['field_funding_total_awards']['field'] = 'field_funding_total_awards';
  $handler->display->display_options['fields']['field_funding_total_awards']['label'] = 'RAW';
  $handler->display->display_options['fields']['field_funding_total_awards']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_total_awards']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_total_awards']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Federal - NIH */
  $handler->display->display_options['fields']['field_funding_nih_awards']['id'] = 'field_funding_nih_awards';
  $handler->display->display_options['fields']['field_funding_nih_awards']['table'] = 'field_data_field_funding_nih_awards';
  $handler->display->display_options['fields']['field_funding_nih_awards']['field'] = 'field_funding_nih_awards';
  $handler->display->display_options['fields']['field_funding_nih_awards']['label'] = 'RAW';
  $handler->display->display_options['fields']['field_funding_nih_awards']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_nih_awards']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_nih_awards']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Federal - Other */
  $handler->display->display_options['fields']['field_funding_federal_awards']['id'] = 'field_funding_federal_awards';
  $handler->display->display_options['fields']['field_funding_federal_awards']['table'] = 'field_data_field_funding_federal_awards';
  $handler->display->display_options['fields']['field_funding_federal_awards']['field'] = 'field_funding_federal_awards';
  $handler->display->display_options['fields']['field_funding_federal_awards']['label'] = 'RAW';
  $handler->display->display_options['fields']['field_funding_federal_awards']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_federal_awards']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_federal_awards']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_funding_non_federal']['id'] = 'field_funding_non_federal';
  $handler->display->display_options['fields']['field_funding_non_federal']['table'] = 'field_data_field_funding_non_federal';
  $handler->display->display_options['fields']['field_funding_non_federal']['field'] = 'field_funding_non_federal';
  $handler->display->display_options['fields']['field_funding_non_federal']['label'] = 'RAW';
  $handler->display->display_options['fields']['field_funding_non_federal']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_non_federal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_non_federal']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Federal - Other */
  $handler->display->display_options['fields']['field_funding_federal_awards_1']['id'] = 'field_funding_federal_awards_1';
  $handler->display->display_options['fields']['field_funding_federal_awards_1']['table'] = 'field_data_field_funding_federal_awards';
  $handler->display->display_options['fields']['field_funding_federal_awards_1']['field'] = 'field_funding_federal_awards';
  $handler->display->display_options['fields']['field_funding_federal_awards_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_federal_awards_1']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_funding_non_federal_1']['id'] = 'field_funding_non_federal_1';
  $handler->display->display_options['fields']['field_funding_non_federal_1']['table'] = 'field_data_field_funding_non_federal';
  $handler->display->display_options['fields']['field_funding_non_federal_1']['field'] = 'field_funding_non_federal';
  $handler->display->display_options['fields']['field_funding_non_federal_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_non_federal_1']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Total awards */
  $handler->display->display_options['fields']['field_funding_total_awards_1']['id'] = 'field_funding_total_awards_1';
  $handler->display->display_options['fields']['field_funding_total_awards_1']['table'] = 'field_data_field_funding_total_awards';
  $handler->display->display_options['fields']['field_funding_total_awards_1']['field'] = 'field_funding_total_awards';
  $handler->display->display_options['fields']['field_funding_total_awards_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_total_awards_1']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Federal - NIH';
  $handler->display->display_options['fields']['expression_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['precision'] = '1';
  $handler->display->display_options['fields']['expression_1']['separator'] = '';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[field_funding_nih_awards]/1000000';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['label'] = 'Federal - Other';
  $handler->display->display_options['fields']['expression_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression_2']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['precision'] = '1';
  $handler->display->display_options['fields']['expression_2']['separator'] = '';
  $handler->display->display_options['fields']['expression_2']['expression'] = '[field_funding_federal_awards]/1000000';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_3']['id'] = 'expression_3';
  $handler->display->display_options['fields']['expression_3']['table'] = 'views';
  $handler->display->display_options['fields']['expression_3']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_3']['label'] = 'Other';
  $handler->display->display_options['fields']['expression_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression_3']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_3']['precision'] = '1';
  $handler->display->display_options['fields']['expression_3']['separator'] = '';
  $handler->display->display_options['fields']['expression_3']['expression'] = '[field_funding_non_federal]/1000000';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Total Awards';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '1';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_funding_total_awards]/1000000';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fiscal year ending in: (field_funding_fiscal_year) */
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['id'] = 'field_funding_fiscal_year_value';
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['table'] = 'field_data_field_funding_fiscal_year';
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['field'] = 'field_funding_fiscal_year_value';
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
    'funding' => 'funding',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: list page */
  $handler = $view->new_display('page', 'list page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Funding Archive';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_funding_budget' => 'field_funding_budget',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_funding_budget' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Fiscal year ending in: */
  $handler->display->display_options['fields']['field_funding_fiscal_year']['id'] = 'field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['table'] = 'field_data_field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['field'] = 'field_funding_fiscal_year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['label'] = 'Fiscal year';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_funding_fiscal_year']['alter']['text'] = '<a href="[path]">[field_funding_fiscal_year]</a>';
  $handler->display->display_options['fields']['field_funding_fiscal_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_fiscal_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Approximate operating budget */
  $handler->display->display_options['fields']['field_funding_budget']['id'] = 'field_funding_budget';
  $handler->display->display_options['fields']['field_funding_budget']['table'] = 'field_data_field_funding_budget';
  $handler->display->display_options['fields']['field_funding_budget']['field'] = 'field_funding_budget';
  $handler->display->display_options['fields']['field_funding_budget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_budget']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Total awards */
  $handler->display->display_options['fields']['field_funding_total_awards']['id'] = 'field_funding_total_awards';
  $handler->display->display_options['fields']['field_funding_total_awards']['table'] = 'field_data_field_funding_total_awards';
  $handler->display->display_options['fields']['field_funding_total_awards']['field'] = 'field_funding_total_awards';
  $handler->display->display_options['fields']['field_funding_total_awards']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fiscal year ending in: (field_funding_fiscal_year) */
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['id'] = 'field_funding_fiscal_year_value';
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['table'] = 'field_data_field_funding_fiscal_year';
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['field'] = 'field_funding_fiscal_year_value';
  $handler->display->display_options['sorts']['field_funding_fiscal_year_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'about/funding/archive';

  /* Display: Contextual Awards */
  $handler = $view->new_display('panel_pane', 'Contextual Awards', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Research contracts and grants awarded';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Federal - NIH */
  $handler->display->display_options['fields']['field_funding_nih_awards']['id'] = 'field_funding_nih_awards';
  $handler->display->display_options['fields']['field_funding_nih_awards']['table'] = 'field_data_field_funding_nih_awards';
  $handler->display->display_options['fields']['field_funding_nih_awards']['field'] = 'field_funding_nih_awards';
  $handler->display->display_options['fields']['field_funding_nih_awards']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_nih_awards']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Federal - Other */
  $handler->display->display_options['fields']['field_funding_federal_awards']['id'] = 'field_funding_federal_awards';
  $handler->display->display_options['fields']['field_funding_federal_awards']['table'] = 'field_data_field_funding_federal_awards';
  $handler->display->display_options['fields']['field_funding_federal_awards']['field'] = 'field_funding_federal_awards';
  $handler->display->display_options['fields']['field_funding_federal_awards']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_federal_awards']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_funding_non_federal']['id'] = 'field_funding_non_federal';
  $handler->display->display_options['fields']['field_funding_non_federal']['table'] = 'field_data_field_funding_non_federal';
  $handler->display->display_options['fields']['field_funding_non_federal']['field'] = 'field_funding_non_federal';
  $handler->display->display_options['fields']['field_funding_non_federal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_non_federal']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Total awards */
  $handler->display->display_options['fields']['field_funding_total_awards']['id'] = 'field_funding_total_awards';
  $handler->display->display_options['fields']['field_funding_total_awards']['table'] = 'field_data_field_funding_total_awards';
  $handler->display->display_options['fields']['field_funding_total_awards']['field'] = 'field_funding_total_awards';
  $handler->display->display_options['fields']['field_funding_total_awards']['label'] = 'Total';
  $handler->display->display_options['fields']['field_funding_total_awards']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_total_awards']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'funding' => 'funding',
  );
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
    'funding' => 'funding',
  );
  $export['funding'] = $view;

  return $export;
}
