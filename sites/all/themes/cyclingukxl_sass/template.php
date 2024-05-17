<?php
/**
 * @file
 * The primary PHP file for this theme.
 */





function cyclingukxl_sass_theme(&$existing, $type, $theme, $path){
  $hooks = array();
   // Make user-register.tpl.php available
  $hooks['user_register_form'] = array (
     'render element' => 'form',
     'path' => drupal_get_path('theme','cyclingukxl'),
     'template' => 'user-register-form',
     'preprocess functions' => array('cyclingukxl_sass_preprocess_user_register_form'),
  );
  return $hooks;
}

function cyclingukxl_sass_preprocess_user_register_form(&$vars) {
  $args = func_get_args();
  array_shift($args);
  $form_state['build_info']['args'] = $args;
  $vars['form'] = drupal_build_form('user_register_form', $form_state['build_info']['args']);
}


/**
 * http://drupal.stackexchange.com/questions/39908/change-templates-based-on-path-alias
 * Set custom page template for journey planner
 */

function cyclingukxl_sass_preprocess_page(&$vars) {
  $alias_parts = explode('/', drupal_get_path_alias());

  if (count($alias_parts) && $alias_parts[0] == 'journey-planner2') {
    $vars['theme_hook_suggestions'][] = 'page__jplanner';
  }

  /**
   * Set custom page template per content type
   * https://befused.com/drupal/page-template
   */
  if (isset($vars['node']->type)) {
    $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
  }


}


//support theme per view_mode
function cyclingukxl_sass_preprocess_node(&$vars, $hook) {
  $vars['theme_hook_suggestion'] = 'node__' . $vars['view_mode'];
  //$vars['theme_hook_suggestion'][] = 'node__' . $vars['node']->type . '__' . $vars['view_mode'];
}


/**
 * Overrides theme_menu_link().
 */
function cyclingukxl_sass_menu_link__menu_block($variables) {
  return theme_menu_link($variables);
}


function cyclingukxl_sass_pager($vars) {
  $vars['tags'] = array('','','','','');
  return theme_pager($vars);
}


/**
 * Impelement hook superfish_active_trail
 * @param $trail
 */
function cyclingukxl_sass_superfish_active_trail_alter(&$trail) {

  $nid = arg(1);
  $node = node_load($nid);
  $node_type = is_object($node) ? $node->type : $node;
  if ($node_type == 'post') {
    $trail[0] = '1131';
  }


}


/**
 * Implements theme_preprocess_superfish_menu_item()
 *
 * Fixes issue with Special Menu Items:
 *  - https://www.drupal.org/node/1104616
 */
function cyclingukxl_sass_preprocess_superfish_menu_item(&$variables) {

  $element      = $variables['element'];
  $item_options = $element['item']['link']['options'];

  if(isset($item_options['item_attributes'])){
    $sf_id          = $element['attributes']['id'];
    $sf_class       = $element['attributes']['class'];
    $smi_id         = $item_options['item_attributes']['id'];
    $smi_class      = $item_options['item_attributes']['class'];
    $smi_style      = $item_options['item_attributes']['style'];

    // Reset class string to an array so we can add
    // the Special Menu Item classes
    $element['attributes']['class']   = [];
    $element['attributes']['class'][] = $sf_class;
    $element['attributes']['class'][] = $smi_class;

    $element['attributes']['id'] =  empty($smi_id) ? $sf_id : $smi_id;

    if(!empty($smi_style)){
      $element['attributes']['style'] = $smi_style;
    }

    $variables['element'] = $element;
  }
}



