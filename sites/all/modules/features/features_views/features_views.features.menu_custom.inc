<?php
/**
 * @file
 * features_views.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function features_views_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-content.
  $menus['menu-content'] = array(
    'menu_name' => 'menu-content',
    'title' => 'Content',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $menus;
}
