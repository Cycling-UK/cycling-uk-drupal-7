<?php
/**
 * @file
 * features_100_women.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function features_100_women_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '10x_grid';
  $ds_view_mode->label = '10x Grid';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['10x_grid'] = $ds_view_mode;

  return $export;
}
