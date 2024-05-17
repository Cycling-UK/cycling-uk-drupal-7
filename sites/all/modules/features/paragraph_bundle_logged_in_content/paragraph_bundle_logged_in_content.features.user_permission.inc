<?php

/**
 * @file
 * paragraph_bundle_logged_in_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function paragraph_bundle_logged_in_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create paragraph content logged_in_content'.
  $permissions['create paragraph content logged_in_content'] = array(
    'name' => 'create paragraph content logged_in_content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content logged_in_content'.
  $permissions['delete paragraph content logged_in_content'] = array(
    'name' => 'delete paragraph content logged_in_content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content logged_in_content'.
  $permissions['update paragraph content logged_in_content'] = array(
    'name' => 'update paragraph content logged_in_content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content logged_in_content'.
  $permissions['view paragraph content logged_in_content'] = array(
    'name' => 'view paragraph content logged_in_content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}
