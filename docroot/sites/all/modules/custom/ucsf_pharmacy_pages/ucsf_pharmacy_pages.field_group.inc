<?php
/**
 * @file
 * ucsf_pharmacy_pages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ucsf_pharmacy_pages_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panels_chunks|node|panopoly_page|form';
  $field_group->group_name = 'group_panels_chunks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'panopoly_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Chunks',
    'weight' => '3',
    'children' => array(
      0 => 'field_panels_chunks',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Chunks',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-panels-chunks field-group-fieldset',
        'description' => 'This section allows you to add chunks of content that can be used as sidebars, callouts, to hold images, etc. <strong>Chunks 0, 1, and 2 will be automatically added to your page.</strong> Using the index numbers, additional chunks can be added through the Panelizer interface.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_panels_chunks|node|panopoly_page|form'] = $field_group;

  return $export;
}
