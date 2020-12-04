<?php declare(strict_types=1);

/**
 * Implements hook_views_pre_view().
 *
 * Checks if taxonomy term is missing and user is allowed to alter/add term
 * description. If so it add a edit link to term.
 *
 * @param $view
 * @param $display_id
 * @param $args
 */
function elmcip_data_export_views_pre_view($view, &$display_id, &$args) {
  if ($view->name === 'elmcip_taxonomy_term' || $view->name === 'all_tags_by_frequency') {
    if ($display_id === 'page' || $display_id === 'page_1') {
      $content = '';
      $view->set_display('page_1');

      $tid = arg(2);
      if (!$tid) {
        return;
      }

      $terms = entity_load('taxonomy_term', array(arg(2)));
      $term = $terms[$tid];
      if ($term->description) {
        $class = 'term_present';
      }
      else {
        $class = 'term_missing';
      }

      // Section that run if user can add or edit existing term.
      if (taxonomy_term_edit_access($term)) {
        $edit_link = url('taxonomy/term/' . $term->tid . '/edit', array('query' => array('destination' => current_path())));
        if ($term->description) {
          $content = t('@description <a href="@url">Edit term</a>', array(
            '@description' => $term->description,
            '@url' => $edit_link
          ));
        }
        else {
          $content = t('Taxonomy term description is missing. <a href="@url">Please add one</a>', array('@url' => $edit_link));
        }
      }
      else {
        if ($term->description) {
          $content = t('@description', array('@description' => $term->description));
        }
      }

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
 * Implement hook_views_pre_build().
 *
 * Remove person field if we already lists persons and rename title to name.
 *
 * @param $view
 */
function elmcip_data_export_views_pre_build(&$view) {
  if ($view->name === 'elmcip_taxonomy_term' && $view->current_display === 'page') {
    $terms = entity_load('taxonomy_term', array(arg(2)));

    foreach ($terms as $term) {
      if ($term->vocabulary_machine_name === 'gender') {
        unset($view->field['nothing']);
        $view->field['title']->options['label'] = t('Name');
      }
    }
  }
}
