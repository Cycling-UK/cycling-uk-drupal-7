<?php

/**
 * @file
 * og_groups.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function og_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'og',
  );

  // Exported permission: 'clear group feeds'.
  $permissions['clear group feeds'] = array(
    'name' => 'clear group feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'convert from group'.
  $permissions['convert from group'] = array(
    'name' => 'convert from group',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert from group_child_page'.
  $permissions['convert from group_child_page'] = array(
    'name' => 'convert from group_child_page',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert from group_post'.
  $permissions['convert from group_post'] = array(
    'name' => 'convert from group_post',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert from ride'.
  $permissions['convert from ride'] = array(
    'name' => 'convert from ride',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to group'.
  $permissions['convert to group'] = array(
    'name' => 'convert to group',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to group_child_page'.
  $permissions['convert to group_child_page'] = array(
    'name' => 'convert to group_child_page',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to group_post'.
  $permissions['convert to group_post'] = array(
    'name' => 'convert to group_post',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to ride'.
  $permissions['convert to ride'] = array(
    'name' => 'convert to ride',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'create field_event_ride_datc'.
  $permissions['create field_event_ride_datc'] = array(
    'name' => 'create field_event_ride_datc',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_partners'.
  $permissions['create field_partners'] = array(
    'name' => 'create field_partners',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create group content'.
  $permissions['create group content'] = array(
    'name' => 'create group content',
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

  // Exported permission: 'create group_child_page content'.
  $permissions['create group_child_page content'] = array(
    'name' => 'create group_child_page content',
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

  // Exported permission: 'create group_group'.
  $permissions['create group_group'] = array(
    'name' => 'create group_group',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create group_post content'.
  $permissions['create group_post content'] = array(
    'name' => 'create group_post content',
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

  // Exported permission: 'create ride content'.
  $permissions['create ride content'] = array(
    'name' => 'create ride content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any group content'.
  $permissions['delete any group content'] = array(
    'name' => 'delete any group content',
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

  // Exported permission: 'delete any group_child_page content'.
  $permissions['delete any group_child_page content'] = array(
    'name' => 'delete any group_child_page content',
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

  // Exported permission: 'delete any group_post content'.
  $permissions['delete any group_post content'] = array(
    'name' => 'delete any group_post content',
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

  // Exported permission: 'delete any ride content'.
  $permissions['delete any ride content'] = array(
    'name' => 'delete any ride content',
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

  // Exported permission: 'delete own group content'.
  $permissions['delete own group content'] = array(
    'name' => 'delete own group content',
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

  // Exported permission: 'delete own group_child_page content'.
  $permissions['delete own group_child_page content'] = array(
    'name' => 'delete own group_child_page content',
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

  // Exported permission: 'delete own group_post content'.
  $permissions['delete own group_post content'] = array(
    'name' => 'delete own group_post content',
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

  // Exported permission: 'delete own ride content'.
  $permissions['delete own ride content'] = array(
    'name' => 'delete own ride content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any group content'.
  $permissions['edit any group content'] = array(
    'name' => 'edit any group content',
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

  // Exported permission: 'edit any group_child_page content'.
  $permissions['edit any group_child_page content'] = array(
    'name' => 'edit any group_child_page content',
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

  // Exported permission: 'edit any group_post content'.
  $permissions['edit any group_post content'] = array(
    'name' => 'edit any group_post content',
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

  // Exported permission: 'edit any ride content'.
  $permissions['edit any ride content'] = array(
    'name' => 'edit any ride content',
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

  // Exported permission: 'edit field_event_ride_datc'.
  $permissions['edit field_event_ride_datc'] = array(
    'name' => 'edit field_event_ride_datc',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_partners'.
  $permissions['edit field_partners'] = array(
    'name' => 'edit field_partners',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit group_group'.
  $permissions['edit group_group'] = array(
    'name' => 'edit group_group',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_event_ride_datc'.
  $permissions['edit own field_event_ride_datc'] = array(
    'name' => 'edit own field_event_ride_datc',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_partners'.
  $permissions['edit own field_partners'] = array(
    'name' => 'edit own field_partners',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own group content'.
  $permissions['edit own group content'] = array(
    'name' => 'edit own group content',
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

  // Exported permission: 'edit own group_child_page content'.
  $permissions['edit own group_child_page content'] = array(
    'name' => 'edit own group_child_page content',
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

  // Exported permission: 'edit own group_group'.
  $permissions['edit own group_group'] = array(
    'name' => 'edit own group_group',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own group_post content'.
  $permissions['edit own group_post content'] = array(
    'name' => 'edit own group_post content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ride content'.
  $permissions['edit own ride content'] = array(
    'name' => 'edit own ride content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import group feeds'.
  $permissions['import group feeds'] = array(
    'name' => 'import group feeds',
    'roles' => array(
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper group'.
  $permissions['tamper group'] = array(
    'name' => 'tamper group',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock group feeds'.
  $permissions['unlock group feeds'] = array(
    'name' => 'unlock group feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'view any unpublished group content'.
  $permissions['view any unpublished group content'] = array(
    'name' => 'view any unpublished group content',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished group_child_page content'.
  $permissions['view any unpublished group_child_page content'] = array(
    'name' => 'view any unpublished group_child_page content',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished group_post content'.
  $permissions['view any unpublished group_post content'] = array(
    'name' => 'view any unpublished group_post content',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view field_event_ride_datc'.
  $permissions['view field_event_ride_datc'] = array(
    'name' => 'view field_event_ride_datc',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_partners'.
  $permissions['view field_partners'] = array(
    'name' => 'view field_partners',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view group_group'.
  $permissions['view group_group'] = array(
    'name' => 'view group_group',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_event_ride_datc'.
  $permissions['view own field_event_ride_datc'] = array(
    'name' => 'view own field_event_ride_datc',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_partners'.
  $permissions['view own field_partners'] = array(
    'name' => 'view own field_partners',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own group_group'.
  $permissions['view own group_group'] = array(
    'name' => 'view own group_group',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
