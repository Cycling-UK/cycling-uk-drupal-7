<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

function pumpedup_preprocess_page(&$vars) {
  $alias_parts = explode('/', drupal_get_path_alias());
  /**
   * Set custom page template per content type
   * https://befused.com/drupal/page-template
   */
  if (isset($vars['node']->type)) {
    $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
  }
}

//support theme per view_mode
function pumpedup_preprocess_node(&$vars, $hook) {
  $vars['theme_hook_suggestion'] = 'node__' . $vars['view_mode'];
}



/**
 * Overrides theme_menu_link().
 */
 
function pumpedup_menu_link__menu_block($variables) {
  return theme_menu_link($variables);
}

function pumpedup_pager($vars) {
  $vars['tags'] = array('','','','','');
  return theme_pager($vars);
}

