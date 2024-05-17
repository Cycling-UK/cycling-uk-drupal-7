<?php
/**
 * @file
 * features_blocks.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function features_blocks_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-hero-field_hero_type'.
  $field_instances['bean-hero-field_hero_type'] = array(
    'bundle' => 'hero',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_hero_type',
    'label' => 'Hero type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bean-hero-field_image_desktop'.
  $field_instances['bean-hero-field_image_desktop'] = array(
    'bundle' => 'hero',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image_desktop',
    'label' => 'Image - desktop',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/hero',
      'file_extensions' => 'png gif jpg jpeg',
      'image_replace' => array(
        'breakpoint_hero_desktop_1x' => array(
          'source_field' => 0,
        ),
        'breakpoint_hero_mobile_1x' => array(
          'source_field' => 'field_image_mobile',
        ),
        'breakpoint_hero_tablet_1x' => array(
          'source_field' => 'field_image_tablet',
        ),
      ),
      'max_filesize' => '',
      'max_resolution' => '1170x475',
      'min_resolution' => '1170x475',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
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
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bean-hero-field_image_mobile'.
  $field_instances['bean-hero-field_image_mobile'] = array(
    'bundle' => 'hero',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 1,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'hero',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image_mobile',
    'label' => 'Image - mobile',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/block',
      'file_extensions' => 'png gif jpg jpeg',
      'image_replace' => array(
        'breakpoint_hero_desktop_1x' => array(
          'source_field' => 'field_image_desktop',
        ),
        'breakpoint_hero_mobile_1x' => array(
          'source_field' => 0,
        ),
        'breakpoint_hero_tablet_1x' => array(
          'source_field' => 'field_image_tablet',
        ),
      ),
      'max_filesize' => '',
      'max_resolution' => '420x475',
      'min_resolution' => '420x475',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
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
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-hero-field_image_tablet'.
  $field_instances['bean-hero-field_image_tablet'] = array(
    'bundle' => 'hero',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image_tablet',
    'label' => 'Image - tablet',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/hero',
      'file_extensions' => 'png gif jpg jpeg',
      'image_replace' => array(
        'breakpoint_hero_desktop_1x' => array(
          'source_field' => 'field_image_desktop',
        ),
        'breakpoint_hero_mobile_1x' => array(
          'source_field' => 'field_image_mobile',
        ),
        'breakpoint_hero_tablet_1x' => array(
          'source_field' => 0,
        ),
      ),
      'max_filesize' => '',
      'max_resolution' => '768x475',
      'min_resolution' => '768x475',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
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
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-hero-field_markup'.
  $field_instances['bean-hero-field_markup'] = array(
    'bundle' => 'hero',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>An example button:</strong> <code>[a class="btn btn-standard btn-shadow" href="#"]View[/a]</code> <em>(Replace the square brackets with angled brackets)</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_markup',
    'label' => 'Markup',
    'required' => 0,
    'settings' => array(
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'bean-hero-field_teaser'.
  $field_instances['bean-hero-field_teaser'] = array(
    'bundle' => 'hero',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_teaser',
    'label' => 'Teaser',
    'required' => 0,
    'settings' => array(
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<strong>An example button:</strong> <code>[a class="btn btn-standard btn-shadow" href="#"]View[/a]</code> <em>(Replace the square brackets with angled brackets)</em>');
  t('Hero type');
  t('Image - desktop');
  t('Image - mobile');
  t('Image - tablet');
  t('Markup');
  t('Teaser');

  return $field_instances;
}
