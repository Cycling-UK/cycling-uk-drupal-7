<?php

/**
 * @file
 * features_content_type_briefings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_content_type_briefings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create briefings content'.
  $permissions['create briefings content'] = array(
    'name' => 'create briefings content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any briefings content'.
  $permissions['delete any briefings content'] = array(
    'name' => 'delete any briefings content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own briefings content'.
  $permissions['delete own briefings content'] = array(
    'name' => 'delete own briefings content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any briefings content'.
  $permissions['edit any briefings content'] = array(
    'name' => 'edit any briefings content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own briefings content'.
  $permissions['edit own briefings content'] = array(
    'name' => 'edit own briefings content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  return $permissions;
}
