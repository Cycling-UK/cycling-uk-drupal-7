<?php

/**
 * @file
 * feature_profile.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_profile_user_default_roles() {
  $roles = array();

  // Exported role: Staff Member.
  $roles['Staff Member'] = array(
    'name' => 'Staff Member',
    'weight' => 7,
  );

  // Exported role: authenticated user.
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
    'weight' => 1,
  );

  return $roles;
}
