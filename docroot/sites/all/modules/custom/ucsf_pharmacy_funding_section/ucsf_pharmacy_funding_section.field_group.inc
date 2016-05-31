<?php
/**
 * @file
 * ucsf_pharmacy_funding_section.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ucsf_pharmacy_funding_section_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_awards|node|funding|form';
  $field_group->group_name = 'group_funding_awards';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Awards',
    'weight' => '4',
    'children' => array(
      0 => 'field_funding_federal_awards',
      1 => 'field_funding_non_federal',
      2 => 'field_funding_total_awards',
      3 => 'field_funding_nih_awards',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-funding-awards field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_funding_awards|node|funding|form'] = $field_group;

  return $export;
}
