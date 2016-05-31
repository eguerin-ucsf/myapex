<?php
/**
 * @file
 * ucsf_person_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ucsf_person_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_directory_data|node|ucsf_person|form';
  $field_group->group_name = 'group_directory_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsf_person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_details';
  $field_group->data = array(
    'label' => 'Directory Data',
    'weight' => '7',
    'children' => array(
      0 => 'group_person_contact',
      1 => 'group_person_name',
      2 => 'group_person_titles',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Directory Data',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-directory-data field-group-tab ',
        'description' => 'Data in this section is pulled from the Campus Directory system via EDS.  To make updates to this information, please contact your HR representative and have the information updated in the Campus Locator System via OLPPS.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_directory_data|node|ucsf_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_information|node|ucsf_person|form';
  $field_group->group_name = 'group_general_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsf_person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_details';
  $field_group->data = array(
    'label' => 'General Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_person_headshot_photo',
      1 => 'field_person_what_i_do_text',
      2 => 'field_import_messages',
      3 => 'title',
      4 => 'group_person_subtype',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general-information field-group-tab ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general_information|node|ucsf_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_contact|node|ucsf_person|form';
  $field_group->group_name = 'group_person_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsf_person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_directory_data';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '39',
    'children' => array(
      0 => 'field_person_email',
      1 => 'field_person_fax',
      2 => 'field_person_address_postal',
      3 => 'field_campus_phone',
      4 => 'field_private_practice_address',
      5 => 'field_private_practice_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_person_contact|node|ucsf_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_details|node|ucsf_person|form';
  $field_group->group_name = 'group_person_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsf_person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '1',
    'children' => array(
      0 => 'group_person_affiliations',
      1 => 'group_person_degrees',
      2 => 'group_person_misc',
      3 => 'group_person_work',
      4 => 'group_directory_data',
      5 => 'group_general_information',
      6 => 'group_profiles_data',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-person-details field-group-tabs',
      ),
    ),
  );
  $export['group_person_details|node|ucsf_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_name|node|ucsf_person|form';
  $field_group->group_name = 'group_person_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsf_person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_directory_data';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '37',
    'children' => array(
      0 => 'field_person_eds_degrees',
      1 => 'field_person_first_name',
      2 => 'field_person_last_name',
      3 => 'field_person_middle_name',
      4 => 'field_person_preferred_name',
      5 => 'field_person_display_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Name',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_person_name|node|ucsf_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_subtype|node|ucsf_person|form';
  $field_group->group_name = 'group_person_subtype';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsf_person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_general_information';
  $field_group->data = array(
    'label' => 'Person Type',
    'weight' => '34',
    'children' => array(
      0 => 'field_person_type',
      1 => 'field_person_type_full',
      2 => 'field_person_subtype',
      3 => 'field_department_override',
      4 => 'field_person_title_override',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Person Type',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-person-subtype field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_person_subtype|node|ucsf_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_titles|node|ucsf_person|form';
  $field_group->group_name = 'group_person_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsf_person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_directory_data';
  $field_group->data = array(
    'label' => 'Titles',
    'weight' => '38',
    'children' => array(
      0 => 'field_person_payroll_title',
      1 => 'field_person_primary_dept',
      2 => 'field_person_working_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Titles',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_person_titles|node|ucsf_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profiles_data|node|ucsf_person|form';
  $field_group->group_name = 'group_profiles_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsf_person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_details';
  $field_group->data = array(
    'label' => 'Profiles Data',
    'weight' => '8',
    'children' => array(
      0 => 'field_profiles_link',
      1 => 'group_profiles_honors_awards',
      2 => 'group_profiles_publications',
      3 => 'group_profiles_research',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Profiles Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-profiles-data field-group-tab ',
        'description' => 'Data in this section is pulled from UCSF Profiles. Faculty members can edit (or delegate editing) of their profiles by visiting the Profiles link, and logging in to the CTSI Profiles system.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_profiles_data|node|ucsf_person|form'] = $field_group;

  return $export;
}
