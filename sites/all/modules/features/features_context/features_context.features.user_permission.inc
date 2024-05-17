<?php

/**
 * @file
 * features_context.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_context_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_issuu_embed_code_full'.
  $permissions['create field_issuu_embed_code_full'] = array(
    'name' => 'create field_issuu_embed_code_full',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_issuu_embed_code_full'.
  $permissions['edit field_issuu_embed_code_full'] = array(
    'name' => 'edit field_issuu_embed_code_full',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_issuu_embed_code_full'.
  $permissions['edit own field_issuu_embed_code_full'] = array(
    'name' => 'edit own field_issuu_embed_code_full',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_issuu_embed_code_full'.
  $permissions['view field_issuu_embed_code_full'] = array(
    'name' => 'view field_issuu_embed_code_full',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Member' => 'Member',
      'Staff Member' => 'Staff Member',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_issuu_embed_code_full'.
  $permissions['view own field_issuu_embed_code_full'] = array(
    'name' => 'view own field_issuu_embed_code_full',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Member' => 'Member',
      'Staff Member' => 'Staff Member',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
