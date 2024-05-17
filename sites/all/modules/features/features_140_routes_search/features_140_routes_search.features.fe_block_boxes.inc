<?php

/**
 * @file
 * features_140_routes_search.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function features_140_routes_search_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Disclaimer block';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'disclaimer_block';
  $fe_block_boxes->body = '<h2 style="margin-top:0;">Disclaimer</h2>
<p>All routes are followed at a rider’s own risk. These routes are intended to be general guides: please observe all road signs, waymarks and other specific on-route instructions. Neither Cycling UK nor individual route authors can be held responsible for any errors or consequences that arise from using this route information.</p>

<p>Essentially: go out, be sensible, have fun.</p>';

  $export['disclaimer_block'] = $fe_block_boxes;

  return $export;
}
