<?php

/**
 * @file
 * feature_xl_landing_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_xl_landing_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function feature_xl_landing_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_xl_landing_page_image_default_styles() {
  $styles = array();

  // Exported image style: video_thumbnail_1400x790.
  $styles['video_thumbnail_1400x790'] = array(
    'label' => 'Video thumbnail 1400x790',
    'effects' => array(
      446 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1400,
          'height' => 790,
        ),
        'weight' => 1,
      ),
      451 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 2,
      ),
      456 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'center',
          'ypos' => 'center',
          'alpha' => 100,
          'scale' => 15,
          'path' => 'sites/all/themes/cyclinguk/images/system/play-icon.png',
        ),
        'weight' => 3,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function feature_xl_landing_page_node_info() {
  $items = array(
    'landing_page_xl' => array(
      'name' => t('Landing Page XL'),
      'base' => 'node_content',
      'description' => '',
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
function feature_xl_landing_page_paragraphs_info() {
  $items = array(
    'blocks' => array(
      'name' => 'View Blocks',
      'bundle' => 'blocks',
      'locked' => '1',
    ),
    'calls_to_action_buttons_x4_with_' => array(
      'name' => 'Calls to action buttons x4 with background image',
      'bundle' => 'calls_to_action_buttons_x4_with_',
      'locked' => '1',
    ),
    'code_field' => array(
      'name' => 'Code Field',
      'bundle' => 'code_field',
      'locked' => '1',
    ),
    'faq' => array(
      'name' => 'FAQ',
      'bundle' => 'faq',
      'locked' => '1',
    ),
    'featured_articles_x4' => array(
      'name' => 'Four featured articles',
      'bundle' => 'featured_articles_x4',
      'locked' => '1',
    ),
    'featured_video' => array(
      'name' => 'Featured Video',
      'bundle' => 'featured_video',
      'locked' => '1',
    ),
    'full_width_image_and_title' => array(
      'name' => 'Full width image and title',
      'bundle' => 'full_width_image_and_title',
      'locked' => '1',
    ),
    'text_field' => array(
      'name' => 'Text Field',
      'bundle' => 'text_field',
      'locked' => '1',
    ),
    'videos' => array(
      'name' => 'Four featured videos',
      'bundle' => 'videos',
      'locked' => '1',
    ),
  );
  return $items;
}
