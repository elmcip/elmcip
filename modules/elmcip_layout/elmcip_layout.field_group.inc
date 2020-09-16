<?php

/**
 * @file
 * elmcip_layout.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function elmcip_layout_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_crit|node|critical_writing|default';
  $field_group->group_name = 'group_editorial_crit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial',
    'weight' => '20',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-editorial-crit field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_editorial_crit|node|critical_writing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial|node|work|default';
  $field_group->group_name = 'group_editorial';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-editorial field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_editorial|node|work|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|critical_writing|default';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta data',
    'weight' => '53',
    'children' => array(
      0 => 'purl',
      1 => 'author',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-meta field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_meta|node|critical_writing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|databases_and_archives|default';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'databases_and_archives';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta data',
    'weight' => '24',
    'children' => array(
      0 => 'purl',
      1 => 'author',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Meta data',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-meta',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_meta|node|databases_and_archives|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|organization|default';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta data',
    'weight' => '15',
    'children' => array(
      0 => 'purl',
      1 => 'author',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Meta data',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-meta',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_meta|node|organization|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|person|default';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta data',
    'weight' => '28',
    'children' => array(
      0 => 'full_name',
      1 => 'purl',
      2 => 'author',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Meta data',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-meta',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_meta|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|platform_software|default';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'platform_software';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta data',
    'weight' => '16',
    'children' => array(
      0 => 'purl',
      1 => 'author',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-meta field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_meta|node|platform_software|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|publisher|default';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publisher';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta data',
    'weight' => '18',
    'children' => array(
      0 => 'purl',
      1 => 'author',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-meta field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_meta|node|publisher|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|research_collection|default';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_collection';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta data',
    'weight' => '14',
    'children' => array(
      0 => 'purl',
      1 => 'author',
      2 => 'post_date',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-meta field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_meta|node|research_collection|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|teaching_resource|default';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta data',
    'weight' => '21',
    'children' => array(
      0 => 'purl',
      1 => 'author',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Meta data',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-meta',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_meta|node|teaching_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tr_editorial|node|teaching_resource|default';
  $field_group->group_name = 'group_tr_editorial';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial',
    'weight' => '35',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-editorial field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_tr_editorial|node|teaching_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workdoc|node|work|form';
  $field_group->group_name = 'group_workdoc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Documentation',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-workdoc field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_workdoc|node|work|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_worksubmit|node|work|form';
  $field_group->group_name = 'group_worksubmit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Submit to ELMCIP Anthology',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-worksubmit field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_worksubmit|node|work|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Documentation');
  t('Editorial');
  t('Meta data');
  t('Submit to ELMCIP Anthology');

  return $field_groups;
}
