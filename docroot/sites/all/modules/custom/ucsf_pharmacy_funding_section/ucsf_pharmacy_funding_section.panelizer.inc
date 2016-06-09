<?php
/**
 * @file
 * ucsf_pharmacy_funding_section.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ucsf_pharmacy_funding_section_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:funding:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'funding';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title Funding';
  $display->uuid = '6c3c47e7-2bfd-4854-947a-07c7f91480a3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ae705d97-35ec-4b45-8974-9d1807e615ba';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_fiscal_year';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'fromto' => 'both',
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ae705d97-35ec-4b45-8974-9d1807e615ba';
    $display->content['new-ae705d97-35ec-4b45-8974-9d1807e615ba'] = $pane;
    $display->panels['center'][0] = 'new-ae705d97-35ec-4b45-8974-9d1807e615ba';
    $pane = new stdClass();
    $pane->pid = 'new-1f3caab6-dea8-48a7-aecd-340c59d0e19a';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'funding-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => NULL,
      'widget_title' => 'Expenditures by funding source',
      'items_per_page' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1f3caab6-dea8-48a7-aecd-340c59d0e19a';
    $display->content['new-1f3caab6-dea8-48a7-aecd-340c59d0e19a'] = $pane;
    $display->panels['center'][1] = 'new-1f3caab6-dea8-48a7-aecd-340c59d0e19a';
    $pane = new stdClass();
    $pane->pid = 'new-23ecd3f9-78a5-4516-985a-60005c7a1b40';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_budget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'decimal_separator' => '.',
        'prefix_suffix' => 1,
        'scale' => 0,
        'thousand_separator' => ',',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '23ecd3f9-78a5-4516-985a-60005c7a1b40';
    $display->content['new-23ecd3f9-78a5-4516-985a-60005c7a1b40'] = $pane;
    $display->panels['center'][2] = 'new-23ecd3f9-78a5-4516-985a-60005c7a1b40';
    $pane = new stdClass();
    $pane->pid = 'new-c82a1972-fa61-48f5-8a8c-20213cc82a36';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'funding-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => NULL,
      'widget_title' => '',
      'items_per_page' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c82a1972-fa61-48f5-8a8c-20213cc82a36';
    $display->content['new-c82a1972-fa61-48f5-8a8c-20213cc82a36'] = $pane;
    $display->panels['center'][3] = 'new-c82a1972-fa61-48f5-8a8c-20213cc82a36';
    $pane = new stdClass();
    $pane->pid = 'new-683ca8b3-c2eb-4022-9075-ba8fb13de9b8';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_categories';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '683ca8b3-c2eb-4022-9075-ba8fb13de9b8';
    $display->content['new-683ca8b3-c2eb-4022-9075-ba8fb13de9b8'] = $pane;
    $display->panels['center'][4] = 'new-683ca8b3-c2eb-4022-9075-ba8fb13de9b8';
    $pane = new stdClass();
    $pane->pid = 'new-fad7c6e5-0b25-4759-b478-6a3cf74e597b';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'funding-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => NULL,
      'widget_title' => 'Research contracts and grants awarded',
      'items_per_page' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'fad7c6e5-0b25-4759-b478-6a3cf74e597b';
    $display->content['new-fad7c6e5-0b25-4759-b478-6a3cf74e597b'] = $pane;
    $display->panels['center'][5] = 'new-fad7c6e5-0b25-4759-b478-6a3cf74e597b';
    $pane = new stdClass();
    $pane->pid = 'new-1b2a8b95-7a70-4c41-b08d-73fef74e8a27';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_federal_awards';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'decimal_separator' => '.',
        'scale' => 0,
        'prefix_suffix' => TRUE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '1b2a8b95-7a70-4c41-b08d-73fef74e8a27';
    $display->content['new-1b2a8b95-7a70-4c41-b08d-73fef74e8a27'] = $pane;
    $display->panels['center'][6] = 'new-1b2a8b95-7a70-4c41-b08d-73fef74e8a27';
    $pane = new stdClass();
    $pane->pid = 'new-241feac8-9b6a-4224-a714-481d09ffd74b';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_non_federal';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'decimal_separator' => '.',
        'scale' => 0,
        'prefix_suffix' => TRUE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '241feac8-9b6a-4224-a714-481d09ffd74b';
    $display->content['new-241feac8-9b6a-4224-a714-481d09ffd74b'] = $pane;
    $display->panels['center'][7] = 'new-241feac8-9b6a-4224-a714-481d09ffd74b';
    $pane = new stdClass();
    $pane->pid = 'new-42554223-d603-4293-8cf4-33e2eea06133';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_total_awards';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'decimal_separator' => '.',
        'scale' => 0,
        'prefix_suffix' => TRUE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '42554223-d603-4293-8cf4-33e2eea06133';
    $display->content['new-42554223-d603-4293-8cf4-33e2eea06133'] = $pane;
    $display->panels['center'][8] = 'new-42554223-d603-4293-8cf4-33e2eea06133';
    $pane = new stdClass();
    $pane->pid = 'new-b75bb8fb-1bae-4c59-9ec0-f7c1167fcbbb';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'b75bb8fb-1bae-4c59-9ec0-f7c1167fcbbb';
    $display->content['new-b75bb8fb-1bae-4c59-9ec0-f7c1167fcbbb'] = $pane;
    $display->panels['center'][9] = 'new-b75bb8fb-1bae-4c59-9ec0-f7c1167fcbbb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ae705d97-35ec-4b45-8974-9d1807e615ba';
  $panelizer->display = $display;
  $export['node:funding:default'] = $panelizer;

  return $export;
}
