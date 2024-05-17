<?php

/**
 * @file
 * features_file_downloads_simple.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_file_downloads_simple_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create paragraph content file_downloads_simple'.
  $permissions['create paragraph content file_downloads_simple'] = array(
    'name' => 'create paragraph content file_downloads_simple',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content file_downloads_simple'.
  $permissions['delete paragraph content file_downloads_simple'] = array(
    'name' => 'delete paragraph content file_downloads_simple',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content file_downloads_simple'.
  $permissions['update paragraph content file_downloads_simple'] = array(
    'name' => 'update paragraph content file_downloads_simple',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content file_downloads_simple'.
  $permissions['view paragraph content file_downloads_simple'] = array(
    'name' => 'view paragraph content file_downloads_simple',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}
