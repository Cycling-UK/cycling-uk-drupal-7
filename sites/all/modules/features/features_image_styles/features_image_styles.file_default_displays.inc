<?php

/**
 * @file
 * features_image_styles.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function features_image_styles_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_file_audio';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['audio__wysiwyg__file_field_file_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__wysiwyg__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['audio__wysiwyg__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__wysiwyg__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__wysiwyg__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['audio__wysiwyg__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_openlayers_geofile_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'map_layer' => 'openlayers_map_ui_default:openlayers_layer_tile_osm',
  );
  $export['audio__wysiwyg__file_field_openlayers_geofile_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['document__default__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['document__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '36x36',
  );
  $export['document__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_openlayers_geofile_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'map_layer' => 'openlayers_map_ui_default:openlayers_layer_tile_osm',
  );
  $export['document__default__file_field_openlayers_geofile_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['document__wysiwyg__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['document__wysiwyg__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['document__wysiwyg__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__wysiwyg__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '36x36',
  );
  $export['document__wysiwyg__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_openlayers_geofile_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'map_layer' => 'openlayers_map_ui_default:openlayers_layer_tile_osm',
  );
  $export['document__wysiwyg__file_field_openlayers_geofile_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_colorbox';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_node_style' => 'content',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'colorbox_gallery',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $export['image__default__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_field_redirection';
  $file_display->weight = -39;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'code' => '301',
    '404_if_empty' => 0,
    'page_restrictions' => '0',
    'pages' => '',
  );
  $export['image__default__file_field_field_redirection'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_file_download_link';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__default__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_file_table';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_file_url_plain';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_media_large_icon';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_openlayers_geofile_formatter';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'map_layer' => 'openlayers_map_ui_default:openlayers_layer_tile_osm',
  );
  $export['image__default__file_field_openlayers_geofile_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_owlcarousel_formatter';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'settings_group' => 'owlcarousel_settings_default',
  );
  $export['image__default__file_field_owlcarousel_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_picture';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'picture_mapping' => 'hd_view',
    'fallback_image_style' => 'content',
    'lazyload' => 1,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'hero',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'title',
      'colorbox_caption_custom' => '',
    ),
  );
  $export['image__default__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_picture_sizes_formatter';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'sizes' => '(min-width: 0px)',
    'image_styles' => array(
      '_empty image_' => '_empty image_',
      'amp_metadata_content_image_min_696px_wide' => 0,
      'amp_metadata_logo_600x60' => 0,
      '600_by_360px' => 0,
      '320x200' => 0,
      '320x205' => 0,
      '36x36' => 0,
      '600_wide' => 0,
      '640x240' => 0,
      '640x360' => 0,
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
      'logo' => 0,
      'original' => 0,
      'skyfish_thumbnail' => 0,
      'square_thumbnail' => 0,
      'video_thumbnail_960x540' => 0,
      'avatar_100x100' => 0,
      'avatar_220x220' => 0,
      'thumbnail' => 0,
      'medium' => 0,
      'large' => 0,
      'linkit_thumb' => 0,
      'media_thumbnail' => 0,
      'hd_hero_homepage' => 0,
      'hd_letterbox' => 0,
      'hd_teaser_landscape' => 0,
      'hd_teaser_thumbnail_landscape' => 0,
      'hd_teaser_thumbnail_square' => 0,
      'hero_desktop__2000x811-mc-ri_' => 0,
      'test' => 0,
      '_original image_' => 0,
    ),
    'fallback_image_style' => '320x200',
    'image_link' => '',
    'lazyload_data_attributes' => '0',
    'lazyload_class' => '',
  );
  $export['image__default__file_field_picture_sizes_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_colorbox';
  $file_display->weight = -32;
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
  $export['image__full__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_field_redirection';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'code' => '301',
    '404_if_empty' => 0,
    'page_restrictions' => '0',
    'pages' => '',
  );
  $export['image__full__file_field_field_redirection'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_file_default';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__full__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_file_download_link';
  $file_display->weight = -38;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__full__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_file_table';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__full__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_file_url_plain';
  $file_display->weight = -45;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['image__full__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_image';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'image_link' => '',
  );
  $export['image__full__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_media_large_icon';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__full__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_openlayers_geofile_formatter';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'map_layer' => 'openlayers_map_ui_default:openlayers_layer_tile_osm',
  );
  $export['image__full__file_field_openlayers_geofile_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_owlcarousel_formatter';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'settings_group' => 'owlcarousel_settings_default',
  );
  $export['image__full__file_field_owlcarousel_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_picture';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'picture_mapping' => 'hero',
    'fallback_image_style' => 'hero_desktop',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => 'colorbox_gallery',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'title',
      'colorbox_caption_custom' => '',
    ),
  );
  $export['image__full__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_picture_sizes_formatter';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'sizes' => '(min-width: 0px)',
    'image_styles' => array(
      '_empty image_' => '_empty image_',
      'amp_metadata_content_image_min_696px_wide' => 0,
      'amp_metadata_logo_600x60' => 0,
      '600_by_360px' => 0,
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
      'skyfish_thumbnail' => 0,
      'thumbnail' => 0,
      'medium' => 0,
      'large' => 0,
      'linkit_thumb' => 0,
      'media_thumbnail' => 0,
      '320x205' => 0,
      '600_wide' => 0,
      'logo' => 0,
      'original' => 0,
      'square_thumbnail' => 0,
      'test' => 0,
      '_original image_' => 0,
    ),
    'fallback_image_style' => '320x200',
    'image_link' => '',
  );
  $export['image__full__file_field_picture_sizes_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_colorbox';
  $file_display->weight = 0;
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
  $export['image__preview__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__preview__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__preview__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__preview__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_openlayers_geofile_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'map_layer' => 'openlayers_map_ui_default:openlayers_layer_tile_osm',
  );
  $export['image__preview__file_field_openlayers_geofile_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_owlcarousel_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'settings_group' => 'owlcarousel_settings_default',
  );
  $export['image__preview__file_field_owlcarousel_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'picture_mapping' => 'hero',
    'fallback_image_style' => '',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'hero',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  $export['image__preview__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_picture_sizes_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'sizes' => '(min-width: 0px)',
    'image_styles' => array(
      '_empty image_' => '_empty image_',
      '320x200' => 0,
      '36x36' => 0,
      '640x410' => 0,
      'gallery_attachment' => 0,
      'hero_desktop' => 0,
      'hero_mobile' => 0,
      'hero_tablet' => 0,
      'thumbnail' => 0,
      'medium' => 0,
      'large' => 0,
      'linkit_thumb' => 0,
      'media_thumbnail' => 0,
      'content' => 0,
      '_original image_' => 0,
    ),
    'fallback_image_style' => '320x200',
    'image_link' => '',
  );
  $export['image__preview__file_field_picture_sizes_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_colorbox';
  $file_display->weight = 0;
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
  $export['image__teaser__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__teaser__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__teaser__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__teaser__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__teaser__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_openlayers_geofile_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'map_layer' => 'openlayers_map_ui_default:openlayers_layer_tile_osm',
  );
  $export['image__teaser__file_field_openlayers_geofile_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_owlcarousel_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'settings_group' => 'owlcarousel_settings_default',
  );
  $export['image__teaser__file_field_owlcarousel_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'picture_mapping' => 'hd_view',
    'fallback_image_style' => 'hd_teaser_landscape',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'hero',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  $export['image__teaser__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_picture_sizes_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'sizes' => '(min-width: 0px)',
    'image_styles' => array(
      '_empty image_' => '_empty image_',
      'amp_metadata_content_image_min_696px_wide' => 0,
      'amp_metadata_logo_600x60' => 0,
      '600_by_360px' => 0,
      '320x200' => 0,
      '320x205' => 0,
      '36x36' => 0,
      '600_wide' => 0,
      '640x240' => 0,
      '640x360' => 0,
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
      'logo' => 0,
      'original' => 0,
      'skyfish_thumbnail' => 0,
      'square_thumbnail' => 0,
      'video_thumbnail_960x540' => 0,
      'avatar_100x100' => 0,
      'avatar_220x220' => 0,
      'thumbnail' => 0,
      'medium' => 0,
      'large' => 0,
      'linkit_thumb' => 0,
      'media_thumbnail' => 0,
      'hd_hero_homepage' => 0,
      'hd_letterbox' => 0,
      'hd_teaser_landscape' => 0,
      'hd_teaser_thumbnail_landscape' => 0,
      'hd_teaser_thumbnail_square' => 0,
      'hero_desktop__2000x811-mc-ri_' => 0,
      'test' => 0,
      '_original image_' => 0,
    ),
    'fallback_image_style' => '320x200',
    'image_link' => '',
    'lazyload_data_attributes' => '0',
    'lazyload_class' => '',
  );
  $export['image__teaser__file_field_picture_sizes_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views320x200__file_field_colorbox';
  $file_display->weight = 0;
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
  $export['image__views320x200__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views320x200__file_field_field_redirection';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'code' => '301',
    '404_if_empty' => 0,
    'page_restrictions' => '0',
    'pages' => '',
  );
  $export['image__views320x200__file_field_field_redirection'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views320x200__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__views320x200__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views320x200__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__views320x200__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views320x200__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__views320x200__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views320x200__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__views320x200__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views320x200__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '320x200',
    'image_link' => '',
  );
  $export['image__views320x200__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views320x200__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__views320x200__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views320x200__file_field_openlayers_geofile_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'map_layer' => 'openlayers_map_ui_default:openlayers_layer_tile_osm',
  );
  $export['image__views320x200__file_field_openlayers_geofile_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views320x200__file_field_owlcarousel_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'settings_group' => 'owlcarousel_settings_default',
  );
  $export['image__views320x200__file_field_owlcarousel_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views320x200__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'picture_mapping' => 'colorbox_gallery',
    'fallback_image_style' => '',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'colorbox_gallery',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  $export['image__views320x200__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views320x200__file_field_picture_sizes_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'sizes' => '(min-width: 0px)',
    'image_styles' => array(
      '_empty image_' => '_empty image_',
      '320x200' => 0,
      '36x36' => 0,
      '640x410' => 0,
      'colorbox_gallery' => 0,
      'content' => 0,
      'gallery_attachment' => 0,
      'hero_desktop' => 0,
      'hero_mobile' => 0,
      'hero_tablet' => 0,
      'thumbnail' => 0,
      'medium' => 0,
      'large' => 0,
      'linkit_thumb' => 0,
      'media_thumbnail' => 0,
      '_original image_' => 0,
    ),
    'fallback_image_style' => '320x200',
    'image_link' => '',
  );
  $export['image__views320x200__file_field_picture_sizes_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x240__file_field_colorbox';
  $file_display->weight = 0;
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
  $export['image__views640x240__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x240__file_field_field_redirection';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'code' => '301',
    '404_if_empty' => 0,
    'page_restrictions' => '0',
    'pages' => '',
  );
  $export['image__views640x240__file_field_field_redirection'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x240__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__views640x240__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x240__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__views640x240__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x240__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__views640x240__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x240__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__views640x240__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x240__file_field_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '640x240',
    'image_link' => '',
  );
  $export['image__views640x240__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x240__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__views640x240__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x240__file_field_openlayers_geofile_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'map_layer' => 'openlayers_map_ui_default:openlayers_layer_tile_osm',
  );
  $export['image__views640x240__file_field_openlayers_geofile_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x240__file_field_owlcarousel_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'settings_group' => 'owlcarousel_settings_default',
  );
  $export['image__views640x240__file_field_owlcarousel_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x240__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'picture_mapping' => 'hero',
    'fallback_image_style' => '640x240',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'hero',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  $export['image__views640x240__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x240__file_field_picture_sizes_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'sizes' => '(min-width: 0px)',
    'image_styles' => array(
      '_empty image_' => '_empty image_',
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
      'test' => 0,
      '_original image_' => 0,
    ),
    'fallback_image_style' => '_empty image_',
    'image_link' => '',
  );
  $export['image__views640x240__file_field_picture_sizes_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x410__file_field_colorbox';
  $file_display->weight = -39;
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
  $export['image__views640x410__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x410__file_field_field_redirection';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'code' => '301',
    '404_if_empty' => 0,
    'page_restrictions' => '0',
    'pages' => '',
  );
  $export['image__views640x410__file_field_field_redirection'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x410__file_field_file_default';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__views640x410__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x410__file_field_file_download_link';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__views640x410__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x410__file_field_file_table';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__views640x410__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x410__file_field_file_url_plain';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__views640x410__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x410__file_field_image';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '640x410',
    'image_link' => '',
  );
  $export['image__views640x410__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x410__file_field_media_large_icon';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__views640x410__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x410__file_field_openlayers_geofile_formatter';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'map_layer' => 'openlayers_map_ui_default:openlayers_layer_tile_osm',
  );
  $export['image__views640x410__file_field_openlayers_geofile_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x410__file_field_owlcarousel_formatter';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'settings_group' => 'owlcarousel_settings_default',
  );
  $export['image__views640x410__file_field_owlcarousel_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x410__file_field_picture';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'picture_mapping' => 'hd_view',
    'fallback_image_style' => 'hd_teaser_landscape',
    'lazyload' => 1,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'hero',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  $export['image__views640x410__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__views640x410__file_field_picture_sizes_formatter';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'sizes' => '(min-width: 0px)',
    'image_styles' => array(
      '_empty image_' => '_empty image_',
      'amp_metadata_content_image_min_696px_wide' => 0,
      'amp_metadata_logo_600x60' => 0,
      '600_by_360px' => 0,
      '320x200' => 0,
      '320x205' => 0,
      '36x36' => 0,
      '600_wide' => 0,
      '640x240' => 0,
      '640x360' => 0,
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
      'logo' => 0,
      'original' => 0,
      'skyfish_thumbnail' => 0,
      'square_thumbnail' => 0,
      'video_thumbnail_960x540' => 0,
      'avatar_100x100' => 0,
      'avatar_220x220' => 0,
      'thumbnail' => 0,
      'medium' => 0,
      'large' => 0,
      'linkit_thumb' => 0,
      'media_thumbnail' => 0,
      'hd_hero_homepage' => 0,
      'hd_letterbox' => 0,
      'hd_teaser_landscape' => 0,
      'hd_teaser_thumbnail_landscape' => 0,
      'hd_teaser_thumbnail_square' => 0,
      'hero_desktop__2000x811-mc-ri_' => 0,
      'test' => 0,
      'video_thumbnail_470x250' => 0,
      '_original image_' => 0,
    ),
    'fallback_image_style' => '320x200',
    'image_link' => '',
    'lazyload_data_attributes' => '0',
    'lazyload_class' => '',
  );
  $export['image__views640x410__file_field_picture_sizes_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_colorbox';
  $file_display->weight = -42;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'colorbox_node_style' => 'content',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'colorbox_gallery',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $export['image__wysiwyg__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_field_redirection';
  $file_display->weight = -39;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'code' => '301',
    '404_if_empty' => 0,
    'page_restrictions' => '0',
    'pages' => '',
  );
  $export['image__wysiwyg__file_field_field_redirection'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_file_default';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__wysiwyg__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_file_download_link';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__wysiwyg__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_file_table';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__wysiwyg__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_file_url_plain';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__wysiwyg__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_image';
  $file_display->weight = -41;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'content',
    'image_link' => '',
  );
  $export['image__wysiwyg__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_media_large_icon';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__wysiwyg__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_openlayers_geofile_formatter';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'map_layer' => 'openlayers_map_ui_default:openlayers_layer_tile_osm',
  );
  $export['image__wysiwyg__file_field_openlayers_geofile_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_owlcarousel_formatter';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'settings_group' => 'owlcarousel_settings_default',
  );
  $export['image__wysiwyg__file_field_owlcarousel_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_picture';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'picture_mapping' => 'content',
    'fallback_image_style' => 'content',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'hero',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'title',
      'colorbox_caption_custom' => '',
    ),
  );
  $export['image__wysiwyg__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_picture_sizes_formatter';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'sizes' => '(min-width: 0px)',
    'image_styles' => array(
      '_empty image_' => '_empty image_',
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
      'test' => 0,
      '_original image_' => 0,
    ),
    'fallback_image_style' => '320x200',
    'image_link' => '',
  );
  $export['image__wysiwyg__file_field_picture_sizes_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_file_default';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__full__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_file_download_link';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['video__full__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_file_table';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__full__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_file_url_plain';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__full__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_file_video';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '1170',
    'height' => '658',
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__full__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_media_large_icon';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__full__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_openlayers_geofile_formatter';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'map_layer' => 'openlayers_map_ui_default:openlayers_layer_tile_osm',
  );
  $export['video__full__file_field_openlayers_geofile_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__media_vimeo_image';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'hero_desktop',
  );
  $export['video__full__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__media_vimeo_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '1170',
    'height' => '658',
    'color' => '',
    'protocol_specify' => 0,
    'protocol' => 'https://',
    'autoplay' => 0,
    'loop' => 0,
    'title' => 1,
    'byline' => 1,
    'portrait' => 1,
    'api' => 0,
  );
  $export['video__full__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__media_youtube_image';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'hero_desktop',
  );
  $export['video__full__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__media_youtube_video';
  $file_display->weight = -50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '1170',
    'height' => '658',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'captions' => '0',
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__full__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__views320x200__media_vimeo_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__views320x200__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__views320x200__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__views320x200__media_youtube_image'] = $file_display;

  return $export;
}
