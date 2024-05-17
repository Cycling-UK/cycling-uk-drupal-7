<?php

/**
 * @file
 * paragraph_bundle_simple_video_player.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function paragraph_bundle_simple_video_player_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create paragraph content simple_video_player'.
  $permissions['create paragraph content simple_video_player'] = array(
    'name' => 'create paragraph content simple_video_player',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content simple_video_player'.
  $permissions['delete paragraph content simple_video_player'] = array(
    'name' => 'delete paragraph content simple_video_player',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content simple_video_player'.
  $permissions['update paragraph content simple_video_player'] = array(
    'name' => 'update paragraph content simple_video_player',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content simple_video_player'.
  $permissions['view paragraph content simple_video_player'] = array(
    'name' => 'view paragraph content simple_video_player',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}
