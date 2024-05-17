<?php

/**
 * @file
 * cycling_uk_email_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cycling_uk_email_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'smtp',
  );

  return $permissions;
}
