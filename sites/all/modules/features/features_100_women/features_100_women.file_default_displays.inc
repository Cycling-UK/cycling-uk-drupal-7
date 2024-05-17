<?php
/**
 * @file
 * features_100_women.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function features_100_women_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_amp_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'crop_square',
    'image_link' => '',
    'amp_layout' => 'responsive',
    'amp_fixed_height' => '300',
  );
  $export['image__10x_grid__file_field_amp_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_amp_video';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'amp_video_height' => '175',
    'amp_video_width' => '350',
  );
  $export['image__10x_grid__file_field_amp_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_colorbox';
  $file_display->weight = -33;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_node_style' => '',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['image__10x_grid__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_direct_download';
  $file_display->weight = -34;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__10x_grid__file_field_direct_download'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_direct_download_accessible';
  $file_display->weight = -35;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__10x_grid__file_field_direct_download_accessible'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_direct_download_accessible_icon';
  $file_display->weight = -36;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__10x_grid__file_field_direct_download_accessible_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_direct_download_icon';
  $file_display->weight = -37;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__10x_grid__file_field_direct_download_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_direct_download_thumbnail_image';
  $file_display->weight = -38;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__10x_grid__file_field_direct_download_thumbnail_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_field_redirection';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'code' => '301',
    '404_if_empty' => 0,
    'page_restrictions' => '0',
    'pages' => '',
  );
  $export['image__10x_grid__file_field_field_redirection'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_file_default';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__10x_grid__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_file_download_link';
  $file_display->weight = -39;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__10x_grid__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_file_table';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__10x_grid__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_file_url_plain';
  $file_display->weight = -32;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__10x_grid__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_image';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '320x200',
    'image_link' => '',
  );
  $export['image__10x_grid__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_media_large_icon';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__10x_grid__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_openlayers_geofile_formatter';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'map_layer' => 'basic_map:basic_layer_osm_map',
  );
  $export['image__10x_grid__file_field_openlayers_geofile_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_owlcarousel_formatter';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'settings_group' => 'owlcarousel_settings_default',
  );
  $export['image__10x_grid__file_field_owlcarousel_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_picture';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'picture_mapping' => 'hero',
    'fallback_image_style' => '',
    'lazyload' => 1,
    'lazyload_aspect_ratio' => 1,
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'hero',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  $export['image__10x_grid__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__10x_grid__file_field_picture_sizes_formatter';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'sizes' => '(min-width: 0px)',
    'image_styles' => array(
      '_empty image_' => '_empty image_',
      'amp_metadata_content_image_min_696px_wide' => 0,
      'amp_metadata_logo_600x60' => 0,
      '320x200' => 0,
      '36x36' => 0,
      '640x240' => 0,
      '640x410' => 0,
      'colorbox_gallery' => 0,
      'content' => 0,
      'crop_landscape' => 0,
      'crop_letterbox' => 0,
      'crop_square' => 0,
      'gallery_attachment' => 0,
      'hero_desktop' => 0,
      'hero_mobile' => 0,
      'hero_tablet' => 0,
      'thumbnail' => 0,
      'medium' => 0,
      'large' => 0,
      'linkit_thumb' => 0,
      'media_thumbnail' => 0,
      '320x205' => 0,
      'logo' => 0,
      'square_thumbnail' => 0,
      'test' => 0,
      '_original image_' => 0,
    ),
    'fallback_image_style' => '_empty image_',
    'image_link' => '',
  );
  $export['image__10x_grid__file_field_picture_sizes_formatter'] = $file_display;

  return $export;
}
