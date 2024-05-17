<?php

/**
 * @file
 * issuu_publication_embed.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function issuu_publication_embed_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create paragraph content issuu_publication_insert'.
  $permissions['create paragraph content issuu_publication_insert'] = array(
    'name' => 'create paragraph content issuu_publication_insert',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content issuu_publication_insert'.
  $permissions['delete paragraph content issuu_publication_insert'] = array(
    'name' => 'delete paragraph content issuu_publication_insert',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content issuu_publication_insert'.
  $permissions['update paragraph content issuu_publication_insert'] = array(
    'name' => 'update paragraph content issuu_publication_insert',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content issuu_publication_insert'.
  $permissions['view paragraph content issuu_publication_insert'] = array(
    'name' => 'view paragraph content issuu_publication_insert',
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
