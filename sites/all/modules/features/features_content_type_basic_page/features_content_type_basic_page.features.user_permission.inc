<?php

/**
 * @file
 * features_content_type_basic_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_content_type_basic_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_member_only_content'.
  $permissions['create field_member_only_content'] = array(
    'name' => 'create field_member_only_content',
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

  // Exported permission: 'edit field_member_only_content'.
  $permissions['edit field_member_only_content'] = array(
    'name' => 'edit field_member_only_content',
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

  // Exported permission: 'edit own field_member_only_content'.
  $permissions['edit own field_member_only_content'] = array(
    'name' => 'edit own field_member_only_content',
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

  // Exported permission: 'view field_member_only_content'.
  $permissions['view field_member_only_content'] = array(
    'name' => 'view field_member_only_content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Member' => 'Member',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_member_only_content'.
  $permissions['view own field_member_only_content'] = array(
    'name' => 'view own field_member_only_content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Member' => 'Member',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
