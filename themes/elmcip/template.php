<?php
/**
 * @file
 * Theme override functions and preprocess functions for the theme.
 */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function elmcip_preprocess_page(&$variables, $hook) {
  if ($variables['user']->uid === '1') {
    $variables['classes_array'][] = 'is-admin';
  }
}

/**
 * Implements template_preprocess_node().
 *
 * @param $variables
 */
function elmcip_preprocess_node(&$variables) {
  if ($variables['view_mode'] === 'full') {
    $content_types = [
      'critical_writing',
      'databases_and_archives',
      'event',
      'teaching_resource',
      'work',
    ];
    $title = '';
    foreach ($content_types as $content_type) {
      if ($variables['type'] == $content_type) {
        $entity = entity_metadata_wrapper('node', $variables['node']);
        $fields = field_info_instances('node', $content_type);
        $references = [
          'field_abstract_lang_tax',
          'field_event_abstract_lang_tax',
          'field_db_description_org_lang',
        ];

        foreach ($references as $reference) {
          if (array_key_exists($reference, $fields) && $entity->$reference->value()) {
            $label = $entity->$reference->value()->name;

            if ($label) {
              switch ($content_type) {
                case 'critical_writing':
                  $field = 'field_abstract_lang';
                  $title = t("Abstract (in @term_name)", array('@term_name' => $label));
                  break;
                case 'databases_and_archives':
                  $field = 'field_db_description_original';
                  $title = t("Description (in @term_name)", array('@term_name' => $label));
                  break;
                case 'event':
                  $field = 'field_event_abstract_lang';
                  $title = t("Description (in @term_name)", array('@term_name' => $label));
                  break;
                case 'teaching_resource':
                  $field = 'field_abstract_lang';
                  $title = t("Abstract (in @term_name)", array('@term_name' => $label));
                  break;
                case 'work':
                  $field = 'field_abstract_lang';
                  $title = t("Description (in @term_name)", array('@term_name' => $label));
                  break;
              }
            }
          }
        }

      }
    }

    if ($title) {
      $variables['content'][$field]['#title'] = $title;
    }

  }

  if ($variables['view_mode'] === 'teaser' && $variables['type'] === 'story') {
    $variables['classes_array'][] = 'two-col';
    $variables["title_attributes_array"]["class"][] = 'item';
    $post_date = format_date($variables['node']->created, 'date_only_month_spelled');
    $variables['submitted'] =
      t(
      'Submitted by !username', ['!username' => $variables['name']]
      )
      . '<br><span class="submitted-date">' . $post_date . '</span>';
  }
}

/**
 * Implement hook_form_alter().
 */
function elmcip_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id === 'search_api_page_search_form_search_knowledge_base') {
    $form['keys_1']['#size'] = 30;
    // Add extra attributes to the text box.
    $form['keys_1']['#attributes']['onblur'] = "if (this.value == '') {this.value = 'Search Knowledge Base';}";
    $form['keys_1']['#attributes']['onfocus'] = "if (this.value == 'Search Knowledge Base') {this.value = '';}";
    $form['keys_1']['#attributes']['placeholder'] = t('Search Knowledge Base');
    $form['#attributes']['class'][] = 'container-inline';
  }
}

/**
 * Implements template_preprocess_region().
 */
function elmcip_preprocess_region(&$variables, $hook) {
  if ($variables['region'] === 'header' || 'header-top') {
    $variables['classes_array'][] = 'clearfix';
  }
}

/**
 * Panels render callback. Removes panel separator.
 *
 * @ingroup themeable
 */
function elmcip_panels_default_style_render_region($variables) {
  $output = '';
  $output .= implode('', $variables['panes']);
  return $output;
}

/**
 * implement theme_field().
 */
function elmcip_field__field_pullquote($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  // Render the items.
  foreach ($variables['items'] as $delta => $item) {
    $output .= '<blockquote ' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</blockquote>';
  }

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Implements theme_facetapi_link_inactive.
 * Returns HTML for an inactive facet item. Used in here to wrap count in a
 * separate CSS class.
 *
 * @param $variables
 *   An associative array containing the keys 'text', 'path', 'options', and
 *   'count'. See the l() and theme_facetapi_count() functions for information
 *   about these variables.
 *
 * @ingroup themeable
 */
function elmcip_facetapi_link_inactive($variables) {
  // Sanitizes the link text if necessary.
  $sanitize = empty($variables['options']['html']);
  $text = ($sanitize) ? check_plain($variables['text']) : $variables['text'];
  // Adds count to link if one was passed.

  if (isset($variables['count'])) {
    $text .= '<span class="lighter"> ' . theme('facetapi_count', $variables) . '</span>';
  }

  // Zero elements. Make non-clickable element.
  if (isset($variables['count']) && $variables['count'] == 0) {
    $variables['element'] = array(
      '#value' => $text,
      '#tag' => 'span',
      '#attributes' => $variables['options']['attributes']
    );
    return theme_html_tag($variables);
  }
  // More than zero elements.
  else {
    // Builds accessible markup.
    // @see http://drupal.org/node/1316580
    $accessible_vars = array(
      'text' => $variables['text'],
      'active' => FALSE,
    );
    $accessible_markup = theme('facetapi_accessible_markup', $accessible_vars);

    // Resets link text, sets to options to HTML since we already sanitized the
    // link text and are providing additional markup for accessibility.
    $variables['text'] = $text . $accessible_markup;
    $variables['options']['html'] = TRUE;

    return theme_link($variables);
  }
}
