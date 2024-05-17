<?php
/**
 * @file
 * simple_feedback_tab.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function simple_feedback_tab_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer feedback simple'.
  $permissions['administer feedback simple'] = array(
    'name' => 'administer feedback simple',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'feedback_simple',
  );

  return $permissions;
}
