<?php
/**
 * @file
 * myapex_ed_updates.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function myapex_ed_updates_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reference|node|ed_updates|form';
  $field_group->group_name = 'group_reference';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ed_updates';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Referenced',
    'weight' => '1',
    'children' => array(
      0 => 'field_referenced_content',
      1 => 'field_reference_target',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Referenced',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_reference|node|ed_updates|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tag|node|ed_updates|form';
  $field_group->group_name = 'group_tag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ed_updates';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '9',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_what_you_need_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Categories',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-tag field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_tag|node|ed_updates|form'] = $field_group;

  return $export;
}
