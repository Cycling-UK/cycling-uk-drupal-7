<?php
/**
 * @file
 * shop_base_fields.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function shop_base_fields_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_care_email'.
  $permissions['create field_care_email'] = array(
    'name' => 'create field_care_email',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_family_members'.
  $permissions['create field_family_members'] = array(
    'name' => 'create field_family_members',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_care_email'.
  $permissions['edit field_care_email'] = array(
    'name' => 'edit field_care_email',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Shop Technical Administrator' => 'Shop Technical Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_family_members'.
  $permissions['edit field_family_members'] = array(
    'name' => 'edit field_family_members',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Shop Administrator' => 'Shop Administrator',
      'Shop Technical Administrator' => 'Shop Technical Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_care_email'.
  $permissions['edit own field_care_email'] = array(
    'name' => 'edit own field_care_email',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_family_members'.
  $permissions['edit own field_family_members'] = array(
    'name' => 'edit own field_family_members',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_care_email'.
  $permissions['view field_care_email'] = array(
    'name' => 'view field_care_email',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Shop Technical Administrator' => 'Shop Technical Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_family_members'.
  $permissions['view field_family_members'] = array(
    'name' => 'view field_family_members',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Shop Administrator' => 'Shop Administrator',
      'Shop Technical Administrator' => 'Shop Technical Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_care_email'.
  $permissions['view own field_care_email'] = array(
    'name' => 'view own field_care_email',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_family_members'.
  $permissions['view own field_family_members'] = array(
    'name' => 'view own field_family_members',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
