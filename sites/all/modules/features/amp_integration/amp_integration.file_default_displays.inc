<?php
/**
 * @file
 * amp_integration.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function amp_integration_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_amp_image';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'amp_metadata_content_image_min_696px_wide',
    'image_link' => '',
    'amp_layout' => 'responsive',
    'amp_fixed_height' => '300',
  );
  $export['image__default__file_field_amp_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_amp_video';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'amp_video_height' => '175',
    'amp_video_width' => '350',
  );
  $export['image__default__file_field_amp_video'] = $file_display;

  return $export;
}
