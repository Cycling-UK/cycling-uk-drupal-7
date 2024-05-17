<?php

/**
 * @file
 * teaser_tiles_para_bundle.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function teaser_tiles_para_bundle_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create paragraph content teaser_tiles'.
  $permissions['create paragraph content teaser_tiles'] = array(
    'name' => 'create paragraph content teaser_tiles',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content teaser_tiles'.
  $permissions['delete paragraph content teaser_tiles'] = array(
    'name' => 'delete paragraph content teaser_tiles',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content teaser_tiles'.
  $permissions['update paragraph content teaser_tiles'] = array(
    'name' => 'update paragraph content teaser_tiles',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content teaser_tiles'.
  $permissions['view paragraph content teaser_tiles'] = array(
    'name' => 'view paragraph content teaser_tiles',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}
