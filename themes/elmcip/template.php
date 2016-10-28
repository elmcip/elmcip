<?php
/**
 * @file
 * Contains theme override functions and preprocess functions for the theme.
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. You can modify or override Drupal's theme
 *   functions, intercept or make additional variables available to your theme,
 *   and create custom PHP logic. For more information, please visit the Theme
 *   Developer's Guide on Drupal.org: http://drupal.org/theme-guide
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   The Drupal theme system uses special theme functions to generate HTML
 *   output automatically. Often we wish to customize this HTML output. To do
 *   this, we have to override the theme function. You have to first find the
 *   theme function that generates the output, and then "catch" it and modify it
 *   here. The easiest way to do it is to copy the original function in its
 *   entirety and paste it here, changing the prefix from theme_ to localhost_smb_ev_.
 *   For example:
 *
 *     original: theme_breadcrumb()
 *     theme override: localhost_smb_ev_breadcrumb()
 *
 *   where localhost_smb_ev is the name of your sub-theme. For example, the
 *   zen_classic theme would define a zen_classic_breadcrumb() function.
 *
 *   If you would like to override either of the two theme functions used in Zen
 *   core, you should first look at how Zen core implements those functions:
 *     theme_breadcrumbs()      in zen/template.php
 *     theme_menu_local_tasks() in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called template suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node-forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and template suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440
 *   and http://drupal.org/node/190815#template-suggestions
 */


/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function localhost_smb_ev_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function elmcip_preprocess_page(&$variables, $hook) {
  if ($variables['user']->uid == 1) {
    $variables['classes_array'][] = 'is-admin';
  }
}

/**
 * Implements template_preprocess_node().
 * @param $variables
 */
function elmcip_preprocess_node(&$variables) {
  if ($variables['view_mode'] == 'full') {
    if ($variables['type'] == 'critical_writing' || $variables['type'] == 'work') {
      if ($variables['field_abstract_lang_tax']) {
        $term = taxonomy_term_load($variables['field_abstract_lang_tax']['und'][0]['tid']);
        if ($variables['type'] == 'critical_writing') {
          $title = t("Abstract (in @term_name)", array('@term_name' => $term->name));
        }
        else {
          $title = t("Description (in @term_name)", array('@term_name' => $term->name));
        }
        $variables['content']['field_abstract_lang']['#title'] = $title;
      }
    }
  }
}

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function localhost_smb_ev_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
*/

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function localhost_smb_ev_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  $variables['classes_array'][] = 'count-' . $variables['block_id'];
}
*/

/**
 * Implement hook_form_alter().
 */
function elmcip_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_api_page_search_form_search_knowledge_base') {
    $form['submit_1']['#attributes']['class'][] = 'yui3-button';
    $form['keys_1']['#size'] = 30;
    // Add extra attributes to the text box.
    $form['keys_1']['#attributes']['onblur'] = "if (this.value == '') {this.value = 'Search';}";
    $form['keys_1']['#attributes']['onfocus'] = "if (this.value == 'Search') {this.value = '';}";
    $form['keys_1']['#attributes']['placeholder'] = t('Search');
    $form['#attributes']['class'][] = 'container-inline';
  }
}

/**
 * Implements template_preprocess_region().
 */
function elmcip_preprocess_region(&$variables, $hook) {
  if ($variables['region'] == 'header' || 'header-top') {
    $variables['classes_array'][] = 'clearfix';
  }
}

/**
 * Panels render callback./
 * - Removes panel separator.
 *
 * @ingroup themeable
 */
function elmcip_panels_default_style_render_region($variables) {
  $output = '';
  $output .= implode('', $variables['panes']);
  return $output;
}

function elmcip_preprocess_views_view_table(&$vars) {
  $view = $vars['view'];
  foreach ($view->result as $delta => $item) {
    if (isset($item->nid)) {

      $vars['classes'][$delta][] = 'contextual-links-region';
      $vars['classes_array'][$delta] = implode(' ', $vars['classes'][$delta]);

      $element = element_info('contextual_links');
      $element['#contextual_links'] = array(
        'node' => array(
          'node',
          array($item->nid),
      ));
      $vars['contextual_node'][$delta] = drupal_render($element);
    }
  }
}
