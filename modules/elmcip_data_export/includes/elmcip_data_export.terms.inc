<?php declare(strict_types=1);

/**
 * Implements hook_views_pre_view().
 *
 * Checks if taxonomy term description is missing. If user is allowed to
 * alter/add the description add a edit link to views header section.
 *
 * @param $view
 * @param $display_id
 * @param $args
 */
function elmcip_data_export_views_pre_view($view, &$display_id, &$args) {
  if ($view->name === 'elmcip_taxonomy_term' || $view->name === 'all_tags_by_frequency') {
    if ($display_id === 'page' || $display_id === 'page_1') {
      $tid = arg(2);
      $class = 'term_missing';
      if (!$tid) {
        return;
      }

      //$view->set_display('page_1');

      $terms = entity_load('taxonomy_term', [$tid]);

      if ($terms[$tid]->description) {
        $class = 'term_present';
      }

      $content = elmcip_data_export_elmcip_term_description($terms[$tid]);

      // Add description and reorder description if more then one element.
      if ($content) {
        $header_options = [
          'label' => t('Taxonomy term description'),
          'content' => '<span class="' . $class . '">' . $content . '</span>',
          'format' => '2',
          'empty' => TRUE,
        ];
        $view->add_item($view->current_display, 'header', 'views', 'area', $header_options);

        $header = $view->display_handler->get_option('header');
        if (count($header) > 1) {
          $taxonomy = array_slice($header, -1, 1);
          $header = array_merge($taxonomy, $header);
          $view->display_handler->set_option('header', $header);
        }
      }
    }
  }
}

/**
 * Create taxonomy term description missing if term do not have one.
 *
 * @param \stdClass $term
 *
 * @return string
 *  Return taxonomy term description.
 */
function elmcip_data_export_elmcip_term_description(stdClass $term): string {
  if (taxonomy_term_edit_access($term)) {
    $edit_link = url('taxonomy/term/' . $term->tid . '/edit', array('query' => array('destination' => current_path())));

    if ($term->description) {
      return t('@description <a href="@url">Edit term</a>', array(
        '@description' => $term->description,
        '@url' => $edit_link
      ));
    }

    if (!$term->description) {
      return t('Taxonomy term description is missing. <a href="@url">Please add one</a>', array('@url' => $edit_link));
    }
  }

  return t('@description', array('@description' => $term->description));
}

/**
 * Implement hook_views_pre_build().
 *
 * Remove person field if we already lists persons and rename title to name.
 *
 * @param $view
 */
function elmcip_data_export_views_pre_build(&$view) {
  if ($view->name === 'elmcip_taxonomy_term' && $view->current_display === 'page') {

    $terms = entity_load('taxonomy_term', [arg(2)]);
    foreach ($terms as $term) {
      if ($term->vocabulary_machine_name === 'gender') {
        unset($view->field['nothing']);
        $view->field['title']->options['label'] = t('Name');
      }
    }
  }
}
