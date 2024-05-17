<?php
/**
 * @file
 * content_type_group_emails.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function content_type_group_emails_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-group-members.
  $menus['menu-group-members'] = array(
    'menu_name' => 'menu-group-members',
    'title' => 'Group Members',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Group Members');

  return $menus;
}
