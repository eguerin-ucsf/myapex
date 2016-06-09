<?php
/**
 * @file
 * ucsf_person_profiles_extended.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ucsf_person_profiles_extended_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profiles_honors_awards|node|ucsf_person|form';
  $field_group->group_name = 'group_profiles_honors_awards';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsf_person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profiles_data';
  $field_group->data = array(
    'label' => 'Honors and Awards',
    'weight' => '14',
    'children' => array(
      0 => 'field_profiles_honors_awards',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Honors and Awards',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-profiles-honors-awards field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profiles_honors_awards|node|ucsf_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profiles_publications|node|ucsf_person|form';
  $field_group->group_name = 'group_profiles_publications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsf_person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profiles_data';
  $field_group->data = array(
    'label' => 'Publications',
    'weight' => '13',
    'children' => array(
      0 => 'field_person_publications_list',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publications',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-profiles-publications field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profiles_publications|node|ucsf_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profiles_research|node|ucsf_person|form';
  $field_group->group_name = 'group_profiles_research';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsf_person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profiles_data';
  $field_group->data = array(
    'label' => 'Research information',
    'weight' => '12',
    'children' => array(
      0 => 'field_person_keywords_profiles',
      1 => 'field_person_research_biography',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Research information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-profiles-research field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profiles_research|node|ucsf_person|form'] = $field_group;

  return $export;
}
