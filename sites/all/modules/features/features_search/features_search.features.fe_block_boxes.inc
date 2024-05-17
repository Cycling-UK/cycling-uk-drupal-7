<?php

/**
 * @file
 * features_search.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function features_search_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Blank block for use on search page';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'blank_block';
  $fe_block_boxes->body = '<p>&nbsp;</p>

<p>&nbsp;</p>
';

  $export['blank_block'] = $fe_block_boxes;

  return $export;
}
