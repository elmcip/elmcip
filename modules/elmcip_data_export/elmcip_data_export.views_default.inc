<?php

/**
 * @file
 * elmcip_data_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function elmcip_data_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Author_page';
  $view->description = 'Author page view on front page and as list.';
  $view->tag = 'Person, Page';
  $view->base_table = 'node';
  $view->human_name = 'Author page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Authors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all authors';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_last_name_value' => 'field_last_name_value',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_last_name_value';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_last_name_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total records';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/person" target="_blank">author</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'The site contain not any content of this type. Be the first to <a href="node/add/author">add new</a> author content.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = TRUE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '<span class="editing"><a href="[path]">[field_last_name]</a><span class="edit">[edit_node]</span></span>';
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['field_last_name']['alter']['absolute'] = TRUE;
  /* Field: Content: Middle name */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_middle_name']['alter']['text'] = '<a href="[path]">[field_middle_name]</a>';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['alter']['text'] = '<a href="[path]">[field_first_name]</a>';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['text'] = '<span class="editing">
  [changed]<span class="edit">[edit_node]</span>
</span>';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'dmy';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'edit_node' => 'edit_node',
    'field_last_name' => 'field_last_name',
    'field_middle_name' => 'field_middle_name',
    'field_first_name' => 'field_first_name',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_middle_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'author';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all authors';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'edit_node' => 'edit_node',
    'field_last_name' => 'field_last_name',
    'field_middle_name' => 'field_middle_name',
    'field_first_name' => 'field_first_name',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_middle_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = TRUE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '<a href="[path]">[field_last_name]</a>';
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['field_last_name']['alter']['absolute'] = TRUE;
  /* Field: Content: Middle name */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_middle_name']['alter']['text'] = '<a href="[path]">[field_middle_name]</a>';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['alter']['text'] = '<a href="[path]">[field_first_name]</a>';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['text'] = '<span class="editing">
  [changed]<span class="edit">[edit_node]</span>
</span>';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'dmy';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $translatables['Author_page'] = array(
    t('Defaults'),
    t('Authors'),
    t('See all authors'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('@total records'),
    t('Add a new <a href="/node/add/person" target="_blank">author</a>.'),
    t('The site contain not any content of this type. Be the first to <a href="node/add/author">add new</a> author content.'),
    t('Path'),
    t('Link to edit content'),
    t('Last name'),
    t('<span class="editing"><a href="[path]">[field_last_name]</a><span class="edit">[edit_node]</span></span>'),
    t('Middle name'),
    t('<a href="[path]">[field_middle_name]</a>'),
    t('First name'),
    t('<a href="[path]">[field_first_name]</a>'),
    t('Updated'),
    t('<span class="editing">
  [changed]<span class="edit">[edit_node]</span>
</span>'),
    t('Page'),
    t('more'),
    t('Block'),
    t('<a href="[path]">[field_last_name]</a>'),
  );
  $export['Author_page'] = $view;

  $view = new view();
  $view->name = 'Critical_writing';
  $view->description = 'Critical writing views on author node and basic and tag data exports';
  $view->tag = 'Person, Critical Writing, data export';
  $view->base_table = 'node';
  $view->human_name = 'Critical writing by person';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Critical writing by this author';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_pubtype_tax' => 'field_pubtype_tax',
    'field_node_ref' => 'field_node_ref',
    'field_critical_writing_year' => 'field_critical_writing_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pubtype_tax' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_node_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add <a href="/node/add/critical-writing" target="_blank">critical writing</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_pubtype_tax']['id'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['field'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Year (field_critical_writing_year)  */
  $handler->display->display_options['sorts']['field_critical_writing_year_value']['id'] = 'field_critical_writing_year_value';
  $handler->display->display_options['sorts']['field_critical_writing_year_value']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['sorts']['field_critical_writing_year_value']['field'] = 'field_critical_writing_year_value';
  $handler->display->display_options['sorts']['field_critical_writing_year_value']['ui_name'] = 'Year (field_critical_writing_year) ';
  $handler->display->display_options['sorts']['field_critical_writing_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author (field_author_name) */
  $handler->display->display_options['arguments']['field_author_name_target_id']['id'] = 'field_author_name_target_id';
  $handler->display->display_options['arguments']['field_author_name_target_id']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['arguments']['field_author_name_target_id']['field'] = 'field_author_name_target_id';
  $handler->display->display_options['arguments']['field_author_name_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_author_name_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_author_name_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_author_name_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'person',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Data export-Basic */
  $handler = $view->new_display('views_data_export', 'Data export-Basic', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Critical Writing by this Person - Basic Data Export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_basic_%1-title.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Cite the ELMCIP Electronic Literature Knowledge Base when using this data for research purposes.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_pubtype_tax']['id'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['field'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['path'] = 'critical_writing_by_author_data_export_basic';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Data export-with Tags */
  $handler = $view->new_display('views_data_export', 'Data export-with Tags', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Critical Writing by this Person - Advanced Data Export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_advanced_%1-title.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Cite the ELMCIP Electronic Literature Knowledge Base when using this data for research purposes.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'CW Nid';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_pubtype_tax']['id'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['field'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax']['delta_offset'] = '0';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_pubtype_tax_1']['id'] = 'field_pubtype_tax_1';
  $handler->display->display_options['fields']['field_pubtype_tax_1']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax_1']['field'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax_1']['label'] = 'Publication Type ID';
  $handler->display->display_options['fields']['field_pubtype_tax_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pubtype_tax_1']['alter']['text'] = '2000[field_pubtype_tax_1-tid]';
  $handler->display->display_options['fields']['field_pubtype_tax_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_pubtype_tax_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax_1']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref_1']['id'] = 'field_node_ref_1';
  $handler->display->display_options['fields']['field_node_ref_1']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_1']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_1']['label'] = 'Publisher ID';
  $handler->display->display_options['fields']['field_node_ref_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_1']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['id'] = 'taxonomy_vocabulary_1_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['label'] = 'Tag ID';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['text'] = '2000[taxonomy_vocabulary_1_1-tid]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'critical_writing_by_author_data_export_advanced';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['Critical_writing'] = array(
    t('Defaults'),
    t('Critical writing by this author'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Add <a href="/node/add/critical-writing" target="_blank">critical writing</a>.'),
    t('Title'),
    t('Publication Type'),
    t('Publisher'),
    t('Year'),
    t('All'),
    t('Entity content'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Data export-Basic'),
    t('Cite the ELMCIP Electronic Literature Knowledge Base when using this data for research purposes.'),
    t('Author'),
    t('Data export-with Tags'),
    t('Author ID'),
    t('CW Nid'),
    t('Publication Type ID'),
    t('2000[field_pubtype_tax_1-tid]'),
    t('Publisher ID'),
    t('Tags'),
    t('Tag ID'),
    t('2000[taxonomy_vocabulary_1_1-tid]'),
  );
  $export['Critical_writing'] = $view;

  $view = new view();
  $view->name = 'Critical_writing_in_book';
  $view->description = 'Critical writing in a given book';
  $view->tag = 'Critical Writing, Book';
  $view->base_table = 'node';
  $view->human_name = 'Critical writing contents in book';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Contents (Critical Writing)';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_author_name_nid' => 'field_author_name_nid',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_author_name_nid' => array(
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Appears in (field_inbook) */
  $handler->display->display_options['arguments']['field_inbook_target_id']['id'] = 'field_inbook_target_id';
  $handler->display->display_options['arguments']['field_inbook_target_id']['table'] = 'field_data_field_inbook';
  $handler->display->display_options['arguments']['field_inbook_target_id']['field'] = 'field_inbook_target_id';
  $handler->display->display_options['arguments']['field_inbook_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_inbook_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_inbook_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_inbook_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_inbook_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'critical_writing',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['Critical_writing_in_book'] = array(
    t('Defaults'),
    t('Contents (Critical Writing)'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.'),
    t('Title'),
    t('Author'),
    t('All'),
    t('Entity content'),
  );
  $export['Critical_writing_in_book'] = $view;

  $view = new view();
  $view->name = 'Critical_writing_organization';
  $view->description = 'Critical writing views on organization nodes';
  $view->tag = 'Critical Writing, Organization';
  $view->base_table = 'node';
  $view->human_name = 'Critical writing published by organization';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Critical writing published';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_critical_writing_year' => 'field_critical_writing_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Critical Writing';
  $handler->display->display_options['footer']['area']['content'] = 'Add new <a href="/node/add/critical_writing" target="_blank">critical writing</a>.';
  $handler->display->display_options['footer']['area']['format'] = '3';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Work title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Publisher (field_node_ref) */
  $handler->display->display_options['arguments']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'organization',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['Critical_writing_organization'] = array(
    t('Defaults'),
    t('Critical writing published'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Critical Writing'),
    t('Add new <a href="/node/add/critical_writing" target="_blank">critical writing</a>.'),
    t('Work title'),
    t('Author'),
    t('Year'),
    t('All'),
    t('Entity content'),
  );
  $export['Critical_writing_organization'] = $view;

  $view = new view();
  $view->name = 'Critical_writing_work';
  $view->description = 'Critical writing views on work nodes';
  $view->tag = 'Critical Writing, Work';
  $view->base_table = 'node';
  $view->human_name = 'Critical writing on referenced work';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Critical writing that references this work:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_critical_writing_year' => 'field_critical_writing_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Creative Works referenced (field_node_ref_work) */
  $handler->display->display_options['arguments']['field_node_ref_work_target_id']['id'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['arguments']['field_node_ref_work_target_id']['table'] = 'field_data_field_node_ref_work';
  $handler->display->display_options['arguments']['field_node_ref_work_target_id']['field'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['arguments']['field_node_ref_work_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_node_ref_work_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_node_ref_work_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_ref_work_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_ref_work_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'work',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['Critical_writing_work'] = array(
    t('Defaults'),
    t('Critical writing that references this work:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('Author'),
    t('Year'),
    t('All'),
    t('Entity content'),
  );
  $export['Critical_writing_work'] = $view;

  $view = new view();
  $view->name = 'Event_critical_writing';
  $view->description = 'Critical writing record viewed on event node';
  $view->tag = 'Critical Writing, Event, data export';
  $view->base_table = 'node';
  $view->human_name = 'Critical writing presented at event';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Critical writing presented';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = 100;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'taxonomy_vocabulary_1' => 'taxonomy_vocabulary_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_node_ref_event_target_id']['id'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['relationships']['field_node_ref_event_target_id']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['relationships']['field_node_ref_event_target_id']['field'] = 'field_node_ref_event_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'CW ID';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['id'] = 'taxonomy_vocabulary_1_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['label'] = 'Tag ID';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['text'] = '2000[taxonomy_vocabulary_1_1-tid]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event_1']['id'] = 'field_node_ref_event_1';
  $handler->display->display_options['fields']['field_node_ref_event_1']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['label'] = 'Event ID';
  $handler->display->display_options['fields']['field_node_ref_event_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_event_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event_1']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Presented at Event (field_node_ref_event) */
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['id'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['field'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'event',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Data export - Minimal */
  $handler = $view->new_display('views_data_export', 'Data export - Minimal', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Data Export - Minimal';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title_%view_min.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'CW ID';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event_1']['id'] = 'field_node_ref_event_1';
  $handler->display->display_options['fields']['field_node_ref_event_1']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['label'] = 'Event ID';
  $handler->display->display_options['fields']['field_node_ref_event_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_event_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'critical_writing_on_event_data_minimal';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Data export - Expanded */
  $handler = $view->new_display('views_data_export', 'Data export - Expanded', 'views_data_export_2');
  $handler->display->display_options['display_description'] = 'Title NID, Year, Author, Author ID, Tags, Tag ID';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Data Export - Expanded';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title_%view_expanded.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'critical_writing_on_event_data_expanded';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $translatables['Event_critical_writing'] = array(
    t('Defaults'),
    t('Critical writing presented'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_node_ref_event'),
    t('CW ID'),
    t('Title'),
    t('Author'),
    t('Author ID'),
    t('Tags'),
    t('Tag ID'),
    t('2000[taxonomy_vocabulary_1_1-tid]'),
    t('Presented at Event'),
    t('Event ID'),
    t('All'),
    t('Entity content'),
    t('Data export - Minimal'),
    t('Data export - Expanded'),
    t('Title NID, Year, Author, Author ID, Tags, Tag ID'),
  );
  $export['Event_critical_writing'] = $view;

  $view = new view();
  $view->name = 'Event_organizer';
  $view->description = 'Event records viewed on organizer node';
  $view->tag = 'Event, Organization';
  $view->base_table = 'node';
  $view->human_name = 'Events on organizer page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Events arranged by this organization';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'city' => 'city',
    'field_date' => 'field_date',
    'taxonomy_vocabulary_2' => 'taxonomy_vocabulary_2',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'taxonomy_vocabulary_2' => array(
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/event" target="_blank">event</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Event';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['type'] = 'date_short';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['id'] = 'taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['table'] = 'field_data_taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['field'] = 'taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['delta_offset'] = '0';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Publisher (field_node_ref) */
  $handler->display->display_options['arguments']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['pager']['options']['id'] = '0';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'organization',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['Event_organizer'] = array(
    t('Defaults'),
    t('Events arranged by this organization'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/event" target="_blank">event</a>.'),
    t('Event'),
    t('City'),
    t('Date'),
    t('Event type'),
    t('Link to edit content'),
    t('All'),
    t('Block'),
    t('Entity content'),
  );
  $export['Event_organizer'] = $view;

  $view = new view();
  $view->name = 'Event_work';
  $view->description = 'Work record viewed on event node';
  $view->tag = 'Work, Event, data export';
  $view->base_table = 'node';
  $view->human_name = 'Works presented at Event';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Works presented';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Work title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Contextual filter: Content: Presented at Event (field_node_ref_event) */
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['id'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['field'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'event',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title_%view.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event_1']['id'] = 'field_node_ref_event_1';
  $handler->display->display_options['fields']['field_node_ref_event_1']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['label'] = 'Event ID';
  $handler->display->display_options['fields']['field_node_ref_event_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_event_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Work title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Work Nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author Nid';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'data/event/works_presented';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
    'entity_view_2' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Data export 2 -- Expanded */
  $handler = $view->new_display('views_data_export', 'Data export 2 -- Expanded', 'views_data_export_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title_%view.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event_1']['id'] = 'field_node_ref_event_1';
  $handler->display->display_options['fields']['field_node_ref_event_1']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['label'] = 'Event ID';
  $handler->display->display_options['fields']['field_node_ref_event_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_event_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Work title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Work Nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author Nid';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['id'] = 'taxonomy_vocabulary_1_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['label'] = 'Tag Id';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['text'] = '2000[taxonomy_vocabulary_1_1-tid]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'data/event/works_presented_expanded';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
    'entity_view_2' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['Event_work'] = array(
    t('Defaults'),
    t('Works presented'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Work title'),
    t('Author'),
    t('All'),
    t('Entity content'),
    t('Data export'),
    t('Presented at Event'),
    t('Event ID'),
    t('Work Nid'),
    t('Author Nid'),
    t('Tags'),
    t('Data export 2 -- Expanded'),
    t('Tag Id'),
    t('2000[taxonomy_vocabulary_1_1-tid]'),
  );
  $export['Event_work'] = $view;

  $view = new view();
  $view->name = 'Journal_Editedby';
  $view->description = 'Critical writing edited by author viewed on author node';
  $view->tag = 'Person, Critical Writing, Journal';
  $view->base_table = 'node';
  $view->human_name = 'Journal edited by person';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Editor of Journal:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Editor (field_editor_name) */
  $handler->display->display_options['arguments']['field_editor_name_target_id']['id'] = 'field_editor_name_target_id';
  $handler->display->display_options['arguments']['field_editor_name_target_id']['table'] = 'field_data_field_editor_name';
  $handler->display->display_options['arguments']['field_editor_name_target_id']['field'] = 'field_editor_name_target_id';
  $handler->display->display_options['arguments']['field_editor_name_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_editor_name_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_editor_name_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_editor_name_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_editor_name_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publisher' => 'publisher',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'person',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['Journal_Editedby'] = array(
    t('Defaults'),
    t('Editor of Journal:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['Journal_Editedby'] = $view;

  $view = new view();
  $view->name = 'TeachingResourceby';
  $view->description = 'Teaching resource by author viewed on author node';
  $view->tag = 'Person, Teaching Resource';
  $view->base_table = 'node';
  $view->human_name = 'Teaching Resource by Person';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Teaching Resource created by this person:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'taxonomy_vocabulary_4' => 'taxonomy_vocabulary_4',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_4' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/teaching-resource" target="_blank">teaching resource</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Resource';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['id'] = 'taxonomy_vocabulary_4';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['table'] = 'field_data_taxonomy_vocabulary_4';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['field'] = 'taxonomy_vocabulary_4';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['label'] = 'Teaching Resource Type';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Author (field_tr_author) */
  $handler->display->display_options['arguments']['field_tr_author_target_id']['id'] = 'field_tr_author_target_id';
  $handler->display->display_options['arguments']['field_tr_author_target_id']['table'] = 'field_data_field_tr_author';
  $handler->display->display_options['arguments']['field_tr_author_target_id']['field'] = 'field_tr_author_target_id';
  $handler->display->display_options['arguments']['field_tr_author_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_tr_author_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tr_author_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tr_author_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tr_author_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_tr_author_target_id']['validate']['type'] = 'node';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teaching_resource' => 'teaching_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'person',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['TeachingResourceby'] = array(
    t('Defaults'),
    t('Teaching Resource created by this person:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/teaching-resource" target="_blank">teaching resource</a>.'),
    t('Resource'),
    t('Teaching Resource Type'),
    t('All'),
    t('Entity content'),
  );
  $export['TeachingResourceby'] = $view;

  $view = new view();
  $view->name = 'Tr_critical_writing';
  $view->description = 'Teaching resource viewed on referenced critical writing';
  $view->tag = 'Teaching Resource, Critical Writing';
  $view->base_table = 'node';
  $view->human_name = 'Tr_critical_writing';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Teaching Resource using this Critical Writing:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'taxonomy_vocabulary_4' => 'taxonomy_vocabulary_4',
    'field_tr_author' => 'field_tr_author',
    'field_tr_year' => 'field_tr_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_4' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tr_author' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tr_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/teaching-resource" target="_blank">teaching resource</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Resource';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['id'] = 'taxonomy_vocabulary_4';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['table'] = 'field_data_taxonomy_vocabulary_4';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['field'] = 'taxonomy_vocabulary_4';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['label'] = 'Teaching Resource Type';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_tr_author']['id'] = 'field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['table'] = 'field_data_field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['field'] = 'field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_tr_author']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_tr_year']['id'] = 'field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['table'] = 'field_data_field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['field'] = 'field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Critical Writing Referenced (field_tr_critical) */
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['id'] = 'field_tr_critical_target_id';
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['table'] = 'field_data_field_tr_critical';
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['field'] = 'field_tr_critical_target_id';
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teaching_resource' => 'teaching_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'critical_writing',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['Tr_critical_writing'] = array(
    t('Defaults'),
    t('Teaching Resource using this Critical Writing:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/teaching-resource" target="_blank">teaching resource</a>.'),
    t('Resource'),
    t('Teaching Resource Type'),
    t('Author'),
    t('Year'),
    t('All'),
    t('Entity content'),
  );
  $export['Tr_critical_writing'] = $view;

  $view = new view();
  $view->name = 'Tr_work';
  $view->description = 'Teaching resource viewed on referenced work';
  $view->tag = 'Work, Teaching Resource';
  $view->base_table = 'node';
  $view->human_name = 'TR on work';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Teaching Resource that references this work:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_tr_author' => 'field_tr_author',
    'taxonomy_vocabulary_4' => 'taxonomy_vocabulary_4',
    'field_tr_year' => 'field_tr_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tr_author' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_4' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tr_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/teaching-resource" target="_blank">teaching resource</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Resource';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_tr_author']['id'] = 'field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['table'] = 'field_data_field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['field'] = 'field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_tr_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_tr_author']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['id'] = 'taxonomy_vocabulary_4';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['table'] = 'field_data_taxonomy_vocabulary_4';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['field'] = 'taxonomy_vocabulary_4';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['label'] = 'Teaching Resource Type';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_tr_year']['id'] = 'field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['table'] = 'field_data_field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['field'] = 'field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_tr_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Creative Works Referenced (field_tr_work) */
  $handler->display->display_options['arguments']['field_tr_work_target_id']['id'] = 'field_tr_work_target_id';
  $handler->display->display_options['arguments']['field_tr_work_target_id']['table'] = 'field_data_field_tr_work';
  $handler->display->display_options['arguments']['field_tr_work_target_id']['field'] = 'field_tr_work_target_id';
  $handler->display->display_options['arguments']['field_tr_work_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_tr_work_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tr_work_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tr_work_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tr_work_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teaching_resource' => 'teaching_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'work',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['Tr_work'] = array(
    t('Defaults'),
    t('Teaching Resource that references this work:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/teaching-resource" target="_blank">teaching resource</a>.'),
    t('Resource'),
    t('Author'),
    t('Teaching Resource Type'),
    t('Year'),
    t('All'),
    t('Entity content'),
  );
  $export['Tr_work'] = $view;

  $view = new view();
  $view->name = 'Work';
  $view->description = 'Work record viewed on author node';
  $view->tag = 'Person, Work, data export';
  $view->base_table = 'node';
  $view->human_name = 'Work by person';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Works by this author';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_venue_tax' => 'field_venue_tax',
    'field_work_year' => 'field_work_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_venue_tax' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_work_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/work" target="_blank">work</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Work title';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_venue_tax']['id'] = 'field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['table'] = 'field_data_field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['field'] = 'field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Year (field_work_year) */
  $handler->display->display_options['sorts']['field_work_year_value']['id'] = 'field_work_year_value';
  $handler->display->display_options['sorts']['field_work_year_value']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['sorts']['field_work_year_value']['field'] = 'field_work_year_value';
  $handler->display->display_options['sorts']['field_work_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Author (field_author_name) */
  $handler->display->display_options['arguments']['field_author_name_target_id']['id'] = 'field_author_name_target_id';
  $handler->display->display_options['arguments']['field_author_name_target_id']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['arguments']['field_author_name_target_id']['field'] = 'field_author_name_target_id';
  $handler->display->display_options['arguments']['field_author_name_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_author_name_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_author_name_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_author_name_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content - By Author */
  $handler = $view->new_display('entity_view', 'Entity content - By Author', 'entity_view_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'person',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Entity content - Contributed to */
  $handler = $view->new_display('entity_view', 'Entity content - Contributed to', 'entity_view_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Works contributed to';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Contributor (field_contributor) */
  $handler->display->display_options['arguments']['field_contributor_target_id']['id'] = 'field_contributor_target_id';
  $handler->display->display_options['arguments']['field_contributor_target_id']['table'] = 'field_data_field_contributor';
  $handler->display->display_options['arguments']['field_contributor_target_id']['field'] = 'field_contributor_target_id';
  $handler->display->display_options['arguments']['field_contributor_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_contributor_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_contributor_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_contributor_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_contributor_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'person',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Data export - Basic */
  $handler = $view->new_display('views_data_export', 'Data export - Basic', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Creative Work by Person - Basic Data Export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_basic_%1-title.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'When using this data for research purposes cite the ELMCIP Electronic Literature Knowledge Base.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Work title';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_venue_tax']['id'] = 'field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['table'] = 'field_data_field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['field'] = 'field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['path'] = 'work_by_author_data_export_basic';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
    'entity_view_2' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Data export - with Tags */
  $handler = $view->new_display('views_data_export', 'Data export - with Tags', 'views_data_export_2');
  $handler->display->display_options['display_description'] = 'Advanced data export with tags and IDs for content';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Creative Work by Person - Advanced Data Export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_advanced_%1-title.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'When using this data for research purposes cite the ELMCIP Electronic Literature Knowledge Base.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Work title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Work ID';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_venue_tax']['id'] = 'field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['table'] = 'field_data_field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['field'] = 'field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_venue_tax']['delta_offset'] = '0';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_venue_tax_1']['id'] = 'field_venue_tax_1';
  $handler->display->display_options['fields']['field_venue_tax_1']['table'] = 'field_data_field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax_1']['field'] = 'field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax_1']['label'] = 'Publication Type ID';
  $handler->display->display_options['fields']['field_venue_tax_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_venue_tax_1']['alter']['text'] = '2000[field_venue_tax_1-tid]';
  $handler->display->display_options['fields']['field_venue_tax_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_venue_tax_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_venue_tax_1']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref_1']['id'] = 'field_node_ref_1';
  $handler->display->display_options['fields']['field_node_ref_1']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_1']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_1']['label'] = 'Publisher ID';
  $handler->display->display_options['fields']['field_node_ref_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_1']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['id'] = 'taxonomy_vocabulary_1_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['label'] = 'Tag ID';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['text'] = '2000[taxonomy_vocabulary_1_1-tid]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'work_by_author_data_export_advanced';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
    'entity_view_2' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['Work'] = array(
    t('Defaults'),
    t('Works by this author'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add a new <a href="/node/add/work" target="_blank">work</a>.'),
    t('Work title'),
    t('Publication Type'),
    t('Year'),
    t('All'),
    t('Entity content - By Author'),
    t('Entity content - Contributed to'),
    t('Works contributed to'),
    t('Data export - Basic'),
    t('When using this data for research purposes cite the ELMCIP Electronic Literature Knowledge Base.'),
    t('Author'),
    t('Publisher'),
    t('Data export - with Tags'),
    t('Advanced data export with tags and IDs for content'),
    t('Author ID'),
    t('Work ID'),
    t('Publication Type ID'),
    t('2000[field_venue_tax_1-tid]'),
    t('Publisher ID'),
    t('Tags'),
    t('Tag ID'),
    t('2000[taxonomy_vocabulary_1_1-tid]'),
  );
  $export['Work'] = $view;

  $view = new view();
  $view->name = 'Work_critical_writing';
  $view->description = 'Works referenced viewed on critical writing nodes entity content plus data export to pull referenced works data from table';
  $view->tag = 'Work, Critical Writing, data export';
  $view->base_table = 'node';
  $view->human_name = 'Works referenced on CW';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Works referenced';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_work_year' => 'field_work_year',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_work_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'Add a new <a href="http://elmcip.net/node/add/work">creative work</a>.';
  $handler->display->display_options['footer']['area']['format'] = 'ds_code';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_node_ref_work_target_id']['id'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['relationships']['field_node_ref_work_target_id']['table'] = 'field_data_field_node_ref_work';
  $handler->display->display_options['relationships']['field_node_ref_work_target_id']['field'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['relationships']['field_node_ref_work_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_node_ref_work_target_id';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['relationship'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['relationship'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'critical_writing',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_node_ref_work_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'Title Nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['relationship'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['relationship'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['relationship'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax']['id'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['relationship'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['fields']['field_language_tax']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['relationship'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['id'] = 'taxonomy_vocabulary_1_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['relationship'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['label'] = 'Tag ID';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['text'] = '2000[taxonomy_vocabulary_1_1-tid]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'works_referenced_data';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $translatables['Work_critical_writing'] = array(
    t('Defaults'),
    t('Works referenced'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add a new <a href="http://elmcip.net/node/add/work">creative work</a>.'),
    t('Content entity referenced from field_node_ref_work'),
    t('Title'),
    t('Author'),
    t('Year'),
    t('All'),
    t('Entity content'),
    t('Data export'),
    t('Title Nid'),
    t('Author ID'),
    t('Language'),
    t('Tags'),
    t('Tag ID'),
    t('2000[taxonomy_vocabulary_1_1-tid]'),
  );
  $export['Work_critical_writing'] = $view;

  $view = new view();
  $view->name = 'Work_publisher';
  $view->description = 'Work record viewed on publisher nodes';
  $view->tag = 'Publisher, Work';
  $view->base_table = 'node';
  $view->human_name = 'Work on publisher';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Creative work published';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_work_year' => 'field_work_year',
    'field_in_anthology' => 'field_in_anthology',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_work_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_in_anthology' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Work title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Appears in */
  $handler->display->display_options['fields']['field_in_anthology']['id'] = 'field_in_anthology';
  $handler->display->display_options['fields']['field_in_anthology']['table'] = 'field_data_field_in_anthology';
  $handler->display->display_options['fields']['field_in_anthology']['field'] = 'field_in_anthology';
  $handler->display->display_options['fields']['field_in_anthology']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_in_anthology']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Publisher (field_node_ref) */
  $handler->display->display_options['arguments']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'publisher',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['Work_publisher'] = array(
    t('Defaults'),
    t('Creative work published'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Work title'),
    t('Author'),
    t('Year'),
    t('Appears in'),
    t('All'),
    t('Entity content'),
  );
  $export['Work_publisher'] = $view;

  $view = new view();
  $view->name = 'Work_tr';
  $view->description = 'Works viewed on teaching resources';
  $view->tag = 'Work, Teaching Resource';
  $view->base_table = 'node';
  $view->human_name = 'Works listed on teaching resource';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Creative works referenced';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_work_year' => 'field_work_year',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_work_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_tr_work_target_id']['id'] = 'field_tr_work_target_id';
  $handler->display->display_options['relationships']['field_tr_work_target_id']['table'] = 'field_data_field_tr_work';
  $handler->display->display_options['relationships']['field_tr_work_target_id']['field'] = 'field_tr_work_target_id';
  $handler->display->display_options['relationships']['field_tr_work_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_tr_work_target_id';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['relationship'] = 'field_tr_work_target_id';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['relationship'] = 'field_tr_work_target_id';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'teaching_resource',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['Work_tr'] = array(
    t('Defaults'),
    t('Creative works referenced'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_tr_work'),
    t('Title'),
    t('Author'),
    t('Year'),
    t('All'),
    t('Entity content'),
  );
  $export['Work_tr'] = $view;

  $view = new view();
  $view->name = 'activity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node_revision';
  $view->human_name = 'Activity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User activity';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'vid' => 'vid',
    'title' => 'title',
    'timestamp' => 'timestamp',
    'name' => 'name',
    'access' => 'access',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'vid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No user activity found.';
  $handler->display->display_options['empty']['area']['format'] = '4';
  /* Relationship: Content revision: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Relationship: Content revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node ID';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content revision: Vid */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'node_revision';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['label'] = 'Version ID';
  /* Field: Content revision: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node_revision'] = TRUE;
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Updated';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'User name';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['relationship'] = 'uid';
  $handler->display->display_options['fields']['access']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Sort criterion: Content revision: Updated date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['relationship'] = 'uid';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/people/activity';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'User activity';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['activity'] = array(
    t('Master'),
    t('User activity'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No user activity found.'),
    t('Get the actual content from a content revision.'),
    t('revision user'),
    t('Node ID'),
    t('Version ID'),
    t('Title'),
    t('Updated'),
    t('User name'),
    t('Last access'),
    t('Name'),
    t('E-mail'),
    t('Page'),
  );
  $export['activity'] = $view;

  $view = new view();
  $view->name = 'all_tags';
  $view->description = 'view to list all tags';
  $view->tag = 'Tags';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'All tags';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'View All Tags (<a href="http://elmcip.net/knowledgebase/all_tags_frequency">Frequency</a> or Alphabetically)';
  $handler->display->display_options['header']['area']['format'] = 'basic_text_editor';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['vid']['group'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'knowledgebase/all_tags';
  $handler->display->display_options['menu']['weight'] = '0';
  $translatables['all_tags'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('View All Tags (<a href="http://elmcip.net/knowledgebase/all_tags_frequency">Frequency</a> or Alphabetically)'),
    t('Page'),
  );
  $export['all_tags'] = $view;

  $view = new view();
  $view->name = 'all_tags_by_frequency';
  $view->description = 'view to list all tags by frequency used';
  $view->tag = 'Tags, Count, term, taxonomy';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'All tags by frequency';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'All content tagged';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_tr_author' => 'field_tr_author',
    'field_author_name' => 'field_author_name',
    'nothing' => 'nothing',
    'field_work_year' => 'field_work_year',
    'field_tr_year' => 'field_tr_year',
    'field_critical_writing_year' => 'field_critical_writing_year',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tr_author' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_work_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tr_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>Sorry, no results were found</h2>';
  $handler->display->display_options['empty']['area']['format'] = '3';
  /* Relationship: Taxonomy term: Content using Tags */
  $handler->display->display_options['relationships']['reverse_taxonomy_vocabulary_1_node']['id'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['relationships']['reverse_taxonomy_vocabulary_1_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_taxonomy_vocabulary_1_node']['field'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['relationships']['reverse_taxonomy_vocabulary_1_node']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  /* Field: Author - teaching resource */
  $handler->display->display_options['fields']['field_tr_author']['id'] = 'field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['table'] = 'field_data_field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['field'] = 'field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['fields']['field_tr_author']['ui_name'] = 'Author - teaching resource';
  $handler->display->display_options['fields']['field_tr_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tr_author']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_tr_author']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['alter']['text'] = '[field_tr_author]
[field_author_name]';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Author custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Author custom text';
  $handler->display->display_options['fields']['nothing']['label'] = 'Author';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_tr_author][field_author_name]';
  /* Field: Year work */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['fields']['field_work_year']['ui_name'] = 'Year work';
  $handler->display->display_options['fields']['field_work_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Year teaching resource */
  $handler->display->display_options['fields']['field_tr_year']['id'] = 'field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['table'] = 'field_data_field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['field'] = 'field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['fields']['field_tr_year']['ui_name'] = 'Year teaching resource';
  $handler->display->display_options['fields']['field_tr_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tr_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Year critial writing */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['fields']['field_critical_writing_year']['ui_name'] = 'Year critial writing';
  $handler->display->display_options['fields']['field_critical_writing_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Event date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['fields']['field_date']['ui_name'] = 'Event date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Year';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Year';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_work_year]
[field_tr_year]
[field_critical_writing_year]
[field_date]';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Content tagged with %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '1';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status or admin user */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
    'critical_writing' => 'critical_writing',
    'event' => 'event',
    'teaching_resource' => 'teaching_resource',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'work' => 'work',
    'critical_writing' => 'critical_writing',
    'event' => 'event',
    'teaching_resource' => 'teaching_resource',
  );
  $handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['type_1']['expose']['reduce'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'knowledgebase/all_tags_frequency';
  $handler->display->display_options['menu']['weight'] = '0';
  $translatables['all_tags_by_frequency'] = array(
    t('Defaults'),
    t('All content tagged'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<h2>Sorry, no results were found</h2>'),
    t('taxonomy_vocabulary_1'),
    t('Title'),
    t('Author'),
    t('[field_tr_author]
[field_author_name]'),
    t('[field_tr_author][field_author_name]'),
    t('Year'),
    t('[field_work_year]
[field_tr_year]
[field_critical_writing_year]
[field_date]'),
    t('All'),
    t('Content tagged with %1'),
    t('Type'),
    t('Page'),
  );
  $export['all_tags_by_frequency'] = $view;

  $view = new view();
  $view->name = 'author_data_export';
  $view->description = 'Author data export';
  $view->tag = 'data export, Person';
  $view->base_table = 'node';
  $view->human_name = 'Data Export Author records';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Authors';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all creative works';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'country' => 'country',
    'created' => 'created',
    'field_url' => 'field_url',
    'timestamp' => 'timestamp',
    'field_record_status_tax' => 'field_record_status_tax',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_record_status_tax' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/work">creative work</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'The site contain not any content of this type. Be the first to <a href="/node/add/work">add new</a> work content.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Author ID';
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Person name';
  /* Field: Content: Gender */
  $handler->display->display_options['fields']['field_gender_sel']['id'] = 'field_gender_sel';
  $handler->display->display_options['fields']['field_gender_sel']['table'] = 'field_data_field_gender_sel';
  $handler->display->display_options['fields']['field_gender_sel']['field'] = 'field_gender_sel';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_url']['delta_offset'] = '0';
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country_1']['id'] = 'country_1';
  $handler->display->display_options['fields']['country_1']['table'] = 'location';
  $handler->display->display_options['fields']['country_1']['field'] = 'country';
  $handler->display->display_options['fields']['country_1']['label'] = 'Country code';
  $handler->display->display_options['fields']['country_1']['style'] = 'code';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Residency (field_residency) */
  $handler->display->display_options['arguments']['field_residency_lid']['id'] = 'field_residency_lid';
  $handler->display->display_options['arguments']['field_residency_lid']['table'] = 'field_data_field_residency';
  $handler->display->display_options['arguments']['field_residency_lid']['field'] = 'field_residency_lid';
  $handler->display->display_options['arguments']['field_residency_lid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_residency_lid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_residency_lid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_residency_lid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'ELMCIP_%view._%timestamp-full.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['path'] = 'data/person';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
  );
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['author_data_export'] = array(
    t('Defaults'),
    t('Authors'),
    t('See all creative works'),
    t('Filter'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add a new <a href="/node/add/work">creative work</a>.'),
    t('The site contain not any content of this type. Be the first to <a href="/node/add/work">add new</a> work content.'),
    t('Author ID'),
    t('Person name'),
    t('Gender'),
    t('URL'),
    t('Country'),
    t('Country code'),
    t('All'),
    t('Data export'),
    t('more'),
  );
  $export['author_data_export'] = $view;

  $view = new view();
  $view->name = 'author_list';
  $view->description = 'Author list';
  $view->tag = 'Person';
  $view->base_table = 'node';
  $view->human_name = 'Author list';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Middle name */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['label'] = '';
  $handler->display->display_options['fields']['field_middle_name']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  $translatables['author_list'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
  );
  $export['author_list'] = $view;

  $view = new view();
  $view->name = 'author_name';
  $view->description = 'Author Name';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Middle name */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['label'] = '';
  $handler->display->display_options['fields']['field_middle_name']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'author' => 'author',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  $translatables['author_name'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
  );
  $export['author_name'] = $view;

  $view = new view();
  $view->name = 'author_nid_data';
  $view->description = '';
  $view->tag = 'author, data export';
  $view->base_table = 'node';
  $view->human_name = 'author_NID_data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'author_NID_data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_first_name' => 'field_first_name',
    'field_middle_name' => 'field_middle_name',
    'field_last_name' => 'field_last_name',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'path' => 'path',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_middle_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Middle name */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Author ID';
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'http://elmcip.net/node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Node Path';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = 'http://elmcip.net/node/[nid]';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Alias Path';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = 'http://elmcip.net';
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'author-nid-page';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Middle name */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Author ID';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'http://elmcip.net/node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Node Path';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = 'http://elmcip.net/node/[nid]';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Alias Path';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = 'http://elmcip.net';
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['path'] = 'author-nid-data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['author_nid_data'] = array(
    t('Master'),
    t('author_NID_data'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Name'),
    t('First name'),
    t('Middle name'),
    t('Last name'),
    t('Author ID'),
    t('Node Path'),
    t('http://elmcip.net/node/[nid]'),
    t('Alias Path'),
    t('Page'),
    t('Data export'),
  );
  $export['author_nid_data'] = $view;

  $view = new view();
  $view->name = 'class_groups_on_student_profile';
  $view->description = 'Classes displayed on student user profile';
  $view->tag = 'user profile, student, class';
  $view->base_table = 'node';
  $view->human_name = 'Class groups on student profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Your classes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Your classes</p>';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_students_target_id']['id'] = 'field_students_target_id';
  $handler->display->display_options['relationships']['field_students_target_id']['table'] = 'field_data_field_students';
  $handler->display->display_options['relationships']['field_students_target_id']['field'] = 'field_students_target_id';
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Course title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Teacher */
  $handler->display->display_options['fields']['field_teacher_link']['id'] = 'field_teacher_link';
  $handler->display->display_options['fields']['field_teacher_link']['table'] = 'field_data_field_teacher_link';
  $handler->display->display_options['fields']['field_teacher_link']['field'] = 'field_teacher_link';
  $handler->display->display_options['fields']['field_teacher_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_teacher_link']['delta_offset'] = '0';
  /* Field: Content: Students */
  $handler->display->display_options['fields']['field_students']['id'] = 'field_students';
  $handler->display->display_options['fields']['field_students']['table'] = 'field_data_field_students';
  $handler->display->display_options['fields']['field_students']['field'] = 'field_students';
  $handler->display->display_options['fields']['field_students']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_students']['delta_offset'] = '0';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'class_group' => 'class_group',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'user';
  $handler->display->display_options['bundles'] = array(
    0 => 'user',
  );
  $translatables['class_groups_on_student_profile'] = array(
    t('Master'),
    t('Your classes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<p>Your classes</p>'),
    t('User entity referenced from field_students'),
    t('author'),
    t('Course title'),
    t('Teacher'),
    t('Students'),
    t('Link to edit content'),
    t('All'),
    t('Entity content'),
  );
  $export['class_groups_on_student_profile'] = $view;

  $view = new view();
  $view->name = 'class_groups_on_teacher_profile';
  $view->description = 'Classes displayed on teacher user profile';
  $view->tag = 'User Profile, Teacher, Class';
  $view->base_table = 'node';
  $view->human_name = 'Class groups on teacher profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Your classes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Your classes</p>';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_teacher_link_target_id']['id'] = 'field_teacher_link_target_id';
  $handler->display->display_options['relationships']['field_teacher_link_target_id']['table'] = 'field_data_field_teacher_link';
  $handler->display->display_options['relationships']['field_teacher_link_target_id']['field'] = 'field_teacher_link_target_id';
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Course title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Teacher */
  $handler->display->display_options['fields']['field_teacher_link']['id'] = 'field_teacher_link';
  $handler->display->display_options['fields']['field_teacher_link']['table'] = 'field_data_field_teacher_link';
  $handler->display->display_options['fields']['field_teacher_link']['field'] = 'field_teacher_link';
  $handler->display->display_options['fields']['field_teacher_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_teacher_link']['delta_offset'] = '0';
  /* Field: Content: Students */
  $handler->display->display_options['fields']['field_students']['id'] = 'field_students';
  $handler->display->display_options['fields']['field_students']['table'] = 'field_data_field_students';
  $handler->display->display_options['fields']['field_students']['field'] = 'field_students';
  $handler->display->display_options['fields']['field_students']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_students']['delta_offset'] = '0';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'class_group' => 'class_group',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'user';
  $handler->display->display_options['bundles'] = array(
    0 => 'user',
  );
  $translatables['class_groups_on_teacher_profile'] = array(
    t('Master'),
    t('Your classes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<p>Your classes</p>'),
    t('User entity referenced from field_teacher_link'),
    t('author'),
    t('Course title'),
    t('Teacher'),
    t('Students'),
    t('Link to edit content'),
    t('All'),
    t('Entity content'),
  );
  $export['class_groups_on_teacher_profile'] = $view;

  $view = new view();
  $view->name = 'clone_of_research_collection_creative_work';
  $view->description = 'Research Collection creative work is referenced in shown on work node';
  $view->tag = 'Work, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Research Collection Creative Work';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Research Collection that references this work:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Creative works (field_creative_works) */
  $handler->display->display_options['arguments']['field_creative_works_target_id']['id'] = 'field_creative_works_target_id';
  $handler->display->display_options['arguments']['field_creative_works_target_id']['table'] = 'field_data_field_creative_works';
  $handler->display->display_options['arguments']['field_creative_works_target_id']['field'] = 'field_creative_works_target_id';
  $handler->display->display_options['arguments']['field_creative_works_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_creative_works_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_creative_works_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_creative_works_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_creative_works_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_collection' => 'research_collection',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'work',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['clone_of_research_collection_creative_work'] = array(
    t('Defaults'),
    t('Research Collection that references this work:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['clone_of_research_collection_creative_work'] = $view;

  $view = new view();
  $view->name = 'conference_presentations_data_export';
  $view->description = '';
  $view->tag = 'data export, event';
  $view->base_table = 'node';
  $view->human_name = 'Conference Presentations Data Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Conference Presentations Detail';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author NID';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event_1']['id'] = 'field_node_ref_event_1';
  $handler->display->display_options['fields']['field_node_ref_event_1']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['label'] = 'Event NID';
  $handler->display->display_options['fields']['field_node_ref_event_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_event_1']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  /* Filter criterion: Content: Presented at Event (field_node_ref_event) */
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['id'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['field'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['operator'] = 'not empty';

  /* Display: Data export -- Author Event Tag */
  $handler = $view->new_display('views_data_export', 'Data export -- Author Event Tag', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'conference-cw-person-data';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Data export -- Author Event with NIDS */
  $handler = $view->new_display('views_data_export', 'Data export -- Author Event with NIDS', 'views_data_export_2');
  $handler->display->display_options['field_language'] = '***DEFAULT_LANGUAGE***';
  $handler->display->display_options['field_language_add_to_query'] = 0;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'conference-critwrit-author-export';
  $translatables['conference_presentations_data_export'] = array(
    t('Master'),
    t('Conference Presentations Detail'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nid'),
    t('Author'),
    t('Author NID'),
    t('Presented at Event'),
    t('Event NID'),
    t('Year'),
    t('Data export -- Author Event Tag'),
    t('Data export -- Author Event with NIDS'),
  );
  $export['conference_presentations_data_export'] = $view;

  $view = new view();
  $view->name = 'content_by_contributor';
  $view->description = 'Content created by user on user profile';
  $view->tag = 'User Profile';
  $view->base_table = 'node';
  $view->human_name = 'Content By Contributor';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Records created';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'changed' => 'changed',
    'vid' => 'vid',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'vid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content revision: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="editing"><a href="[path]">[title]</a><span class="edit">[edit_node]</span></span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name']['label'] = 'Last revised by';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created_1']['id'] = 'created_1';
  $handler->display->display_options['sorts']['created_1']['table'] = 'node';
  $handler->display->display_options['sorts']['created_1']['field'] = 'created';
  $handler->display->display_options['sorts']['created_1']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'Records created by %1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

  /* Display: Content pane - edited */
  $handler = $view->new_display('panel_pane', 'Content pane - edited', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Records edited';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content revision: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['required'] = TRUE;
  /* Relationship: Content revision: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="editing"><a href="[path]">[title]</a><span class="edit">[edit_node]</span></span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name']['label'] = 'Last revised by';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: User has a revision */
  $handler->display->display_options['arguments']['uid_revision']['id'] = 'uid_revision';
  $handler->display->display_options['arguments']['uid_revision']['table'] = 'node';
  $handler->display->display_options['arguments']['uid_revision']['field'] = 'uid_revision';
  $handler->display->display_options['arguments']['uid_revision']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_revision']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid_revision']['title'] = 'Edited by %1';
  $handler->display->display_options['arguments']['uid_revision']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid_revision']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid_revision']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_revision']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_revision']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Content pane - created */
  $handler = $view->new_display('panel_pane', 'Content pane - created', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Records created by user';
  $handler->display->display_options['pane_title'] = 'Records created by this user';
  $translatables['content_by_contributor'] = array(
    t('Master'),
    t('Records created'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('revision user'),
    t('author'),
    t('Title'),
    t('<span class="editing"><a href="[path]">[title]</a><span class="edit">[edit_node]</span></span>'),
    t('Type'),
    t('Last revised by'),
    t('Updated'),
    t('Created'),
    t('All'),
    t('Records created by %1'),
    t('Content pane - edited'),
    t('Records edited'),
    t('Get the actual content from a content revision.'),
    t('Path'),
    t('Edited by %1'),
    t('View panes'),
    t('Content pane - created'),
    t('Records created by user'),
    t('Records created by this user'),
  );
  $export['content_by_contributor'] = $view;

  $view = new view();
  $view->name = 'content_status';
  $view->description = 'Sort content based on record status';
  $view->tag = 'Editorial Status, Page';
  $view->base_table = 'node';
  $view->human_name = 'Editorial status';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Record Status';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 30;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'field_recordstatus' => 'field_recordstatus',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_recordstatus' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['exposed_block'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = 'You are able to reduce the amount of articles by filtering by these keywords: <cite>Not yet reviewed, Incomplete record (stub), Revisions required, Approved record</cite>';
  $handler->display->display_options['header']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Record Status */
  $handler->display->display_options['fields']['field_record_status_tax']['id'] = 'field_record_status_tax';
  $handler->display->display_options['fields']['field_record_status_tax']['table'] = 'field_data_field_record_status_tax';
  $handler->display->display_options['fields']['field_record_status_tax']['field'] = 'field_record_status_tax';
  $handler->display->display_options['fields']['field_record_status_tax']['hide_alter_empty'] = FALSE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
    'critical_writing' => 'critical_writing',
    'event' => 'event',
    'organization' => 'organization',
    'person' => 'person',
    'publisher' => 'publisher',
    'teaching_resource' => 'teaching_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Record Status (field_record_status_tax) */
  $handler->display->display_options['filters']['field_record_status_tax_tid']['id'] = 'field_record_status_tax_tid';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['table'] = 'field_data_field_record_status_tax';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['field'] = 'field_record_status_tax_tid';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['value'] = array(
    1489 => '1489',
    1490 => '1490',
    1492 => '1492',
    1491 => '1491',
    1493 => '1493',
  );
  $handler->display->display_options['filters']['field_record_status_tax_tid']['group'] = '0';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_record_status_tax_tid']['expose']['operator_id'] = 'field_record_status_tax_tid_op';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['expose']['label'] = 'Record Status';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['expose']['operator'] = 'field_record_status_tax_tid_op';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['expose']['identifier'] = 'field_record_status_tax_tid';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_record_status_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['vocabulary'] = 'record_status';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Record status';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['content_status'] = array(
    t('Defaults'),
    t('Record Status'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('You are able to reduce the amount of articles by filtering by these keywords: <cite>Not yet reviewed, Incomplete record (stub), Revisions required, Approved record</cite>'),
    t('Title'),
    t('Type'),
    t('Edit'),
    t('Block'),
    t('Record status'),
    t('Content pane'),
    t('View panes'),
  );
  $export['content_status'] = $view;

  $view = new view();
  $view->name = 'critical_writin_critical_writing';
  $view->description = 'Critical writing cross-referenced on critical writing nodes';
  $view->tag = 'Critical Writing';
  $view->base_table = 'node';
  $view->human_name = 'Critical Writing cross-referenced on critical writing';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Critical writing referenced';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_critical_writing_year' => 'field_critical_writing_year',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'Add new <a href="http://elmcip.net/node/add/critical-writing">critical writing</a>.';
  $handler->display->display_options['footer']['area']['format'] = 'ds_code';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_tr_critical_target_id']['id'] = 'field_tr_critical_target_id';
  $handler->display->display_options['relationships']['field_tr_critical_target_id']['table'] = 'field_data_field_tr_critical';
  $handler->display->display_options['relationships']['field_tr_critical_target_id']['field'] = 'field_tr_critical_target_id';
  $handler->display->display_options['relationships']['field_tr_critical_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_tr_critical_target_id';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['relationship'] = 'field_tr_critical_target_id';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['relationship'] = 'field_tr_critical_target_id';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['field_language_add_to_query'] = 0;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'critical_writing',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['critical_writin_critical_writing'] = array(
    t('Defaults'),
    t('Critical writing referenced'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="http://elmcip.net/node/add/critical-writing">critical writing</a>.'),
    t('Content entity referenced from field_tr_critical'),
    t('Title'),
    t('Author'),
    t('Year'),
    t('All'),
    t('Entity content'),
  );
  $export['critical_writin_critical_writing'] = $view;

  $view = new view();
  $view->name = 'critical_writing_db_archive';
  $view->description = 'Research Collection DB is referenced in shown on DB node';
  $view->tag = 'Database, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Critical Writing DB/Archive';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Critical writing that references this Database or Archive:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_critical_writing_year' => 'field_critical_writing_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Database or Archive Referenced (field_database_or_archive_refere) */
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['id'] = 'field_database_or_archive_refere_target_id';
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['table'] = 'field_data_field_database_or_archive_refere';
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['field'] = 'field_database_or_archive_refere_target_id';
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'databases_and_archives',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['critical_writing_db_archive'] = array(
    t('Defaults'),
    t('Critical writing that references this Database or Archive:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.'),
    t('Title'),
    t('Author'),
    t('Year'),
    t('All'),
    t('Entity content'),
  );
  $export['critical_writing_db_archive'] = $view;

  $view = new view();
  $view->name = 'critical_writing_main';
  $view->description = 'Critical Writing views on work nodes';
  $view->tag = 'Critical Writing, Page, Block, Front, data export';
  $view->base_table = 'node';
  $view->human_name = 'Critical Writing main';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Critical Writing';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all critical writing';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_critical_writing_year' => 'field_critical_writing_year',
    'field_pubtype_tax' => 'field_pubtype_tax',
    'field_inbook' => 'field_inbook',
    'field_language_tax' => 'field_language_tax',
    'taxonomy_vocabulary_1' => 'taxonomy_vocabulary_1',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pubtype_tax' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inbook' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_language_tax' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total records';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['label'] = 'Publisher content entity referenced from field_node_ref';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_pubtype_tax']['id'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['field'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax']['delta_offset'] = '0';
  /* Field: Content: Appears in */
  $handler->display->display_options['fields']['field_inbook']['id'] = 'field_inbook';
  $handler->display->display_options['fields']['field_inbook']['table'] = 'field_data_field_inbook';
  $handler->display->display_options['fields']['field_inbook']['field'] = 'field_inbook';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax']['id'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['delta_offset'] = '0';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language (field_language_tax) */
  $handler->display->display_options['filters']['field_language_tax_tid']['id'] = 'field_language_tax_tid';
  $handler->display->display_options['filters']['field_language_tax_tid']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['filters']['field_language_tax_tid']['field'] = 'field_language_tax_tid';
  $handler->display->display_options['filters']['field_language_tax_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_language_tax_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['operator_id'] = 'field_language_tax_tid_op';
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['operator'] = 'field_language_tax_tid_op';
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['identifier'] = 'field_language_tax_tid';
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_language_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_language_tax_tid']['vocabulary'] = 'language';
  /* Filter criterion: Content: Publication Type (field_pubtype_tax) */
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['id'] = 'field_pubtype_tax_tid';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['field'] = 'field_pubtype_tax_tid';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['operator_id'] = 'field_pubtype_tax_tid_op';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['label'] = 'Publication Type';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['operator'] = 'field_pubtype_tax_tid_op';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['identifier'] = 'field_pubtype_tax_tid';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['vocabulary'] = 'publication_type';
  /* Filter criterion: Content: Record Status (field_record_status_tax) */
  $handler->display->display_options['filters']['field_record_status_tax_tid']['id'] = 'field_record_status_tax_tid';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['table'] = 'field_data_field_record_status_tax';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['field'] = 'field_record_status_tax_tid';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_record_status_tax_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_record_status_tax_tid']['expose']['operator_id'] = 'field_record_status_tax_tid_op';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['expose']['label'] = 'Record Status';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['expose']['operator'] = 'field_record_status_tax_tid_op';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['expose']['identifier'] = 'field_record_status_tax_tid';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_record_status_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_record_status_tax_tid']['vocabulary'] = 'record_status';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_node_ref_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Publisher';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['display_description'] = 'Preview of data export';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all critical writing';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_pubtype_tax']['id'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['field'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax']['delta_offset'] = '0';
  /* Field: Content: Appears in */
  $handler->display->display_options['fields']['field_inbook']['id'] = 'field_inbook';
  $handler->display->display_options['fields']['field_inbook']['table'] = 'field_data_field_inbook';
  $handler->display->display_options['fields']['field_inbook']['field'] = 'field_inbook';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax']['id'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['path'] = 'critical_writing';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Critical Writing Data';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'critical_writing_%timestamp-full.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_pubtype_tax']['id'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['field'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_pubtype_tax']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax']['delta_offset'] = '0';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_pubtype_tax_1']['id'] = 'field_pubtype_tax_1';
  $handler->display->display_options['fields']['field_pubtype_tax_1']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax_1']['field'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax_1']['label'] = 'Publication Type ID';
  $handler->display->display_options['fields']['field_pubtype_tax_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pubtype_tax_1']['alter']['text'] = '2000[field_pubtype_tax_1-tid]';
  $handler->display->display_options['fields']['field_pubtype_tax_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_pubtype_tax_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax_1']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref_1']['id'] = 'field_node_ref_1';
  $handler->display->display_options['fields']['field_node_ref_1']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_1']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_1']['label'] = 'Publisher ID';
  $handler->display->display_options['fields']['field_node_ref_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_1']['delta_offset'] = '0';
  /* Field: Content: Appears in */
  $handler->display->display_options['fields']['field_inbook']['id'] = 'field_inbook';
  $handler->display->display_options['fields']['field_inbook']['table'] = 'field_data_field_inbook';
  $handler->display->display_options['fields']['field_inbook']['field'] = 'field_inbook';
  $handler->display->display_options['fields']['field_inbook']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_inbook']['delta_offset'] = '0';
  /* Field: Content: Appears in */
  $handler->display->display_options['fields']['field_inbook_1']['id'] = 'field_inbook_1';
  $handler->display->display_options['fields']['field_inbook_1']['table'] = 'field_data_field_inbook';
  $handler->display->display_options['fields']['field_inbook_1']['field'] = 'field_inbook';
  $handler->display->display_options['fields']['field_inbook_1']['label'] = 'Journal ID';
  $handler->display->display_options['fields']['field_inbook_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_inbook_1']['alter']['text'] = '[field_inbook_1-target_id]';
  $handler->display->display_options['fields']['field_inbook_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_inbook_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_inbook_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['id'] = 'taxonomy_vocabulary_1_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['type'] = 'elmcip_setup_term_name_with_tid';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'cw_ref_works_data';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = 'batch';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_pubtype_tax']['id'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['field'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax']['delta_offset'] = '0';
  /* Field: Content: Appears in */
  $handler->display->display_options['fields']['field_inbook']['id'] = 'field_inbook';
  $handler->display->display_options['fields']['field_inbook']['table'] = 'field_data_field_inbook';
  $handler->display->display_options['fields']['field_inbook']['field'] = 'field_inbook';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Critical Writing';
  $handler->display->display_options['pane_description'] = 'Example used on KB front page';
  $translatables['critical_writing_main'] = array(
    t('Defaults'),
    t('Critical Writing'),
    t('See all critical writing'),
    t('Filter'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('@total records'),
    t('Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.'),
    t('Publisher content entity referenced from field_node_ref'),
    t('Title'),
    t('Nid'),
    t('Author'),
    t('Publication Type'),
    t('Appears in'),
    t('Updated'),
    t('Language'),
    t('Record Status'),
    t('Publisher'),
    t('Page'),
    t('Preview of data export'),
    t('Year'),
    t('Tags'),
    t('Data export'),
    t('more'),
    t('Author ID'),
    t('Publication Type ID'),
    t('2000[field_pubtype_tax_1-tid]'),
    t('Publisher ID'),
    t('Journal ID'),
    t('[field_inbook_1-target_id]'),
    t('Content pane'),
    t('Example used on KB front page'),
    t('View panes'),
  );
  $export['critical_writing_main'] = $view;

  $view = new view();
  $view->name = 'critical_writing_nid_event';
  $view->description = 'All Critical writing presented at events with IDs for title author and event';
  $view->tag = 'critical writing, data export';
  $view->base_table = 'node';
  $view->human_name = 'critical_writing_NID_event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'cw_NID_event_data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'alias' => 1,
    'absolute' => 0,
  );
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['label'] = 'Event NID';
  $handler->display->display_options['fields']['field_node_ref_event']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_event']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event_1']['id'] = 'field_node_ref_event_1';
  $handler->display->display_options['fields']['field_node_ref_event_1']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event_1']['delta_offset'] = '0';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  /* Filter criterion: Content: Presented at Event (field_node_ref_event) */
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['id'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['field'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'criticalwriting_nid-event-page';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'criticalwritingnid_event_data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['critical_writing_nid_event'] = array(
    t('Master'),
    t('cw_NID_event_data'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Nid'),
    t('Title'),
    t('Author ID'),
    t('Author'),
    t('Event NID'),
    t('Presented at Event'),
    t('Page'),
    t('Data export'),
  );
  $export['critical_writing_nid_event'] = $view;

  $view = new view();
  $view->name = 'critical_writing_on_publisher';
  $view->description = 'Critical writing published viewed on publisher nodes';
  $view->tag = 'Publisher, Critical Writing';
  $view->base_table = 'node';
  $view->human_name = 'Critical writing on Publisher';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Critical writing published';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_inbook' => 'field_inbook',
    'field_critical_writing_year' => 'field_critical_writing_year',
    'field_pubtype_tax' => 'field_pubtype_tax',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inbook' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pubtype_tax' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Work title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Appears in */
  $handler->display->display_options['fields']['field_inbook']['id'] = 'field_inbook';
  $handler->display->display_options['fields']['field_inbook']['table'] = 'field_data_field_inbook';
  $handler->display->display_options['fields']['field_inbook']['field'] = 'field_inbook';
  $handler->display->display_options['fields']['field_inbook']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_inbook']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_inbook']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_inbook']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_pubtype_tax']['id'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['field'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Publisher (field_node_ref) */
  $handler->display->display_options['arguments']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'publisher',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['critical_writing_on_publisher'] = array(
    t('Defaults'),
    t('Critical writing published'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Work title'),
    t('Author'),
    t('Appears in'),
    t('Year'),
    t('Publication Type'),
    t('All'),
    t('Entity content'),
  );
  $export['critical_writing_on_publisher'] = $view;

  $view = new view();
  $view->name = 'critical_writing_on_referenced_publisher';
  $view->description = 'Critical writing views on work nodes';
  $view->tag = 'Critical Writing, Work';
  $view->base_table = 'node';
  $view->human_name = 'Critical writing on referenced publisher';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Critical writing about this publisher';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_critical_writing_year' => 'field_critical_writing_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Publisher Referenced (field_publisher_referenced) */
  $handler->display->display_options['arguments']['field_publisher_referenced_target_id']['id'] = 'field_publisher_referenced_target_id';
  $handler->display->display_options['arguments']['field_publisher_referenced_target_id']['table'] = 'field_data_field_publisher_referenced';
  $handler->display->display_options['arguments']['field_publisher_referenced_target_id']['field'] = 'field_publisher_referenced_target_id';
  $handler->display->display_options['arguments']['field_publisher_referenced_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_publisher_referenced_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_publisher_referenced_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_publisher_referenced_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_publisher_referenced_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'publisher',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['critical_writing_on_referenced_publisher'] = array(
    t('Defaults'),
    t('Critical writing about this publisher'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('Author'),
    t('Year'),
    t('All'),
    t('Entity content'),
  );
  $export['critical_writing_on_referenced_publisher'] = $view;

  $view = new view();
  $view->name = 'critical_writing_page';
  $view->description = 'Critical Writing views on work nodes';
  $view->tag = 'Critical Writing, Page, Block, Front, data export';
  $view->base_table = 'node';
  $view->human_name = 'Critical Writing';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Critical Writing Referencing Creative Works';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all critical writing';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'field_author_name' => 'field_author_name',
    'field_pubtype_tax' => 'field_pubtype_tax',
    'field_critical_writing_year' => 'field_critical_writing_year',
    'field_inbook' => 'field_inbook',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pubtype_tax' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inbook' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total records';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_pubtype_tax']['id'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['field'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Appears in */
  $handler->display->display_options['fields']['field_inbook']['id'] = 'field_inbook';
  $handler->display->display_options['fields']['field_inbook']['table'] = 'field_data_field_inbook';
  $handler->display->display_options['fields']['field_inbook']['field'] = 'field_inbook';
  $handler->display->display_options['fields']['field_inbook']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_inbook']['delta_offset'] = '0';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Creative Works referenced (field_node_ref_work) */
  $handler->display->display_options['filters']['field_node_ref_work_target_id']['id'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['filters']['field_node_ref_work_target_id']['table'] = 'field_data_field_node_ref_work';
  $handler->display->display_options['filters']['field_node_ref_work_target_id']['field'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['filters']['field_node_ref_work_target_id']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['display_description'] = 'Preview of data export';
  $handler->display->display_options['path'] = 'cw_ref_works';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Critical Writing Data';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%exposed_%view.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['path'] = 'cw_ref_works_data';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = 'batch';
  $translatables['critical_writing_page'] = array(
    t('Defaults'),
    t('Critical Writing Referencing Creative Works'),
    t('See all critical writing'),
    t('Filter'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('@total records'),
    t('Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.'),
    t('Title'),
    t('Nid'),
    t('Author'),
    t('Publication Type'),
    t('Year'),
    t('Appears in'),
    t('Updated'),
    t('Page'),
    t('Preview of data export'),
    t('more'),
    t('Data export'),
  );
  $export['critical_writing_page'] = $view;

  $view = new view();
  $view->name = 'critical_writing_tr';
  $view->description = 'Critical writing viewed on teaching resources';
  $view->tag = 'Critical Writing, Teaching Resource';
  $view->base_table = 'node';
  $view->human_name = 'Critical writing on teaching resource';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Critical writing referenced';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_critical_writing_year' => 'field_critical_writing_year',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_tr_critical_target_id']['id'] = 'field_tr_critical_target_id';
  $handler->display->display_options['relationships']['field_tr_critical_target_id']['table'] = 'field_data_field_tr_critical';
  $handler->display->display_options['relationships']['field_tr_critical_target_id']['field'] = 'field_tr_critical_target_id';
  $handler->display->display_options['relationships']['field_tr_critical_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_tr_critical_target_id';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['relationship'] = 'field_tr_critical_target_id';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['relationship'] = 'field_tr_critical_target_id';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'teaching_resource',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['critical_writing_tr'] = array(
    t('Defaults'),
    t('Critical writing referenced'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_tr_critical'),
    t('Title'),
    t('Author'),
    t('Year'),
    t('All'),
    t('Entity content'),
  );
  $export['critical_writing_tr'] = $view;

  $view = new view();
  $view->name = 'curator_of';
  $view->description = 'Event curated by person viewed on person node';
  $view->tag = 'Event, Person';
  $view->base_table = 'node';
  $view->human_name = 'Events curated on person record';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Curator of:';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_date' => 'field_date',
    'field_location' => 'field_location',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Curator of';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/event" target="_blank">exhibition</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'date_only_month_spelled',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Curator (field_curator) */
  $handler->display->display_options['arguments']['field_curator_target_id']['id'] = 'field_curator_target_id';
  $handler->display->display_options['arguments']['field_curator_target_id']['table'] = 'field_data_field_curator';
  $handler->display->display_options['arguments']['field_curator_target_id']['field'] = 'field_curator_target_id';
  $handler->display->display_options['arguments']['field_curator_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_curator_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_curator_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_curator_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'edited_by_person');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'person',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['curator_of'] = array(
    t('Defaults'),
    t('Curator of:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Curator of'),
    t('Add a new <a href="/node/add/event" target="_blank">exhibition</a>.'),
    t('Title'),
    t('City'),
    t('Country'),
    t('Date'),
    t('All'),
    t('Entity content'),
  );
  $export['curator_of'] = $view;

  $view = new view();
  $view->name = 'cw_listed_in_research_collection';
  $view->description = 'CW viewed on Research Collection';
  $view->tag = 'Critical Writing, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'CW listed in Research Collection';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Critical Writing';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_critical_writing_year' => 'field_critical_writing_year',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_critical_writing_target_id']['id'] = 'field_critical_writing_target_id';
  $handler->display->display_options['relationships']['field_critical_writing_target_id']['table'] = 'field_data_field_critical_writing';
  $handler->display->display_options['relationships']['field_critical_writing_target_id']['field'] = 'field_critical_writing_target_id';
  $handler->display->display_options['relationships']['field_critical_writing_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_critical_writing_target_id';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['relationship'] = 'field_critical_writing_target_id';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['relationship'] = 'field_critical_writing_target_id';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'research_collection',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'CSV data export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title - critical_writing_%timestamp-dd.%timestamp-mm.%timestamp-yyyy-%timestamp-hh.%timestamp-ii.%timestamp-ss.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'data/%/research-collection';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['cw_listed_in_research_collection'] = array(
    t('Defaults'),
    t('Critical Writing'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_critical_writing'),
    t('Title'),
    t('Author'),
    t('Year'),
    t('All'),
    t('Entity content'),
    t('Data export'),
  );
  $export['cw_listed_in_research_collection'] = $view;

  $view = new view();
  $view->name = 'cw_ref_work';
  $view->description = '';
  $view->tag = 'critical writing, work, data export';
  $view->base_table = 'node';
  $view->human_name = 'Critical Writing Referencing Creative Works';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Critical Writing Referencing Creative Works';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_author_name_1' => 'field_author_name_1',
    'field_critical_writing_year' => 'field_critical_writing_year',
    'field_node_ref_work' => 'field_node_ref_work',
    'field_node_ref_work_1' => 'field_node_ref_work_1',
    'field_author_name_2' => 'field_author_name_2',
    'field_author_name_3' => 'field_author_name_3',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_node_ref_work' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_node_ref_work_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_node_ref_work_target_id']['id'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['relationships']['field_node_ref_work_target_id']['table'] = 'field_data_field_node_ref_work';
  $handler->display->display_options['relationships']['field_node_ref_work_target_id']['field'] = 'field_node_ref_work_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Creative Works referenced */
  $handler->display->display_options['fields']['field_node_ref_work']['id'] = 'field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work']['table'] = 'field_data_field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work']['field'] = 'field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_node_ref_work']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_work']['delta_offset'] = '0';
  /* Field: Content: Creative Works referenced */
  $handler->display->display_options['fields']['field_node_ref_work_1']['id'] = 'field_node_ref_work_1';
  $handler->display->display_options['fields']['field_node_ref_work_1']['table'] = 'field_data_field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work_1']['field'] = 'field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work_1']['label'] = 'Creative Works referenced ID';
  $handler->display->display_options['fields']['field_node_ref_work_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_work_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_work_1']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_2']['id'] = 'field_author_name_2';
  $handler->display->display_options['fields']['field_author_name_2']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_2']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_2']['relationship'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['fields']['field_author_name_2']['label'] = 'Creative Work Author';
  $handler->display->display_options['fields']['field_author_name_2']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_2']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_3']['id'] = 'field_author_name_3';
  $handler->display->display_options['fields']['field_author_name_3']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_3']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_3']['relationship'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['fields']['field_author_name_3']['label'] = 'Creative Work Author ID';
  $handler->display->display_options['fields']['field_author_name_3']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_3']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_3']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_3']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  /* Filter criterion: Content: Creative Works referenced (field_node_ref_work) */
  $handler->display->display_options['filters']['field_node_ref_work_target_id']['id'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['filters']['field_node_ref_work_target_id']['table'] = 'field_data_field_node_ref_work';
  $handler->display->display_options['filters']['field_node_ref_work_target_id']['field'] = 'field_node_ref_work_target_id';
  $handler->display->display_options['filters']['field_node_ref_work_target_id']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'critical-writing-referencing-creative-works';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'critical-writing-referencing-creative-works-data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';

  /* Display: Data export -- concatenate Authors */
  $handler = $view->new_display('views_data_export', 'Data export -- concatenate Authors', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Creative Works referenced */
  $handler->display->display_options['fields']['field_node_ref_work']['id'] = 'field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work']['table'] = 'field_data_field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work']['field'] = 'field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_work']['delta_offset'] = '0';
  /* Field: Content: Creative Works referenced */
  $handler->display->display_options['fields']['field_node_ref_work_1']['id'] = 'field_node_ref_work_1';
  $handler->display->display_options['fields']['field_node_ref_work_1']['table'] = 'field_data_field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work_1']['field'] = 'field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_work_1']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_2']['id'] = 'field_author_name_2';
  $handler->display->display_options['fields']['field_author_name_2']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_2']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_2']['label'] = 'Creative Work Author';
  $handler->display->display_options['fields']['field_author_name_2']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_2']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['path'] = 'critical-writing-referencing-creative-works-data2';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $translatables['cw_ref_work'] = array(
    t('Master'),
    t('Critical Writing Referencing Creative Works'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_node_ref_work'),
    t('Nid'),
    t('Title'),
    t('Author'),
    t('Author ID'),
    t('Year'),
    t('Creative Works referenced'),
    t('Creative Works referenced ID'),
    t('Creative Work Author'),
    t('Creative Work Author ID'),
    t('Page'),
    t('Data export'),
    t('Data export -- concatenate Authors'),
  );
  $export['cw_ref_work'] = $view;

  $view = new view();
  $view->name = 'cw_reference_critical_writing';
  $view->description = 'Critical writing that reference this critical writing';
  $view->tag = 'Critical Writing';
  $view->base_table = 'node';
  $view->human_name = 'CW referencing this CW';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Critical writing that references this';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_node_ref' => 'field_node_ref',
    'field_critical_writing_year' => 'field_critical_writing_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_node_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Critical Writing Referenced (field_tr_critical) */
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['id'] = 'field_tr_critical_target_id';
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['table'] = 'field_data_field_tr_critical';
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['field'] = 'field_tr_critical_target_id';
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tr_critical_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'critical_writing',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['cw_reference_critical_writing'] = array(
    t('Defaults'),
    t('Critical writing that references this'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.'),
    t('Title'),
    t('Author'),
    t('Publisher'),
    t('Year'),
    t('All'),
    t('Entity content'),
  );
  $export['cw_reference_critical_writing'] = $view;

  $view = new view();
  $view->name = 'cw_reference_event';
  $view->description = 'Writing about this Event';
  $view->tag = 'Critical Writing';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Writing about this event';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_node_ref' => 'field_node_ref',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_node_ref' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Event Referenced (field_ref_about_event) */
  $handler->display->display_options['arguments']['field_ref_about_event_target_id']['id'] = 'field_ref_about_event_target_id';
  $handler->display->display_options['arguments']['field_ref_about_event_target_id']['table'] = 'field_data_field_ref_about_event';
  $handler->display->display_options['arguments']['field_ref_about_event_target_id']['field'] = 'field_ref_about_event_target_id';
  $handler->display->display_options['arguments']['field_ref_about_event_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_ref_about_event_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ref_about_event_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ref_about_event_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ref_about_event_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'event',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['cw_reference_event'] = array(
    t('Defaults'),
    t('Writing about this event'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.'),
    t('Title'),
    t('Author'),
    t('Publisher'),
    t('All'),
    t('Entity content'),
  );
  $export['cw_reference_event'] = $view;

  $view = new view();
  $view->name = 'database_listed_on_teaching_resource';
  $view->description = 'Database or archive viewed on teaching resources';
  $view->tag = 'Database or Archive, Teaching Resource';
  $view->base_table = 'node';
  $view->human_name = 'Database listed on teaching resource';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Databases or archives referenced';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_database_or_archive_refere_target_id']['id'] = 'field_database_or_archive_refere_target_id';
  $handler->display->display_options['relationships']['field_database_or_archive_refere_target_id']['table'] = 'field_data_field_database_or_archive_refere';
  $handler->display->display_options['relationships']['field_database_or_archive_refere_target_id']['field'] = 'field_database_or_archive_refere_target_id';
  $handler->display->display_options['relationships']['field_database_or_archive_refere_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_database_or_archive_refere_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'teaching_resource',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['database_listed_on_teaching_resource'] = array(
    t('Defaults'),
    t('Databases or archives referenced'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_database_or_archive_refere'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['database_listed_on_teaching_resource'] = $view;

  $view = new view();
  $view->name = 'database_on_critical_writing';
  $view->description = 'Database referenced viewed on critical writing nodes';
  $view->tag = 'Database, Critical Writing';
  $view->base_table = 'node';
  $view->human_name = 'Database on critical writing';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Databases/Archives referenced';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_db_org' => 'field_db_org',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_db_org' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'Add a new <a href="http://elmcip.net/node/add/work">database</a>.';
  $handler->display->display_options['footer']['area']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_database_or_archive_refere_target_id']['id'] = 'field_database_or_archive_refere_target_id';
  $handler->display->display_options['relationships']['field_database_or_archive_refere_target_id']['table'] = 'field_data_field_database_or_archive_refere';
  $handler->display->display_options['relationships']['field_database_or_archive_refere_target_id']['field'] = 'field_database_or_archive_refere_target_id';
  $handler->display->display_options['relationships']['field_database_or_archive_refere_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_database_or_archive_refere_target_id';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_db_org']['id'] = 'field_db_org';
  $handler->display->display_options['fields']['field_db_org']['table'] = 'field_data_field_db_org';
  $handler->display->display_options['fields']['field_db_org']['field'] = 'field_db_org';
  $handler->display->display_options['fields']['field_db_org']['relationship'] = 'field_database_or_archive_refere_target_id';
  $handler->display->display_options['fields']['field_db_org']['label'] = 'Organization responsible';
  $handler->display->display_options['fields']['field_db_org']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'critical_writing',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['database_on_critical_writing'] = array(
    t('Defaults'),
    t('Databases/Archives referenced'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add a new <a href="http://elmcip.net/node/add/work">database</a>.'),
    t('Content entity referenced from field_database_or_archive_refere'),
    t('Title'),
    t('Organization responsible'),
    t('All'),
    t('Entity content'),
  );
  $export['database_on_critical_writing'] = $view;

  $view = new view();
  $view->name = 'databases_archives_listed_in_research_collection';
  $view->description = 'Databases viewed on Research Collection';
  $view->tag = 'Database, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Databases/Archives listed in Research Collection';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Databases and Archives';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rc_db_archive_target_id']['id'] = 'field_rc_db_archive_target_id';
  $handler->display->display_options['relationships']['field_rc_db_archive_target_id']['table'] = 'field_data_field_rc_db_archive';
  $handler->display->display_options['relationships']['field_rc_db_archive_target_id']['field'] = 'field_rc_db_archive_target_id';
  $handler->display->display_options['relationships']['field_rc_db_archive_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_rc_db_archive_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['relationship'] = 'field_rc_db_archive_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'research_collection',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'CSV data export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title - databases_and_archives_%timestamp-dd.%timestamp-mm.%timestamp-yyyy-%timestamp-hh.%timestamp-ii.%timestamp-ss.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'data/%/research-collection/databases_and_archives';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['databases_archives_listed_in_research_collection'] = array(
    t('Defaults'),
    t('Databases and Archives'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_rc_db_archive'),
    t('Name'),
    t('Project Type'),
    t('All'),
    t('Entity content'),
    t('Data export'),
  );
  $export['databases_archives_listed_in_research_collection'] = $view;

  $view = new view();
  $view->name = 'db_archives_page';
  $view->description = 'Databases/Archives page view';
  $view->tag = 'Database, Page';
  $view->base_table = 'node';
  $view->human_name = 'Database/Archives Page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Databases and Archives';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all databases and archives';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'country' => 'country',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'country' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total records';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/databases-and-archives" target="_blank">database or archive</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'The site contain not any content of this type. Be the first to <a href="node/add/author">add new</a> author content.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'databases_and_archives' => 'databases_and_archives',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_db_org' => 'field_db_org',
    'field_project_type' => 'field_project_type',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_db_org' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_db_org']['id'] = 'field_db_org';
  $handler->display->display_options['fields']['field_db_org']['table'] = 'field_data_field_db_org';
  $handler->display->display_options['fields']['field_db_org']['field'] = 'field_db_org';
  $handler->display->display_options['fields']['field_db_org']['label'] = 'Organization Responsible';
  $handler->display->display_options['fields']['field_db_org']['delta_offset'] = '0';
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'dmy';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all databases and archives';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project_type' => 'field_project_type',
    'field_db_org' => 'field_db_org',
    'changed' => 'changed',
    'created' => 'created',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_db_org' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_db_org']['id'] = 'field_db_org';
  $handler->display->display_options['fields']['field_db_org']['table'] = 'field_data_field_db_org';
  $handler->display->display_options['fields']['field_db_org']['field'] = 'field_db_org';
  $handler->display->display_options['fields']['field_db_org']['delta_offset'] = '0';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'dmy';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['path'] = 'db_archives';
  $translatables['db_archives_page'] = array(
    t('Defaults'),
    t('Databases and Archives'),
    t('See all databases and archives'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('@total records'),
    t('Add a new <a href="/node/add/databases-and-archives" target="_blank">database or archive</a>.'),
    t('The site contain not any content of this type. Be the first to <a href="node/add/author">add new</a> author content.'),
    t('Name'),
    t('Country'),
    t('Updated'),
    t('Block'),
    t('more'),
    t('Organization Responsible'),
    t('Project Type'),
    t('Page'),
    t('Organization'),
    t('Updated date'),
  );
  $export['db_archives_page'] = $view;

  $view = new view();
  $view->name = 'edited_by_person';
  $view->description = 'Critical writing edited by person viewed on person node';
  $view->tag = 'Person, Critical Writing, Book';
  $view->base_table = 'node';
  $view->human_name = 'Critical writing edited by person';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Editorial work:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_node_ref' => 'field_node_ref',
    'field_critical_writing_year' => 'field_critical_writing_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_node_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Editor (field_editor_name) */
  $handler->display->display_options['arguments']['field_editor_name_target_id']['id'] = 'field_editor_name_target_id';
  $handler->display->display_options['arguments']['field_editor_name_target_id']['table'] = 'field_data_field_editor_name';
  $handler->display->display_options['arguments']['field_editor_name_target_id']['field'] = 'field_editor_name_target_id';
  $handler->display->display_options['arguments']['field_editor_name_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_editor_name_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_editor_name_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_editor_name_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_editor_name_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'edited_by_person');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'person',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['edited_by_person'] = array(
    t('Defaults'),
    t('Editorial work:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.'),
    t('Title'),
    t('Year'),
    t('Publisher'),
    t('All'),
    t('Entity content'),
  );
  $export['edited_by_person'] = $view;

  $view = new view();
  $view->name = 'elmcip_taxonomy_term';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ELMCIP Taxonomy term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Author critical_writing, work */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['ui_name'] = 'Author critical_writing, work';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Author teaching_resource */
  $handler->display->display_options['fields']['field_tr_author']['id'] = 'field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['table'] = 'field_data_field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['field'] = 'field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['ui_name'] = 'Author teaching_resource';
  $handler->display->display_options['fields']['field_tr_author']['label'] = '';
  $handler->display->display_options['fields']['field_tr_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tr_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tr_author']['alter']['text'] = '[field_author_name][field_tr_author]';
  $handler->display->display_options['fields']['field_tr_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tr_author']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_tr_author']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Author';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_author_name]
[field_tr_author]';
  /* Sort criterion: Content: Sticky status */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Published status or admin user */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'taxonomy/term/%/%/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Story page */
  $handler = $view->new_display('page', 'Story page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status or admin user */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'taxonomy/term/%';
  $translatables['elmcip_taxonomy_term'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Displaying @start - @end of @total'),
    t('Title'),
    t('[field_author_name][field_tr_author]'),
    t('Author'),
    t('[field_author_name]
[field_tr_author]'),
    t('All'),
    t('%1'),
    t('Type'),
    t('Page'),
    t('Feed'),
    t('Story page'),
  );
  $export['elmcip_taxonomy_term'] = $view;

  $view = new view();
  $view->name = 'event_nid_data';
  $view->description = '';
  $view->tag = 'author, data export';
  $view->base_table = 'node';
  $view->human_name = 'event_NID_data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'event_NID_data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Event Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'event-nid-page';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'event-nid-data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['event_nid_data'] = array(
    t('Master'),
    t('event_NID_data'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Event Name'),
    t('Nid'),
    t('Page'),
    t('Data export'),
  );
  $export['event_nid_data'] = $view;

  $view = new view();
  $view->name = 'event_page';
  $view->description = 'Event page view';
  $view->tag = 'Event, Page';
  $view->base_table = 'node';
  $view->human_name = 'Event page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all events';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = 200;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'content' => 'content',
    'city' => 'city',
    'country' => 'country',
    'field_date_value' => 'field_date_value',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'content';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'content' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'city' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'country' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_date_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total records';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/event" target="_blank">event</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'The site contain not any content of this type. Be the first to <a href="node/add/event">add new</a> event content.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Event Date';
  $handler->display->display_options['fields']['field_date']['type'] = 'date_short';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['id'] = 'taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['table'] = 'field_data_taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['field'] = 'taxonomy_vocabulary_2';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type_1']['group'] = '0';
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_date' => 'field_date',
    'city' => 'city',
    'country' => 'country',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Event Date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all events';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_date' => 'field_date',
    'city' => 'city',
    'country' => 'country',
    'taxonomy_vocabulary_2' => 'taxonomy_vocabulary_2',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Event Date';
  $handler->display->display_options['fields']['field_date']['type'] = 'date_short';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['id'] = 'taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['table'] = 'field_data_taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['field'] = 'taxonomy_vocabulary_2';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['path'] = 'event';
  $translatables['event_page'] = array(
    t('Defaults'),
    t('Events'),
    t('See all events'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('@total records'),
    t('Add a new <a href="/node/add/event" target="_blank">event</a>.'),
    t('The site contain not any content of this type. Be the first to <a href="node/add/event">add new</a> event content.'),
    t('Title'),
    t('Event Date'),
    t('City'),
    t('Country'),
    t('Updated'),
    t('Event type'),
    t('Block'),
    t('more'),
    t('Name'),
    t('Page'),
  );
  $export['event_page'] = $view;

  $view = new view();
  $view->name = 'event_ref_on_cw';
  $view->description = 'events referenced on critical writing nodes';
  $view->tag = 'Event, Critical Writing';
  $view->base_table = 'node';
  $view->human_name = 'Events referenced on critical writing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events referenced';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_date' => 'field_date',
    'field_location' => 'field_location',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_about_event_target_id']['id'] = 'field_ref_about_event_target_id';
  $handler->display->display_options['relationships']['field_ref_about_event_target_id']['table'] = 'field_data_field_ref_about_event';
  $handler->display->display_options['relationships']['field_ref_about_event_target_id']['field'] = 'field_ref_about_event_target_id';
  $handler->display->display_options['relationships']['field_ref_about_event_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_ref_about_event_target_id';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_ref_about_event_target_id';
  $handler->display->display_options['fields']['field_date']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_ref_about_event_target_id';
  $handler->display->display_options['fields']['field_location']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'critical_writing',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['event_ref_on_cw'] = array(
    t('Master'),
    t('Events referenced'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_ref_about_event'),
    t('Title'),
    t('Date'),
    t('Location'),
    t('All'),
    t('Entity content'),
  );
  $export['event_ref_on_cw'] = $view;

  $view = new view();
  $view->name = 'event_series';
  $view->description = 'Events in a series viewed on series page';
  $view->tag = 'Event, Series';
  $view->base_table = 'node';
  $view->human_name = 'Events in a series';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Events in this series';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'city' => 'city',
    'field_date' => 'field_date',
    'taxonomy_vocabulary_2' => 'taxonomy_vocabulary_2',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'taxonomy_vocabulary_2' => array(
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/event" target="_blank">event</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_series_target_id']['id'] = 'field_event_series_target_id';
  $handler->display->display_options['relationships']['field_event_series_target_id']['table'] = 'field_data_field_event_series';
  $handler->display->display_options['relationships']['field_event_series_target_id']['field'] = 'field_event_series_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Event';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['id'] = 'taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['table'] = 'field_data_taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['field'] = 'taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['delta_offset'] = '0';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_event_series_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['pager']['options']['id'] = '0';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'event',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['event_series'] = array(
    t('Defaults'),
    t('Events in this series'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/event" target="_blank">event</a>.'),
    t('Content entity referenced from field_event_series'),
    t('Event'),
    t('City'),
    t('Date'),
    t('Event type'),
    t('Link to edit content'),
    t('All'),
    t('Block'),
    t('Entity content'),
  );
  $export['event_series'] = $view;

  $view = new view();
  $view->name = 'events_listed_in_research_collection';
  $view->description = 'Events viewed on Research Collection';
  $view->tag = 'Event, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Events listed in Research Collection';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_events_node']['id'] = 'reverse_field_events_node';
  $handler->display->display_options['relationships']['reverse_field_events_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_events_node']['field'] = 'reverse_field_events_node';
  $handler->display->display_options['relationships']['reverse_field_events_node']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['id'] = 'taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['table'] = 'field_data_taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['field'] = 'taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_events_nid';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'date_only_month_spelled',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'field_events_nid';
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['relationship'] = 'field_events_nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_events_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'research_collection',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'CSV data export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title - events_%timestamp-dd.%timestamp-mm.%timestamp-yyyy-%timestamp-hh.%timestamp-ii.%timestamp-ss.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'data/%/research-collection/event';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['events_listed_in_research_collection'] = array(
    t('Defaults'),
    t('Events'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content referencing Content from field_events'),
    t('Title'),
    t('Event type'),
    t('Date'),
    t('City'),
    t('Country'),
    t('All'),
    t('Entity content'),
    t('Data export'),
  );
  $export['events_listed_in_research_collection'] = $view;

  $view = new view();
  $view->name = 'events_on_individual_organizer_page';
  $view->description = 'Event records viewed on organizer node';
  $view->tag = 'Event, Person';
  $view->base_table = 'node';
  $view->human_name = 'Events on individual organizer page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Events arranged:';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'city' => 'city',
    'field_date' => 'field_date',
    'taxonomy_vocabulary_2' => 'taxonomy_vocabulary_2',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'taxonomy_vocabulary_2' => array(
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/event" target="_blank">event</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Event';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['type'] = 'date_short';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['id'] = 'taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['table'] = 'field_data_taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['field'] = 'taxonomy_vocabulary_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_2']['delta_offset'] = '0';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Individual Organizers (field_individual_organizers) */
  $handler->display->display_options['arguments']['field_individual_organizers_target_id']['id'] = 'field_individual_organizers_target_id';
  $handler->display->display_options['arguments']['field_individual_organizers_target_id']['table'] = 'field_data_field_individual_organizers';
  $handler->display->display_options['arguments']['field_individual_organizers_target_id']['field'] = 'field_individual_organizers_target_id';
  $handler->display->display_options['arguments']['field_individual_organizers_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_individual_organizers_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_individual_organizers_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_individual_organizers_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['pager']['options']['id'] = '0';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'person',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['events_on_individual_organizer_page'] = array(
    t('Defaults'),
    t('Events arranged:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/event" target="_blank">event</a>.'),
    t('Event'),
    t('City'),
    t('Date'),
    t('Event type'),
    t('Link to edit content'),
    t('All'),
    t('Block'),
    t('Entity content'),
  );
  $export['events_on_individual_organizer_page'] = $view;

  $view = new view();
  $view->name = 'latest_revisions';
  $view->description = 'Sort content based on latest revisions';
  $view->tag = 'Revisions';
  $view->base_table = 'node';
  $view->human_name = 'latest_revisions';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Most recent revisions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 300;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'timestamp' => 'timestamp',
    'name' => 'name',
    'type' => 'type',
    'field_recordstatus_value' => 'field_recordstatus_value',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'timestamp' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'type' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_recordstatus_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  $handler->display->display_options['exposed_block'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = 'You are able to reduce the amount of articles by filtering by these keywords: <cite>Not yet reviewed, Incomplete record (stub), Revisions required, Approved record</cite>';
  $handler->display->display_options['header']['text']['format'] = '1';
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Revision date';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Record Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
    'event' => 'event',
    'organization' => 'organization',
    'person' => 'person',
    'publisher' => 'publisher',
    'teaching_resource' => 'teaching_resource',
    'work' => 'work',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Recent revisions';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['latest_revisions'] = array(
    t('Defaults'),
    t('Most recent revisions'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('You are able to reduce the amount of articles by filtering by these keywords: <cite>Not yet reviewed, Incomplete record (stub), Revisions required, Approved record</cite>'),
    t('author'),
    t('Title'),
    t('Revision date'),
    t('Record Author'),
    t('Type'),
    t('Edit'),
    t('Block'),
    t('Recent revisions'),
    t('Content pane'),
    t('View panes'),
  );
  $export['latest_revisions'] = $view;

  $view = new view();
  $view->name = 'new_content_teaser';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New content teaser';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New Critical Writing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['row_options']['separator'] = '- ';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'j M Y';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
    'critical_writing' => 'critical_writing',
  );

  /* Display: Creative works only */
  $handler = $view->new_display('block', 'Creative works only', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Creative Work';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
  );

  /* Display: Critical writing only */
  $handler = $view->new_display('block', 'Critical writing only', 'block_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $translatables['new_content_teaser'] = array(
    t('Master'),
    t('New Critical Writing'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Creative works only'),
    t('New Creative Work'),
    t('Critical writing only'),
  );
  $export['new_content_teaser'] = $view;

  $view = new view();
  $view->name = 'node_date_nid';
  $view->description = '';
  $view->tag = 'data export, nodes';
  $view->base_table = 'node';
  $view->human_name = 'Nodes -- creation date -- nid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nodes -- creation date -- nid';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'created' => 'created',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Label';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Id';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'start';
  $handler->display->display_options['fields']['created']['date_format'] = 'iso';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
    'critical_writing' => 'critical_writing',
    'databases_and_archives' => 'databases_and_archives',
    'event' => 'event',
    'organization' => 'organization',
    'person' => 'person',
    'publisher' => 'publisher',
    'research_collection' => 'research_collection',
    'teaching_resource' => 'teaching_resource',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node_date_id';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'node_date_nid_data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['node_date_nid'] = array(
    t('Master'),
    t('Nodes -- creation date -- nid'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Label'),
    t('Id'),
    t('start'),
    t('Type'),
    t('Page'),
    t('Data export'),
  );
  $export['node_date_nid'] = $view;

  $view = new view();
  $view->name = 'notebooks_on_user_profile';
  $view->description = 'Notebooks created by user on user profile';
  $view->tag = 'Notebook, User Profile';
  $view->base_table = 'node';
  $view->human_name = 'Notebooks on user profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>This user\'s notebooks</p>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'notebook' => 'notebook',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'user';
  $handler->display->display_options['bundles'] = array(
    0 => 'user',
  );
  $translatables['notebooks_on_user_profile'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<p>This user\'s notebooks</p>'),
    t('author'),
    t('Updated date'),
    t('All'),
    t('Entity content'),
  );
  $export['notebooks_on_user_profile'] = $view;

  $view = new view();
  $view->name = 'notes_in_this_notebook';
  $view->description = 'View of notes in an individual notebook';
  $view->tag = 'Notes, Notebook';
  $view->base_table = 'node';
  $view->human_name = 'Notes in this notebook';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Notes in this notebook';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_notebok' => 'field_notebok',
    'title' => 'title',
    'field_work_noted' => 'field_work_noted',
    'field_cw_noted' => 'field_cw_noted',
    'field_your_notes' => 'field_your_notes',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_notebok' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_work_noted' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cw_noted' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_your_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_notebok_target_id']['id'] = 'field_notebok_target_id';
  $handler->display->display_options['relationships']['field_notebok_target_id']['table'] = 'field_data_field_notebok';
  $handler->display->display_options['relationships']['field_notebok_target_id']['field'] = 'field_notebok_target_id';
  $handler->display->display_options['relationships']['field_notebok_target_id']['required'] = TRUE;
  /* Field: Content: Notebook */
  $handler->display->display_options['fields']['field_notebok']['id'] = 'field_notebok';
  $handler->display->display_options['fields']['field_notebok']['table'] = 'field_data_field_notebok';
  $handler->display->display_options['fields']['field_notebok']['field'] = 'field_notebok';
  $handler->display->display_options['fields']['field_notebok']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_notebok']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Note title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Work noted */
  $handler->display->display_options['fields']['field_work_noted']['id'] = 'field_work_noted';
  $handler->display->display_options['fields']['field_work_noted']['table'] = 'field_data_field_work_noted';
  $handler->display->display_options['fields']['field_work_noted']['field'] = 'field_work_noted';
  $handler->display->display_options['fields']['field_work_noted']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_work_noted']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_work_noted']['delta_offset'] = '0';
  /* Field: Content: Critical Writing noted */
  $handler->display->display_options['fields']['field_cw_noted']['id'] = 'field_cw_noted';
  $handler->display->display_options['fields']['field_cw_noted']['table'] = 'field_data_field_cw_noted';
  $handler->display->display_options['fields']['field_cw_noted']['field'] = 'field_cw_noted';
  $handler->display->display_options['fields']['field_cw_noted']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cw_noted']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_cw_noted']['delta_offset'] = '0';
  /* Field: Content: Your notes */
  $handler->display->display_options['fields']['field_your_notes']['id'] = 'field_your_notes';
  $handler->display->display_options['fields']['field_your_notes']['table'] = 'field_data_field_your_notes';
  $handler->display->display_options['fields']['field_your_notes']['field'] = 'field_your_notes';
  $handler->display->display_options['fields']['field_your_notes']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_notebok_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'notebook',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['notes_in_this_notebook'] = array(
    t('Master'),
    t('Notes in this notebook'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_notebok'),
    t('Notebook'),
    t('Note title'),
    t('Work noted'),
    t('Critical Writing noted'),
    t('Your notes'),
    t('All'),
    t('Entity content'),
  );
  $export['notes_in_this_notebook'] = $view;

  $view = new view();
  $view->name = 'org_affil_person';
  $view->description = 'Org affiliations viewed on person node';
  $view->tag = 'Person, Organization';
  $view->base_table = 'node';
  $view->human_name = 'Organizations person is affiliated with';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Affiliations:';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Affiliations';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/organization" target="_blank">organization</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_affiliation_target_id']['id'] = 'field_affiliation_target_id';
  $handler->display->display_options['relationships']['field_affiliation_target_id']['table'] = 'field_data_field_affiliation';
  $handler->display->display_options['relationships']['field_affiliation_target_id']['field'] = 'field_affiliation_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_affiliation_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Affiliations - Organizations (field_affiliation) */
  $handler->display->display_options['filters']['field_affiliation_target_id']['id'] = 'field_affiliation_target_id';
  $handler->display->display_options['filters']['field_affiliation_target_id']['table'] = 'field_data_field_affiliation';
  $handler->display->display_options['filters']['field_affiliation_target_id']['field'] = 'field_affiliation_target_id';
  $handler->display->display_options['filters']['field_affiliation_target_id']['operator'] = 'not empty';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'affiliation_person');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'person',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['org_affil_person'] = array(
    t('Defaults'),
    t('Affiliations:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Affiliations'),
    t('Add new <a href="/node/add/organization" target="_blank">organization</a>.'),
    t('Content entity referenced from field_affiliation'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['org_affil_person'] = $view;

  $view = new view();
  $view->name = 'organization_page';
  $view->description = 'Organization page view';
  $view->tag = 'Organization, Page';
  $view->base_table = 'node';
  $view->human_name = 'Organization page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Organizations';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all organizations';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = 200;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'country' => 'country',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'country' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result_1']['id'] = 'result_1';
  $handler->display->display_options['header']['result_1']['table'] = 'views';
  $handler->display->display_options['header']['result_1']['field'] = 'result';
  $handler->display->display_options['header']['result_1']['content'] = '@total records';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/organization" target="_blank">organization</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'The site contain not any content of this type. Be the first to <a href="node/add/author">add new</a> author content.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organization' => 'organization',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all organizations';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'changed' => 'changed',
    'created' => 'created',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['path'] = 'organization';
  $translatables['organization_page'] = array(
    t('Defaults'),
    t('Organizations'),
    t('See all organizations'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('@total records'),
    t('Add a new <a href="/node/add/organization" target="_blank">organization</a>.'),
    t('The site contain not any content of this type. Be the first to <a href="node/add/author">add new</a> author content.'),
    t('Name'),
    t('Country'),
    t('Updated'),
    t('Block'),
    t('more'),
    t('Page'),
    t('Updated date'),
    t('Post date'),
  );
  $export['organization_page'] = $view;

  $view = new view();
  $view->name = 'organization_referenced_on_critical_writing';
  $view->description = 'events referenced on critical writing nodes';
  $view->tag = 'Event, Critical Writing';
  $view->base_table = 'node';
  $view->human_name = 'Organization referenced on critical writing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Organizations referenced';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_date' => 'field_date',
    'field_location' => 'field_location',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_organization_cw_target_id']['id'] = 'field_organization_cw_target_id';
  $handler->display->display_options['relationships']['field_organization_cw_target_id']['table'] = 'field_data_field_organization_cw';
  $handler->display->display_options['relationships']['field_organization_cw_target_id']['field'] = 'field_organization_cw_target_id';
  $handler->display->display_options['relationships']['field_organization_cw_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_organization_cw_target_id';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'critical_writing',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['organization_referenced_on_critical_writing'] = array(
    t('Master'),
    t('Organizations referenced'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_organization_cw'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['organization_referenced_on_critical_writing'] = $view;

  $view = new view();
  $view->name = 'organizations_listed_in_research_collection';
  $view->description = 'Organizations viewed on Research Collection';
  $view->tag = 'Organization, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Organizations listed in Research Collection';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Organizations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_organizations_target_id']['id'] = 'field_organizations_target_id';
  $handler->display->display_options['relationships']['field_organizations_target_id']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['relationships']['field_organizations_target_id']['field'] = 'field_organizations_target_id';
  $handler->display->display_options['relationships']['field_organizations_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_organizations_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_organizations_target_id';
  $handler->display->display_options['fields']['field_location']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'research_collection',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'CSV data export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title - organizations_%timestamp-dd.%timestamp-mm.%timestamp-yyyy-%timestamp-hh.%timestamp-ii.%timestamp-ss.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'data/%/research-collection/organizations';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['organizations_listed_in_research_collection'] = array(
    t('Defaults'),
    t('Organizations'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_organizations'),
    t('Name'),
    t('Location'),
    t('All'),
    t('Entity content'),
    t('Data export'),
  );
  $export['organizations_listed_in_research_collection'] = $view;

  $view = new view();
  $view->name = 'other_editions';
  $view->description = 'A list of other editions of the given work';
  $view->tag = 'Other Edition, Critical Writing';
  $view->base_table = 'node';
  $view->human_name = 'Other editions on critical writing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Other editions';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_edition' => 'field_edition',
    'field_critical_writing_year' => 'field_critical_writing_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_edition' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_other_edition_link_target_id']['id'] = 'field_other_edition_link_target_id';
  $handler->display->display_options['relationships']['field_other_edition_link_target_id']['table'] = 'field_data_field_other_edition_link';
  $handler->display->display_options['relationships']['field_other_edition_link_target_id']['field'] = 'field_other_edition_link_target_id';
  $handler->display->display_options['relationships']['field_other_edition_link_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Edition */
  $handler->display->display_options['fields']['field_edition']['id'] = 'field_edition';
  $handler->display->display_options['fields']['field_edition']['table'] = 'field_data_field_edition';
  $handler->display->display_options['fields']['field_edition']['field'] = 'field_edition';
  $handler->display->display_options['fields']['field_edition']['hide_alter_empty'] = FALSE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_other_edition_link_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'critical_writing',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['other_editions'] = array(
    t('Master'),
    t('Other editions'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_other_edition_link'),
    t('Title'),
    t('Edition'),
    t('Year'),
    t('All'),
    t('Entity content'),
  );
  $export['other_editions'] = $view;

  $view = new view();
  $view->name = 'people_afil_on_organization';
  $view->description = 'People affiliated with this org';
  $view->tag = 'Organization, Person';
  $view->base_table = 'node';
  $view->human_name = 'Affiliated people on organization';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'People affiliated with this organization:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_residency' => 'field_residency',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_residency' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'Add a <a href="/node/add/person" target="_blank">person</a>.';
  $handler->display->display_options['footer']['area']['format'] = '3';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  /* Field: Content: Residency */
  $handler->display->display_options['fields']['field_residency']['id'] = 'field_residency';
  $handler->display->display_options['fields']['field_residency']['table'] = 'field_data_field_residency';
  $handler->display->display_options['fields']['field_residency']['field'] = 'field_residency';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Affiliations - Organizations (field_affiliation) */
  $handler->display->display_options['arguments']['field_affiliation_target_id']['id'] = 'field_affiliation_target_id';
  $handler->display->display_options['arguments']['field_affiliation_target_id']['table'] = 'field_data_field_affiliation';
  $handler->display->display_options['arguments']['field_affiliation_target_id']['field'] = 'field_affiliation_target_id';
  $handler->display->display_options['arguments']['field_affiliation_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_affiliation_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_affiliation_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_affiliation_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_affiliation_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'organization',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['people_afil_on_organization'] = array(
    t('Defaults'),
    t('People affiliated with this organization:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add a <a href="/node/add/person" target="_blank">person</a>.'),
    t('Name'),
    t('Residency'),
    t('All'),
    t('Entity content'),
  );
  $export['people_afil_on_organization'] = $view;

  $view = new view();
  $view->name = 'people_listed_in_research_collection';
  $view->description = 'People viewed on Research Collection';
  $view->tag = 'People, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'People listed in Research Collection';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'People';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_residency' => 'field_residency',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_residency' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_people_target_id']['id'] = 'field_people_target_id';
  $handler->display->display_options['relationships']['field_people_target_id']['table'] = 'field_data_field_people';
  $handler->display->display_options['relationships']['field_people_target_id']['field'] = 'field_people_target_id';
  $handler->display->display_options['relationships']['field_people_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_people_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  /* Field: Content: Residency */
  $handler->display->display_options['fields']['field_residency']['id'] = 'field_residency';
  $handler->display->display_options['fields']['field_residency']['table'] = 'field_data_field_residency';
  $handler->display->display_options['fields']['field_residency']['field'] = 'field_residency';
  $handler->display->display_options['fields']['field_residency']['relationship'] = 'field_people_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'research_collection',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'CSV data export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title - people_%timestamp-dd.%timestamp-mm.%timestamp-yyyy-%timestamp-hh.%timestamp-ii.%timestamp-ss.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'data/%/research-collection/people';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['people_listed_in_research_collection'] = array(
    t('Defaults'),
    t('People'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_people'),
    t('Name'),
    t('Residency'),
    t('All'),
    t('Entity content'),
    t('Data export'),
  );
  $export['people_listed_in_research_collection'] = $view;

  $view = new view();
  $view->name = 'publisher_on_critical_writing';
  $view->description = 'Database referenced viewed on critical writing nodes';
  $view->tag = 'Database, Critical Writing';
  $view->base_table = 'node';
  $view->human_name = 'Publisher referenced on critical writing';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Publishers referenced';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'Add a new <a href="http://elmcip.net/node/add/publisher">publisher</a>.';
  $handler->display->display_options['footer']['area']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_publisher_referenced_target_id']['id'] = 'field_publisher_referenced_target_id';
  $handler->display->display_options['relationships']['field_publisher_referenced_target_id']['table'] = 'field_data_field_publisher_referenced';
  $handler->display->display_options['relationships']['field_publisher_referenced_target_id']['field'] = 'field_publisher_referenced_target_id';
  $handler->display->display_options['relationships']['field_publisher_referenced_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_publisher_referenced_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_publisher_referenced_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'critical_writing',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['publisher_on_critical_writing'] = array(
    t('Defaults'),
    t('Publishers referenced'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add a new <a href="http://elmcip.net/node/add/publisher">publisher</a>.'),
    t('Content entity referenced from field_publisher_referenced'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['publisher_on_critical_writing'] = $view;

  $view = new view();
  $view->name = 'publisher_page';
  $view->description = 'Publisher page view';
  $view->tag = 'Publisher, Page';
  $view->base_table = 'node';
  $view->human_name = 'Publisher page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Publishers and Journals';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all publishers';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'content' => 'content',
    'country' => 'country',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'content';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'content' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'country' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total records';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/publisher" target="_blank">publisher</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'The site contain not any content of this type. Be the first to <a href="node/add/author">add new</a> author content.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publisher' => 'publisher',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'content' => 'content',
    'country' => 'country',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'content';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'content' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'country' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['hide_alter_empty'] = FALSE;
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['path'] = 'publisher';
  $translatables['publisher_page'] = array(
    t('Defaults'),
    t('Publishers and Journals'),
    t('See all publishers'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('@total records'),
    t('Add a new <a href="/node/add/publisher" target="_blank">publisher</a>.'),
    t('The site contain not any content of this type. Be the first to <a href="node/add/author">add new</a> author content.'),
    t('Title'),
    t('Country'),
    t('Updated date'),
    t('Block'),
    t('more'),
    t('Name'),
    t('Updated'),
    t('Page'),
    t('City'),
  );
  $export['publisher_page'] = $view;

  $view = new view();
  $view->name = 'publisher_presented_at_event';
  $view->description = 'Publisher record viewed on event node';
  $view->tag = 'Event, Publisher';
  $view->base_table = 'node';
  $view->human_name = 'Publisher presented at event';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Publisher or Journal presented';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name_nid' => 'field_author_name_nid',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_author_name_nid' => array(
      'separator' => '',
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Critical writing presented';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Presented at Event (field_node_ref_event) */
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['id'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['field'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_ref_event_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Events (field_events) */
  $handler->display->display_options['arguments']['field_events_target_id']['id'] = 'field_events_target_id';
  $handler->display->display_options['arguments']['field_events_target_id']['table'] = 'field_data_field_events';
  $handler->display->display_options['arguments']['field_events_target_id']['field'] = 'field_events_target_id';
  $handler->display->display_options['arguments']['field_events_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_events_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_events_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_events_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publisher' => 'publisher',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'event',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['publisher_presented_at_event'] = array(
    t('Defaults'),
    t('Publisher or Journal presented'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Critical writing presented'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['publisher_presented_at_event'] = $view;

  $view = new view();
  $view->name = 'publisher_referenced_on_critical_writing';
  $view->description = 'events referenced on critical writing nodes';
  $view->tag = 'Event, Critical Writing';
  $view->base_table = 'node';
  $view->human_name = 'Publisher referenced on critical writing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publishers referenced';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_date' => 'field_date',
    'field_location' => 'field_location',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_publisher_referenced_target_id']['id'] = 'field_publisher_referenced_target_id';
  $handler->display->display_options['relationships']['field_publisher_referenced_target_id']['table'] = 'field_data_field_publisher_referenced';
  $handler->display->display_options['relationships']['field_publisher_referenced_target_id']['field'] = 'field_publisher_referenced_target_id';
  $handler->display->display_options['relationships']['field_publisher_referenced_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_publisher_referenced_target_id';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_publisher_referenced_target_id';
  $handler->display->display_options['fields']['field_location']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'critical_writing',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['publisher_referenced_on_critical_writing'] = array(
    t('Master'),
    t('Publishers referenced'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_publisher_referenced'),
    t('Title'),
    t('Location'),
    t('All'),
    t('Entity content'),
  );
  $export['publisher_referenced_on_critical_writing'] = $view;

  $view = new view();
  $view->name = 'publishers_listed_in_research_collection';
  $view->description = 'Organizations viewed on Research Collection';
  $view->tag = 'Organization, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Publishers listed in Research Collection';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Publishers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_publishers_target_id']['id'] = 'field_publishers_target_id';
  $handler->display->display_options['relationships']['field_publishers_target_id']['table'] = 'field_data_field_publishers';
  $handler->display->display_options['relationships']['field_publishers_target_id']['field'] = 'field_publishers_target_id';
  $handler->display->display_options['relationships']['field_publishers_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_publishers_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_publishers_target_id';
  $handler->display->display_options['fields']['field_location']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'research_collection',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'CSV data export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title - publishers_%timestamp-dd.%timestamp-mm.%timestamp-yyyy-%timestamp-hh.%timestamp-ii.%timestamp-ss.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'data/%/research-collection/publishers';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['publishers_listed_in_research_collection'] = array(
    t('Defaults'),
    t('Publishers'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_publishers'),
    t('Name'),
    t('Location'),
    t('All'),
    t('Entity content'),
    t('Data export'),
  );
  $export['publishers_listed_in_research_collection'] = $view;

  $view = new view();
  $view->name = 'records_of_writing_authored_by_t';
  $view->description = 'Displays all records by author linked to user profile';
  $view->tag = 'User Profile';
  $view->base_table = 'node';
  $view->human_name = 'Records of writing authored by this user';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Records of writing authored by this user';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_userid_reference_target_id']['id'] = 'field_userid_reference_target_id';
  $handler->display->display_options['relationships']['field_userid_reference_target_id']['table'] = 'field_data_field_userid_reference';
  $handler->display->display_options['relationships']['field_userid_reference_target_id']['field'] = 'field_userid_reference_target_id';
  $handler->display->display_options['relationships']['field_userid_reference_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_userid_reference_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'records-of-writing-authored-by-this-user';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Knowledge Base records associated with this user';
  $handler->display->display_options['entity_type'] = 'user';
  $handler->display->display_options['bundles'] = array(
    0 => 'user',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['records_of_writing_authored_by_t'] = array(
    t('Master'),
    t('Records of writing authored by this user'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('User entity referenced from field_userid_reference'),
    t('All'),
    t('Page'),
    t('Entity content'),
    t('Knowledge Base records associated with this user'),
  );
  $export['records_of_writing_authored_by_t'] = $view;

  $view = new view();
  $view->name = 'research_collection_critical_writing';
  $view->description = 'Research Collection cw is referenced in shown on cw node';
  $view->tag = 'Critical Writing, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Research Collection Critical Writing';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Research Collection that references this Critical Writing:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Critical writing (field_critical_writing) */
  $handler->display->display_options['arguments']['field_critical_writing_target_id']['id'] = 'field_critical_writing_target_id';
  $handler->display->display_options['arguments']['field_critical_writing_target_id']['table'] = 'field_data_field_critical_writing';
  $handler->display->display_options['arguments']['field_critical_writing_target_id']['field'] = 'field_critical_writing_target_id';
  $handler->display->display_options['arguments']['field_critical_writing_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_critical_writing_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_critical_writing_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_critical_writing_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_critical_writing_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_collection' => 'research_collection',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'critical_writing',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['research_collection_critical_writing'] = array(
    t('Defaults'),
    t('Research Collection that references this Critical Writing:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['research_collection_critical_writing'] = $view;

  $view = new view();
  $view->name = 'research_collection_db_arcive';
  $view->description = 'Research Collection DB is referenced in shown on DB node';
  $view->tag = 'Database, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Research Collection DB/Archive';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Research Collections that reference these Databases and Archives:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Database or Archive reference (field_rc_db_archive) */
  $handler->display->display_options['arguments']['field_rc_db_archive_target_id']['id'] = 'field_rc_db_archive_target_id';
  $handler->display->display_options['arguments']['field_rc_db_archive_target_id']['table'] = 'field_data_field_rc_db_archive';
  $handler->display->display_options['arguments']['field_rc_db_archive_target_id']['field'] = 'field_rc_db_archive_target_id';
  $handler->display->display_options['arguments']['field_rc_db_archive_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_rc_db_archive_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_rc_db_archive_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_rc_db_archive_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_rc_db_archive_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_collection' => 'research_collection',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'databases_and_archives',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['research_collection_db_arcive'] = array(
    t('Defaults'),
    t('Research Collections that reference these Databases and Archives:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['research_collection_db_arcive'] = $view;

  $view = new view();
  $view->name = 'research_collection_organization';
  $view->description = 'Research Collection organisation is referenced in shown on org node';
  $view->tag = 'Organization, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Research Collection Organization';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Research Collections that reference this organization:';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Organizations (field_organizations) */
  $handler->display->display_options['arguments']['field_organizations_target_id']['id'] = 'field_organizations_target_id';
  $handler->display->display_options['arguments']['field_organizations_target_id']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['arguments']['field_organizations_target_id']['field'] = 'field_organizations_target_id';
  $handler->display->display_options['arguments']['field_organizations_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_organizations_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_organizations_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_organizations_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_organizations_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_collection' => 'research_collection',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'organization',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['research_collection_organization'] = array(
    t('Defaults'),
    t('Research Collections that reference this organization:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['research_collection_organization'] = $view;

  $view = new view();
  $view->name = 'research_collection_page';
  $view->description = 'Research Collection page view';
  $view->tag = 'Research Collection, Page';
  $view->base_table = 'node';
  $view->human_name = 'Research Collection page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Research Collections';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all research collections';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_collection_curated_by' => 'field_collection_curated_by',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_collection_curated_by' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total records';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Collection curated by */
  $handler->display->display_options['fields']['field_collection_curated_by']['id'] = 'field_collection_curated_by';
  $handler->display->display_options['fields']['field_collection_curated_by']['table'] = 'field_data_field_collection_curated_by';
  $handler->display->display_options['fields']['field_collection_curated_by']['field'] = 'field_collection_curated_by';
  $handler->display->display_options['fields']['field_collection_curated_by']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_collection_curated_by']['delta_offset'] = '0';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_collection' => 'research_collection',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all research collections';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_collection' => 'research_collection',
  );
  $handler->display->display_options['path'] = 'research_collections';
  $translatables['research_collection_page'] = array(
    t('Defaults'),
    t('Research Collections'),
    t('See all research collections'),
    t('Filter'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('@total records'),
    t('Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.'),
    t('Title'),
    t('Collection curated by'),
    t('Updated'),
    t('Block'),
    t('more'),
    t('Page'),
  );
  $export['research_collection_page'] = $view;

  $view = new view();
  $view->name = 'research_collection_person';
  $view->description = 'Research Collection person is referenced in shown on person node';
  $view->tag = 'Person, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Research Collection Person';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Research Collection that references this person:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: People (field_people) */
  $handler->display->display_options['arguments']['field_people_target_id']['id'] = 'field_people_target_id';
  $handler->display->display_options['arguments']['field_people_target_id']['table'] = 'field_data_field_people';
  $handler->display->display_options['arguments']['field_people_target_id']['field'] = 'field_people_target_id';
  $handler->display->display_options['arguments']['field_people_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_people_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_people_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_people_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_people_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_collection' => 'research_collection',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'person',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['research_collection_person'] = array(
    t('Defaults'),
    t('Research Collection that references this person:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['research_collection_person'] = $view;

  $view = new view();
  $view->name = 'research_collection_publisher';
  $view->description = 'Research Collection publisher is referenced in shown on publisher node';
  $view->tag = 'Publisher, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Research Collection Publisher';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Research collection that references this publisher';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Publishers (field_publishers) */
  $handler->display->display_options['arguments']['field_publishers_target_id']['id'] = 'field_publishers_target_id';
  $handler->display->display_options['arguments']['field_publishers_target_id']['table'] = 'field_data_field_publishers';
  $handler->display->display_options['arguments']['field_publishers_target_id']['field'] = 'field_publishers_target_id';
  $handler->display->display_options['arguments']['field_publishers_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_publishers_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_publishers_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_publishers_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_publishers_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_collection' => 'research_collection',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'publisher',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['research_collection_publisher'] = array(
    t('Defaults'),
    t('Research collection that references this publisher'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['research_collection_publisher'] = $view;

  $view = new view();
  $view->name = 'research_collection_teaching_resource';
  $view->description = 'Research Collection tr is referenced in shown on tr node';
  $view->tag = 'Teaching Resource, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Research Collection Teaching Resource';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Research Collection that references this entry:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Teaching Resources (field_teaching_resources) */
  $handler->display->display_options['arguments']['field_teaching_resources_target_id']['id'] = 'field_teaching_resources_target_id';
  $handler->display->display_options['arguments']['field_teaching_resources_target_id']['table'] = 'field_data_field_teaching_resources';
  $handler->display->display_options['arguments']['field_teaching_resources_target_id']['field'] = 'field_teaching_resources_target_id';
  $handler->display->display_options['arguments']['field_teaching_resources_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_teaching_resources_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_teaching_resources_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_teaching_resources_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_teaching_resources_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_collection' => 'research_collection',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'teaching_resource',
  );
  $handler->display->display_options['show_title'] = 0;
  $translatables['research_collection_teaching_resource'] = array(
    t('Defaults'),
    t('Research Collection that references this entry:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/research-collection" target="_blank">research collection</a>.'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['research_collection_teaching_resource'] = $view;

  $view = new view();
  $view->name = 'resource_collection_curated_by_person';
  $view->description = 'Critical writing edited by person viewed on person node';
  $view->tag = 'Person, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Research Collection curated by person';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Research Collection curated by this researcher:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/research-collection" target="_blank">research collection</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Collection curated by (field_collection_curated_by) */
  $handler->display->display_options['arguments']['field_collection_curated_by_target_id']['id'] = 'field_collection_curated_by_target_id';
  $handler->display->display_options['arguments']['field_collection_curated_by_target_id']['table'] = 'field_data_field_collection_curated_by';
  $handler->display->display_options['arguments']['field_collection_curated_by_target_id']['field'] = 'field_collection_curated_by_target_id';
  $handler->display->display_options['arguments']['field_collection_curated_by_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_collection_curated_by_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_collection_curated_by_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_collection_curated_by_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_collection_curated_by_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_collection' => 'research_collection',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'edited_by_person');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'person',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['resource_collection_curated_by_person'] = array(
    t('Defaults'),
    t('Research Collection curated by this researcher:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add a new <a href="/node/add/research-collection" target="_blank">research collection</a>.'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['resource_collection_curated_by_person'] = $view;

  $view = new view();
  $view->name = 'series_on_publisher';
  $view->description = 'Critical writing series record viewed on publisher nodes';
  $view->tag = 'Publisher, Critical Writing, Series';
  $view->base_table = 'node';
  $view->human_name = 'Series on Publisher';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Series published';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_editor_name' => 'field_editor_name',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_editor_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Work title';
  /* Field: Content: Editor */
  $handler->display->display_options['fields']['field_editor_name']['id'] = 'field_editor_name';
  $handler->display->display_options['fields']['field_editor_name']['table'] = 'field_data_field_editor_name';
  $handler->display->display_options['fields']['field_editor_name']['field'] = 'field_editor_name';
  $handler->display->display_options['fields']['field_editor_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_editor_name']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Publisher (field_node_ref) */
  $handler->display->display_options['arguments']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Publication Type (field_pubtype_tax) */
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['id'] = 'field_pubtype_tax_tid';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['field'] = 'field_pubtype_tax_tid';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['value'] = array(
    0 => '2133',
  );
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['vocabulary'] = 'publication_type';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'publisher',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['series_on_publisher'] = array(
    t('Defaults'),
    t('Series published'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Work title'),
    t('Editor'),
    t('All'),
    t('Entity content'),
  );
  $export['series_on_publisher'] = $view;

  $view = new view();
  $view->name = 'series_reference_critical_writin';
  $view->description = 'List of critical writing in a series on series page';
  $view->tag = 'Critical Writing, Series';
  $view->base_table = 'node';
  $view->human_name = 'Critical writing in this series';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Critical writing published in this series';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_node_ref' => 'field_node_ref',
    'field_critical_writing_year' => 'field_critical_writing_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_node_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Series (field_series_ref) */
  $handler->display->display_options['arguments']['field_series_ref_target_id']['id'] = 'field_series_ref_target_id';
  $handler->display->display_options['arguments']['field_series_ref_target_id']['table'] = 'field_data_field_series_ref';
  $handler->display->display_options['arguments']['field_series_ref_target_id']['field'] = 'field_series_ref_target_id';
  $handler->display->display_options['arguments']['field_series_ref_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_series_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_series_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_series_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_series_ref_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'critical_writing',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['series_reference_critical_writin'] = array(
    t('Defaults'),
    t('Critical writing published in this series'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.'),
    t('Title'),
    t('Author'),
    t('Publisher'),
    t('Year'),
    t('All'),
    t('Entity content'),
  );
  $export['series_reference_critical_writin'] = $view;

  $view = new view();
  $view->name = 'teaching_resource_db_archive';
  $view->description = 'Research Collection DB is referenced in shown on DB node';
  $view->tag = 'Database, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Teaching Resource DB/Archive';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Teaching Resources that reference this Database or Archive';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/teaching-resource" target="_blank">teaching resource</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Database or Archive Referenced (field_database_or_archive_refere) */
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['id'] = 'field_database_or_archive_refere_target_id';
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['table'] = 'field_data_field_database_or_archive_refere';
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['field'] = 'field_database_or_archive_refere_target_id';
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_database_or_archive_refere_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teaching_resource' => 'teaching_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'databases_and_archives',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['teaching_resource_db_archive'] = array(
    t('Defaults'),
    t('Teaching Resources that reference this Database or Archive'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/teaching-resource" target="_blank">teaching resource</a>.'),
    t('Title'),
    t('All'),
    t('Entity content'),
  );
  $export['teaching_resource_db_archive'] = $view;

  $view = new view();
  $view->name = 'teaching_resource_page';
  $view->description = 'Teaching Resource';
  $view->tag = 'Teaching Resource, Page';
  $view->base_table = 'node';
  $view->human_name = 'Teaching Resource page and block';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Teaching Resources';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all teaching resources';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'tid' => 'tid',
    'field_tr_year_value' => 'field_tr_year_value',
    'field_tr_author_nid' => 'field_tr_author_nid',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'tid' => array(
      'separator' => '',
    ),
    'field_tr_year_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_tr_author_nid' => array(
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total records';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/teaching-resource" target="_blank">teaching resource</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_tr_author']['id'] = 'field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['table'] = 'field_data_field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['field'] = 'field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['delta_offset'] = '0';
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Type of Resource';
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_4' => 'vocabulary_4',
    'vocabulary_2' => 0,
    'vocabulary_1' => 0,
  );
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teaching_resource' => 'teaching_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
    'title_2' => 'title_2',
    'changed' => 'changed',
    'created' => 'created',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'title_1' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'title_2' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'teaching_resource';
  $translatables['teaching_resource_page'] = array(
    t('Defaults'),
    t('Teaching Resources'),
    t('See all teaching resources'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('@total records'),
    t('Add a new <a href="/node/add/teaching-resource" target="_blank">teaching resource</a>.'),
    t('Title'),
    t('Author'),
    t('Type of Resource'),
    t('Updated'),
    t('Block'),
    t('more'),
    t('Page'),
  );
  $export['teaching_resource_page'] = $view;

  $view = new view();
  $view->name = 'teaching_resources_listed_in_research_collection';
  $view->description = 'Teaching resource viewed on Research Collection';
  $view->tag = 'Teaching Resource, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Teaching Resources listed in Research Collection';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Teaching Resources';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'taxonomy_vocabulary_4' => 'taxonomy_vocabulary_4',
    'field_tr_author' => 'field_tr_author',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_4' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tr_author' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_teaching_resources_target_id']['id'] = 'field_teaching_resources_target_id';
  $handler->display->display_options['relationships']['field_teaching_resources_target_id']['table'] = 'field_data_field_teaching_resources';
  $handler->display->display_options['relationships']['field_teaching_resources_target_id']['field'] = 'field_teaching_resources_target_id';
  $handler->display->display_options['relationships']['field_teaching_resources_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_teaching_resources_target_id';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['id'] = 'taxonomy_vocabulary_4';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['table'] = 'field_data_taxonomy_vocabulary_4';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['field'] = 'taxonomy_vocabulary_4';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['relationship'] = 'field_teaching_resources_target_id';
  $handler->display->display_options['fields']['taxonomy_vocabulary_4']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_tr_author']['id'] = 'field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['table'] = 'field_data_field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['field'] = 'field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['relationship'] = 'field_teaching_resources_target_id';
  $handler->display->display_options['fields']['field_tr_author']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'research_collection',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'CSV data export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title - teaching_resources_%timestamp-dd.%timestamp-mm.%timestamp-yyyy-%timestamp-hh.%timestamp-ii.%timestamp-ss.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'data/%/research-collection/teaching_resource';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['teaching_resources_listed_in_research_collection'] = array(
    t('Defaults'),
    t('Teaching Resources'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_teaching_resources'),
    t('Title'),
    t('Type'),
    t('Author'),
    t('All'),
    t('Entity content'),
    t('Data export'),
  );
  $export['teaching_resources_listed_in_research_collection'] = $view;

  $view = new view();
  $view->name = 'teaching_ressource_tr';
  $view->description = 'Teaching resource referenced on teaching resources';
  $view->tag = 'Teaching Resource';
  $view->base_table = 'node';
  $view->human_name = 'Teaching resource referenced on TR';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Teaching resource referenced';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_tr_author' => 'field_tr_author',
    'field_tr_year' => 'field_tr_year',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tr_author' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tr_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Teaching Resource referenced';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_tr_tr_target_id']['id'] = 'field_tr_tr_target_id';
  $handler->display->display_options['relationships']['field_tr_tr_target_id']['table'] = 'field_data_field_tr_tr';
  $handler->display->display_options['relationships']['field_tr_tr_target_id']['field'] = 'field_tr_tr_target_id';
  $handler->display->display_options['relationships']['field_tr_tr_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_tr_tr_target_id';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_tr_author']['id'] = 'field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['table'] = 'field_data_field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['field'] = 'field_tr_author';
  $handler->display->display_options['fields']['field_tr_author']['relationship'] = 'field_tr_tr_target_id';
  $handler->display->display_options['fields']['field_tr_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_tr_author']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_tr_year']['id'] = 'field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['table'] = 'field_data_field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['field'] = 'field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['relationship'] = 'field_tr_tr_target_id';
  $handler->display->display_options['fields']['field_tr_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'teaching_resource',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['teaching_ressource_tr'] = array(
    t('Defaults'),
    t('Teaching resource referenced'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Teaching Resource referenced'),
    t('Content entity referenced from field_tr_tr'),
    t('Title'),
    t('Author'),
    t('Year'),
    t('All'),
    t('Entity content'),
  );
  $export['teaching_ressource_tr'] = $view;

  $view = new view();
  $view->name = 'translated_by_person';
  $view->description = 'Critical writing edited by person viewed on person node';
  $view->tag = 'Person, Critical Writing, Translator';
  $view->base_table = 'node';
  $view->human_name = 'Translated by person';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Translations:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_work_year' => 'field_work_year',
    'field_critical_writing_year' => 'field_critical_writing_year',
    'field_node_ref' => 'field_node_ref',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_work_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_critical_writing_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_node_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/work" target="_blank">creative work</a> or <a href="/node/add/critical-writing" target="_blank">critical writing</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Year work */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['ui_name'] = 'Year work';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Year critial writing */
  $handler->display->display_options['fields']['field_critical_writing_year']['id'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['table'] = 'field_data_field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['field'] = 'field_critical_writing_year';
  $handler->display->display_options['fields']['field_critical_writing_year']['ui_name'] = 'Year critial writing';
  $handler->display->display_options['fields']['field_critical_writing_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_critical_writing_year']['alter']['text'] = '[field_work_year][field_critical_writing_year]';
  $handler->display->display_options['fields']['field_critical_writing_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Translator (field_translator) */
  $handler->display->display_options['arguments']['field_translator_target_id']['id'] = 'field_translator_target_id';
  $handler->display->display_options['arguments']['field_translator_target_id']['table'] = 'field_data_field_translator';
  $handler->display->display_options['arguments']['field_translator_target_id']['field'] = 'field_translator_target_id';
  $handler->display->display_options['arguments']['field_translator_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_translator_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_translator_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_translator_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_translator_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'translated_by_person');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'person',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['translated_by_person'] = array(
    t('Defaults'),
    t('Translations:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add new <a href="/node/add/work" target="_blank">creative work</a> or <a href="/node/add/critical-writing" target="_blank">critical writing</a>.'),
    t('Title'),
    t('Author'),
    t('Year'),
    t('[field_work_year][field_critical_writing_year]'),
    t('Publisher'),
    t('All'),
    t('Entity content'),
  );
  $export['translated_by_person'] = $view;

  $view = new view();
  $view->name = 'video_page';
  $view->description = 'Page showing all records with video';
  $view->tag = 'video';
  $view->base_table = 'node';
  $view->human_name = 'Video page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Browse Multimedia';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all critical writing';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
    'field_media_asset' => 'field_media_asset',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_media_asset' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Description';
  $handler->display->display_options['header']['area']['content'] = 'Browse the latest video / multimedia content, including vimeo and youtube videos and flickr sets, that has been added to the Knowledge Base.';
  $handler->display->display_options['header']['area']['format'] = 'basic_text_editor';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'dmy';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Field: Content: Multimedia */
  $handler->display->display_options['fields']['field_media_asset']['id'] = 'field_media_asset';
  $handler->display->display_options['fields']['field_media_asset']['table'] = 'field_data_field_media_asset';
  $handler->display->display_options['fields']['field_media_asset']['field'] = 'field_media_asset';
  $handler->display->display_options['fields']['field_media_asset']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_media_asset']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_asset']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_media_asset']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_asset']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Multimedia (field_media_asset:fid) */
  $handler->display->display_options['filters']['field_media_asset_fid']['id'] = 'field_media_asset_fid';
  $handler->display->display_options['filters']['field_media_asset_fid']['table'] = 'field_data_field_media_asset';
  $handler->display->display_options['filters']['field_media_asset_fid']['field'] = 'field_media_asset_fid';
  $handler->display->display_options['filters']['field_media_asset_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_media_asset_fid']['group'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
    'field_media_asset' => 'field_media_asset',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_media_asset' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
    'field_media_asset' => 'field_media_asset',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_media_asset' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'video_index';
  $translatables['video_page'] = array(
    t('Defaults'),
    t('Browse Multimedia'),
    t('See all critical writing'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Description'),
    t('Browse the latest video / multimedia content, including vimeo and youtube videos and flickr sets, that has been added to the Knowledge Base.'),
    t('Title'),
    t('Post date'),
    t('Multimedia'),
    t('Block'),
    t('more'),
    t('Page'),
  );
  $export['video_page'] = $view;

  $view = new view();
  $view->name = 'view_taxonomy_terms_by_name_and_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'View taxonomy terms by name and TID';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View taxonomy terms by name and TID';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['group'] = '0';
  $handler->display->display_options['filters']['vid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['vid']['expose']['operator_id'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['label'] = 'Vocabulary';
  $handler->display->display_options['filters']['vid']['expose']['operator'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['identifier'] = 'vid';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tax-tid';
  $translatables['view_taxonomy_terms_by_name_and_'] = array(
    t('Master'),
    t('View taxonomy terms by name and TID'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Term ID'),
    t('.'),
    t('Vocabulary'),
    t('Page'),
  );
  $export['view_taxonomy_terms_by_name_and_'] = $view;

  $view = new view();
  $view->name = 'views_recent_posts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'views_recent_posts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'NEWS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All news';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Content: Tags (field_news_tags) */
  $handler->display->display_options['relationships']['field_news_tags_tid']['id'] = 'field_news_tags_tid';
  $handler->display->display_options['relationships']['field_news_tags_tid']['table'] = 'field_data_field_news_tags';
  $handler->display->display_options['relationships']['field_news_tags_tid']['field'] = 'field_news_tags_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'News - %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story' => 'story',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'news';

  /* Display: News block */
  $handler = $view->new_display('block', 'News block', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_caching'] = '8';
  $translatables['views_recent_posts'] = array(
    t('Master'),
    t('NEWS'),
    t('All news'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('term from field_news_tags'),
    t('All'),
    t('News - %1'),
    t('Page'),
    t('more'),
    t('News block'),
  );
  $export['views_recent_posts'] = $view;

  $view = new view();
  $view->name = 'work_data_export';
  $view->description = 'Work';
  $view->tag = 'data export, Work';
  $view->base_table = 'node';
  $view->human_name = 'Data export all works';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Creative Works';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all creative works';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_contributor' => 'field_contributor',
    'field_venue_tax' => 'field_venue_tax',
    'field_node_ref' => 'field_node_ref',
    'field_language_tax' => 'field_language_tax',
    'field_work_year' => 'field_work_year',
    'field_url' => 'field_url',
    'term_node_tid' => 'term_node_tid',
    'created' => 'created',
    'timestamp' => 'timestamp',
    'field_record_status_tax' => 'field_record_status_tax',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contributor' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_venue_tax' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_node_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_language_tax' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_work_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_record_status_tax' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/work">creative work</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'The site contain not any content of this type. Be the first to <a href="/node/add/work">add new</a> work content.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_author_name_target_id']['id'] = 'field_author_name_target_id';
  $handler->display->display_options['relationships']['field_author_name_target_id']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['relationships']['field_author_name_target_id']['field'] = 'field_author_name_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ELMCIP Node ID';
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Contributor */
  $handler->display->display_options['fields']['field_contributor']['id'] = 'field_contributor';
  $handler->display->display_options['fields']['field_contributor']['table'] = 'field_data_field_contributor';
  $handler->display->display_options['fields']['field_contributor']['field'] = 'field_contributor';
  $handler->display->display_options['fields']['field_contributor']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_contributor']['delta_offset'] = '0';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_venue_tax']['id'] = 'field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['table'] = 'field_data_field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['field'] = 'field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['label'] = 'Publication Venue';
  $handler->display->display_options['fields']['field_venue_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_venue_tax']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_venue_tax']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax']['id'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_language_tax']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_language_tax']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_url']['group_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['delta_offset'] = '0';
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Tags';
  $handler->display->display_options['fields']['term_node_tid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_1' => 'vocabulary_1',
    'vocabulary_2' => 0,
    'language' => 0,
    'publication_type' => 0,
    'publication_venue' => 0,
    'record_status' => 0,
    'vocabulary_4' => 0,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  /* Field: Content: Record Status */
  $handler->display->display_options['fields']['field_record_status_tax']['id'] = 'field_record_status_tax';
  $handler->display->display_options['fields']['field_record_status_tax']['table'] = 'field_data_field_record_status_tax';
  $handler->display->display_options['fields']['field_record_status_tax']['field'] = 'field_record_status_tax';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'work-data-export';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $translatables['work_data_export'] = array(
    t('Defaults'),
    t('Creative Works'),
    t('See all creative works'),
    t('Filter'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Add a new <a href="/node/add/work">creative work</a>.'),
    t('The site contain not any content of this type. Be the first to <a href="/node/add/work">add new</a> work content.'),
    t('Content entity referenced from field_author_name'),
    t('ELMCIP Node ID'),
    t('Title'),
    t('Author'),
    t('Contributor'),
    t('Publication Venue'),
    t('Publisher'),
    t('Language'),
    t('Year'),
    t('URL'),
    t('Tags'),
    t('Post date'),
    t('Updated date'),
    t('Record Status'),
    t('Data export'),
    t('more'),
  );
  $export['work_data_export'] = $view;

  $view = new view();
  $view->name = 'work_nid_data';
  $view->description = 'View and data export that includes work, work id, author, author id, tag, tag id, year';
  $view->tag = 'work, data export';
  $view->base_table = 'node';
  $view->human_name = 'work_NID_data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'work_NID_data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['id'] = 'taxonomy_vocabulary_1_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['label'] = 'Tag ID';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['text'] = '2000[taxonomy_vocabulary_1_1-tid]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax']['id'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['delta_offset'] = '0';
  /* Field: Content: Platform/Software */
  $handler->display->display_options['fields']['field_work_platform_software']['id'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['table'] = 'field_data_field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['field'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_work_platform_software']['delta_offset'] = '0';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'work-nid-page';

  /* Display: Data export Minimal */
  $handler = $view->new_display('views_data_export', 'Data export Minimal', 'views_data_export_1');
  $handler->display->display_options['display_description'] = 'Title NID, Year, Author ID';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'work-nid-year-authorid-data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Data export Extensive */
  $handler = $view->new_display('views_data_export', 'Data export Extensive', 'views_data_export_2');
  $handler->display->display_options['display_description'] = 'Title NID, Year, Author, Author ID, Tags, Tag ID, Year, Year ID';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'work_nid_auth_tags';
  $handler->display->display_options['use_batch'] = 'batch';
  $translatables['work_nid_data'] = array(
    t('Master'),
    t('work_NID_data'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Name'),
    t('Nid'),
    t('Author'),
    t('Author ID'),
    t('Tags'),
    t('Tag ID'),
    t('2000[taxonomy_vocabulary_1_1-tid]'),
    t('Year'),
    t('Language'),
    t('Platform/Software'),
    t('Page'),
    t('Data export Minimal'),
    t('Title NID, Year, Author ID'),
    t('Data export Extensive'),
    t('Title NID, Year, Author, Author ID, Tags, Tag ID, Year, Year ID'),
  );
  $export['work_nid_data'] = $view;

  $view = new view();
  $view->name = 'work_nid_event';
  $view->description = 'Creative works presented at events, including work id, work title, event id, event name. Page and data export.';
  $view->tag = 'work, data export';
  $view->base_table = 'node';
  $view->human_name = 'work_NID_event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'work_NID_event_data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Work ID';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['label'] = 'Event ID';
  $handler->display->display_options['fields']['field_node_ref_event']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_event']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event_1']['id'] = 'field_node_ref_event_1';
  $handler->display->display_options['fields']['field_node_ref_event_1']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event_1']['delta_offset'] = '0';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
  );
  /* Filter criterion: Content: Presented at Event (field_node_ref_event) */
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['id'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['field'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'work-nid-event-page';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'work-nid-event-data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['work_nid_event'] = array(
    t('Master'),
    t('work_NID_event_data'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Work ID'),
    t('Title'),
    t('Event ID'),
    t('Presented at Event'),
    t('Page'),
    t('Data export'),
  );
  $export['work_nid_event'] = $view;

  $view = new view();
  $view->name = 'work_organization';
  $view->description = 'Creative works viewed on organization nodes';
  $view->tag = 'Work, Organization';
  $view->base_table = 'node';
  $view->human_name = 'Creative works published by organization';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Creative works published:';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_work_year' => 'field_work_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_work_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Creative Work';
  $handler->display->display_options['footer']['area']['content'] = 'Add new <a href="/node/add/work" target="_blank">creative work</a>.';
  $handler->display->display_options['footer']['area']['format'] = '3';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Work title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Publisher (field_node_ref) */
  $handler->display->display_options['arguments']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'organization',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['work_organization'] = array(
    t('Defaults'),
    t('Creative works published:'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Creative Work'),
    t('Add new <a href="/node/add/work" target="_blank">creative work</a>.'),
    t('Work title'),
    t('Author'),
    t('Year'),
    t('All'),
    t('Entity content'),
  );
  $export['work_organization'] = $view;

  $view = new view();
  $view->name = 'work_page';
  $view->description = 'Works page view';
  $view->tag = 'Work, Page, data export';
  $view->base_table = 'node';
  $view->human_name = 'Work Page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Creative Works';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all creative works';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_work_year' => 'field_work_year',
    'changed' => 'changed',
    'term_node_tid' => 'term_node_tid',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_work_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total records';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/work">creative work</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'The site contain not any content of this type. Be the first to <a href="/node/add/work">add new</a> work content.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_work_platform_software_target_id']['id'] = 'field_work_platform_software_target_id';
  $handler->display->display_options['relationships']['field_work_platform_software_target_id']['table'] = 'field_data_field_work_platform_software';
  $handler->display->display_options['relationships']['field_work_platform_software_target_id']['field'] = 'field_work_platform_software_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['label'] = 'Content entity referenced from Publisher';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_author_name_target_id']['id'] = 'field_author_name_target_id';
  $handler->display->display_options['relationships']['field_author_name_target_id']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['relationships']['field_author_name_target_id']['field'] = 'field_author_name_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_node_ref_event_target_id']['id'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['relationships']['field_node_ref_event_target_id']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['relationships']['field_node_ref_event_target_id']['field'] = 'field_node_ref_event_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Sort criterion: Content: Platform/Software (field_work_platform_software) */
  $handler->display->display_options['sorts']['field_work_platform_software_target_id']['id'] = 'field_work_platform_software_target_id';
  $handler->display->display_options['sorts']['field_work_platform_software_target_id']['table'] = 'field_data_field_work_platform_software';
  $handler->display->display_options['sorts']['field_work_platform_software_target_id']['field'] = 'field_work_platform_software_target_id';
  $handler->display->display_options['sorts']['field_work_platform_software_target_id']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_work_platform_software_target_id']['expose']['label'] = 'Platform/Software (field_work_platform_software)';
  /* Sort criterion: Content: Platform/Software (field_work_platform_software) */
  $handler->display->display_options['sorts']['field_work_platform_software_target_id_1']['id'] = 'field_work_platform_software_target_id_1';
  $handler->display->display_options['sorts']['field_work_platform_software_target_id_1']['table'] = 'field_data_field_work_platform_software';
  $handler->display->display_options['sorts']['field_work_platform_software_target_id_1']['field'] = 'field_work_platform_software_target_id';
  $handler->display->display_options['sorts']['field_work_platform_software_target_id_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_work_platform_software_target_id_1']['expose']['label'] = 'Platform/Software (field_work_platform_software)';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['relationship'] = 'field_author_name_target_id';
  $handler->display->display_options['filters']['title_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_2']['group'] = 1;
  $handler->display->display_options['filters']['title_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_2']['expose']['operator_id'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['title_2']['expose']['operator'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['identifier'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_3']['id'] = 'title_3';
  $handler->display->display_options['filters']['title_3']['table'] = 'node';
  $handler->display->display_options['filters']['title_3']['field'] = 'title';
  $handler->display->display_options['filters']['title_3']['operator'] = 'word';
  $handler->display->display_options['filters']['title_3']['group'] = 1;
  $handler->display->display_options['filters']['title_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_3']['expose']['operator_id'] = 'title_3_op';
  $handler->display->display_options['filters']['title_3']['expose']['label'] = 'Words in Title';
  $handler->display->display_options['filters']['title_3']['expose']['operator'] = 'title_3_op';
  $handler->display->display_options['filters']['title_3']['expose']['identifier'] = 'title_3';
  $handler->display->display_options['filters']['title_3']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Language (field_language_tax) */
  $handler->display->display_options['filters']['field_language_tax_tid']['id'] = 'field_language_tax_tid';
  $handler->display->display_options['filters']['field_language_tax_tid']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['filters']['field_language_tax_tid']['field'] = 'field_language_tax_tid';
  $handler->display->display_options['filters']['field_language_tax_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_language_tax_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['operator_id'] = 'field_language_tax_tid_op';
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['operator'] = 'field_language_tax_tid_op';
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['identifier'] = 'field_language_tax_tid';
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_language_tax_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_language_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_language_tax_tid']['vocabulary'] = 'language';
  $handler->display->display_options['filters']['field_language_tax_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Year (field_work_year) */
  $handler->display->display_options['filters']['field_work_year_value']['id'] = 'field_work_year_value';
  $handler->display->display_options['filters']['field_work_year_value']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['filters']['field_work_year_value']['field'] = 'field_work_year_value';
  $handler->display->display_options['filters']['field_work_year_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_work_year_value']['group'] = 1;
  $handler->display->display_options['filters']['field_work_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_work_year_value']['expose']['operator_id'] = 'field_work_year_value_op';
  $handler->display->display_options['filters']['field_work_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_work_year_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_work_year_value']['expose']['operator_label'] = 'Date criteria';
  $handler->display->display_options['filters']['field_work_year_value']['expose']['operator'] = 'field_work_year_value_op';
  $handler->display->display_options['filters']['field_work_year_value']['expose']['identifier'] = 'field_work_year_value';
  $handler->display->display_options['filters']['field_work_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_work_year_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_work_year_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_work_year_value']['year_range'] = '1900:+3';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_node_ref_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Publisher';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Publication Type (field_venue_tax) */
  $handler->display->display_options['filters']['field_venue_tax_tid']['id'] = 'field_venue_tax_tid';
  $handler->display->display_options['filters']['field_venue_tax_tid']['table'] = 'field_data_field_venue_tax';
  $handler->display->display_options['filters']['field_venue_tax_tid']['field'] = 'field_venue_tax_tid';
  $handler->display->display_options['filters']['field_venue_tax_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_venue_tax_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_venue_tax_tid']['expose']['operator_id'] = 'field_venue_tax_tid_op';
  $handler->display->display_options['filters']['field_venue_tax_tid']['expose']['label'] = 'Publication Type';
  $handler->display->display_options['filters']['field_venue_tax_tid']['expose']['operator'] = 'field_venue_tax_tid_op';
  $handler->display->display_options['filters']['field_venue_tax_tid']['expose']['identifier'] = 'field_venue_tax_tid';
  $handler->display->display_options['filters']['field_venue_tax_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_venue_tax_tid']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_venue_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_venue_tax_tid']['vocabulary'] = 'publication_venue';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_4']['id'] = 'title_4';
  $handler->display->display_options['filters']['title_4']['table'] = 'node';
  $handler->display->display_options['filters']['title_4']['field'] = 'title';
  $handler->display->display_options['filters']['title_4']['relationship'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['filters']['title_4']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_4']['group'] = 1;
  $handler->display->display_options['filters']['title_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_4']['expose']['operator_id'] = 'title_4_op';
  $handler->display->display_options['filters']['title_4']['expose']['label'] = 'Event at which work was presented';
  $handler->display->display_options['filters']['title_4']['expose']['operator'] = 'title_4_op';
  $handler->display->display_options['filters']['title_4']['expose']['identifier'] = 'title_4';
  $handler->display->display_options['filters']['title_4']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_work_platform_software_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Platform/Software';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Tags (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['value'] = '';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['identifier'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['vocabulary'] = 'vocabulary_1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_work_year' => 'field_work_year',
    'changed' => 'changed',
    'term_node_tid' => 'term_node_tid',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_work_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all creative works';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_work_year' => 'field_work_year',
    'changed' => 'changed',
    'term_node_tid' => 'term_node_tid',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_work_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'work';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ELMCIP: Creative Works Recently Added to the Knowledge Base';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'ELMCIP Creative Works Feed';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'teaser';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'feeds/%/rss.xml';
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'page_1' => 'page_1',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'creative_work_%timestamp-dd.%timestamp-mm.%timestamp-yyyy-%timestamp-hh.%timestamp-ii.%timestamp-ss.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Platform/Software */
  $handler->display->display_options['fields']['field_work_platform_software']['id'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['table'] = 'field_data_field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['field'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_work_platform_software']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_work_platform_software']['delta_offset'] = '0';
  /* Field: Content: Platform/Software */
  $handler->display->display_options['fields']['field_work_platform_software_1']['id'] = 'field_work_platform_software_1';
  $handler->display->display_options['fields']['field_work_platform_software_1']['table'] = 'field_data_field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software_1']['field'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software_1']['label'] = 'Platform ID';
  $handler->display->display_options['fields']['field_work_platform_software_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_work_platform_software_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_work_platform_software_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_work_platform_software_1']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref_1']['id'] = 'field_node_ref_1';
  $handler->display->display_options['fields']['field_node_ref_1']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_1']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_1']['label'] = 'Publisher ID';
  $handler->display->display_options['fields']['field_node_ref_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_1']['delta_offset'] = '0';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax']['id'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_language_tax']['delta_offset'] = '0';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax_1']['id'] = 'field_language_tax_1';
  $handler->display->display_options['fields']['field_language_tax_1']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax_1']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax_1']['label'] = 'Language ID';
  $handler->display->display_options['fields']['field_language_tax_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_language_tax_1']['alter']['text'] = '2000[field_language_tax_1-tid]';
  $handler->display->display_options['fields']['field_language_tax_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_language_tax_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_language_tax_1']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event_1']['id'] = 'field_node_ref_event_1';
  $handler->display->display_options['fields']['field_node_ref_event_1']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['label'] = 'Event ID';
  $handler->display->display_options['fields']['field_node_ref_event_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_event_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event_1']['delta_offset'] = '0';
  /* Field: Tags name */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['id'] = 'taxonomy_vocabulary_1_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['ui_name'] = 'Tags name';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = 'Tags ID';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'elmcip_setup_term_name_with_tid';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'work/%/export';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '50';

  /* Display: Data export--Extended */
  $handler = $view->new_display('views_data_export', 'Data export--Extended', 'views_data_export_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'creative_work_%timestamp-dd.%timestamp-mm.%timestamp-yyyy-%timestamp-hh.%timestamp-ii.%timestamp-ss.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Platform/Software */
  $handler->display->display_options['fields']['field_work_platform_software']['id'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['table'] = 'field_data_field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['field'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_work_platform_software']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_work_platform_software']['delta_offset'] = '0';
  /* Field: Content: Platform/Software */
  $handler->display->display_options['fields']['field_work_platform_software_1']['id'] = 'field_work_platform_software_1';
  $handler->display->display_options['fields']['field_work_platform_software_1']['table'] = 'field_data_field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software_1']['field'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software_1']['label'] = 'Platform ID';
  $handler->display->display_options['fields']['field_work_platform_software_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_work_platform_software_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_work_platform_software_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_work_platform_software_1']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref_1']['id'] = 'field_node_ref_1';
  $handler->display->display_options['fields']['field_node_ref_1']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_1']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_1']['label'] = 'Publisher ID';
  $handler->display->display_options['fields']['field_node_ref_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_1']['delta_offset'] = '0';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax']['id'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_language_tax']['delta_offset'] = '0';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax_1']['id'] = 'field_language_tax_1';
  $handler->display->display_options['fields']['field_language_tax_1']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax_1']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax_1']['label'] = 'Language ID';
  $handler->display->display_options['fields']['field_language_tax_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_language_tax_1']['alter']['text'] = '2000[field_language_tax_1-tid]';
  $handler->display->display_options['fields']['field_language_tax_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_language_tax_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_language_tax_1']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event_1']['id'] = 'field_node_ref_event_1';
  $handler->display->display_options['fields']['field_node_ref_event_1']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['label'] = 'Event ID';
  $handler->display->display_options['fields']['field_node_ref_event_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_event_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = 'Tag';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['id'] = 'taxonomy_vocabulary_1_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['label'] = 'Tag ID';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['text'] = '2000[taxonomy_vocabulary_1_1-tid]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'work/%/export2';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '50';
  $translatables['work_page'] = array(
    t('Defaults'),
    t('Creative Works'),
    t('See all creative works'),
    t('Filter'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('@total records'),
    t('Add a new <a href="/node/add/work">creative work</a>.'),
    t('The site contain not any content of this type. Be the first to <a href="/node/add/work">add new</a> work content.'),
    t('Content entity referenced from field_work_platform_software'),
    t('Content entity referenced from Publisher'),
    t('Content entity referenced from field_author_name'),
    t('Content entity referenced from field_node_ref_event'),
    t('Title'),
    t('Author'),
    t('Year'),
    t('Updated'),
    t('Tags'),
    t('Platform/Software (field_work_platform_software)'),
    t('Words in Title'),
    t('Language'),
    t('Date criteria'),
    t('Publisher'),
    t('Publication Type'),
    t('Event at which work was presented'),
    t('Platform/Software'),
    t('Block'),
    t('more'),
    t('Page'),
    t('Feed'),
    t('ELMCIP: Creative Works Recently Added to the Knowledge Base'),
    t('Data export'),
    t('Nid'),
    t('Author ID'),
    t('Platform ID'),
    t('Publisher ID'),
    t('Language ID'),
    t('2000[field_language_tax_1-tid]'),
    t('Presented at Event'),
    t('Event ID'),
    t('Tags ID'),
    t('Data export--Extended'),
    t('Tag'),
    t('Tag ID'),
    t('2000[taxonomy_vocabulary_1_1-tid]'),
  );
  $export['work_page'] = $view;

  $view = new view();
  $view->name = 'workauthor_nid_event';
  $view->description = '';
  $view->tag = 'work, data export';
  $view->base_table = 'node';
  $view->human_name = 'workauthor_NID_event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'workauthor_NID_event_data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['label'] = 'Event NID';
  $handler->display->display_options['fields']['field_node_ref_event']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_event']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = 'Author NID';
  $handler->display->display_options['fields']['field_author_name']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
  );
  /* Filter criterion: Content: Presented at Event (field_node_ref_event) */
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['id'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['field'] = 'field_node_ref_event_target_id';
  $handler->display->display_options['filters']['field_node_ref_event_target_id']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'workauthor-nid-event-page';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['label'] = 'Event NID';
  $handler->display->display_options['fields']['field_node_ref_event']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_event']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'workauthor_event_data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['workauthor_nid_event'] = array(
    t('Master'),
    t('workauthor_NID_event_data'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Event NID'),
    t('Author NID'),
    t('Title'),
    t('Page'),
    t('Data export'),
    t('Author ID'),
  );
  $export['workauthor_nid_event'] = $view;

  $view = new view();
  $view->name = 'works_listed_on_research_collection';
  $view->description = 'Works viewed on Research Collection';
  $view->tag = 'Work, Research Collection';
  $view->base_table = 'node';
  $view->human_name = 'Works listed in Research Collection';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Creative works';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_work_year' => 'field_work_year',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_work_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_creative_works_target_id']['id'] = 'field_creative_works_target_id';
  $handler->display->display_options['relationships']['field_creative_works_target_id']['table'] = 'field_data_field_creative_works';
  $handler->display->display_options['relationships']['field_creative_works_target_id']['field'] = 'field_creative_works_target_id';
  $handler->display->display_options['relationships']['field_creative_works_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_creative_works_target_id';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_creative_works_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'research_collection',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'CSV data export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title - creative_work_%timestamp-dd.%timestamp-mm.%timestamp-yyyy-%timestamp-hh.%timestamp-ii.%timestamp-ss.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_creative_works_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_creative_works_target_id';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_2']['id'] = 'field_author_name_2';
  $handler->display->display_options['fields']['field_author_name_2']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_2']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_2']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['field_author_name_2']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name_2']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_2']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_2']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Platform/Software */
  $handler->display->display_options['fields']['field_work_platform_software']['id'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['table'] = 'field_data_field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['field'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['field_work_platform_software']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_work_platform_software']['delta_offset'] = '0';
  /* Field: Content: Platform/Software */
  $handler->display->display_options['fields']['field_work_platform_software_1']['id'] = 'field_work_platform_software_1';
  $handler->display->display_options['fields']['field_work_platform_software_1']['table'] = 'field_data_field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software_1']['field'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software_1']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['field_work_platform_software_1']['label'] = 'Platform/Software ID';
  $handler->display->display_options['fields']['field_work_platform_software_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_work_platform_software_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_work_platform_software_1']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref_1']['id'] = 'field_node_ref_1';
  $handler->display->display_options['fields']['field_node_ref_1']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_1']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_1']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['field_node_ref_1']['label'] = 'Publisher ID';
  $handler->display->display_options['fields']['field_node_ref_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_1']['delta_offset'] = '0';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax']['id'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['field_language_tax']['delta_offset'] = '0';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax_1']['id'] = 'field_language_tax_1';
  $handler->display->display_options['fields']['field_language_tax_1']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax_1']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax_1']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['field_language_tax_1']['label'] = 'Language ID';
  $handler->display->display_options['fields']['field_language_tax_1']['type'] = 'elmcip_setup_term_name_with_tid';
  $handler->display->display_options['fields']['field_language_tax_1']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['field_node_ref_event']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event_1']['id'] = 'field_node_ref_event_1';
  $handler->display->display_options['fields']['field_node_ref_event_1']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['field_node_ref_event_1']['label'] = 'Event ID';
  $handler->display->display_options['fields']['field_node_ref_event_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_event_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_event_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['id'] = 'taxonomy_vocabulary_1_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['relationship'] = 'field_creative_works_target_id';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['label'] = 'Tags ID';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['type'] = 'elmcip_setup_term_name_with_tid';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'data/%/research-collection/creative_work';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['works_listed_on_research_collection'] = array(
    t('Defaults'),
    t('Creative works'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_creative_works'),
    t('Title'),
    t('Author'),
    t('Year'),
    t('All'),
    t('Entity content'),
    t('Data export'),
    t('Nid'),
    t('Author ID'),
    t('Platform/Software'),
    t('Platform/Software ID'),
    t('Publisher'),
    t('Publisher ID'),
    t('Language'),
    t('Language ID'),
    t('Presented at Event'),
    t('Event ID'),
    t('Tags'),
    t('Tags ID'),
  );
  $export['works_listed_on_research_collection'] = $view;

  $view = new view();
  $view->name = 'works_multiple_refs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'works_multiple_refs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'works_multiple_refs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_node_ref_work_node']['id'] = 'reverse_field_node_ref_work_node';
  $handler->display->display_options['relationships']['reverse_field_node_ref_work_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_node_ref_work_node']['field'] = 'reverse_field_node_ref_work_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_node_ref_work_node';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Crit Writing Nid';
  /* Field: Content: Creative Works referenced */
  $handler->display->display_options['fields']['field_node_ref_work']['id'] = 'field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work']['table'] = 'field_data_field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work']['field'] = 'field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work']['relationship'] = 'reverse_field_node_ref_work_node';
  $handler->display->display_options['fields']['field_node_ref_work']['label'] = 'Other Creative Works referenced';
  $handler->display->display_options['fields']['field_node_ref_work']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_node_ref_work']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_node_ref_work_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'works-multiple-refs';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['path'] = 'works_referred_to_data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['works_multiple_refs'] = array(
    t('Master'),
    t('works_multiple_refs'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content referencing Content from field_node_ref_work'),
    t('Nid'),
    t('Crit Writing Nid'),
    t('Other Creative Works referenced'),
    t('All'),
    t('Page'),
    t('Data export'),
  );
  $export['works_multiple_refs'] = $view;

  return $export;
}
