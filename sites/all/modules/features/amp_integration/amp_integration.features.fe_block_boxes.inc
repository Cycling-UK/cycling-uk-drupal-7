<?php

/**
 * @file
 * amp_integration.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function amp_integration_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AMP DFP Advert 1';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'amp_dfp_advert_1';
  $fe_block_boxes->body = '<amp-ad width=300 height=250
    type="doubleclick"
    data-slot="/22754483/sidebar_button_1"
    data-multi-size-validation="false">
  <div placeholder></div>
  <div fallback></div>
</amp-ad>';

  $export['amp_dfp_advert_1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AMP DFP Advert 2';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'amp_dfp_advert_2';
  $fe_block_boxes->body = '<amp-ad width=300 height=250
    type="doubleclick"
    data-slot="/22754483/sidebar_button_2"
    data-multi-size-validation="false">
  <div placeholder></div>
  <div fallback></div>
</amp-ad>';

  $export['amp_dfp_advert_2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AMP DFP Advert 3';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'amp_dfp_advert_3';
  $fe_block_boxes->body = '<amp-ad width=300 height=250
    type="doubleclick"
    data-slot="/22754483/sidebar_button_3"
    data-multi-size-validation="false">
  <div placeholder></div>
  <div fallback></div>
</amp-ad>';

  $export['amp_dfp_advert_3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AMP DFP Advert 4';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'amp_dfp_advert_4';
  $fe_block_boxes->body = '<amp-ad width=300 height=250
    type="doubleclick"
    data-slot="/22754483/sidebar_button_4"
    data-multi-size-validation="false">
  <div placeholder></div>
  <div fallback></div>
</amp-ad>';

  $export['amp_dfp_advert_4'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AMP DFP Advert 5';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'amp_dfp_advert_5';
  $fe_block_boxes->body = '<amp-ad width=300 height=250
    type="doubleclick"
    data-slot="/22754483/sidebar_button_5"
    data-multi-size-validation="false">
  <div placeholder></div>
  <div fallback></div>
</amp-ad>';

  $export['amp_dfp_advert_5'] = $fe_block_boxes;

  return $export;
}
