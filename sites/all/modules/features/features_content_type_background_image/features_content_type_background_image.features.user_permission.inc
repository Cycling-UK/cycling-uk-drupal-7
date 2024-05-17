<?php
/**
 * @file
 * features_content_type_background_image.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_content_type_background_image_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create background_image content'.
  $permissions['create background_image content'] = array(
    'name' => 'create background_image content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any background_image content'.
  $permissions['delete any background_image content'] = array(
    'name' => 'delete any background_image content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own background_image content'.
  $permissions['delete own background_image content'] = array(
    'name' => 'delete own background_image content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any background_image content'.
  $permissions['edit any background_image content'] = array(
    'name' => 'edit any background_image content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own background_image content'.
  $permissions['edit own background_image content'] = array(
    'name' => 'edit own background_image content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  return $permissions;
}
