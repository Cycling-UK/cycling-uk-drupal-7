<?php

/**
 * @file
 * feature_home_page_videos.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_home_page_videos_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'home_page_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'Home page videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'carousel-triplet news listing-page home-page-video';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  /* Relationship: Block: Home page videos (field_home_page_videos) */
  $handler->display->display_options['relationships']['field_home_page_videos_value']['id'] = 'field_home_page_videos_value';
  $handler->display->display_options['relationships']['field_home_page_videos_value']['table'] = 'field_data_field_home_page_videos';
  $handler->display->display_options['relationships']['field_home_page_videos_value']['field'] = 'field_home_page_videos_value';
  $handler->display->display_options['relationships']['field_home_page_videos_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_home_page_videos_value']['delta'] = '-1';
  /* Field: Field: YouTube URL */
  $handler->display->display_options['fields']['field_youtube_url']['id'] = 'field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['table'] = 'field_data_field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['field'] = 'field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['relationship'] = 'field_home_page_videos_value';
  $handler->display->display_options['fields']['field_youtube_url']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_url']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_youtube_url']['type'] = 'youtube_thumbnail';
  $handler->display->display_options['fields']['field_youtube_url']['settings'] = array(
    'image_style' => '640x360',
    'image_link' => 'colorbox',
    'colorbox' => array(
      'parameters' => array(
        'width' => '640',
        'height' => '480',
        'autoplay' => 1,
        'loop' => 0,
        'showinfo' => 0,
        'controls' => 0,
        'autohide' => 0,
        'iv_load_policy' => 0,
      ),
      'gallery' => 0,
    ),
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: YouTube title */
  $handler->display->display_options['fields']['field_youtube_title']['id'] = 'field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['table'] = 'field_data_field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['field'] = 'field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['relationship'] = 'field_home_page_videos_value';
  $handler->display->display_options['fields']['field_youtube_title']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_title']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: Lead video */
  $handler = $view->new_display('block', 'Lead video', 'videos_lead');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: YouTube URL */
  $handler->display->display_options['fields']['field_youtube_url']['id'] = 'field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['table'] = 'field_data_field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['field'] = 'field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['relationship'] = 'field_home_page_videos_value';
  $handler->display->display_options['fields']['field_youtube_url']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_url']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_youtube_url']['type'] = 'youtube_thumbnail';
  $handler->display->display_options['fields']['field_youtube_url']['settings'] = array(
    'image_style' => 'video_thumbnail_960x540',
    'image_link' => 'colorbox',
    'colorbox' => array(
      'parameters' => array(
        'width' => '1240',
        'height' => '750',
        'autoplay' => 1,
        'loop' => 0,
        'showinfo' => 0,
        'controls' => 0,
        'autohide' => 0,
        'iv_load_policy' => 0,
      ),
      'gallery' => 0,
    ),
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: YouTube title */
  $handler->display->display_options['fields']['field_youtube_title']['id'] = 'field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['table'] = 'field_data_field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['field'] = 'field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['relationship'] = 'field_home_page_videos_value';
  $handler->display->display_options['fields']['field_youtube_title']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_title']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );

  /* Display: Other videos */
  $handler = $view->new_display('block', 'Other videos', 'videos_other');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '6';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Videos';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Videos';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="btn btn-standard btn-shadow" href="/category/tags/video">View all</a>
';
  $handler->display->display_options['footer']['area']['format'] = 'code';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: YouTube URL */
  $handler->display->display_options['fields']['field_youtube_url']['id'] = 'field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['table'] = 'field_data_field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['field'] = 'field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['relationship'] = 'field_home_page_videos_value';
  $handler->display->display_options['fields']['field_youtube_url']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_url']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_youtube_url']['type'] = 'youtube_thumbnail';
  $handler->display->display_options['fields']['field_youtube_url']['settings'] = array(
    'image_style' => 'video_thumbnail_470x250',
    'image_link' => 'colorbox',
    'colorbox' => array(
      'parameters' => array(
        'width' => '1240',
        'height' => '750',
        'autoplay' => 1,
        'loop' => 0,
        'showinfo' => 0,
        'controls' => 0,
        'autohide' => 0,
        'iv_load_policy' => 0,
      ),
      'gallery' => 0,
    ),
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: YouTube title */
  $handler->display->display_options['fields']['field_youtube_title']['id'] = 'field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['table'] = 'field_data_field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['field'] = 'field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['relationship'] = 'field_home_page_videos_value';
  $handler->display->display_options['fields']['field_youtube_title']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_title']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="outer-wrapper">
  <div class="video">[field_youtube_url]</div>
  <div class="title"><span class="inner-container">[field_youtube_title]</span></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['home_page_videos'] = $view;

  return $export;
}
