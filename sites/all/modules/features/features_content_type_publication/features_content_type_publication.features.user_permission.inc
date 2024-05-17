<?php

/**
 * @file
 * features_content_type_publication.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_content_type_publication_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_issuu_embed_code'.
  $permissions['create field_issuu_embed_code'] = array(
    'name' => 'create field_issuu_embed_code',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_issuu_embed_code'.
  $permissions['edit field_issuu_embed_code'] = array(
    'name' => 'edit field_issuu_embed_code',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_issuu_embed_code'.
  $permissions['edit own field_issuu_embed_code'] = array(
    'name' => 'edit own field_issuu_embed_code',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_issuu_embed_code'.
  $permissions['view field_issuu_embed_code'] = array(
    'name' => 'view field_issuu_embed_code',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_issuu_embed_code'.
  $permissions['view own field_issuu_embed_code'] = array(
    'name' => 'view own field_issuu_embed_code',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
