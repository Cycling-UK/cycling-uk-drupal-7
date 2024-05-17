<?php

/**
 * @file
 * content_type_group_emails.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_group_emails_ctools_plugin_api($module = NULL, $api = NULL) {
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
function content_type_group_emails_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function content_type_group_emails_image_default_styles() {
  $styles = array();

  // Exported image style: 600_by_360px.
  $styles['600_by_360px'] = array(
    'label' => '600 by 360px',
    'effects' => array(
      346 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'crop_letterbox',
            1 => 'crop_landscape',
            2 => 'crop_square',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => 'original',
        ),
        'weight' => 0,
      ),
      351 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 560,
          'height' => 300,
        ),
        'weight' => 2,
      ),
      356 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
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
function content_type_group_emails_node_info() {
  $items = array(
    'group_email' => array(
      'name' => t('Group Email'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Subject'),
      'help' => '',
    ),
    'rider' => array(
      'name' => t('Rider'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Contact Group ID'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function content_type_group_emails_paragraphs_info() {
  $items = array(
    'banner_image' => array(
      'name' => 'Banner Image',
      'bundle' => 'banner_image',
      'locked' => '1',
    ),
    'newsletter_story' => array(
      'name' => 'Newsletter Story',
      'bundle' => 'newsletter_story',
      'locked' => '1',
    ),
  );
  return $items;
}
