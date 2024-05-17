<?php

/**
 * @file
 * content_type_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function content_type_paragraphs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function content_type_paragraphs_image_default_styles() {
  $styles = array();

  // Exported image style: 768_wide.
  $styles['768_wide'] = array(
    'label' => '768 wide',
    'effects' => array(
      462 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 768,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: altlarge.
  $styles['altlarge'] = array(
    'label' => 'Alt Large',
    'effects' => array(
      462 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1800,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: parallax_image.
  $styles['parallax_image'] = array(
    'label' => 'Parallax image',
    'effects' => array(
      466 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1600,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: parallax_standard_bg.
  $styles['parallax_standard_bg'] = array(
    'label' => 'Parallax Standard BG',
    'effects' => array(
      466 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1800,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      471 => array(
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function content_type_paragraphs_node_info() {
  $items = array(
    'paragraphs' => array(
      'name' => t('Paragraphs'),
      'base' => 'node_content',
      'description' => t('Build a flexible page layout using <em>paragraphs</em>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function content_type_paragraphs_paragraphs_info() {
  $items = array(
    'background_colour_and_text_panel' => array(
      'name' => 'Background colour and text panel',
      'bundle' => 'background_colour_and_text_panel',
      'locked' => '1',
    ),
    'background_image_with_panel' => array(
      'name' => 'Background image with panel',
      'bundle' => 'background_image_with_panel',
      'locked' => '1',
    ),
    'background_image_with_text_panel' => array(
      'name' => 'Background image with text panel',
      'bundle' => 'background_image_with_text_panel',
      'locked' => '1',
    ),
    'basic_related_content' => array(
      'name' => 'Basic related content',
      'bundle' => 'basic_related_content',
      'locked' => '1',
    ),
    'billboard_icons' => array(
      'name' => 'Billboard icons',
      'bundle' => 'billboard_icons',
      'locked' => '1',
    ),
    'billboard_text' => array(
      'name' => 'Billboard text',
      'bundle' => 'billboard_text',
      'locked' => '1',
    ),
    'block' => array(
      'name' => 'Block',
      'bundle' => 'block',
      'locked' => '1',
    ),
    'blockquote' => array(
      'name' => 'Blockquote',
      'bundle' => 'blockquote',
      'locked' => '1',
    ),
    'call_to_action_buttons' => array(
      'name' => 'Call to action buttons',
      'bundle' => 'call_to_action_buttons',
      'locked' => '1',
    ),
    'hero_image_title_teaser_and_cta' => array(
      'name' => 'Hero image, title, teaser and CTA',
      'bundle' => 'hero_image_title_teaser_and_cta',
      'locked' => '1',
    ),
    'join_icons' => array(
      'name' => 'Join icons',
      'bundle' => 'join_icons',
      'locked' => '1',
    ),
    'parallax_image' => array(
      'name' => 'Parallax image',
      'bundle' => 'parallax_image',
      'locked' => '1',
    ),
    'simple_buttons' => array(
      'name' => 'Simple buttons',
      'bundle' => 'simple_buttons',
      'locked' => '1',
    ),
    'simple_text_block' => array(
      'name' => 'Simple text block',
      'bundle' => 'simple_text_block',
      'locked' => '1',
    ),
    'text_field_with_one_or_more_colu' => array(
      'name' => 'Text field with one or more columns',
      'bundle' => 'text_field_with_one_or_more_colu',
      'locked' => '1',
    ),
    'text_left_and_image_right' => array(
      'name' => 'Text left and image right',
      'bundle' => 'text_left_and_image_right',
      'locked' => '1',
    ),
    'text_right_and_image_left' => array(
      'name' => 'Text right and image left',
      'bundle' => 'text_right_and_image_left',
      'locked' => '1',
    ),
    'video_player' => array(
      'name' => 'Video player',
      'bundle' => 'video_player',
      'locked' => '1',
    ),
    'youtube_video_player' => array(
      'name' => 'YouTube video player',
      'bundle' => 'youtube_video_player',
      'locked' => '1',
    ),
  );
  return $items;
}
