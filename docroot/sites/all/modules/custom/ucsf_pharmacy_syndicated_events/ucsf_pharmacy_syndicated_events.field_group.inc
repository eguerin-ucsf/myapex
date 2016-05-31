<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ucsf_pharmacy_syndicated_events_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_registration|node|recurring_event|form';
  $field_group->group_name = 'group_event_registration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recurring_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Registration',
    'weight' => '8',
    'children' => array(
      0 => 'field_event_registration_period',
      1 => 'field_event_registration_link',
      2 => 'field_event_registration_cost',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Registration',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-event-registration field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_event_registration|node|recurring_event|form'] = $field_group;

  return $export;
}
