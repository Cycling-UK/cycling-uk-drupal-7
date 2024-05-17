<?php

/**
 * @file
 * content_type_billboards.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function content_type_billboards_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Billboard main site button';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'billboard_main_site_button';
  $fe_block_boxes->body = '<a class="billboard-main-site-button" href="/">&#60; Main site</a>';

  $export['billboard_main_site_button'] = $fe_block_boxes;

  return $export;
}
