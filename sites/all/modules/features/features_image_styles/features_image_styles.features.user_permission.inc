<?php
/**
 * @file
 * features_image_styles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_image_styles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer manualcrop settings'.
  $permissions['administer manualcrop settings'] = array(
    'name' => 'administer manualcrop settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: 'configure own skyfish'.
  $permissions['configure own skyfish'] = array(
    'name' => 'configure own skyfish',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_skyfish',
  );

  // Exported permission: 'configure skyfish'.
  $permissions['configure skyfish'] = array(
    'name' => 'configure skyfish',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_skyfish',
  );

  // Exported permission: 'use manualcrop'.
  $permissions['use manualcrop'] = array(
    'name' => 'use manualcrop',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'article' => 'article',
      'authenticated user' => 'authenticated user',
      'blog' => 'blog',
      'case study' => 'case study',
      'cycle magazine' => 'cycle magazine',
      'gallery' => 'gallery',
      'news' => 'news',
      'press release' => 'press release',
    ),
    'module' => 'manualcrop',
  );

  return $permissions;
}
