<?php
/**
 * @file
 * elmcip_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function elmcip_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_platform_editorial_status|node|platform_software|form';
  $field_group->group_name = 'group_platform_editorial_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'platform_software';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial Status',
    'weight' => '3',
    'children' => array(
      0 => 'field_record_status_tax',
      1 => 'field_editorial_notes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-platform-editorial-status field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_platform_editorial_status|node|platform_software|form'] = $field_group;

  return $export;
}