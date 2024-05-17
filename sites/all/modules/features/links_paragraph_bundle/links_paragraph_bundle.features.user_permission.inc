<?php

/**
 * @file
 * links_paragraph_bundle.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function links_paragraph_bundle_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create paragraph content links'.
  $permissions['create paragraph content links'] = array(
    'name' => 'create paragraph content links',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content links'.
  $permissions['delete paragraph content links'] = array(
    'name' => 'delete paragraph content links',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content links'.
  $permissions['update paragraph content links'] = array(
    'name' => 'update paragraph content links',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content links'.
  $permissions['view paragraph content links'] = array(
    'name' => 'view paragraph content links',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}
