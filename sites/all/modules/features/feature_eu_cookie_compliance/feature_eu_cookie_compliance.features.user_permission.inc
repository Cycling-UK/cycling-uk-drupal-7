<?php

/**
 * @file
 * feature_eu_cookie_compliance.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_eu_cookie_compliance_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer EU Cookie Compliance popup'.
  $permissions['administer EU Cookie Compliance popup'] = array(
    'name' => 'administer EU Cookie Compliance popup',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'display EU Cookie Compliance popup'.
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'eu_cookie_compliance',
  );

  return $permissions;
}
