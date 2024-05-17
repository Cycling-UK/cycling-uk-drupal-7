<?php

/**
 * @file
 * features_linked_sponsor_logos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_linked_sponsor_logos_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create paragraph content sponsor_logos_with_links'.
  $permissions['create paragraph content sponsor_logos_with_links'] = array(
    'name' => 'create paragraph content sponsor_logos_with_links',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content sponsor_logos_with_links'.
  $permissions['delete paragraph content sponsor_logos_with_links'] = array(
    'name' => 'delete paragraph content sponsor_logos_with_links',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content sponsor_logos_with_links'.
  $permissions['update paragraph content sponsor_logos_with_links'] = array(
    'name' => 'update paragraph content sponsor_logos_with_links',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content sponsor_logos_with_links'.
  $permissions['view paragraph content sponsor_logos_with_links'] = array(
    'name' => 'view paragraph content sponsor_logos_with_links',
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
