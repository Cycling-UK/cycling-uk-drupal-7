<?php

/**
 * @file
 * terms_conditions_paragraphs_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function terms_conditions_paragraphs_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create paragraph content terms_and_conditions'.
  $permissions['create paragraph content terms_and_conditions'] = array(
    'name' => 'create paragraph content terms_and_conditions',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content terms_and_conditions'.
  $permissions['delete paragraph content terms_and_conditions'] = array(
    'name' => 'delete paragraph content terms_and_conditions',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content terms_and_conditions'.
  $permissions['update paragraph content terms_and_conditions'] = array(
    'name' => 'update paragraph content terms_and_conditions',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content terms_and_conditions'.
  $permissions['view paragraph content terms_and_conditions'] = array(
    'name' => 'view paragraph content terms_and_conditions',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}
