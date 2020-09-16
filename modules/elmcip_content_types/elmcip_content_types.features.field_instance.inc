<?php

/**
 * @file
 * elmcip_content_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function elmcip_content_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-critical_writing-field_critical_writing_year'.
  $field_instances['node-critical_writing-field_critical_writing_year'] = array(
    'bundle' => 'critical_writing',
    'deleted' => 0,
    'description' => 'Indicate the year of first publication. If the work has been published in multiple venues, list the years of subsequent publication in the description field.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_critical_writing_year',
    'label' => 'Year',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 1,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-critical_writing-field_criticalw_platform_ref'.
  $field_instances['node-critical_writing-field_criticalw_platform_ref'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this critical writing references a platform/software, link to it here. The platform or software will autocomplete if it is in the database. If the work is not yet in the database, <a href="/node/add/platform-software" target="_blank">add the platform/software</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_criticalw_platform_ref',
    'label' => 'Platform referenced',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-critical_writing-field_cw_in_platform_software'.
  $field_instances['node-critical_writing-field_cw_in_platform_software'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this critical writing is made for the computer, use this field to indicate what platforms were used in its production (for example Flash, Scalar, etc.). The platform/software will autocomplete if it is in the database. If the platform/software is not yet in the database, <a target="_blank" href="/node/add/platform-software">add a record for the platform or software</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 21,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_cw_in_platform_software',
    'label' => 'Platform/Software',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_doi'.
  $field_instances['node-critical_writing-field_doi'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A digital object identifier <a target="_blank" href="https://www.doi.org">(DOI)</a> is a unique alphanumeric string assigned by a registration agency to identify content and provide a persistent link to its location on the Internet. The publisher assigns a DOI when your article is published and made available electronically.
All DOI numbers begin with a 10 and contain a prefix and a suffix separated by a slash. Example: 10.1000/182',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'elmcip_setup',
        'settings' => array(),
        'type' => 'elmcip_setup_doi',
        'weight' => 14,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_doi',
    'label' => 'DOI',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          'basic_text_editor' => 'basic_text_editor',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -5,
            ),
            2 => array(
              'weight' => -8,
            ),
            3 => array(
              'weight' => -9,
            ),
            4 => array(
              'weight' => -7,
            ),
            'basic_text_editor' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => -6,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_po_ex_entry'.
  $field_instances['node-critical_writing-field_po_ex_entry'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If there is a record for this critical writing in the <a href="https://po-ex.net" target="_blank">PO.EX database</a>, enter the URL of the entry.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 31,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 28,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_po_ex_entry',
    'label' => 'PO.EX entry',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => 'Po.Ex record',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_record_status_lib'.
  $field_instances['node-critical_writing-field_record_status_lib'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_record_status_lib',
    'label' => 'Librarian status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 42,
    ),
  );

  // Exported field_instance:
  // 'node-databases_and_archives-field_database_platform_ref'.
  $field_instances['node-databases_and_archives-field_database_platform_ref'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field to indicate what platforms and software are involved in the production of this database or archive (for example Drupal, Dspace, Drupal, etc.). The platform/software will autocomplete if it is in the database. If the platform/software is not yet in the database, <a href="/node/add/platform-software" target="_blank">add the platform/software</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_database_platform_ref',
    'label' => 'Platform/Software',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_editorial_notes'.
  $field_instances['node-platform_software-field_editorial_notes'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add notes about editorial status here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_editorial_notes',
    'label' => 'KB Editor Notes',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          'basic_text_editor' => 'basic_text_editor',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -5,
            ),
            2 => array(
              'weight' => -8,
            ),
            3 => array(
              'weight' => -9,
            ),
            4 => array(
              'weight' => -7,
            ),
            'basic_text_editor' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => -6,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-platform_software-field_platform_developers'.
  $field_instances['node-platform_software-field_platform_developers'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the individuals who were key to the development of this platform/software, if applicable (e.g. Daniel Howe for RITA libraries). The person will autocomplete if they are in the database. If person is not yet in the database, <a href="/node/add/person" target="_blank">add the person</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_platform_developers',
    'label' => 'Developers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_platform_versions'.
  $field_instances['node-platform_software-field_platform_versions'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Link to a stable URL documenting the version history of the software or platform, if available. Indicate the nature of the link using the title field (e.g. Wikipedia version history of WordPerfect).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 12,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_platform_versions',
    'label' => 'Version history (link)',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 'optional',
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_platform_year'.
  $field_instances['node-platform_software-field_platform_year'] = array(
    'bundle' => 'platform_software',
    'deleted' => 0,
    'description' => 'Indicate the year that this platform/software was first released.
<br>Format: 2017',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 10,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_platform_year',
    'label' => 'Year initiated',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 1,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'node-platform_software-field_publisher_or_organization'.
  $field_instances['node-platform_software-field_publisher_or_organization'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the publisher or organization responsible for this platform/software.The publisher or organization will autocomplete if it is in the database. If the work is not yet in the database,  <a href="/node/add/organization" target="_blank">add the organization</a> or <a href="/node/add/organization" target="_blank">add the publisher</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_publisher_or_organization',
    'label' => 'Publisher or organization',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_record_status_tax'.
  $field_instances['node-platform_software-field_record_status_tax'] = array(
    'bundle' => 'platform_software',
    'default_value' => array(
      0 => array(
        'tid' => 1489,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_record_status_tax',
    'label' => 'Record Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_repository'.
  $field_instances['node-platform_software-field_repository'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a URL to a repository or version control system such as Github or bitbucket where source code can be accessed.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_repository',
    'label' => 'Repository',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_version_history'.
  $field_instances['node-platform_software-field_version_history'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide a brief version history of the platform if available. Indicate major changes in functionality over time. Note that specific versions of given platforms (e.g. HTML 2.0, HTML 5) should not have individual records, though tags can be used to indicate versions used on individual works. If you source the version history from elsewhere, indicate the source in parentheses after the version history.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_version_history',
    'label' => 'Version history (text)',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 0,
          2 => 0,
          3 => 0,
          4 => 0,
          'basic_text_editor' => 'basic_text_editor',
          'ds_code' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -5,
            ),
            2 => array(
              'weight' => -8,
            ),
            3 => array(
              'weight' => -9,
            ),
            4 => array(
              'weight' => -7,
            ),
            'basic_text_editor' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => -6,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-research_collection-field_collection_platform_ref'.
  $field_instances['node-research_collection-field_collection_platform_ref'] = array(
    'bundle' => 'research_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field to include platforms/software in this collection. The platform/software will autocomplete if it is in the database. If the platform/software is not in the database, <a href="/node/add/platform-software" target="_blank">add the database/software</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_collection_platform_ref',
    'label' => 'Platform referenced',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'node-teaching_resource-field_platform_software_referenc'.
  $field_instances['node-teaching_resource-field_platform_software_referenc'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => ' If the teaching resource references a platform/software, link to it here. The platform/software will autocomplete if it is in the database. If the platform/software is not yet in the database, <a href="/node/add/platform-software" target="_blank">add the platform/software</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_platform_software_referenc',
    'label' => 'Platform/Software referenced',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-work-field_authoring_software_entry'.
  $field_instances['node-work-field_authoring_software_entry'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If there is a record for this work in the <a href="http://narrabase.net/" target="_blank">Narrabase project</a>, enter the URL of the entry.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 30,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 26,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_authoring_software_entry',
    'label' => 'Narrabase.net entry',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => 'Narrabase.net entry',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-work-field_brown_digital_repository'.
  $field_instances['node-work-field_brown_digital_repository'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If there is a record for this work in the <a href="https://repository.library.brown.edu/studio/search/?selected_facets=ir_collection_name%3ADigital+Language+Arts&search_field=" rel="noreferrer noopener" target="_blank">Brown Digital Repository</a>, enter the URL of the entry.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 32,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_brown_digital_repository',
    'label' => 'Brown Digital Repository',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => 'Brown Digital Repository',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-work-field_po_ex_entry'.
  $field_instances['node-work-field_po_ex_entry'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If there is a record for this work in the <a href="https://po-ex.net" target="_blank">PO.EX database</a>, enter the URL of the entry.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 31,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 27,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_po_ex_entry',
    'label' => 'PO.EX entry',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => 'Po-ex.net entry',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-work-field_repository'.
  $field_instances['node-work-field_repository'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field to add a URL for link to repository or version control system such as Github or bitbucket where source code can be accessed.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 19,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_repository',
    'label' => 'Repository',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-work-field_series_ref'.
  $field_instances['node-work-field_series_ref'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_series_ref',
    'label' => 'Series',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-work-field_work_platform_software'.
  $field_instances['node-work-field_work_platform_software'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field to indicate what platforms and software are involved in the production of this work (for example HTML, Flash, CAVE, iPad, etc.). The platform or software will autocomplete if it is in the database. If the platform or software is not yet in the database, <a target="_blank" href="/node/add/platform-software">add a record for the platform or software</a>.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_work_platform_software',
    'label' => 'Platform/Software',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t(' If the teaching resource references a platform/software, link to it here. The platform/software will autocomplete if it is in the database. If the platform/software is not yet in the database, <a href="/node/add/platform-software" target="_blank">add the platform/software</a>.');
  t('A digital object identifier <a target="_blank" href="https://www.doi.org">(DOI)</a> is a unique alphanumeric string assigned by a registration agency to identify content and provide a persistent link to its location on the Internet. The publisher assigns a DOI when your article is published and made available electronically.
All DOI numbers begin with a 10 and contain a prefix and a suffix separated by a slash. Example: 10.1000/182');
  t('Add a URL to a repository or version control system such as Github or bitbucket where source code can be accessed.');
  t('Add notes about editorial status here.');
  t('Brown Digital Repository');
  t('DOI');
  t('Developers');
  t('Enter the individuals who were key to the development of this platform/software, if applicable (e.g. Daniel Howe for RITA libraries). The person will autocomplete if they are in the database. If person is not yet in the database, <a href="/node/add/person" target="_blank">add the person</a>.');
  t('Enter the publisher or organization responsible for this platform/software.The publisher or organization will autocomplete if it is in the database. If the work is not yet in the database,  <a href="/node/add/organization" target="_blank">add the organization</a> or <a href="/node/add/organization" target="_blank">add the publisher</a>.');
  t('If there is a record for this critical writing in the <a href="https://po-ex.net" target="_blank">PO.EX database</a>, enter the URL of the entry.');
  t('If there is a record for this work in the <a href="http://narrabase.net/" target="_blank">Narrabase project</a>, enter the URL of the entry.');
  t('If there is a record for this work in the <a href="https://po-ex.net" target="_blank">PO.EX database</a>, enter the URL of the entry.');
  t('If there is a record for this work in the <a href="https://repository.library.brown.edu/studio/search/?selected_facets=ir_collection_name%3ADigital+Language+Arts&search_field=" rel="noreferrer noopener" target="_blank">Brown Digital Repository</a>, enter the URL of the entry.');
  t('If this critical writing is made for the computer, use this field to indicate what platforms were used in its production (for example Flash, Scalar, etc.). The platform/software will autocomplete if it is in the database. If the platform/software is not yet in the database, <a target="_blank" href="/node/add/platform-software">add a record for the platform or software</a>.');
  t('If this critical writing references a platform/software, link to it here. The platform or software will autocomplete if it is in the database. If the work is not yet in the database, <a href="/node/add/platform-software" target="_blank">add the platform/software</a>.');
  t('Indicate the year of first publication. If the work has been published in multiple venues, list the years of subsequent publication in the description field.');
  t('Indicate the year that this platform/software was first released.
<br>Format: 2017');
  t('KB Editor Notes');
  t('Librarian status');
  t('Link to a stable URL documenting the version history of the software or platform, if available. Indicate the nature of the link using the title field (e.g. Wikipedia version history of WordPerfect).');
  t('Narrabase.net entry');
  t('PO.EX entry');
  t('Platform referenced');
  t('Platform/Software');
  t('Platform/Software referenced');
  t('Provide a brief version history of the platform if available. Indicate major changes in functionality over time. Note that specific versions of given platforms (e.g. HTML 2.0, HTML 5) should not have individual records, though tags can be used to indicate versions used on individual works. If you source the version history from elsewhere, indicate the source in parentheses after the version history.');
  t('Publisher or organization');
  t('Record Status');
  t('Repository');
  t('Series');
  t('Use this field to add a URL for link to repository or version control system such as Github or bitbucket where source code can be accessed.');
  t('Use this field to include platforms/software in this collection. The platform/software will autocomplete if it is in the database. If the platform/software is not in the database, <a href="/node/add/platform-software" target="_blank">add the database/software</a>.');
  t('Use this field to indicate what platforms and software are involved in the production of this database or archive (for example Drupal, Dspace, Drupal, etc.). The platform/software will autocomplete if it is in the database. If the platform/software is not yet in the database, <a href="/node/add/platform-software" target="_blank">add the platform/software</a>.');
  t('Use this field to indicate what platforms and software are involved in the production of this work (for example HTML, Flash, CAVE, iPad, etc.). The platform or software will autocomplete if it is in the database. If the platform or software is not yet in the database, <a target="_blank" href="/node/add/platform-software">add a record for the platform or software</a>.');
  t('Version history (link)');
  t('Version history (text)');
  t('Year');
  t('Year initiated');

  return $field_instances;
}
