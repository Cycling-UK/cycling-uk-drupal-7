<?php

/**
 * @file
 * content_type_paragraphs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function content_type_paragraphs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer paragraphs id'.
  $permissions['administer paragraphs id'] = array(
    'name' => 'administer paragraphs id',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'paragraphs_id',
  );

  // Exported permission: 'convert from paragraphs'.
  $permissions['convert from paragraphs'] = array(
    'name' => 'convert from paragraphs',
    'roles' => array(),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to paragraphs'.
  $permissions['convert to paragraphs'] = array(
    'name' => 'convert to paragraphs',
    'roles' => array(),
    'module' => 'node_convert',
  );

  // Exported permission: 'create paragraph content background_colour_and_text_panel'.
  $permissions['create paragraph content background_colour_and_text_panel'] = array(
    'name' => 'create paragraph content background_colour_and_text_panel',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content background_image_with_panel'.
  $permissions['create paragraph content background_image_with_panel'] = array(
    'name' => 'create paragraph content background_image_with_panel',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content background_image_with_text_panel'.
  $permissions['create paragraph content background_image_with_text_panel'] = array(
    'name' => 'create paragraph content background_image_with_text_panel',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content basic_related_content'.
  $permissions['create paragraph content basic_related_content'] = array(
    'name' => 'create paragraph content basic_related_content',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content blockquote'.
  $permissions['create paragraph content blockquote'] = array(
    'name' => 'create paragraph content blockquote',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content call_to_action_buttons'.
  $permissions['create paragraph content call_to_action_buttons'] = array(
    'name' => 'create paragraph content call_to_action_buttons',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content hero_image_title_teaser_and_cta'.
  $permissions['create paragraph content hero_image_title_teaser_and_cta'] = array(
    'name' => 'create paragraph content hero_image_title_teaser_and_cta',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content join_icons'.
  $permissions['create paragraph content join_icons'] = array(
    'name' => 'create paragraph content join_icons',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content parallax_image'.
  $permissions['create paragraph content parallax_image'] = array(
    'name' => 'create paragraph content parallax_image',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content simple_buttons'.
  $permissions['create paragraph content simple_buttons'] = array(
    'name' => 'create paragraph content simple_buttons',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content simple_text_block'.
  $permissions['create paragraph content simple_text_block'] = array(
    'name' => 'create paragraph content simple_text_block',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content text_field_with_one_or_more_colu'.
  $permissions['create paragraph content text_field_with_one_or_more_colu'] = array(
    'name' => 'create paragraph content text_field_with_one_or_more_colu',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content text_left_and_image_right'.
  $permissions['create paragraph content text_left_and_image_right'] = array(
    'name' => 'create paragraph content text_left_and_image_right',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content text_right_and_image_left'.
  $permissions['create paragraph content text_right_and_image_left'] = array(
    'name' => 'create paragraph content text_right_and_image_left',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content video_player'.
  $permissions['create paragraph content video_player'] = array(
    'name' => 'create paragraph content video_player',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content youtube_video_player'.
  $permissions['create paragraph content youtube_video_player'] = array(
    'name' => 'create paragraph content youtube_video_player',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraphs content'.
  $permissions['create paragraphs content'] = array(
    'name' => 'create paragraphs content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any paragraphs content'.
  $permissions['delete any paragraphs content'] = array(
    'name' => 'delete any paragraphs content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own paragraphs content'.
  $permissions['delete own paragraphs content'] = array(
    'name' => 'delete own paragraphs content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete paragraph content background_colour_and_text_panel'.
  $permissions['delete paragraph content background_colour_and_text_panel'] = array(
    'name' => 'delete paragraph content background_colour_and_text_panel',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content background_image_with_panel'.
  $permissions['delete paragraph content background_image_with_panel'] = array(
    'name' => 'delete paragraph content background_image_with_panel',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content background_image_with_text_panel'.
  $permissions['delete paragraph content background_image_with_text_panel'] = array(
    'name' => 'delete paragraph content background_image_with_text_panel',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content basic_related_content'.
  $permissions['delete paragraph content basic_related_content'] = array(
    'name' => 'delete paragraph content basic_related_content',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content blockquote'.
  $permissions['delete paragraph content blockquote'] = array(
    'name' => 'delete paragraph content blockquote',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content call_to_action_buttons'.
  $permissions['delete paragraph content call_to_action_buttons'] = array(
    'name' => 'delete paragraph content call_to_action_buttons',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content hero_image_title_teaser_and_cta'.
  $permissions['delete paragraph content hero_image_title_teaser_and_cta'] = array(
    'name' => 'delete paragraph content hero_image_title_teaser_and_cta',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content join_icons'.
  $permissions['delete paragraph content join_icons'] = array(
    'name' => 'delete paragraph content join_icons',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content parallax_image'.
  $permissions['delete paragraph content parallax_image'] = array(
    'name' => 'delete paragraph content parallax_image',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content simple_buttons'.
  $permissions['delete paragraph content simple_buttons'] = array(
    'name' => 'delete paragraph content simple_buttons',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content simple_text_block'.
  $permissions['delete paragraph content simple_text_block'] = array(
    'name' => 'delete paragraph content simple_text_block',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content text_field_with_one_or_more_colu'.
  $permissions['delete paragraph content text_field_with_one_or_more_colu'] = array(
    'name' => 'delete paragraph content text_field_with_one_or_more_colu',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content text_left_and_image_right'.
  $permissions['delete paragraph content text_left_and_image_right'] = array(
    'name' => 'delete paragraph content text_left_and_image_right',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content text_right_and_image_left'.
  $permissions['delete paragraph content text_right_and_image_left'] = array(
    'name' => 'delete paragraph content text_right_and_image_left',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content video_player'.
  $permissions['delete paragraph content video_player'] = array(
    'name' => 'delete paragraph content video_player',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content youtube_video_player'.
  $permissions['delete paragraph content youtube_video_player'] = array(
    'name' => 'delete paragraph content youtube_video_player',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'edit any paragraphs content'.
  $permissions['edit any paragraphs content'] = array(
    'name' => 'edit any paragraphs content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own paragraphs content'.
  $permissions['edit own paragraphs content'] = array(
    'name' => 'edit own paragraphs content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update paragraph content background_colour_and_text_panel'.
  $permissions['update paragraph content background_colour_and_text_panel'] = array(
    'name' => 'update paragraph content background_colour_and_text_panel',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content background_image_with_panel'.
  $permissions['update paragraph content background_image_with_panel'] = array(
    'name' => 'update paragraph content background_image_with_panel',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content background_image_with_text_panel'.
  $permissions['update paragraph content background_image_with_text_panel'] = array(
    'name' => 'update paragraph content background_image_with_text_panel',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content basic_related_content'.
  $permissions['update paragraph content basic_related_content'] = array(
    'name' => 'update paragraph content basic_related_content',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content blockquote'.
  $permissions['update paragraph content blockquote'] = array(
    'name' => 'update paragraph content blockquote',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content call_to_action_buttons'.
  $permissions['update paragraph content call_to_action_buttons'] = array(
    'name' => 'update paragraph content call_to_action_buttons',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content hero_image_title_teaser_and_cta'.
  $permissions['update paragraph content hero_image_title_teaser_and_cta'] = array(
    'name' => 'update paragraph content hero_image_title_teaser_and_cta',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content join_icons'.
  $permissions['update paragraph content join_icons'] = array(
    'name' => 'update paragraph content join_icons',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content parallax_image'.
  $permissions['update paragraph content parallax_image'] = array(
    'name' => 'update paragraph content parallax_image',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content simple_buttons'.
  $permissions['update paragraph content simple_buttons'] = array(
    'name' => 'update paragraph content simple_buttons',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content simple_text_block'.
  $permissions['update paragraph content simple_text_block'] = array(
    'name' => 'update paragraph content simple_text_block',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content text_field_with_one_or_more_colu'.
  $permissions['update paragraph content text_field_with_one_or_more_colu'] = array(
    'name' => 'update paragraph content text_field_with_one_or_more_colu',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content text_left_and_image_right'.
  $permissions['update paragraph content text_left_and_image_right'] = array(
    'name' => 'update paragraph content text_left_and_image_right',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content text_right_and_image_left'.
  $permissions['update paragraph content text_right_and_image_left'] = array(
    'name' => 'update paragraph content text_right_and_image_left',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content video_player'.
  $permissions['update paragraph content video_player'] = array(
    'name' => 'update paragraph content video_player',
    'roles' => array(
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content youtube_video_player'.
  $permissions['update paragraph content youtube_video_player'] = array(
    'name' => 'update paragraph content youtube_video_player',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'use text format paragraphs'.
  $permissions['use text format paragraphs'] = array(
    'name' => 'use text format paragraphs',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any unpublished paragraphs content'.
  $permissions['view any unpublished paragraphs content'] = array(
    'name' => 'view any unpublished paragraphs content',
    'roles' => array(
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view paragraph content background_colour_and_text_panel'.
  $permissions['view paragraph content background_colour_and_text_panel'] = array(
    'name' => 'view paragraph content background_colour_and_text_panel',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content background_image_with_panel'.
  $permissions['view paragraph content background_image_with_panel'] = array(
    'name' => 'view paragraph content background_image_with_panel',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content background_image_with_text_panel'.
  $permissions['view paragraph content background_image_with_text_panel'] = array(
    'name' => 'view paragraph content background_image_with_text_panel',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content basic_related_content'.
  $permissions['view paragraph content basic_related_content'] = array(
    'name' => 'view paragraph content basic_related_content',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Comments Approved' => 'Comments Approved',
      'Content Author (Do not delete user)' => 'Content Author (Do not delete user)',
      'Contributor' => 'Contributor',
      'Course Administrator' => 'Course Administrator',
      'Editorial Editor' => 'Editorial Editor',
      'Group Contributor' => 'Group Contributor',
      'Group Email Authoriser' => 'Group Email Authoriser',
      'Local Campaigner' => 'Local Campaigner',
      'Member' => 'Member',
      'Power User' => 'Power User',
      'Shop Administrator' => 'Shop Administrator',
      'Shop Technical Administrator' => 'Shop Technical Administrator',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content blockquote'.
  $permissions['view paragraph content blockquote'] = array(
    'name' => 'view paragraph content blockquote',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content call_to_action_buttons'.
  $permissions['view paragraph content call_to_action_buttons'] = array(
    'name' => 'view paragraph content call_to_action_buttons',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content hero_image_title_teaser_and_cta'.
  $permissions['view paragraph content hero_image_title_teaser_and_cta'] = array(
    'name' => 'view paragraph content hero_image_title_teaser_and_cta',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content join_icons'.
  $permissions['view paragraph content join_icons'] = array(
    'name' => 'view paragraph content join_icons',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content parallax_image'.
  $permissions['view paragraph content parallax_image'] = array(
    'name' => 'view paragraph content parallax_image',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content simple_buttons'.
  $permissions['view paragraph content simple_buttons'] = array(
    'name' => 'view paragraph content simple_buttons',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content simple_text_block'.
  $permissions['view paragraph content simple_text_block'] = array(
    'name' => 'view paragraph content simple_text_block',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content text_field_with_one_or_more_colu'.
  $permissions['view paragraph content text_field_with_one_or_more_colu'] = array(
    'name' => 'view paragraph content text_field_with_one_or_more_colu',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content text_left_and_image_right'.
  $permissions['view paragraph content text_left_and_image_right'] = array(
    'name' => 'view paragraph content text_left_and_image_right',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content text_right_and_image_left'.
  $permissions['view paragraph content text_right_and_image_left'] = array(
    'name' => 'view paragraph content text_right_and_image_left',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content video_player'.
  $permissions['view paragraph content video_player'] = array(
    'name' => 'view paragraph content video_player',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content youtube_video_player'.
  $permissions['view paragraph content youtube_video_player'] = array(
    'name' => 'view paragraph content youtube_video_player',
    'roles' => array(
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
      'non_authenticated' => 'non_authenticated',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}
