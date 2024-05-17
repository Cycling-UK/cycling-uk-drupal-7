<?php

/**
 * @file
 * content_type_group_emails.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function content_type_group_emails_user_default_roles() {
  $roles = array();

  // Exported role: Group Email Authoriser.
  $roles['Group Email Authoriser'] = array(
    'name' => 'Group Email Authoriser',
    'weight' => 17,
  );

  return $roles;
}
