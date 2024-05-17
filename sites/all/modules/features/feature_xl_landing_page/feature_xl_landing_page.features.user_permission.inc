<?php

/**
 * @file
 * feature_xl_landing_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_xl_landing_page_user_default_permissions() {
  $permissions = array();

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

  // Exported permission: 'create paragraph content banner_image'.
  $permissions['create paragraph content banner_image'] = array(
    'name' => 'create paragraph content banner_image',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content billboard_icons'.
  $permissions['create paragraph content billboard_icons'] = array(
    'name' => 'create paragraph content billboard_icons',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content billboard_text'.
  $permissions['create paragraph content billboard_text'] = array(
    'name' => 'create paragraph content billboard_text',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content block'.
  $permissions['create paragraph content block'] = array(
    'name' => 'create paragraph content block',
    'roles' => array(),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content blocks'.
  $permissions['create paragraph content blocks'] = array(
    'name' => 'create paragraph content blocks',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content calls_to_action_buttons_x4_with_'.
  $permissions['create paragraph content calls_to_action_buttons_x4_with_'] = array(
    'name' => 'create paragraph content calls_to_action_buttons_x4_with_',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content code_field'.
  $permissions['create paragraph content code_field'] = array(
    'name' => 'create paragraph content code_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content faq'.
  $permissions['create paragraph content faq'] = array(
    'name' => 'create paragraph content faq',
    'roles' => array(
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content featured_articles_x4'.
  $permissions['create paragraph content featured_articles_x4'] = array(
    'name' => 'create paragraph content featured_articles_x4',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content featured_video'.
  $permissions['create paragraph content featured_video'] = array(
    'name' => 'create paragraph content featured_video',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content full_width_image_and_title'.
  $permissions['create paragraph content full_width_image_and_title'] = array(
    'name' => 'create paragraph content full_width_image_and_title',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content newsletter_story'.
  $permissions['create paragraph content newsletter_story'] = array(
    'name' => 'create paragraph content newsletter_story',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content text_field'.
  $permissions['create paragraph content text_field'] = array(
    'name' => 'create paragraph content text_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content videos'.
  $permissions['create paragraph content videos'] = array(
    'name' => 'create paragraph content videos',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content banner_image'.
  $permissions['delete paragraph content banner_image'] = array(
    'name' => 'delete paragraph content banner_image',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content billboard_icons'.
  $permissions['delete paragraph content billboard_icons'] = array(
    'name' => 'delete paragraph content billboard_icons',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content billboard_text'.
  $permissions['delete paragraph content billboard_text'] = array(
    'name' => 'delete paragraph content billboard_text',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content block'.
  $permissions['delete paragraph content block'] = array(
    'name' => 'delete paragraph content block',
    'roles' => array(),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content blocks'.
  $permissions['delete paragraph content blocks'] = array(
    'name' => 'delete paragraph content blocks',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content calls_to_action_buttons_x4_with_'.
  $permissions['delete paragraph content calls_to_action_buttons_x4_with_'] = array(
    'name' => 'delete paragraph content calls_to_action_buttons_x4_with_',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content code_field'.
  $permissions['delete paragraph content code_field'] = array(
    'name' => 'delete paragraph content code_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content faq'.
  $permissions['delete paragraph content faq'] = array(
    'name' => 'delete paragraph content faq',
    'roles' => array(
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content featured_articles_x4'.
  $permissions['delete paragraph content featured_articles_x4'] = array(
    'name' => 'delete paragraph content featured_articles_x4',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content featured_video'.
  $permissions['delete paragraph content featured_video'] = array(
    'name' => 'delete paragraph content featured_video',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content full_width_image_and_title'.
  $permissions['delete paragraph content full_width_image_and_title'] = array(
    'name' => 'delete paragraph content full_width_image_and_title',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content newsletter_story'.
  $permissions['delete paragraph content newsletter_story'] = array(
    'name' => 'delete paragraph content newsletter_story',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content text_field'.
  $permissions['delete paragraph content text_field'] = array(
    'name' => 'delete paragraph content text_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content videos'.
  $permissions['delete paragraph content videos'] = array(
    'name' => 'delete paragraph content videos',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'show format selection for paragraphs_item'.
  $permissions['show format selection for paragraphs_item'] = array(
    'name' => 'show format selection for paragraphs_item',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'update paragraph content banner_image'.
  $permissions['update paragraph content banner_image'] = array(
    'name' => 'update paragraph content banner_image',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content billboard_icons'.
  $permissions['update paragraph content billboard_icons'] = array(
    'name' => 'update paragraph content billboard_icons',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content billboard_text'.
  $permissions['update paragraph content billboard_text'] = array(
    'name' => 'update paragraph content billboard_text',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content block'.
  $permissions['update paragraph content block'] = array(
    'name' => 'update paragraph content block',
    'roles' => array(),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content blocks'.
  $permissions['update paragraph content blocks'] = array(
    'name' => 'update paragraph content blocks',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content calls_to_action_buttons_x4_with_'.
  $permissions['update paragraph content calls_to_action_buttons_x4_with_'] = array(
    'name' => 'update paragraph content calls_to_action_buttons_x4_with_',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content code_field'.
  $permissions['update paragraph content code_field'] = array(
    'name' => 'update paragraph content code_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content faq'.
  $permissions['update paragraph content faq'] = array(
    'name' => 'update paragraph content faq',
    'roles' => array(
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content featured_articles_x4'.
  $permissions['update paragraph content featured_articles_x4'] = array(
    'name' => 'update paragraph content featured_articles_x4',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content featured_video'.
  $permissions['update paragraph content featured_video'] = array(
    'name' => 'update paragraph content featured_video',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content full_width_image_and_title'.
  $permissions['update paragraph content full_width_image_and_title'] = array(
    'name' => 'update paragraph content full_width_image_and_title',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content newsletter_story'.
  $permissions['update paragraph content newsletter_story'] = array(
    'name' => 'update paragraph content newsletter_story',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content text_field'.
  $permissions['update paragraph content text_field'] = array(
    'name' => 'update paragraph content text_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content videos'.
  $permissions['update paragraph content videos'] = array(
    'name' => 'update paragraph content videos',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content banner_image'.
  $permissions['view paragraph content banner_image'] = array(
    'name' => 'view paragraph content banner_image',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content billboard_icons'.
  $permissions['view paragraph content billboard_icons'] = array(
    'name' => 'view paragraph content billboard_icons',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content billboard_text'.
  $permissions['view paragraph content billboard_text'] = array(
    'name' => 'view paragraph content billboard_text',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content block'.
  $permissions['view paragraph content block'] = array(
    'name' => 'view paragraph content block',
    'roles' => array(),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content blocks'.
  $permissions['view paragraph content blocks'] = array(
    'name' => 'view paragraph content blocks',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content calls_to_action_buttons_x4_with_'.
  $permissions['view paragraph content calls_to_action_buttons_x4_with_'] = array(
    'name' => 'view paragraph content calls_to_action_buttons_x4_with_',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content code_field'.
  $permissions['view paragraph content code_field'] = array(
    'name' => 'view paragraph content code_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content faq'.
  $permissions['view paragraph content faq'] = array(
    'name' => 'view paragraph content faq',
    'roles' => array(
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content featured_articles_x4'.
  $permissions['view paragraph content featured_articles_x4'] = array(
    'name' => 'view paragraph content featured_articles_x4',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content featured_video'.
  $permissions['view paragraph content featured_video'] = array(
    'name' => 'view paragraph content featured_video',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content full_width_image_and_title'.
  $permissions['view paragraph content full_width_image_and_title'] = array(
    'name' => 'view paragraph content full_width_image_and_title',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content newsletter_story'.
  $permissions['view paragraph content newsletter_story'] = array(
    'name' => 'view paragraph content newsletter_story',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Group Contributor' => 'Group Contributor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content text_field'.
  $permissions['view paragraph content text_field'] = array(
    'name' => 'view paragraph content text_field',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content videos'.
  $permissions['view paragraph content videos'] = array(
    'name' => 'view paragraph content videos',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}
