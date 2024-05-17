<?php

/**
 * @file
 * content_type_challenge.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_challenge_ctools_plugin_api($module = NULL, $api = NULL) {
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
function content_type_challenge_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function content_type_challenge_image_default_styles() {
  $styles = array();

  // Exported image style: challenge_grid_image.
  $styles['challenge_grid_image'] = array(
    'label' => 'Challenge grid image',
    'effects' => array(
      471 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 300,
        ),
        'weight' => -10,
      ),
      470 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#FFFFFF',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 400,
            'height' => 300,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: square_it.
  $styles['square_it'] = array(
    'label' => 'Scale and crop to square',
    'effects' => array(
      472 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 260,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function content_type_challenge_node_info() {
  $items = array(
    'cycle_challenge' => array(
      'name' => t('Challenge'),
      'base' => 'node_content',
      'description' => t('For Challenge views pages, currently limited to WFOC challenges and Bike Week challenges.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
