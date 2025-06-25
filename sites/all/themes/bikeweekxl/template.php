<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

 /**
 * Add body classe for the subtheme.
 */

function bikeweekxl_preprocess_html(&$variables) {
  $variables['classes_array'][] = 'bikeweekxl';
}


function bikeweekxl_theme(&$existing, $type, $theme, $path){
  $hooks = array();
   // Make user-register.tpl.php available
  $hooks['user_register_form'] = array (
     'render element' => 'form',
     'path' => drupal_get_path('theme','bikeweekxl'),
     'template' => 'user-register-form',
     'preprocess functions' => array('bikeweekxl_preprocess_user_register_form'),
  );
  return $hooks;
}

function bikeweekxl_preprocess_user_register_form(&$vars) {
  $args = func_get_args();
  array_shift($args);
  $form_state['build_info']['args'] = $args;
  $vars['form'] = drupal_build_form('user_register_form', $form_state['build_info']['args']);
}


/**
 * http://drupal.stackexchange.com/questions/39908/change-templates-based-on-path-alias
 * Set custom page template for journey planner
 */

function bikeweekxl_preprocess_page(&$vars) {
  $alias_parts = explode('/', drupal_get_path_alias());

  if (count($alias_parts) && $alias_parts[0] == 'journey-planner2') {
    $vars['theme_hook_suggestions'][] = 'page__jplanner';
  }
}

//support theme per view_mode
function bikeweekxl_preprocess_node(&$vars, $hook) {
  $vars['theme_hook_suggestion'] = 'node__' . $vars['view_mode'];
  //$vars['theme_hook_suggestion'][] = 'node__' . $vars['node']->type . '__' . $vars['view_mode'];
}


/**
 * Overrides theme_menu_link().
 */
 
function bikeweekxl_menu_link__menu_block($variables) {
  return theme_menu_link($variables);
}

function bikeweekxl_pager($vars) {
  $vars['tags'] = array('','','','','');
  return theme_pager($vars);
}

