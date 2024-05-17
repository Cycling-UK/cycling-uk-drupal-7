<?php

/**
 * @file
 * content_type_billboards.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function content_type_billboards_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'administer paragraphs bundles'.
  $permissions['administer paragraphs bundles'] = array(
    'name' => 'administer paragraphs bundles',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'paragraphs',
  );

  // Exported permission: 'bypass paragraphs bundle content access'.
  $permissions['bypass paragraphs bundle content access'] = array(
    'name' => 'bypass paragraphs bundle content access',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create billboard content'.
  $permissions['create billboard content'] = array(
    'name' => 'create billboard content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create billboard_icon content'.
  $permissions['create billboard_icon content'] = array(
    'name' => 'create billboard_icon content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create billboard_text content'.
  $permissions['create billboard_text content'] = array(
    'name' => 'create billboard_text content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create paragraph content banner_image'.
  $permissions['create paragraph content banner_image'] = array(
    'name' => 'create paragraph content banner_image',
    'roles' => array(
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content billboard_icons'.
  $permissions['create paragraph content billboard_icons'] = array(
    'name' => 'create paragraph content billboard_icons',
    'roles' => array(
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content billboard_text'.
  $permissions['create paragraph content billboard_text'] = array(
    'name' => 'create paragraph content billboard_text',
    'roles' => array(
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content newsletter_story'.
  $permissions['create paragraph content newsletter_story'] = array(
    'name' => 'create paragraph content newsletter_story',
    'roles' => array(
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'path',
  );

  // Exported permission: 'delete any billboard content'.
  $permissions['delete any billboard content'] = array(
    'name' => 'delete any billboard content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any billboard_icon content'.
  $permissions['delete any billboard_icon content'] = array(
    'name' => 'delete any billboard_icon content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any billboard_text content'.
  $permissions['delete any billboard_text content'] = array(
    'name' => 'delete any billboard_text content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own billboard content'.
  $permissions['delete own billboard content'] = array(
    'name' => 'delete own billboard content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own billboard_icon content'.
  $permissions['delete own billboard_icon content'] = array(
    'name' => 'delete own billboard_icon content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own billboard_text content'.
  $permissions['delete own billboard_text content'] = array(
    'name' => 'delete own billboard_text content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete paragraph content banner_image'.
  $permissions['delete paragraph content banner_image'] = array(
    'name' => 'delete paragraph content banner_image',
    'roles' => array(
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content billboard_icons'.
  $permissions['delete paragraph content billboard_icons'] = array(
    'name' => 'delete paragraph content billboard_icons',
    'roles' => array(
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content billboard_text'.
  $permissions['delete paragraph content billboard_text'] = array(
    'name' => 'delete paragraph content billboard_text',
    'roles' => array(
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content newsletter_story'.
  $permissions['delete paragraph content newsletter_story'] = array(
    'name' => 'delete paragraph content newsletter_story',
    'roles' => array(
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'edit any billboard content'.
  $permissions['edit any billboard content'] = array(
    'name' => 'edit any billboard content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any billboard_icon content'.
  $permissions['edit any billboard_icon content'] = array(
    'name' => 'edit any billboard_icon content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any billboard_text content'.
  $permissions['edit any billboard_text content'] = array(
    'name' => 'edit any billboard_text content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own billboard content'.
  $permissions['edit own billboard content'] = array(
    'name' => 'edit own billboard content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own billboard_icon content'.
  $permissions['edit own billboard_icon content'] = array(
    'name' => 'edit own billboard_icon content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own billboard_text content'.
  $permissions['edit own billboard_text content'] = array(
    'name' => 'edit own billboard_text content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update paragraph content banner_image'.
  $permissions['update paragraph content banner_image'] = array(
    'name' => 'update paragraph content banner_image',
    'roles' => array(
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content billboard_icons'.
  $permissions['update paragraph content billboard_icons'] = array(
    'name' => 'update paragraph content billboard_icons',
    'roles' => array(
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content billboard_text'.
  $permissions['update paragraph content billboard_text'] = array(
    'name' => 'update paragraph content billboard_text',
    'roles' => array(
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content newsletter_story'.
  $permissions['update paragraph content newsletter_story'] = array(
    'name' => 'update paragraph content newsletter_story',
    'roles' => array(
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content banner_image'.
  $permissions['view paragraph content banner_image'] = array(
    'name' => 'view paragraph content banner_image',
    'roles' => array(
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content billboard_icons'.
  $permissions['view paragraph content billboard_icons'] = array(
    'name' => 'view paragraph content billboard_icons',
    'roles' => array(
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content billboard_text'.
  $permissions['view paragraph content billboard_text'] = array(
    'name' => 'view paragraph content billboard_text',
    'roles' => array(
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content newsletter_story'.
  $permissions['view paragraph content newsletter_story'] = array(
    'name' => 'view paragraph content newsletter_story',
    'roles' => array(
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}
