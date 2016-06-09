<?php
/**
 * @file
 * ucsf_person_content_type.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function ucsf_person_content_type_field_default_fields() {
  $fields = array();

  // Exported field: 'node-ucsf_person-field_campus_phone'.
  $fields['node-ucsf_person-field_campus_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_campus_phone',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '50',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'via EDS:telephoneNumber',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'diff_standard' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '28',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_campus_phone',
      'label' => 'Phone',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_department_override'.
  $fields['node-ucsf_person-field_department_override'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_department_override',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'person_primary_dept_unit',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Used to force listing in a department other than listed in the directory.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '1',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '22',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '36',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_department_override',
      'label' => 'Department Override',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '37',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_import_messages'.
  $fields['node-ucsf_person-field_import_messages'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_import_messages',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Warnings and notices from the EDS (directory) and CTSI Profiles imports show here.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '47',
        ),
        'search_index' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_import_messages',
      'label' => 'Import messages',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '2',
        ),
        'type' => 'text_textarea',
        'weight' => '37',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_address_postal'.
  $fields['node-ucsf_person-field_person_address_postal'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_address_postal',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'addressfield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => array(
        0 => array(
          'element_key' => 'node|ucsf_person|field_person_address_postal|und|0',
          'thoroughfare' => '',
          'premise' => '',
          'locality' => '',
          'administrative_area' => '',
          'postal_code' => '',
          'country' => 'US',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '3',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_address_postal',
      'label' => 'Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(
            'US' => 'US',
          ),
          'format_handlers' => array(
            'address' => 'address',
            'address-hide-country' => 0,
            'organisation' => 0,
            'name-full' => 0,
            'name-oneline' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_display_name'.
  $fields['node-ucsf_person-field_person_display_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_display_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'via EDS: DisplayName',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_index' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_display_name',
      'label' => 'Display name',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '255',
        ),
        'type' => 'text_textfield',
        'weight' => '58',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_eds_degrees'.
  $fields['node-ucsf_person-field_person_eds_degrees'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_eds_degrees',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '48',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'via EDS:ucsfEduDegree',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
        'search_index' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '14',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_eds_degrees',
      'label' => 'Degrees',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '62',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_email'.
  $fields['node-ucsf_person-field_person_email'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_email',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'email',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'via EDS:mail',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'diff_standard' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'email',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => '1',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_email',
      'label' => 'Email',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'email_textfield',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_fax'.
  $fields['node-ucsf_person-field_person_fax'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_fax',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '20',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'via EDS:facsimileTelephoneNumber

',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'diff_standard' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '29',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_fax',
      'label' => 'Fax',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '20',
        ),
        'type' => 'text_textfield',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_first_name'.
  $fields['node-ucsf_person-field_person_first_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_first_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '32',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'via EDS:givenName',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'diff_standard' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_first_name',
      'label' => 'First Name',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '32',
        ),
        'type' => 'text_textfield',
        'weight' => '59',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_headshot_photo'.
  $fields['node-ucsf_person-field_person_headshot_photo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_headshot_photo',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'diff_standard' => array(
          'label' => 'hidden',
          'module' => 'file_entity',
          'settings' => array(
            'file_view_mode' => 'preview',
          ),
          'type' => 'file_rendered',
          'weight' => '3',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'file_entity',
          'settings' => array(
            'file_view_mode' => 'teaser',
          ),
          'type' => 'file_rendered',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_headshot_photo',
      'label' => 'Headshot Photo',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'person/photo',
        'file_extensions' => 'jpg jpeg png',
        'max_filesize' => '256 MB',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'public' => 'public',
            'vimeo' => 0,
            'youtube' => 0,
          ),
          'allowed_types' => array(
            'audio' => 0,
            'document' => 0,
            'image' => 'image',
            'video' => 0,
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 0,
            'media_default--media_browser_my_files' => 0,
            'media_internet' => 0,
            'upload' => 0,
          ),
          'manualcrop_crop_info' => 1,
          'manualcrop_default_crop_area' => 1,
          'manualcrop_enable' => 1,
          'manualcrop_inline_crop' => 0,
          'manualcrop_instant_crop' => FALSE,
          'manualcrop_instant_preview' => 1,
          'manualcrop_maximize_default_crop_area' => 1,
          'manualcrop_require_cropping' => array(
            'original_cropped' => 0,
            'square_crop' => 0,
          ),
          'manualcrop_styles_list' => array(
            'square_crop' => 'square_crop',
          ),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 0,
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '35',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_last_name'.
  $fields['node-ucsf_person-field_person_last_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_last_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '48',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'via EDS:sn',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'diff_standard' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '9',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_last_name',
      'label' => 'Last Name',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '48',
        ),
        'type' => 'text_textfield',
        'weight' => '61',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_middle_name'.
  $fields['node-ucsf_person-field_person_middle_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_middle_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '32',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'via EDS:initials',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'diff_standard' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_middle_name',
      'label' => 'Middle Name or Initial',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '32',
        ),
        'type' => 'text_textfield',
        'weight' => '60',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_payroll_title'.
  $fields['node-ucsf_person-field_person_payroll_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_payroll_title',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '60',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'via EDS:title',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
        'search_index' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '37',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_payroll_title',
      'label' => 'Payroll title',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '28',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_preferred_name'.
  $fields['node-ucsf_person-field_person_preferred_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_preferred_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '32',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'via EDS:ucsfEduPreferredGivenName',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '12',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_preferred_name',
      'label' => 'Preferred First Name',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '32',
        ),
        'type' => 'text_textfield',
        'weight' => '63',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_primary_dept'.
  $fields['node-ucsf_person-field_person_primary_dept'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_primary_dept',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'person_primary_dept_unit',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'via EDS: ucsfEduWorkingDepartmentName',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '38',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '11',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '16',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_primary_dept',
      'label' => 'Primary Department or Unit',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '30',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_subtype'.
  $fields['node-ucsf_person-field_person_subtype'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_subtype',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'openacademy_person_type',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This field is used to provide additional filter values, or to override filter values for the grouping and sorting of people.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '20',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '34',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_subtype',
      'label' => 'Person Type Extended',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '35',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_title_override'.
  $fields['node-ucsf_person-field_person_title_override'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_title_override',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Use this field to override a persons working title to better fit the current website.  Errors and corrections to the actual working title should be added directly to the directory via HR.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '25',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_title_override',
      'label' => 'Title Override',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '80',
        ),
        'type' => 'text_textfield',
        'weight' => '36',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_type'.
  $fields['node-ucsf_person-field_person_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_type',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'openacademy_person_type',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Derived via EDS:eduPersonPrimaryAffiliation and EDS:eduPersonAffiliation',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '48',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '13',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '21',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_type',
      'label' => 'Person Type',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_type_full'.
  $fields['node-ucsf_person-field_person_type_full'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_type_full',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'openacademy_person_type',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Full list via EDS:eduPersonAffiliation, not used in most implementations.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '0',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '49',
        ),
        'search_index' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '22',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_type_full',
      'label' => 'Person Type (full)',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '34',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_what_i_do_text'.
  $fields['node-ucsf_person-field_person_what_i_do_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_what_i_do_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'diff_standard' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '43',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_what_i_do_text',
      'label' => 'What I do',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '10',
        ),
        'type' => 'text_textarea',
        'weight' => '36',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_person_working_title'.
  $fields['node-ucsf_person-field_person_working_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_working_title',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '60',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'via EDS:ucsfEduWorkingTitle or EDS:title',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'diff_standard' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_working_title',
      'label' => 'Working Title',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '29',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_private_practice_address'.
  $fields['node-ucsf_person-field_private_practice_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_private_practice_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'addressfield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => array(
        0 => array(
          'element_key' => 'node|ucsf_person|field_private_practice_address|und|0',
          'thoroughfare' => '',
          'premise' => '',
          'locality' => '',
          'administrative_area' => '',
          'postal_code' => '',
          'country' => 'US',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '2',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_private_practice_address',
      'label' => 'Private Practice Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(
            'US' => 'US',
          ),
          'format_handlers' => array(
            'address' => 'address',
            'address-hide-country' => 0,
            'organisation' => 0,
            'name-full' => 0,
            'name-oneline' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_private_practice_phone'.
  $fields['node-ucsf_person-field_private_practice_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_private_practice_phone',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '50',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'diff_standard' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '30',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_private_practice_phone',
      'label' => 'Private Practice Phone',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'node-ucsf_person-field_profiles_link'.
  $fields['node-ucsf_person-field_profiles_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profiles_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'ucsf_person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'via Profiles:ProfilesURL',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'panels_people' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '45',
        ),
        'search_index' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profiles_link',
      'label' => 'Profiles Link',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 0,
        'rel_remove' => 'default',
        'title' => 'value',
        'title_maxlength' => '128',
        'title_value' => 'UCSF Profiles',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 0,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '11',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Degrees');
  t('Department Override');
  t('Derived via EDS:eduPersonPrimaryAffiliation and EDS:eduPersonAffiliation');
  t('Display name');
  t('Email');
  t('Fax');
  t('First Name');
  t('Full list via EDS:eduPersonAffiliation, not used in most implementations.');
  t('Headshot Photo');
  t('Import messages');
  t('Last Name');
  t('Middle Name or Initial');
  t('Payroll title');
  t('Person Type');
  t('Person Type (full)');
  t('Person Type Extended');
  t('Phone');
  t('Preferred First Name');
  t('Primary Department or Unit');
  t('Private Practice Address');
  t('Private Practice Phone');
  t('Profiles Link');
  t('This field is used to provide additional filter values, or to override filter values for the grouping and sorting of people.');
  t('Title Override');
  t('Use this field to override a persons working title to better fit the current website.  Errors and corrections to the actual working title should be added directly to the directory via HR.');
  t('Used to force listing in a department other than listed in the directory.');
  t('Warnings and notices from the EDS (directory) and CTSI Profiles imports show here.');
  t('What I do');
  t('Working Title');
  t('via EDS: DisplayName');
  t('via EDS: ucsfEduWorkingDepartmentName');
  t('via EDS:facsimileTelephoneNumber

');
  t('via EDS:givenName');
  t('via EDS:initials');
  t('via EDS:mail');
  t('via EDS:sn');
  t('via EDS:telephoneNumber');
  t('via EDS:title');
  t('via EDS:ucsfEduDegree');
  t('via EDS:ucsfEduPreferredGivenName');
  t('via EDS:ucsfEduWorkingTitle or EDS:title');
  t('via Profiles:ProfilesURL');

  return $fields;
}
