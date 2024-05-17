<?php

/**
 * @file
 * internal_adverts_2022.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function internal_adverts_2022_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any internal_adverts bean'.
  $permissions['create any internal_adverts bean'] = array(
    'name' => 'create any internal_adverts bean',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any internal_adverts bean'.
  $permissions['delete any internal_adverts bean'] = array(
    'name' => 'delete any internal_adverts bean',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any internal_adverts bean'.
  $permissions['edit any internal_adverts bean'] = array(
    'name' => 'edit any internal_adverts bean',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any internal_adverts bean'.
  $permissions['view any internal_adverts bean'] = array(
    'name' => 'view any internal_adverts bean',
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
    'module' => 'bean',
  );

  return $permissions;
}
