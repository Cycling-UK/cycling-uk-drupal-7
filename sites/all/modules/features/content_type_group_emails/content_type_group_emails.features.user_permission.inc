<?php

/**
 * @file
 * content_type_group_emails.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function content_type_group_emails_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear riders feeds'.
  $permissions['clear riders feeds'] = array(
    'name' => 'clear riders feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'convert from group_email'.
  $permissions['convert from group_email'] = array(
    'name' => 'convert from group_email',
    'roles' => array(),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert from rider'.
  $permissions['convert from rider'] = array(
    'name' => 'convert from rider',
    'roles' => array(),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to group_email'.
  $permissions['convert to group_email'] = array(
    'name' => 'convert to group_email',
    'roles' => array(),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to rider'.
  $permissions['convert to rider'] = array(
    'name' => 'convert to rider',
    'roles' => array(),
    'module' => 'node_convert',
  );

  // Exported permission: 'create field_email_status'.
  $permissions['create field_email_status'] = array(
    'name' => 'create field_email_status',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ice_name'.
  $permissions['create field_ice_name'] = array(
    'name' => 'create field_ice_name',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ice_notes'.
  $permissions['create field_ice_notes'] = array(
    'name' => 'create field_ice_notes',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ice_phone_number'.
  $permissions['create field_ice_phone_number'] = array(
    'name' => 'create field_ice_phone_number',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_log'.
  $permissions['create field_log'] = array(
    'name' => 'create field_log',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_show_on_latest_feed'.
  $permissions['create field_show_on_latest_feed'] = array(
    'name' => 'create field_show_on_latest_feed',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create group_email content'.
  $permissions['create group_email content'] = array(
    'name' => 'create group_email content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create rider content'.
  $permissions['create rider content'] = array(
    'name' => 'create rider content',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create title_field'.
  $permissions['create title_field'] = array(
    'name' => 'create title_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any group_email content'.
  $permissions['delete any group_email content'] = array(
    'name' => 'delete any group_email content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any rider content'.
  $permissions['delete any rider content'] = array(
    'name' => 'delete any rider content',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own group_email content'.
  $permissions['delete own group_email content'] = array(
    'name' => 'delete own group_email content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own rider content'.
  $permissions['delete own rider content'] = array(
    'name' => 'delete own rider content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any group_email content'.
  $permissions['edit any group_email content'] = array(
    'name' => 'edit any group_email content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any rider content'.
  $permissions['edit any rider content'] = array(
    'name' => 'edit any rider content',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_email_status'.
  $permissions['edit field_email_status'] = array(
    'name' => 'edit field_email_status',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ice_name'.
  $permissions['edit field_ice_name'] = array(
    'name' => 'edit field_ice_name',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ice_notes'.
  $permissions['edit field_ice_notes'] = array(
    'name' => 'edit field_ice_notes',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ice_phone_number'.
  $permissions['edit field_ice_phone_number'] = array(
    'name' => 'edit field_ice_phone_number',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_log'.
  $permissions['edit field_log'] = array(
    'name' => 'edit field_log',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_show_on_latest_feed'.
  $permissions['edit field_show_on_latest_feed'] = array(
    'name' => 'edit field_show_on_latest_feed',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_email_status'.
  $permissions['edit own field_email_status'] = array(
    'name' => 'edit own field_email_status',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ice_name'.
  $permissions['edit own field_ice_name'] = array(
    'name' => 'edit own field_ice_name',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ice_notes'.
  $permissions['edit own field_ice_notes'] = array(
    'name' => 'edit own field_ice_notes',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ice_phone_number'.
  $permissions['edit own field_ice_phone_number'] = array(
    'name' => 'edit own field_ice_phone_number',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_log'.
  $permissions['edit own field_log'] = array(
    'name' => 'edit own field_log',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_show_on_latest_feed'.
  $permissions['edit own field_show_on_latest_feed'] = array(
    'name' => 'edit own field_show_on_latest_feed',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own group_email content'.
  $permissions['edit own group_email content'] = array(
    'name' => 'edit own group_email content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own rider content'.
  $permissions['edit own rider content'] = array(
    'name' => 'edit own rider content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own title_field'.
  $permissions['edit own title_field'] = array(
    'name' => 'edit own title_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit title_field'.
  $permissions['edit title_field'] = array(
    'name' => 'edit title_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'import riders feeds'.
  $permissions['import riders feeds'] = array(
    'name' => 'import riders feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper riders'.
  $permissions['tamper riders'] = array(
    'name' => 'tamper riders',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock riders feeds'.
  $permissions['unlock riders feeds'] = array(
    'name' => 'unlock riders feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'use text format email'.
  $permissions['use text format email'] = array(
    'name' => 'use text format email',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any unpublished group_email content'.
  $permissions['view any unpublished group_email content'] = array(
    'name' => 'view any unpublished group_email content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished rider content'.
  $permissions['view any unpublished rider content'] = array(
    'name' => 'view any unpublished rider content',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view field_email_status'.
  $permissions['view field_email_status'] = array(
    'name' => 'view field_email_status',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ice_name'.
  $permissions['view field_ice_name'] = array(
    'name' => 'view field_ice_name',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ice_notes'.
  $permissions['view field_ice_notes'] = array(
    'name' => 'view field_ice_notes',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ice_phone_number'.
  $permissions['view field_ice_phone_number'] = array(
    'name' => 'view field_ice_phone_number',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_log'.
  $permissions['view field_log'] = array(
    'name' => 'view field_log',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Group Email Authoriser' => 'Group Email Authoriser',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_show_on_latest_feed'.
  $permissions['view field_show_on_latest_feed'] = array(
    'name' => 'view field_show_on_latest_feed',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_email_status'.
  $permissions['view own field_email_status'] = array(
    'name' => 'view own field_email_status',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ice_name'.
  $permissions['view own field_ice_name'] = array(
    'name' => 'view own field_ice_name',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ice_notes'.
  $permissions['view own field_ice_notes'] = array(
    'name' => 'view own field_ice_notes',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ice_phone_number'.
  $permissions['view own field_ice_phone_number'] = array(
    'name' => 'view own field_ice_phone_number',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_log'.
  $permissions['view own field_log'] = array(
    'name' => 'view own field_log',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Group Email Authoriser' => 'Group Email Authoriser',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_show_on_latest_feed'.
  $permissions['view own field_show_on_latest_feed'] = array(
    'name' => 'view own field_show_on_latest_feed',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own title_field'.
  $permissions['view own title_field'] = array(
    'name' => 'view own title_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view title_field'.
  $permissions['view title_field'] = array(
    'name' => 'view title_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
