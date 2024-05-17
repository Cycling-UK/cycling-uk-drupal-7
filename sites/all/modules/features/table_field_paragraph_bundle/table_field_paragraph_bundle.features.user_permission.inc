<?php

/**
 * @file
 * table_field_paragraph_bundle.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function table_field_paragraph_bundle_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'always use additional datasources'.
  $permissions['always use additional datasources'] = array(
    'name' => 'always use additional datasources',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'configure tablefield'.
  $permissions['configure tablefield'] = array(
    'name' => 'configure tablefield',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'create paragraph content table_field'.
  $permissions['create paragraph content table_field'] = array(
    'name' => 'create paragraph content table_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content table_field'.
  $permissions['delete paragraph content table_field'] = array(
    'name' => 'delete paragraph content table_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'export tablefield'.
  $permissions['export tablefield'] = array(
    'name' => 'export tablefield',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'rebuild tablefield'.
  $permissions['rebuild tablefield'] = array(
    'name' => 'rebuild tablefield',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'update paragraph content table_field'.
  $permissions['update paragraph content table_field'] = array(
    'name' => 'update paragraph content table_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content table_field'.
  $permissions['view paragraph content table_field'] = array(
    'name' => 'view paragraph content table_field',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Comments Approved' => 'Comments Approved',
      'Content Author (Do not delete user)' => 'Content Author (Do not delete user)',
      'Contributor' => 'Contributor',
      'Course Administrator' => 'Course Administrator',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Group Contributor' => 'Group Contributor',
      'Group Email Authoriser' => 'Group Email Authoriser',
      'Local Campaigner' => 'Local Campaigner',
      'Member' => 'Member',
      'Power User' => 'Power User',
      'Shop Administrator' => 'Shop Administrator',
      'Shop Technical Administrator' => 'Shop Technical Administrator',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}
