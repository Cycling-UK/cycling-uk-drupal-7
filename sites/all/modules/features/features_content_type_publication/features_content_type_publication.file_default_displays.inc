<?php

/**
 * @file
 * features_content_type_publication.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function features_content_type_publication_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__media_soundcloud_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['audio__default__media_soundcloud_image'] = $file_display;

  return $export;
}
