<?php

/**
 * @file
 * content_type_challenge.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_challenge_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-cycle_challenge-body'.
  $field_instances['node-cycle_challenge-body'] = array(
    'bundle' => 'cycle_challenge',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
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
        'maxlength_js' => 350,
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_label_summary' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_summary' => 350,
        'maxlength_js_truncate_html' => 0,
        'rows' => 4,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-cycle_challenge-field_challenge_group_and_type'.
  $field_instances['node-cycle_challenge-field_challenge_group_and_type'] = array(
    'bundle' => 'cycle_challenge',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'First select the challenge group. The challenge type to select will follow.',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_challenge_group_and_type',
    'label' => 'Challenge group and type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'view' => array(
      'args' => array(),
      'display_name' => '',
      'match_operator' => 'CONTAINS',
      'size' => '',
      'view_name' => '',
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'shs',
      'settings' => array(
        'shs' => array(
          'create_new_levels' => 0,
          'create_new_terms' => 0,
          'force_deepest' => 1,
        ),
      ),
      'type' => 'taxonomy_shs',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-cycle_challenge-field_challenge_link'.
  $field_instances['node-cycle_challenge-field_challenge_link'] = array(
    'bundle' => 'cycle_challenge',
    'default_value' => array(
      0 => array(
        'title' => 'Take the challenge',
        'url' => 'https://www.cyclinguk.org/',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 11,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_challenge_link',
    'label' => 'Challenge link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => 'go-challenge btn',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'required',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 20,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-cycle_challenge-field_facebook'.
  $field_instances['node-cycle_challenge-field_facebook'] = array(
    'bundle' => 'cycle_challenge',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_facebook',
    'label' => 'Facebook page',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'value',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '<i class="fab fa-facebook-square"></i>',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-cycle_challenge-field_group_website'.
  $field_instances['node-cycle_challenge-field_group_website'] = array(
    'bundle' => 'cycle_challenge',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 9,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_group_website',
    'label' => 'Cycling group page',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'value',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '<i class="fal fa-biking"></i>',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-cycle_challenge-field_headline'.
  $field_instances['node-cycle_challenge-field_headline'] = array(
    'bundle' => 'cycle_challenge',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_headline',
    'label' => 'Headline',
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
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-cycle_challenge-field_image'.
  $field_instances['node-cycle_challenge-field_image'] = array(
    'bundle' => 'cycle_challenge',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'image_link' => '',
          'image_style' => 'square_it',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'alt_field_default' => '',
      'alt_field_hide' => 0,
      'alt_field_sync_title' => 0,
      'alt_field_update_on_edit' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => array(
        'enabled' => 0,
      ),
      'image_field_caption_wrapper' => array(
        'image_field_caption_default' => array(
          'format' => 'filtered_html',
          'value' => '',
        ),
      ),
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'title_field_default' => '',
      'title_field_hide' => 0,
      'title_field_update_on_edit' => 0,
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
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
      ),
      'type' => 'media_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-cycle_challenge-field_instagram'.
  $field_instances['node-cycle_challenge-field_instagram'] = array(
    'bundle' => 'cycle_challenge',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 8,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 5,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_instagram',
    'label' => 'Instagram page',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'value',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '<i class="fab fa-instagram"></i>',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-cycle_challenge-field_linkedin'.
  $field_instances['node-cycle_challenge-field_linkedin'] = array(
    'bundle' => 'cycle_challenge',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 10,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 7,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_linkedin',
    'label' => 'LinkedIn page',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'value',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '<i class="fab fa-linkedin"></i>',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-cycle_challenge-field_twitter'.
  $field_instances['node-cycle_challenge-field_twitter'] = array(
    'bundle' => 'cycle_challenge',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_twitter',
    'label' => 'Twitter page',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'value',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '<i class="fab fa-twitter"></i>',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-cycle_challenge-field_website'.
  $field_instances['node-cycle_challenge-field_website'] = array(
    'bundle' => 'cycle_challenge',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 8,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_website',
    'label' => 'Website page',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'value',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '<i class="fal fa-globe"></i>',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-cycle_challenge-field_youtube'.
  $field_instances['node-cycle_challenge-field_youtube'] = array(
    'bundle' => 'cycle_challenge',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 9,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'link_default',
        'weight' => 6,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_youtube',
    'label' => 'YouTube page',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'value',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '<i class="fab fa-youtube"></i>',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'taxonomy_term-challenge-field_level'.
  $field_instances['taxonomy_term-challenge-field_level'] = array(
    'bundle' => 'challenge',
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
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_level',
    'label' => 'Level',
    'required' => 0,
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
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Challenge group and type');
  t('Challenge link');
  t('Cycling group page');
  t('Facebook page');
  t('First select the challenge group. The challenge type to select will follow.');
  t('Headline');
  t('Image');
  t('Instagram page');
  t('Level');
  t('LinkedIn page');
  t('Twitter page');
  t('Website page');
  t('YouTube page');

  return $field_instances;
}
