<?php

/**
 * @file
 * features_image_styles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_image_styles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function features_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 320x200.
  $styles['320x200'] = array(
    'label' => '320x200 (mc)',
    'effects' => array(
      216 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'crop_landscape',
            1 => 'crop_letterbox',
            2 => 'crop_square',
            3 => '640x410',
            4 => 'gallery_attachment',
            5 => 'hero_desktop',
            6 => 'hero_mobile',
            7 => 'hero_tablet',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => 1,
      ),
      221 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 200,
        ),
        'weight' => 2,
      ),
      246 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 60,
          'radius' => 0.4,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: 320x205.
  $styles['320x205'] = array(
    'label' => '320x205',
    'effects' => array(
      306 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'crop_landscape',
            1 => 'crop_letterbox',
            2 => 'crop_square',
            3 => '600_wide',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => 0,
      ),
      311 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 205,
        ),
        'weight' => 2,
      ),
      316 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
      321 => array(
        'name' => 'reSmush.it',
        'data' => array(),
        'weight' => 4,
      ),
    ),
  );

  // Exported image style: 36x36.
  $styles['36x36'] = array(
    'label' => '36x36',
    'effects' => array(
      30 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 36,
          'height' => 36,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 600_wide.
  $styles['600_wide'] = array(
    'label' => '600 wide',
    'effects' => array(
      361 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 600,
          'height' => 400,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 1,
          'style_name' => '600_wide',
        ),
        'weight' => 0,
      ),
      346 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 640x240.
  $styles['640x240'] = array(
    'label' => '640x240',
    'effects' => array(
      271 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'crop_letterbox',
            1 => 'crop_landscape',
            2 => 'crop_square',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => 0,
      ),
      276 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 240,
        ),
        'weight' => 2,
      ),
      281 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 60,
          'radius' => 0.4,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: 640x360.
  $styles['640x360'] = array(
    'label' => '640x360',
    'effects' => array(
      396 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 360,
        ),
        'weight' => -10,
      ),
      401 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => -9,
      ),
      411 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'center',
          'ypos' => 'center',
          'alpha' => 100,
          'scale' => '',
          'path' => 'sites/all/themes/cyclinguk/images/system/play-icon.png',
        ),
        'weight' => 4,
      ),
    ),
  );

  // Exported image style: 640x410.
  $styles['640x410'] = array(
    'label' => '640x410',
    'effects' => array(
      366 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'crop_landscape',
            1 => 'crop_letterbox',
            2 => 'crop_square',
            3 => 'gallery_attachment',
            4 => 'hero_desktop',
            5 => 'hero_mobile',
            6 => 'hero_tablet',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => 1,
      ),
      371 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 410,
        ),
        'weight' => 2,
      ),
      376 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: colorbox_gallery.
  $styles['colorbox_gallery'] = array(
    'label' => 'Colorbox Gallery (S1500w>S700h)',
    'effects' => array(
      196 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1500,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      201 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 700,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      206 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: content.
  $styles['content'] = array(
    'label' => 'Content (609xAuto)',
    'effects' => array(
      381 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 849,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      386 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: crop_landscape.
  $styles['crop_landscape'] = array(
    'label' => 'Crop Landscape',
    'effects' => array(
      128 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1200,
          'height' => 800,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'crop_landscape',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: crop_letterbox.
  $styles['crop_letterbox'] = array(
    'label' => 'Crop Letterbox',
    'effects' => array(
      391 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 2000,
          'height' => 811,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'crop_letterbox',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: crop_square.
  $styles['crop_square'] = array(
    'label' => 'Crop Square',
    'effects' => array(
      129 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 800,
          'height' => 800,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'crop_square',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: gallery_attachment.
  $styles['gallery_attachment'] = array(
    'label' => 'Gallery attachment (1000x650-mc)',
    'effects' => array(
      226 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'crop_landscape',
          'apply_all_effects' => 0,
        ),
        'weight' => 1,
      ),
      231 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1000,
          'height' => 650,
        ),
        'weight' => 2,
      ),
      236 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: hd_hero_homepage.
  $styles['hd_hero_homepage'] = array(
    'label' => 'HD Hero Homepage (2000 x 720 mc-ri)',
    'effects' => array(
      426 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'crop_landscape',
          'apply_all_effects' => 0,
        ),
        'weight' => 0,
      ),
      431 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2000,
          'height' => 720,
        ),
        'weight' => 2,
      ),
      436 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: hd_letterbox.
  $styles['hd_letterbox'] = array(
    'label' => 'HD Letterbox (1530x621 mc-ri)',
    'effects' => array(
      411 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'crop_landscape',
          'apply_all_effects' => 0,
        ),
        'weight' => 0,
      ),
      416 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1530,
          'height' => 621,
        ),
        'weight' => 2,
      ),
      421 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: hd_teaser_landscape.
  $styles['hd_teaser_landscape'] = array(
    'label' => 'HD Teaser Landscape (470x250 mc-ri)',
    'effects' => array(
      441 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'crop_landscape',
          'apply_all_effects' => 0,
        ),
        'weight' => 0,
      ),
      446 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 470,
          'height' => 250,
        ),
        'weight' => 2,
      ),
      451 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: hd_teaser_thumbnail_landscape.
  $styles['hd_teaser_thumbnail_landscape'] = array(
    'label' => 'HD Teaser Thumbnail Fat Landscape ( 120x90 mc-ri)',
    'effects' => array(
      456 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'crop_landscape',
          'apply_all_effects' => 0,
        ),
        'weight' => 0,
      ),
      461 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 180,
          'height' => 120,
        ),
        'weight' => 2,
      ),
      466 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: hd_teaser_thumbnail_square.
  $styles['hd_teaser_thumbnail_square'] = array(
    'label' => 'HD Teaser Thumbnail Square (120x120 mc-ri)',
    'effects' => array(
      471 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'crop_square',
          'apply_all_effects' => 0,
        ),
        'weight' => 0,
      ),
      476 => array(
        'name' => 'image_focus_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      481 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: hero_desktop.
  $styles['hero_desktop'] = array(
    'label' => 'Hero Desktop (1170x475-mc-ri)',
    'effects' => array(
      366 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'crop_letterbox',
          'apply_all_effects' => 0,
        ),
        'weight' => -10,
      ),
      371 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1530,
          'height' => 621,
        ),
        'weight' => -9,
      ),
      376 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: hero_desktop__2000x811-mc-ri_.
  $styles['hero_desktop__2000x811-mc-ri_'] = array(
    'label' => 'Hero Desktop (2000x811-mc-ri)',
    'effects' => array(
      396 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'crop_letterbox',
            1 => 'crop_landscape',
            2 => 'crop_square',
            3 => '600_wide',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => 0,
      ),
      401 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2000,
          'height' => 720,
        ),
        'weight' => 2,
      ),
      406 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: hero_mobile.
  $styles['hero_mobile'] = array(
    'label' => 'Hero Mobile (420x475-mc-ri)',
    'effects' => array(
      166 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'crop_square',
          'apply_all_effects' => 0,
        ),
        'weight' => 1,
      ),
      171 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 420,
          'height' => 475,
        ),
        'weight' => 2,
      ),
      266 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: hero_tablet.
  $styles['hero_tablet'] = array(
    'label' => 'Hero Tablet (768x475-mc-ri)',
    'effects' => array(
      181 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'crop_landscape',
          'apply_all_effects' => 0,
        ),
        'weight' => 1,
      ),
      186 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 475,
        ),
        'weight' => 2,
      ),
      261 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: logo.
  $styles['logo'] = array(
    'label' => 'Logo',
    'effects' => array(
      301 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: original.
  $styles['original'] = array(
    'label' => 'Original',
    'effects' => array(),
  );

  // Exported image style: skyfish_thumbnail.
  $styles['skyfish_thumbnail'] = array(
    'label' => 'skyfish thumbnail',
    'effects' => array(
      322 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_thumbnail.
  $styles['square_thumbnail'] = array(
    'label' => 'square_thumbnail',
    'effects' => array(
      286 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'weight' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: video_thumbnail_470x250.
  $styles['video_thumbnail_470x250'] = array(
    'label' => 'Video thumbnail 470x250',
    'effects' => array(
      486 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 470,
          'height' => 250,
        ),
        'weight' => 1,
      ),
      491 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 2,
      ),
      496 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'center',
          'ypos' => 'center',
          'alpha' => 100,
          'scale' => 15,
          'path' => 'sites/all/themes/cyclinguk/images/system/play-icon.png',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: video_thumbnail_960x540.
  $styles['video_thumbnail_960x540'] = array(
    'label' => 'Video thumbnail (960x540)',
    'effects' => array(
      416 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 540,
        ),
        'weight' => 1,
      ),
      421 => array(
        'name' => 'filtersie_sharpenUSM',
        'data' => array(
          'amount' => 80,
          'radius' => 0.5,
          'threshold' => 3,
        ),
        'weight' => 2,
      ),
      426 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'center',
          'ypos' => 'center',
          'alpha' => 100,
          'scale' => 15,
          'path' => 'sites/all/themes/cyclinguk/images/system/play-icon.png',
        ),
        'weight' => 3,
      ),
    ),
  );

  return $styles;
}
