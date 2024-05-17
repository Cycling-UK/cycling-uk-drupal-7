<?php
/**
 * @file
 * og_groups.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function og_groups_user_default_roles() {
  $roles = array();

  // Exported role: Group Administrator.
  $roles['Group Administrator'] = array(
    'name' => 'Group Administrator',
    'weight' => 9,
  );

  return $roles;
}
