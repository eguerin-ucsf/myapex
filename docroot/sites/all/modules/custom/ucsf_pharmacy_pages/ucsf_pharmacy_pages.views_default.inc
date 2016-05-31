<?php
/**
 * @file
 * ucsf_pharmacy_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ucsf_pharmacy_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'chunks_panes';
  $view->description = 'View to create panes from node \'Chunks\' field.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Chunks';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Chunks */
  $handler->display->display_options['fields']['field_panels_chunks']['id'] = 'field_panels_chunks';
  $handler->display->display_options['fields']['field_panels_chunks']['table'] = 'field_data_field_panels_chunks';
  $handler->display->display_options['fields']['field_panels_chunks']['field'] = 'field_panels_chunks';
  $handler->display->display_options['fields']['field_panels_chunks']['label'] = '';
  $handler->display->display_options['fields']['field_panels_chunks']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_panels_chunks']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_panels_chunks']['delta_offset'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Chunks (field_panels_chunks:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_panels_chunks';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['exposed'] = TRUE;
  $handler->display->display_options['filters']['delta']['expose']['operator_id'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['label'] = 'Chunk Index';
  $handler->display->display_options['filters']['delta']['expose']['operator'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['identifier'] = 'delta';
  $handler->display->display_options['filters']['delta']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    11 => 0,
  );

  /* Display: Standard Chunk */
  $handler = $view->new_display('panel_pane', 'Standard Chunk', 'chunks_panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Chunks (from node)';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['chunks_panes'] = $view;

  return $export;
}
