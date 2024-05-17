<?php

/**
 * @file
 * feature_member_benefits.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_member_benefits_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-member_benefit-field_background_colour'.
  $field_instances['node-member_benefit-field_background_colour'] = array(
    'bundle' => 'member_benefit',
    'default_value' => array(
      0 => array(
        'value' => 'paragraph_background_colour_blue',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_background_colour',
    'label' => 'Background colour',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'entityreference_live_preview' => array(
          'enabled' => 0,
          'mode' => 'default',
          'preview_type' => 'target',
        ),
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-member_benefit-field_hero'.
  $field_instances['node-member_benefit-field_hero'] = array(
    'bundle' => 'member_benefit',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'file_view_mode' => 'full',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_hero',
    'label' => 'Hero',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => '',
      'max_filesize' => '',
      'user_register_form' => FALSE,
      'wysiwyg_insert' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
          'soundcloud' => 0,
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'skyfish' => 0,
          'upload' => 0,
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 1,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'crop_landscape' => 'crop_landscape',
          'crop_letterbox' => 'crop_letterbox',
          'crop_square' => 'crop_square',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 1,
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-member_benefit-field_member_benefit_category'.
  $field_instances['node-member_benefit-field_member_benefit_category'] = array(
    'bundle' => 'member_benefit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'list_default',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_member_benefit_category',
    'label' => 'Member benefit category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'entityreference_live_preview' => array(
          'enabled' => 0,
          'mode' => 'default',
          'preview_type' => 'target',
        ),
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-member_benefit-field_paragraph'.
  $field_instances['node-member_benefit-field_paragraph'] = array(
    'bundle' => 'member_benefit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_paragraph',
    'label' => 'Paragraph',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'background_colour_and_text_panel' => 'background_colour_and_text_panel',
        'background_image_with_panel' => -1,
        'background_image_with_text_panel' => 'background_image_with_text_panel',
        'banner_image' => -1,
        'basic_related_content' => -1,
        'billboard_icons' => -1,
        'billboard_text' => -1,
        'block' => -1,
        'blockquote' => -1,
        'blocks' => -1,
        'calls_to_action_buttons_x4_with_' => -1,
        'code_field' => 'code_field',
        'faq' => 'faq',
        'featured_articles_x4' => -1,
        'featured_video' => -1,
        'file_downloads_simple' => -1,
        'full_width_image_and_title' => -1,
        'hero_image_title_teaser_and_cta' => -1,
        'issuu_publication_insert' => -1,
        'join_icons' => -1,
        'member_benefit' => 'member_benefit',
        'newsletter_story' => -1,
        'parallax_image' => 'parallax_image',
        'simple_buttons' => 'simple_buttons',
        'simple_text_block' => 'simple_text_block',
        'sponsor_logos_with_links' => -1,
        'terms_and_conditions' => 'terms_and_conditions',
        'text_field' => -1,
        'text_field_with_one_or_more_colu' => 'text_field_with_one_or_more_colu',
        'text_left_and_image_right' => -1,
        'text_right_and_image_left' => -1,
        'video_player' => -1,
        'videos' => -1,
      ),
      'bundle_weights' => array(
        'background_colour_and_text_panel' => 2,
        'background_image_with_panel' => 3,
        'background_image_with_text_panel' => 4,
        'banner_image' => 5,
        'basic_related_content' => 6,
        'billboard_icons' => 7,
        'billboard_text' => 8,
        'block' => 9,
        'blockquote' => 10,
        'blocks' => 11,
        'calls_to_action_buttons_x4_with_' => 12,
        'code_field' => 13,
        'faq' => 14,
        'featured_articles_x4' => 15,
        'featured_video' => 16,
        'file_downloads_simple' => 17,
        'full_width_image_and_title' => 18,
        'hero_image_title_teaser_and_cta' => 19,
        'issuu_publication_insert' => 20,
        'join_icons' => 21,
        'member_benefit' => 55,
        'newsletter_story' => 22,
        'parallax_image' => 23,
        'simple_buttons' => 24,
        'simple_text_block' => 25,
        'sponsor_logos_with_links' => 26,
        'terms_and_conditions' => 27,
        'text_field' => 28,
        'text_field_with_one_or_more_colu' => 29,
        'text_left_and_image_right' => 30,
        'text_right_and_image_left' => 31,
        'video_player' => 33,
        'videos' => 32,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-member_benefit-field_teaser'.
  $field_instances['node-member_benefit-field_teaser'] = array(
    'bundle' => 'member_benefit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_teaser',
    'label' => 'Teaser',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'basic' => 'basic',
          'code' => 'code',
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'paragraphs' => 'paragraphs',
          'plain_text' => 'plain_text',
          'public_filter' => 'public_filter',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'basic' => array(
              'weight' => -8,
            ),
            'code' => array(
              'weight' => -6,
            ),
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -7,
            ),
            'paragraphs' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
            'public_filter' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-member_benefit-field_member_only_content'.
  $field_instances['paragraphs_item-member_benefit-field_member_only_content'] = array(
    'bundle' => 'member_benefit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This content will only be displayed to users who <strong>are</strong> logged into the website.',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'How to claim your member benefit',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_member_only_content',
    'label' => 'Member only content',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'basic' => 0,
          'code' => 'code',
          'email' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'paragraphs' => 'paragraphs',
          'plain_text' => 0,
          'public_filter' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'basic' => array(
              'weight' => -8,
            ),
            'code' => array(
              'weight' => -6,
            ),
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -7,
            ),
            'paragraphs' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
            'public_filter' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_label_summary' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_summary' => '',
        'maxlength_js_truncate_html' => 0,
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-member_benefit-field_public_only_content'.
  $field_instances['paragraphs_item-member_benefit-field_public_only_content'] = array(
    'bundle' => 'member_benefit',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<p>You must be a member of Cycling UK to take advantage of this benefit.</p>

<p>If you are a member then please <a href="/user/login">login</a>.</p>

<p><strong>Not a member? Then&nbsp;<a href="/join">join Cycling UK</a> today.</strong></p>
',
        'format' => 'paragraphs',
      ),
    ),
    'deleted' => 0,
    'description' => 'This content will be displayed to users who are <strong>not</strong> logged into the website.',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Can\'t see the member benefit?',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_public_only_content',
    'label' => 'Public only content',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'basic' => 0,
          'code' => 'code',
          'email' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'paragraphs' => 'paragraphs',
          'plain_text' => 0,
          'public_filter' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'basic' => array(
              'weight' => -8,
            ),
            'code' => array(
              'weight' => -6,
            ),
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -7,
            ),
            'paragraphs' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
            'public_filter' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_label_summary' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_summary' => '',
        'maxlength_js_truncate_html' => 0,
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Background colour');
  t('Hero');
  t('Member benefit category');
  t('Member only content');
  t('Paragraph');
  t('Public only content');
  t('Teaser');
  t('This content will be displayed to users who are <strong>not</strong> logged into the website.');
  t('This content will only be displayed to users who <strong>are</strong> logged into the website.');

  return $field_instances;
}
