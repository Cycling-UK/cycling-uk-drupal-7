<?php

/**
 * @file
 * publications_magazine_block.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function publications_magazine_block_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create paragraph content publications_block'.
  $permissions['create paragraph content publications_block'] = array(
    'name' => 'create paragraph content publications_block',
    'roles' => array(),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content publications_block'.
  $permissions['delete paragraph content publications_block'] = array(
    'name' => 'delete paragraph content publications_block',
    'roles' => array(),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content publications_block'.
  $permissions['update paragraph content publications_block'] = array(
    'name' => 'update paragraph content publications_block',
    'roles' => array(),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content publications_block'.
  $permissions['view paragraph content publications_block'] = array(
    'name' => 'view paragraph content publications_block',
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
