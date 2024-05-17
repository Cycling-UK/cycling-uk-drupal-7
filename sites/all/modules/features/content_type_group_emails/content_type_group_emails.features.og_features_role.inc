<?php
/**
 * @file
 * content_type_group_emails.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function content_type_group_emails_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:group:Email Editor (Member Groups Only - Beta)'.
  $roles['node:group:Email Editor (Member Groups Only - Beta)'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'group',
    'name' => 'Email Editor (Member Groups Only - Beta)',
  );

  // Exported OG Role: 'node:group:Group Administrator'.
  $roles['node:group:Group Administrator'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'group',
    'name' => 'Group Administrator',
  );

  // Exported OG Role: 'node:group:Registration Officer (Member Groups Only - Beta)'.
  $roles['node:group:Registration Officer (Member Groups Only - Beta)'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'group',
    'name' => 'Registration Officer (Member Groups Only - Beta)',
  );

  return $roles;
}
