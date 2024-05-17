<?php

/**
 * @file
 * feature_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access avatars'.
  $permissions['access avatars'] = array(
    'name' => 'access avatars',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'avatar_selection',
  );

  // Exported permission: 'administer avatar selection'.
  $permissions['administer avatar selection'] = array(
    'name' => 'administer avatar selection',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'avatar_selection',
  );

  // Exported permission: 'create field_care_addresses'.
  $permissions['create field_care_addresses'] = array(
    'name' => 'create field_care_addresses',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'anonymous user' => 'anonymous user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_care_dob'.
  $permissions['create field_care_dob'] = array(
    'name' => 'create field_care_dob',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'anonymous user' => 'anonymous user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_care_telephones'.
  $permissions['create field_care_telephones'] = array(
    'name' => 'create field_care_telephones',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'anonymous user' => 'anonymous user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_care_addresses'.
  $permissions['edit field_care_addresses'] = array(
    'name' => 'edit field_care_addresses',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_care_dob'.
  $permissions['edit field_care_dob'] = array(
    'name' => 'edit field_care_dob',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_care_telephones'.
  $permissions['edit field_care_telephones'] = array(
    'name' => 'edit field_care_telephones',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_care_addresses'.
  $permissions['edit own field_care_addresses'] = array(
    'name' => 'edit own field_care_addresses',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_care_dob'.
  $permissions['edit own field_care_dob'] = array(
    'name' => 'edit own field_care_dob',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_care_telephones'.
  $permissions['edit own field_care_telephones'] = array(
    'name' => 'edit own field_care_telephones',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'upload avatar in profile'.
  $permissions['upload avatar in profile'] = array(
    'name' => 'upload avatar in profile',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Contributor' => 'Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'avatar_selection',
  );

  // Exported permission: 'view field_care_addresses'.
  $permissions['view field_care_addresses'] = array(
    'name' => 'view field_care_addresses',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_care_dob'.
  $permissions['view field_care_dob'] = array(
    'name' => 'view field_care_dob',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_care_telephones'.
  $permissions['view field_care_telephones'] = array(
    'name' => 'view field_care_telephones',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_care_addresses'.
  $permissions['view own field_care_addresses'] = array(
    'name' => 'view own field_care_addresses',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_care_dob'.
  $permissions['view own field_care_dob'] = array(
    'name' => 'view own field_care_dob',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_care_telephones'.
  $permissions['view own field_care_telephones'] = array(
    'name' => 'view own field_care_telephones',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
