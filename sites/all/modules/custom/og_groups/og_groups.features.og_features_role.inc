<?php

/**
 * @file
 * og_groups.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function og_groups_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:affiliated_centre:Group Administrator'.
  $roles['node:affiliated_centre:Group Administrator'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'affiliated_centre',
    'name' => 'Group Administrator',
  );

  // Exported OG Role: 'node:affiliated_centre:Group Manager (automatically assigned)'.
  $roles['node:affiliated_centre:Group Manager (automatically assigned)'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'affiliated_centre',
    'name' => 'Group Manager (automatically assigned)',
  );

  // Exported OG Role: 'node:group:Communications Officer (Member Groups Only)'.
  $roles['node:group:Communications Officer (Member Groups Only)'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'group',
    'name' => 'Communications Officer (Member Groups Only)',
  );

  // Exported OG Role: 'node:group:Content Editor'.
  $roles['node:group:Content Editor'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'group',
    'name' => 'Content Editor',
  );

  // Exported OG Role: 'node:group:Events Editor'.
  $roles['node:group:Events Editor'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'group',
    'name' => 'Events Editor',
  );

  // Exported OG Role: 'node:group:Group Administrator'.
  $roles['node:group:Group Administrator'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'group',
    'name' => 'Group Administrator',
  );

  // Exported OG Role: 'node:group:Group Manager (automatically assigned)'.
  $roles['node:group:Group Manager (automatically assigned)'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'group',
    'name' => 'Group Manager (automatically assigned)',
  );

  // Exported OG Role: 'node:group:Registration Officer (Member Groups Only)'.
  $roles['node:group:Registration Officer (Member Groups Only)'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'group',
    'name' => 'Registration Officer (Member Groups Only)',
  );

  return $roles;
}
