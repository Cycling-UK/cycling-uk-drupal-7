<?php

/**
 * @file
 * paragraph_bundle_simple_video_player.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function paragraph_bundle_simple_video_player_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function paragraph_bundle_simple_video_player_paragraphs_info() {
  $items = array(
    'simple_video_player' => array(
      'name' => 'Simple Video Player',
      'bundle' => 'simple_video_player',
      'locked' => '1',
    ),
  );
  return $items;
}
