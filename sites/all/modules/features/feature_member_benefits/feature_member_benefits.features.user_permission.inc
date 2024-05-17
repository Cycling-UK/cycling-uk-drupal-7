<?php

/**
 * @file
 * feature_member_benefits.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_member_benefits_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_public_only_content'.
  $permissions['create field_public_only_content'] = array(
    'name' => 'create field_public_only_content',
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

  // Exported permission: 'create member_benefit content'.
  $permissions['create member_benefit content'] = array(
    'name' => 'create member_benefit content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create paragraph content member_benefit'.
  $permissions['create paragraph content member_benefit'] = array(
    'name' => 'create paragraph content member_benefit',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete any member_benefit content'.
  $permissions['delete any member_benefit content'] = array(
    'name' => 'delete any member_benefit content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own member_benefit content'.
  $permissions['delete own member_benefit content'] = array(
    'name' => 'delete own member_benefit content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete paragraph content member_benefit'.
  $permissions['delete paragraph content member_benefit'] = array(
    'name' => 'delete paragraph content member_benefit',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'edit any member_benefit content'.
  $permissions['edit any member_benefit content'] = array(
    'name' => 'edit any member_benefit content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_public_only_content'.
  $permissions['edit field_public_only_content'] = array(
    'name' => 'edit field_public_only_content',
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

  // Exported permission: 'edit own field_public_only_content'.
  $permissions['edit own field_public_only_content'] = array(
    'name' => 'edit own field_public_only_content',
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

  // Exported permission: 'edit own member_benefit content'.
  $permissions['edit own member_benefit content'] = array(
    'name' => 'edit own member_benefit content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update paragraph content member_benefit'.
  $permissions['update paragraph content member_benefit'] = array(
    'name' => 'update paragraph content member_benefit',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view field_public_only_content'.
  $permissions['view field_public_only_content'] = array(
    'name' => 'view field_public_only_content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_public_only_content'.
  $permissions['view own field_public_only_content'] = array(
    'name' => 'view own field_public_only_content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view paragraph content member_benefit'.
  $permissions['view paragraph content member_benefit'] = array(
    'name' => 'view paragraph content member_benefit',
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
