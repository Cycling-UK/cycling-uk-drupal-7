<?php

/**
 * @file
 * features_content_type_landing_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_content_type_landing_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_logged_in_attachments'.
  $permissions['create field_logged_in_attachments'] = array(
    'name' => 'create field_logged_in_attachments',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_logged_in_content'.
  $permissions['create field_logged_in_content'] = array(
    'name' => 'create field_logged_in_content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_logged_in_attachments'.
  $permissions['edit field_logged_in_attachments'] = array(
    'name' => 'edit field_logged_in_attachments',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_logged_in_content'.
  $permissions['edit field_logged_in_content'] = array(
    'name' => 'edit field_logged_in_content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_logged_in_attachments'.
  $permissions['edit own field_logged_in_attachments'] = array(
    'name' => 'edit own field_logged_in_attachments',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_logged_in_content'.
  $permissions['edit own field_logged_in_content'] = array(
    'name' => 'edit own field_logged_in_content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_logged_in_attachments'.
  $permissions['view field_logged_in_attachments'] = array(
    'name' => 'view field_logged_in_attachments',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_logged_in_content'.
  $permissions['view field_logged_in_content'] = array(
    'name' => 'view field_logged_in_content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_logged_in_attachments'.
  $permissions['view own field_logged_in_attachments'] = array(
    'name' => 'view own field_logged_in_attachments',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_logged_in_content'.
  $permissions['view own field_logged_in_content'] = array(
    'name' => 'view own field_logged_in_content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
