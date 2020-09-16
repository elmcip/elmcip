<?php

/**
 * @file
 * elmcip_content_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function elmcip_content_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_class_group';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_critical_writing';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_databases_and_archives';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_event';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_notebook';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_notebook_entry';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_organization';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_page';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_person';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_platform_software';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_publisher';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_research_collection';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_story';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_teaching_resource';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_work';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_class_group';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_critical_writing';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_databases_and_archives';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_event';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_notebook';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_notebook_entry';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_organization';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_page';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_person';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_platform_software';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_publisher';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_research_collection';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_story';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_teaching_resource';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_work';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_critical_writing';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_databases_and_archives';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_event';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_page';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_person';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_platform_software';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_research_collection';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_story';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_work';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__book';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__class_group';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'locations' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__critical_writing';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'body' => array(
          'weight' => 0,
        ),
        'nd_switch_bm' => array(
          'weight' => '33',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'revision_information' => array(
          'weight' => '29',
        ),
        'author' => array(
          'weight' => '30',
        ),
        'options' => array(
          'weight' => '27',
        ),
        'menu' => array(
          'weight' => '28',
        ),
        'taxonomy' => array(
          'weight' => '18',
        ),
        'path' => array(
          'weight' => '10',
        ),
        'creativecommons' => array(
          'weight' => '25',
        ),
        'detailed_question' => array(
          'weight' => '26',
        ),
        'Critical_writing_in_book_node_content_1' => array(
          'weight' => '19',
        ),
        'Work_critical_writing_node_content_1' => array(
          'weight' => '22',
        ),
        'Tr_critical_writing_node_content_1' => array(
          'weight' => '21',
        ),
        'critical_writin_critical_writing_node_content_1' => array(
          'weight' => '23',
        ),
        'Creative_works_in_anthology_node_content_1' => array(
          'weight' => '20',
        ),
        'cw_reference_critical_writing_node_content_1' => array(
          'weight' => '24',
        ),
        'locations' => array(
          'weight' => '11',
        ),
        'flag' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(
        'Critical_writing_in_book_entity_view_1' => array(
          'default' => array(
            'weight' => '37',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '34',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '54',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '51',
            'visible' => FALSE,
          ),
        ),
        'Creative_works_in_anthology_entity_view_1' => array(
          'default' => array(
            'weight' => '38',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '35',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '56',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '41',
            'visible' => FALSE,
          ),
        ),
        'critical_writin_critical_writing_entity_view_1' => array(
          'default' => array(
            'weight' => '41',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '38',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '55',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '52',
            'visible' => FALSE,
          ),
        ),
        'cw_reference_critical_writing_entity_view_1' => array(
          'default' => array(
            'weight' => '48',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '45',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '57',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '54',
            'visible' => FALSE,
          ),
        ),
        'Work_critical_writing_entity_view_1' => array(
          'default' => array(
            'weight' => '40',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '37',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '53',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '53',
            'visible' => FALSE,
          ),
        ),
        'Tr_critical_writing_entity_view_1' => array(
          'full' => array(
            'weight' => '47',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '49',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '52',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '47',
            'visible' => FALSE,
          ),
        ),
        'other_editions_entity_view_1' => array(
          'full' => array(
            'weight' => '33',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '36',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '43',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '44',
            'visible' => FALSE,
          ),
        ),
        'series_reference_critical_writin_entity_view_1' => array(
          'full' => array(
            'weight' => '36',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '39',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '42',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '48',
            'visible' => FALSE,
          ),
        ),
        'event_ref_on_cw_entity_view_1' => array(
          'full' => array(
            'weight' => '44',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '41',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '47',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '45',
            'visible' => FALSE,
          ),
        ),
        'database_on_critical_writing_entity_view_1' => array(
          'full' => array(
            'weight' => '43',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '44',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '46',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '43',
            'visible' => FALSE,
          ),
        ),
        'research_collection_critical_writing_entity_view_1' => array(
          'full' => array(
            'weight' => '48',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '50',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '49',
            'visible' => FALSE,
          ),
        ),
        'publisher_on_critical_writing_entity_view_1' => array(
          'full' => array(
            'weight' => '40',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '43',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '46',
            'visible' => FALSE,
          ),
        ),
        'publisher_referenced_on_critical_writing_entity_view_1' => array(
          'full' => array(
            'weight' => '41',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '44',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '50',
            'visible' => FALSE,
          ),
        ),
        'organization_referenced_on_critical_writing_entity_view_1' => array(
          'full' => array(
            'weight' => '42',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '45',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '42',
            'visible' => FALSE,
          ),
        ),
        'organization_platform_critical_writing_entity_view_1' => array(
          'full' => array(
            'weight' => '39',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '42',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'flag_librarian_approved' => array(
          'default' => array(
            'weight' => '27',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__databases_and_archives';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'locations' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'research_collection_db_arcive_entity_view_1' => array(
          'full' => array(
            'weight' => '19',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '20',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'teaching_resource_db_archive_entity_view_1' => array(
          'full' => array(
            'weight' => '18',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '19',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'critical_writing_db_archive_entity_view_1' => array(
          'full' => array(
            'weight' => '17',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '18',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'platform_db_archive_entity_view_1' => array(
          'full' => array(
            'weight' => '20',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__event';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'body' => array(
          'weight' => 0,
        ),
        'title' => array(
          'weight' => '0',
        ),
        'revision_information' => array(
          'weight' => '8',
        ),
        'author' => array(
          'weight' => '9',
        ),
        'options' => array(
          'weight' => '10',
        ),
        'menu' => array(
          'weight' => '7',
        ),
        'taxonomy' => array(
          'weight' => '5',
        ),
        'path' => array(
          'weight' => '12',
        ),
        'creativecommons' => array(
          'weight' => '13',
        ),
        'detailed_question' => array(
          'weight' => '10',
        ),
        'Event_work_node_content_1' => array(
          'weight' => '4',
        ),
        'Event_critical_writing_node_content_1' => array(
          'weight' => '3',
        ),
        'locations' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'Event_critical_writing_entity_view_1' => array(
          'default' => array(
            'weight' => '18',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'cw_reference_event_entity_view_1' => array(
          'default' => array(
            'weight' => '20',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '18',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'Event_work_entity_view_1' => array(
          'default' => array(
            'weight' => '19',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '17',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'event_series_entity_view_1' => array(
          'full' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '17',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'Event_work_entity_view_2' => array(
          'full' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'publisher_presented_at_event_entity_view_1' => array(
          'full' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'flag_librarian_approved' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__notebook';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'locations' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'notes_in_this_notebook_entity_view_1' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__notebook_entry';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'locations' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__organization';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'body' => array(
          'weight' => 0,
        ),
        'title' => array(
          'weight' => '0',
        ),
        'revision_information' => array(
          'weight' => '2',
        ),
        'author' => array(
          'weight' => '3',
        ),
        'options' => array(
          'weight' => '4',
        ),
        'menu' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'creativecommons' => array(
          'weight' => '7',
        ),
        'Event_organizer_node_content_1' => array(
          'weight' => '0',
        ),
        'locations' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'Event_organizer_entity_view_1' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'Critical_writing_organization_entity_view_1' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'tr_org_entity_view_1' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'work_organization_entity_view_1' => array(
          'full' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'people_afil_on_organization_entity_view_1' => array(
          'full' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'research_collection_organization_entity_view_1' => array(
          'full' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'organization_platform_entity_view_1' => array(
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'body' => array(
          'weight' => 0,
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'locations' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__person';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'body' => array(
          'weight' => 0,
        ),
        'title' => array(
          'weight' => '0',
        ),
        'revision_information' => array(
          'weight' => '12',
        ),
        'author' => array(
          'weight' => '11',
        ),
        'options' => array(
          'weight' => '13',
        ),
        'menu' => array(
          'weight' => '10',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'creativecommons' => array(
          'weight' => '6',
        ),
        'detailed_question' => array(
          'weight' => '10',
        ),
        'Work_node_content_1' => array(
          'weight' => '7',
        ),
        'Critical_writing_node_content_1' => array(
          'weight' => '8',
        ),
        'Editedby_node_content_1' => array(
          'weight' => '9',
        ),
        'TeachingResourceby_node_content_1' => array(
          'weight' => '10',
        ),
        'Journal_Editedby_node_content_1' => array(
          'weight' => '10',
        ),
        'locations' => array(
          'weight' => '30',
        ),
        'flag' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(
        'Critical_writing_entity_view_1' => array(
          'default' => array(
            'weight' => '17',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
          'user_attach_person_refs' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
        ),
        'Work_entity_view_1' => array(
          'default' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
          'user_attach_person_refs' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
        ),
        'Journal_Editedby_entity_view_1' => array(
          'default' => array(
            'weight' => '20',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '19',
            'visible' => TRUE,
          ),
          'user_attach_person_refs' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
        ),
        'TeachingResourceby_entity_view_1' => array(
          'default' => array(
            'weight' => '23',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '22',
            'visible' => TRUE,
          ),
          'user_attach_person_refs' => array(
            'weight' => '17',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
        ),
        'Editedby_entity_view_1' => array(
          'default' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'user_attach_person_refs' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
        ),
        'edited_by_person_edited_by_person' => array(
          'full' => array(
            'weight' => '18',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '19',
            'visible' => TRUE,
          ),
          'user_attach_person_refs' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
        ),
        'translated_by_person_translated_by_person' => array(
          'full' => array(
            'weight' => '17',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '18',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
        ),
        'org_affil_person_affiliation_person' => array(
          'full' => array(
            'weight' => '24',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '25',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
        ),
        'curator_of_edited_by_person' => array(
          'full' => array(
            'weight' => '21',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '22',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'eva_research_collection_entity_view_1' => array(
          'full' => array(
            'weight' => '19',
            'visible' => TRUE,
          ),
          'search_result' => NULL,
        ),
        'research_collection_person_entity_view_1' => array(
          'full' => array(
            'weight' => '25',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '26',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
        ),
        'Work_entity_view_2' => array(
          'full' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
        ),
        'events_on_individual_organizer_page_entity_view_1' => array(
          'full' => array(
            'weight' => '20',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '21',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
        ),
        'resource_collection_curated_by_person_edited_by_person' => array(
          'full' => array(
            'weight' => '23',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '24',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
        'organization_platform_entity_view_1' => array(
          'full' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
        ),
        'organization_platform_person_entity_view_1' => array(
          'full' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
        ),
        'flag_librarian_approved' => array(
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'user_attach_person_refs' => array(
        'custom_settings' => TRUE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__platform_software';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'locations' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(
        'works_developed_in_this_platform_entity_view_1' => array(
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'cw_developed_in_this_platform_entity_view_2' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'flag_librarian_approved' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__publisher';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'body' => array(
          'weight' => 0,
        ),
        'title' => array(
          'weight' => '0',
        ),
        'revision_information' => array(
          'weight' => '2',
        ),
        'author' => array(
          'weight' => '3',
        ),
        'options' => array(
          'weight' => '4',
        ),
        'menu' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'creativecommons' => array(
          'weight' => '7',
        ),
        'Work_publisher_node_content_1' => array(
          'weight' => '-1',
        ),
        'Critical_writing_publisher_node_content_1' => array(
          'weight' => '0',
        ),
        'locations' => array(
          'weight' => '30',
        ),
        'flag' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(
        'Work_publisher_entity_view_1' => array(
          'default' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'Critical_writing_publisher_entity_view_1' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'critical_writing_on_publisher_entity_view_1' => array(
          'full' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'series_on_publisher_entity_view_1' => array(
          'full' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
        ),
        'critical_writing_on_publisher_entity_view_1_form' => array(
          'full' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
        ),
        'research_collection_publisher_entity_view_1' => array(
          'full' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'critical_writing_about_publisher_entity_view_1' => array(
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => NULL,
        ),
        'critical_writing_on_referenced_publisher_entity_view_1' => array(
          'full' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'organization_platform_entity_view_1' => array(
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'flag_librarian_approved' => array(
          'default' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__research_collection';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'locations' => array(
          'weight' => '15',
        ),
      ),
      'display' => array(
        'research_collection_table_of_creative_wroks_entity_view_1' => array(
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => NULL,
        ),
        'works_listed_on_research_collection_entity_view_1' => array(
          'full' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
        'cw_listed_in_research_collection_entity_view_1' => array(
          'full' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
        ),
        'teaching_resources_listed_in_research_collection_entity_view_1' => array(
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'people_listed_in_research_collection_entity_view_1' => array(
          'full' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'organizations_listed_in_research_collection_entity_view_1' => array(
          'full' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'publishers_listed_in_research_collection_entity_view_1' => array(
          'full' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'databases_archives_listed_in_research_collection_entity_view_1' => array(
          'full' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'events_listed_in_research_collection_entity_view_1' => array(
          'full' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__story';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'body' => array(
          'weight' => '-3',
        ),
        'revision_information' => array(
          'weight' => '2',
        ),
        'author' => array(
          'weight' => '3',
        ),
        'options' => array(
          'weight' => '4',
        ),
        'menu' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'attachments' => array(
          'weight' => '5',
        ),
        'creativecommons' => array(
          'weight' => '8',
        ),
        'locations' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(),
    ),
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_600' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__teaching_resource';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'body' => array(
          'weight' => 0,
        ),
        'title' => array(
          'weight' => '0',
        ),
        'revision_information' => array(
          'weight' => '19',
        ),
        'author' => array(
          'weight' => '20',
        ),
        'options' => array(
          'weight' => '21',
        ),
        'menu' => array(
          'weight' => '18',
        ),
        'taxonomy' => array(
          'weight' => '13',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'creativecommons' => array(
          'weight' => '24',
        ),
        'detailed_question' => array(
          'weight' => '25',
        ),
        'Work_tr_node_content_1' => array(
          'weight' => '11',
        ),
        'critical_writing_tr_node_content_1' => array(
          'weight' => '10',
        ),
        'locations' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'critical_writing_tr_entity_view_1' => array(
          'default' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'Work_tr_entity_view_1' => array(
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'teaching_ressource_tr_entity_view_1' => array(
          'full' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
        ),
        'research_collection_teaching_resource_entity_view_1' => array(
          'full' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
        ),
        'database_listed_on_teaching_resource_entity_view_1' => array(
          'full' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
        ),
        'platform_tr_entity_view_1' => array(
          'full' => array(
            'weight' => '17',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '17',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__work';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'body' => array(
          'weight' => 0,
        ),
        'title' => array(
          'weight' => '0',
        ),
        'revision_information' => array(
          'weight' => '10',
        ),
        'author' => array(
          'weight' => '11',
        ),
        'options' => array(
          'weight' => '8',
        ),
        'menu' => array(
          'weight' => '9',
        ),
        'taxonomy' => array(
          'weight' => '7',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'creativecommons' => array(
          'weight' => '14',
        ),
        'detailed_question' => array(
          'weight' => '10',
        ),
        'Critical_writing_work_node_content_1' => array(
          'weight' => '6',
        ),
        'Tr_work_node_content_1' => array(
          'weight' => '10',
        ),
        'locations' => array(
          'weight' => '30',
        ),
        'flag' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(
        'Critical_writing_work_entity_view_1' => array(
          'default' => array(
            'weight' => '41',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '34',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '55',
            'visible' => FALSE,
          ),
          'data_export' => array(
            'weight' => '42',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '23',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
        ),
        'Tr_work_entity_view_1' => array(
          'full' => array(
            'weight' => '35',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '53',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '39',
            'visible' => TRUE,
          ),
          'data_export' => array(
            'weight' => '41',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
        ),
        'clone_of_research_collection_creative_work_entity_view_1' => array(
          'full' => array(
            'weight' => '37',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '40',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'data_export' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
        ),
        'flag_liberian' => array(
          'default' => array(
            'weight' => '19',
            'visible' => TRUE,
          ),
        ),
        'flag_librarian_approved' => array(
          'default' => array(
            'weight' => '23',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_book';
  $strongarm->value = '0';
  $export['language_content_type_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_class_group';
  $strongarm->value = '0';
  $export['language_content_type_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_critical_writing';
  $strongarm->value = '0';
  $export['language_content_type_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_databases_and_archives';
  $strongarm->value = '0';
  $export['language_content_type_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_event';
  $strongarm->value = '0';
  $export['language_content_type_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_notebook';
  $strongarm->value = '0';
  $export['language_content_type_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_notebook_entry';
  $strongarm->value = '0';
  $export['language_content_type_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_organization';
  $strongarm->value = '0';
  $export['language_content_type_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_page';
  $strongarm->value = '0';
  $export['language_content_type_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_person';
  $strongarm->value = '0';
  $export['language_content_type_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_platform_software';
  $strongarm->value = '0';
  $export['language_content_type_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_publisher';
  $strongarm->value = '0';
  $export['language_content_type_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_research_collection';
  $strongarm->value = '0';
  $export['language_content_type_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_story';
  $strongarm->value = '0';
  $export['language_content_type_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_teaching_resource';
  $strongarm->value = '0';
  $export['language_content_type_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_work';
  $strongarm->value = '0';
  $export['language_content_type_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_book';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_class_group';
  $strongarm->value = array();
  $export['menu_options_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_critical_writing';
  $strongarm->value = array();
  $export['menu_options_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_databases_and_archives';
  $strongarm->value = array();
  $export['menu_options_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_event';
  $strongarm->value = array();
  $export['menu_options_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_notebook';
  $strongarm->value = array();
  $export['menu_options_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_notebook_entry';
  $strongarm->value = array();
  $export['menu_options_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_organization';
  $strongarm->value = array();
  $export['menu_options_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'menu-conference',
  );
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_person';
  $strongarm->value = array();
  $export['menu_options_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_platform_software';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_publisher';
  $strongarm->value = array();
  $export['menu_options_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_research_collection';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_story';
  $strongarm->value = array();
  $export['menu_options_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_teaching_resource';
  $strongarm->value = array();
  $export['menu_options_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_work';
  $strongarm->value = array();
  $export['menu_options_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_book';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_class_group';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_critical_writing';
  $strongarm->value = 'features:0';
  $export['menu_parent_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_databases_and_archives';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_notebook';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_notebook_entry';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_organization';
  $strongarm->value = 'features:0';
  $export['menu_parent_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'menu-conference:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_person';
  $strongarm->value = 'features:0';
  $export['menu_parent_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_platform_software';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_publisher';
  $strongarm->value = 'features:0';
  $export['menu_parent_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_research_collection';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_story';
  $strongarm->value = 'features:0';
  $export['menu_parent_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_teaching_resource';
  $strongarm->value = 'features:0';
  $export['menu_parent_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_work';
  $strongarm->value = 'features:0';
  $export['menu_parent_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_book';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_class_group';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_critical_writing';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_databases_and_archives';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_event';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_notebook';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_notebook_entry';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_organization';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_person';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_platform_software';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_publisher';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_research_collection';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_story';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );
  $export['node_options_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_teaching_resource';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_work';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_book';
  $strongarm->value = '1';
  $export['node_preview_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_class_group';
  $strongarm->value = '1';
  $export['node_preview_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_critical_writing';
  $strongarm->value = '1';
  $export['node_preview_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_databases_and_archives';
  $strongarm->value = '1';
  $export['node_preview_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_event';
  $strongarm->value = '1';
  $export['node_preview_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_notebook';
  $strongarm->value = '1';
  $export['node_preview_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_notebook_entry';
  $strongarm->value = '1';
  $export['node_preview_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_organization';
  $strongarm->value = '1';
  $export['node_preview_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '1';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_person';
  $strongarm->value = '1';
  $export['node_preview_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_platform_software';
  $strongarm->value = '1';
  $export['node_preview_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_publisher';
  $strongarm->value = '1';
  $export['node_preview_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_research_collection';
  $strongarm->value = '1';
  $export['node_preview_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_story';
  $strongarm->value = '1';
  $export['node_preview_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_teaching_resource';
  $strongarm->value = '1';
  $export['node_preview_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_work';
  $strongarm->value = '1';
  $export['node_preview_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_book';
  $strongarm->value = 1;
  $export['node_submitted_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_class_group';
  $strongarm->value = 1;
  $export['node_submitted_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_critical_writing';
  $strongarm->value = 1;
  $export['node_submitted_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_databases_and_archives';
  $strongarm->value = 1;
  $export['node_submitted_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_event';
  $strongarm->value = 0;
  $export['node_submitted_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_notebook';
  $strongarm->value = 1;
  $export['node_submitted_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_notebook_entry';
  $strongarm->value = 1;
  $export['node_submitted_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_organization';
  $strongarm->value = 0;
  $export['node_submitted_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_person';
  $strongarm->value = 0;
  $export['node_submitted_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_platform_software';
  $strongarm->value = 1;
  $export['node_submitted_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_publisher';
  $strongarm->value = 0;
  $export['node_submitted_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_research_collection';
  $strongarm->value = 1;
  $export['node_submitted_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_story';
  $strongarm->value = 1;
  $export['node_submitted_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_teaching_resource';
  $strongarm->value = 0;
  $export['node_submitted_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_work';
  $strongarm->value = 0;
  $export['node_submitted_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_book_pattern';
  $strongarm->value = '';
  $export['pathauto_node_book_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_class_group_pattern';
  $strongarm->value = '';
  $export['pathauto_node_class_group_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_critical_writing_pattern';
  $strongarm->value = '';
  $export['pathauto_node_critical_writing_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_databases_and_archives_pattern';
  $strongarm->value = '';
  $export['pathauto_node_databases_and_archives_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_pattern';
  $strongarm->value = '';
  $export['pathauto_node_event_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_notebook_entry_pattern';
  $strongarm->value = '';
  $export['pathauto_node_notebook_entry_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_notebook_pattern';
  $strongarm->value = '[node:content-type]/[current-user:name]/[node:title]';
  $export['pathauto_node_notebook_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_organization_pattern';
  $strongarm->value = '';
  $export['pathauto_node_organization_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_person_pattern';
  $strongarm->value = '';
  $export['pathauto_node_person_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_platform_software_pattern';
  $strongarm->value = '';
  $export['pathauto_node_platform_software_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_publisher_pattern';
  $strongarm->value = '';
  $export['pathauto_node_publisher_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_research_collection_pattern';
  $strongarm->value = '';
  $export['pathauto_node_research_collection_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_story_pattern';
  $strongarm->value = '';
  $export['pathauto_node_story_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_teaching_resource_pattern';
  $strongarm->value = '';
  $export['pathauto_node_teaching_resource_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_work_pattern';
  $strongarm->value = '';
  $export['pathauto_node_work_pattern'] = $strongarm;

  return $export;
}
