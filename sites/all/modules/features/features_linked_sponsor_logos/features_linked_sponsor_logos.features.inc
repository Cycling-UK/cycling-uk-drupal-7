<?php

/**
 * @file
 * features_linked_sponsor_logos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_linked_sponsor_logos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function features_linked_sponsor_logos_image_default_styles() {
  $styles = array();

  // Exported image style: sponsor_logos_150.
  $styles['sponsor_logos_150'] = array(
    'label' => 'Sponsor logos 150px wide',
    'effects' => array(
      462 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function features_linked_sponsor_logos_paragraphs_info() {
  $items = array(
    'sponsor_logos_with_links' => array(
      'name' => 'Sponsor logos with links',
      'bundle' => 'sponsor_logos_with_links',
      'locked' => '1',
    ),
  );
  return $items;
}
