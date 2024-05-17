<?php

/**
 * @file
 * features_image_styles.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function features_image_styles_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Hero 2000';
  $picture_mapping->machine_name = 'clone_of_hero';
  $picture_mapping->breakpoint_group = 'hero';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'hero_mobile',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'hero_tablet',
      ),
    ),
    'custom.user.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'hero_desktop__2000x811-mc-ri_',
      ),
    ),
  );
  $export['clone_of_hero'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Colorbox Gallery';
  $picture_mapping->machine_name = 'colorbox_gallery';
  $picture_mapping->breakpoint_group = 'hero';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'custom.user.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'colorbox_gallery',
      ),
    ),
  );
  $export['colorbox_gallery'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Content';
  $picture_mapping->machine_name = 'content';
  $picture_mapping->breakpoint_group = 'hero';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'custom.user.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content',
      ),
    ),
  );
  $export['content'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'HD View';
  $picture_mapping->machine_name = 'hd_view';
  $picture_mapping->breakpoint_group = 'hero';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'hd_teaser_thumbnail_square',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'hd_teaser_thumbnail_landscape',
      ),
    ),
    'custom.user.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'hd_teaser_landscape',
      ),
    ),
  );
  $export['hd_view'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Hero';
  $picture_mapping->machine_name = 'hero';
  $picture_mapping->breakpoint_group = 'hero';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'hero_mobile',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'hero_tablet',
      ),
    ),
    'custom.user.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'hero_desktop',
      ),
    ),
  );
  $export['hero'] = $picture_mapping;

  return $export;
}
