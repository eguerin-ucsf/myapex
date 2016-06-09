<?php
/**
 * @file
 * ucsf_images_gallery.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ucsf_images_gallery_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_images|node|gallery|form';
  $field_group->group_name = 'group_gallery_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gallery_tabs';
  $field_group->data = array(
    'label' => 'Gallery',
    'weight' => '2',
    'children' => array(
      0 => 'field_gallery_image',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Gallery',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-gallery-images field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_gallery_images|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_tabs|node|gallery|form';
  $field_group->group_name = 'group_gallery_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '1',
    'children' => array(
      0 => 'group_gallery_text',
      1 => 'group_gallery_images',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-gallery-tabs field-group-tabs',
      ),
    ),
  );
  $export['group_gallery_tabs|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_text|node|gallery|form';
  $field_group->group_name = 'group_gallery_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gallery_tabs';
  $field_group->data = array(
    'label' => 'Header & Footer',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_gallery_footer',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gallery_text|node|gallery|form'] = $field_group;

  return $export;
}
