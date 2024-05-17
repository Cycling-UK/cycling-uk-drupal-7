<?php

/**
 * @file
 * features_display_suite.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function features_display_suite_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|blog_listing-page|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'blog_listing-page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'vd_title_h1',
    ),
    'attachment_before' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'rows' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'pager' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'attachment_after' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'exposed_filter_taxonomy' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'exposed_filter_listings' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'search_news' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'tag_cloud' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|blog_listing-page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|briefings-page|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'briefings-page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'vd_title_h1',
    ),
    'header' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'attachment_before' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'rows' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'empty' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'pager' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'attachment_after' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'footer' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'views_briefings_exposed_filters' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|briefings-page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|listings-page|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'listings-page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'vd_title_h1',
    ),
    'attachment_before' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'rows' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'pager' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'attachment_after' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'footer' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'exposed_filter_listings' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'search_news' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'tag_cloud' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|listings-page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|taxonomy-page|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'taxonomy-page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'vd_title_h1',
    ),
    'attachment_before' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'rows' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'pager' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'attachment_after' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'footer' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'exposed_filter_taxonomy' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'search_news' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|taxonomy-page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|campaign|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'campaign';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'related_posts' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_event',
    ),
  );
  $export['node|campaign|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|course_calendar|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'course_calendar';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'book_now' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'dynamic1' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:16:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:1;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"default";s:7:"context";a:1:{i:0;s:0:"";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"views";s:7:"subtype";s:32:"venue_teaser_per_course_calendar";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['node|course_calendar|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|course_details|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'course_details';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'dynamic1' => array(
      'weight' => '20',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:16:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"default";s:7:"context";a:1:{i:0;s:0:"";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"views";s:7:"subtype";s:15:"course_schedule";}',
        'load_terms' => 0,
      ),
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|course_details|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|event|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|group_post|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'group_post';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'node_changed' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'share_buttons' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|group_post|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|group|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'group';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'og_node_content_links' => array(
      'weight' => '17',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '17',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|group|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|landing_page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'landing_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'share_buttons' => array(
      'weight' => '19',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|landing_page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|newsletter|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'newsletter';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'advert_1' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'advert_2' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'advert_3' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'advert_5' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long_date_only',
    ),
  );
  $export['node|newsletter|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|newsletter|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'newsletter';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'advert_1' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'advert_2' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'advert_3' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'advert_4' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'advert_5' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
    'author' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'ds_post_date_day_month',
    ),
  );
  $export['node|newsletter|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'menu_level_3_' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'share_buttons' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|full_content_2';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'full_content_2';
  $ds_fieldsetting->settings = array(
    'share_buttons' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|full_content_2'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|post|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'post';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'advert_1' => array(
      'weight' => '19',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'advert_6' => array(
      'weight' => '24',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'related_posts' => array(
      'weight' => '25',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'tags' => array(
      'weight' => '16',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'advert_2' => array(
      'weight' => '20',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'advert_3' => array(
      'weight' => '21',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'advert_4' => array(
      'weight' => '22',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'advert_5' => array(
      'weight' => '23',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'share_buttons' => array(
      'weight' => '17',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
    'comments' => array(
      'weight' => '26',
      'label' => 'above',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'ds_post_date_long_date_only',
    ),
    'ds_user_picture' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_picture_avatar_100x100',
    ),
  );
  $export['node|post|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|post|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'post';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_long_date_only',
    ),
  );
  $export['node|post|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publication|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publication';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'link_to_node' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'link_to_this_node' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'browse_cycle_magazine' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|publication|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ride|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ride';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'event_date_s_and_time' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:5:"title";s:9:"formatter";s:12:"date_default";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:11:{s:11:"format_type";s:4:"long";s:15:"multiple_number";s:2:"25";s:13:"multiple_from";s:3:"now";s:11:"multiple_to";s:0:"";s:17:"multiple_relative";s:1:"1";s:6:"fromto";s:4:"both";s:19:"show_remaining_days";i:0;s:16:"show_repeat_rule";s:4:"hide";s:20:"empty_fields_handler";s:0:"";s:38:"empty_fields_emptyfieldtext_empty_text";s:0:"";s:18:"custom_date_format";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:20:"node:field_date_ride";}',
        'load_terms' => 0,
        'empty_fields_handler' => '',
        'empty_fields_emptyfieldtext_empty_text' => '',
      ),
    ),
    'title' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|ride|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|venue|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'venue';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'dynamic1' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:16:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:1;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"default";s:7:"context";a:1:{i:0;s:0:"";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"views";s:7:"subtype";s:26:"upcoming_courses_per_venue";}',
        'load_terms' => 0,
      ),
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|venue|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|webform|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'webform';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|webform|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|post_type|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'post_type';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['taxonomy_term|post_type|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function features_display_suite_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'advert_1';
  $ds_field->label = 'Advert 1';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'dfp|sidebar_button_1',
    'block_render' => '1',
  );
  $export['advert_1'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'advert_1b';
  $ds_field->label = 'Advert 1';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'dfp|sidebar_button_1',
    'block_render' => '1',
  );
  $export['advert_1b'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'advert_2';
  $ds_field->label = 'Advert 2';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'og_membership' => 'og_membership',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'dfp|sidebar_button_2',
    'block_render' => '1',
  );
  $export['advert_2'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'advert_2b';
  $ds_field->label = 'Advert 2b';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'dfp|sidebar_button_2',
    'block_render' => '1',
  );
  $export['advert_2b'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'advert_3';
  $ds_field->label = 'Advert 3';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'dfp|sidebar_button_3',
    'block_render' => '1',
  );
  $export['advert_3'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'advert_4';
  $ds_field->label = 'Advert 4';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'dfp|sidebar_button_4',
    'block_render' => '1',
  );
  $export['advert_4'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'advert_5';
  $ds_field->label = 'Advert 5';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'dfp|sidebar_button_5',
    'block_render' => '1',
  );
  $export['advert_5'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'affiliate_gallery';
  $ds_field->label = 'Affiliate gallery';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['affiliate_gallery'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'briefings_view';
  $ds_field->label = 'Briefings View';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|briefings-block_1',
    'block_render' => '1',
  );
  $export['briefings_view'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'browse_cycle_magazine';
  $ds_field->label = 'Browse Cycle magazine';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|magazine_carousel-block_1',
    'block_render' => '1',
  );
  $export['browse_cycle_magazine'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'carousel_view';
  $ds_field->label = 'carousel';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'landing_page|*';
  $ds_field->properties = array(
    'block' => 'views|carousel-block',
    'block_render' => '1',
  );
  $export['carousel_view'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dynamic1';
  $ds_field->label = 'Dynamic1';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['dynamic1'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dynamic2';
  $ds_field->label = 'Dynamic2';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['dynamic2'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dynamic3';
  $ds_field->label = 'Dynamic3';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['dynamic3'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dynamic4';
  $ds_field->label = 'Dynamic4';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['dynamic4'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'exposed_filter_briefing';
  $ds_field->label = 'Exposed Filters - Briefings';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'ds_views' => 'ds_views',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|-exp-briefings-page_1',
    'block_render' => '1',
  );
  $export['exposed_filter_briefing'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'exposed_filter_listings';
  $ds_field->label = 'Exposed filter - listings';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'ds_views' => 'ds_views',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|-exp-listings-page',
    'block_render' => '1',
  );
  $export['exposed_filter_listings'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'exposed_filter_taxonomy';
  $ds_field->label = 'Exposed filter - taxonomy';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'ds_views' => 'ds_views',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|-exp-taxonomy-page',
    'block_render' => '1',
  );
  $export['exposed_filter_taxonomy'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'link_to_node';
  $ds_field->label = 'Link to node';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|related-linked_to',
    'block_render' => '1',
  );
  $export['link_to_node'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'link_to_this_node';
  $ds_field->label = 'Linked To This Node';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|related-linked_to_this_node',
    'block_render' => '1',
  );
  $export['link_to_this_node'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'live_site_page';
  $ds_field->label = 'Live Site Page';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="http://www.cyclinguk.org/node/[node:field_old_nid]" target="_blank">Live Site Page</a>',
      'format' => 'code',
    ),
    'use_token' => 1,
  );
  $export['live_site_page'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'related_posts';
  $ds_field->label = 'Related posts';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|related-related_nodes',
    'block_render' => '1',
  );
  $export['related_posts'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'search_news';
  $ds_field->label = 'Search news';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'ds_views' => 'ds_views',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'custom_search_blocks|2',
    'block_render' => '1',
  );
  $export['search_news'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'share_buttons';
  $ds_field->label = 'Share buttons';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'shariff|shariff_block',
    'block_render' => '1',
  );
  $export['share_buttons'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'tag_cloud';
  $ds_field->label = 'Tag cloud';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'ds_views' => 'ds_views',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'tagadelic_taxonomy|tagadelic_taxonomy',
    'block_render' => '1',
  );
  $export['tag_cloud'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'views_briefings_exposed_filters';
  $ds_field->label = 'Views Briefings Exposed Filters';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'ds_views' => 'ds_views',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|-exp-briefings-page',
    'block_render' => '1',
  );
  $export['views_briefings_exposed_filters'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_display_suite_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|blog_listing-page|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'blog_listing-page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'title',
      ),
      'topleft' => array(
        1 => 'search_news',
        2 => 'tag_cloud',
        3 => 'exposed_filter_listings',
        4 => 'exposed_filter_taxonomy',
      ),
      'topright' => array(
        5 => 'attachment_before',
        6 => 'rows',
        7 => 'attachment_after',
        8 => 'pager',
      ),
    ),
    'fields' => array(
      'title' => 'top',
      'search_news' => 'topleft',
      'tag_cloud' => 'topleft',
      'exposed_filter_listings' => 'topleft',
      'exposed_filter_taxonomy' => 'topleft',
      'attachment_before' => 'topright',
      'rows' => 'topright',
      'attachment_after' => 'topright',
      'pager' => 'topright',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['ds_views|blog_listing-page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|briefings-page|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'briefings-page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'title',
      ),
      'central' => array(
        1 => 'header',
      ),
      'bottomleft' => array(
        2 => 'views_briefings_exposed_filters',
      ),
      'bottomright' => array(
        3 => 'attachment_before',
        4 => 'rows',
        5 => 'attachment_after',
        6 => 'empty',
        7 => 'pager',
      ),
      'bottom' => array(
        8 => 'footer',
      ),
    ),
    'fields' => array(
      'title' => 'top',
      'header' => 'central',
      'views_briefings_exposed_filters' => 'bottomleft',
      'attachment_before' => 'bottomright',
      'rows' => 'bottomright',
      'attachment_after' => 'bottomright',
      'empty' => 'bottomright',
      'pager' => 'bottomright',
      'footer' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['ds_views|briefings-page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|listings-page|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'listings-page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'title',
      ),
      'topleft' => array(
        1 => 'search_news',
        2 => 'tag_cloud',
        3 => 'exposed_filter_listings',
      ),
      'topright' => array(
        4 => 'attachment_before',
        5 => 'rows',
        6 => 'attachment_after',
        7 => 'footer',
        8 => 'pager',
      ),
    ),
    'fields' => array(
      'title' => 'top',
      'search_news' => 'topleft',
      'tag_cloud' => 'topleft',
      'exposed_filter_listings' => 'topleft',
      'attachment_before' => 'topright',
      'rows' => 'topright',
      'attachment_after' => 'topright',
      'footer' => 'topright',
      'pager' => 'topright',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['ds_views|listings-page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|taxonomy-page|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'taxonomy-page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'title',
      ),
      'topright' => array(
        1 => 'attachment_before',
        3 => 'rows',
        5 => 'attachment_after',
        6 => 'footer',
        7 => 'pager',
      ),
      'topleft' => array(
        2 => 'search_news',
        4 => 'exposed_filter_taxonomy',
      ),
    ),
    'fields' => array(
      'title' => 'top',
      'attachment_before' => 'topright',
      'search_news' => 'topleft',
      'rows' => 'topright',
      'exposed_filter_taxonomy' => 'topleft',
      'attachment_after' => 'topright',
      'footer' => 'topright',
      'pager' => 'topright',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['ds_views|taxonomy-page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|briefings|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'briefings';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_caption',
        1 => 'field_hero',
      ),
      'topleft' => array(
        2 => 'post_date',
        3 => 'title',
        4 => 'field_headline_message',
        5 => 'field_policy_key_facts',
        6 => 'field_cycling_uk_view',
        7 => 'accordion_entity_view_1',
        8 => 'field_attachments',
        9 => 'field_tags',
        10 => 'share_buttons',
      ),
      'topright' => array(
        11 => 'menu_level_3_',
        12 => 'field_teaser',
        13 => 'field_gallery_image',
        14 => 'field_additional_content',
      ),
      'bottomleft' => array(
        15 => 'comments',
      ),
    ),
    'fields' => array(
      'field_caption' => 'top',
      'field_hero' => 'top',
      'post_date' => 'topleft',
      'title' => 'topleft',
      'field_headline_message' => 'topleft',
      'field_policy_key_facts' => 'topleft',
      'field_cycling_uk_view' => 'topleft',
      'accordion_entity_view_1' => 'topleft',
      'field_attachments' => 'topleft',
      'field_tags' => 'topleft',
      'share_buttons' => 'topleft',
      'menu_level_3_' => 'topright',
      'field_teaser' => 'topright',
      'field_gallery_image' => 'topright',
      'field_additional_content' => 'topright',
      'comments' => 'bottomleft',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|briefings|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|campaign|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'campaign';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_caption',
        1 => 'field_hero',
      ),
      'topleft' => array(
        2 => 'post_date',
        3 => 'field_teaser',
        4 => 'body',
        5 => 'field_attachments',
      ),
      'topright' => array(
        6 => 'field_campaign_call_to_action',
        7 => 'field_twitter_tag',
        8 => 'field_links',
        9 => 'field_historic',
        12 => 'field_tags',
        13 => 'field_status',
        14 => 'field_page_management',
      ),
      'central' => array(
        10 => 'related_posts',
      ),
      'bottomleft' => array(
        11 => 'comments',
      ),
    ),
    'fields' => array(
      'field_caption' => 'top',
      'field_hero' => 'top',
      'post_date' => 'topleft',
      'field_teaser' => 'topleft',
      'body' => 'topleft',
      'field_attachments' => 'topleft',
      'field_campaign_call_to_action' => 'topright',
      'field_twitter_tag' => 'topright',
      'field_links' => 'topright',
      'field_historic' => 'topright',
      'related_posts' => 'central',
      'comments' => 'bottomleft',
      'field_tags' => 'topright',
      'field_status' => 'topright',
      'field_page_management' => 'topright',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|campaign|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|course_calendar|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'course_calendar';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'topleft' => array(
        0 => 'field_course_dates',
        1 => 'field_course_price',
        2 => 'field_course_type',
        3 => 'field_course_status',
        4 => 'book_now',
      ),
      'topright' => array(
        5 => 'dynamic1',
      ),
    ),
    'fields' => array(
      'field_course_dates' => 'topleft',
      'field_course_price' => 'topleft',
      'field_course_type' => 'topleft',
      'field_course_status' => 'topleft',
      'book_now' => 'topleft',
      'dynamic1' => 'topright',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|course_calendar|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|course_details|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'course_details';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_hero',
        1 => 'group_header_inner_wrapper',
        3 => 'title',
        4 => 'field_teaser',
      ),
      'central' => array(
        2 => 'field_video',
      ),
      'bottomleft' => array(
        5 => 'field_course_outcomes',
        6 => 'field_course_key_content',
        7 => 'field_skill_level',
        8 => 'field_course_terrain',
        9 => 'field_course_fitness_level',
        10 => 'field_course_assessment',
        11 => 'field_prerequisite_courses',
        12 => 'field_course_prerequisites',
        13 => 'field_feed_in_courses',
        14 => 'field_progression',
        15 => 'field_course_resources',
        16 => 'field_course_group_size',
        17 => 'field_course_tutor',
        18 => 'field_course_availability',
        19 => 'field_tags',
      ),
      'bottomright' => array(
        20 => 'field_price_summary',
        21 => 'field_course_duration',
        22 => 'dynamic1',
        23 => 'field_gallery_image',
        24 => 'field_page_management',
      ),
    ),
    'fields' => array(
      'field_hero' => 'top',
      'group_header_inner_wrapper' => 'top',
      'field_video' => 'central',
      'title' => 'top',
      'field_teaser' => 'top',
      'field_course_outcomes' => 'bottomleft',
      'field_course_key_content' => 'bottomleft',
      'field_skill_level' => 'bottomleft',
      'field_course_terrain' => 'bottomleft',
      'field_course_fitness_level' => 'bottomleft',
      'field_course_assessment' => 'bottomleft',
      'field_prerequisite_courses' => 'bottomleft',
      'field_course_prerequisites' => 'bottomleft',
      'field_feed_in_courses' => 'bottomleft',
      'field_progression' => 'bottomleft',
      'field_course_resources' => 'bottomleft',
      'field_course_group_size' => 'bottomleft',
      'field_course_tutor' => 'bottomleft',
      'field_course_availability' => 'bottomleft',
      'field_tags' => 'bottomleft',
      'field_price_summary' => 'bottomright',
      'field_course_duration' => 'bottomright',
      'dynamic1' => 'bottomright',
      'field_gallery_image' => 'bottomright',
      'field_page_management' => 'bottomright',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|course_details|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_image',
        1 => 'group_header_inner_wrapper',
        3 => 'field_date',
        5 => 'title',
        6 => 'group_header_location_wrapper',
        18 => 'field_town',
        20 => 'field_postcode',
      ),
      'left' => array(
        2 => 'field_event_type',
        4 => 'field_cost',
        7 => 'body',
        8 => 'field_event_facilities',
        9 => 'field_rides_and_activities',
      ),
      'right' => array(
        10 => 'field_contact_name',
        11 => 'field_location',
        12 => 'field_contact_number',
        13 => 'field_address_information',
        14 => 'field_contact_email',
        15 => 'field_grid_reference',
        16 => 'field_link',
        17 => 'group_contact_details',
        19 => 'og_group_ref',
        21 => 'field_attachments',
      ),
    ),
    'fields' => array(
      'field_image' => 'top',
      'group_header_inner_wrapper' => 'top',
      'field_event_type' => 'left',
      'field_date' => 'top',
      'field_cost' => 'left',
      'title' => 'top',
      'group_header_location_wrapper' => 'top',
      'body' => 'left',
      'field_event_facilities' => 'left',
      'field_rides_and_activities' => 'left',
      'field_contact_name' => 'right',
      'field_location' => 'right',
      'field_contact_number' => 'right',
      'field_address_information' => 'right',
      'field_contact_email' => 'right',
      'field_grid_reference' => 'right',
      'field_link' => 'right',
      'group_contact_details' => 'right',
      'field_town' => 'top',
      'og_group_ref' => 'right',
      'field_postcode' => 'top',
      'field_attachments' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|group_post|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'group_post';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_image',
      ),
      'central' => array(
        1 => 'title',
        2 => 'submitted_by',
        3 => 'node_changed',
        4 => 'body',
        5 => 'field_gallery_image',
        6 => 'field_gpx_map',
        7 => 'field_gpx_files',
        8 => 'field_attachments',
        9 => 'share_buttons',
      ),
    ),
    'fields' => array(
      'field_image' => 'top',
      'title' => 'central',
      'submitted_by' => 'central',
      'node_changed' => 'central',
      'body' => 'central',
      'field_gallery_image' => 'central',
      'field_gpx_map' => 'central',
      'field_gpx_files' => 'central',
      'field_attachments' => 'central',
      'share_buttons' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|group_post|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|group|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'group';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_group_image',
        1 => 'group_header_inner_wrapper',
        22 => 'field_group_type',
        23 => 'title',
        27 => 'field_group_welcome',
      ),
      'left' => array(
        2 => 'group_contact_details',
        3 => 'field_group_activities',
        4 => 'field_about_the_group',
        5 => 'field_group_ride_programme',
        6 => 'field_group_ride_info',
        7 => 'field_group_files',
        8 => 'field_extra_contact_details',
        9 => 'field_partners',
        10 => 'field_group_contact_name',
        13 => 'field_group_phone_number',
        14 => 'field_group_contact_email',
        17 => 'field_group_website',
        19 => 'field_facebook',
        21 => 'field_twitter',
        24 => 'field_instagram',
      ),
      'right' => array(
        11 => 'field_gallery_image',
        12 => 'field_area_covered',
        15 => 'og_extras_nodes_entity_view_4',
        16 => 'og_extras_nodes_entity_view_1',
        18 => 'og_extras_nodes_entity_view_3',
        20 => 'og_extras_nodes_entity_view_2',
        25 => 'og_node_content_links',
        26 => 'field_group_parent',
      ),
    ),
    'fields' => array(
      'field_group_image' => 'top',
      'group_header_inner_wrapper' => 'top',
      'group_contact_details' => 'left',
      'field_group_activities' => 'left',
      'field_about_the_group' => 'left',
      'field_group_ride_programme' => 'left',
      'field_group_ride_info' => 'left',
      'field_group_files' => 'left',
      'field_extra_contact_details' => 'left',
      'field_partners' => 'left',
      'field_group_contact_name' => 'left',
      'field_gallery_image' => 'right',
      'field_area_covered' => 'right',
      'field_group_phone_number' => 'left',
      'field_group_contact_email' => 'left',
      'og_extras_nodes_entity_view_4' => 'right',
      'og_extras_nodes_entity_view_1' => 'right',
      'field_group_website' => 'left',
      'og_extras_nodes_entity_view_3' => 'right',
      'field_facebook' => 'left',
      'og_extras_nodes_entity_view_2' => 'right',
      'field_twitter' => 'left',
      'field_group_type' => 'top',
      'title' => 'top',
      'field_instagram' => 'left',
      'og_node_content_links' => 'right',
      'field_group_parent' => 'right',
      'field_group_welcome' => 'top',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|group|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|landing_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'landing_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_hero',
        1 => 'title',
        2 => 'group_header_inner_wrapper',
        4 => 'field_welcome_message',
        6 => 'field_markup',
      ),
      'central' => array(
        3 => 'field_teaser',
        5 => 'carousel_entity_view_1',
        7 => 'field_body_top',
        8 => 'field_view_ref_1',
        9 => 'body',
        10 => 'accordion_entity_view_1',
        11 => 'field_body_middle',
        12 => 'field_view_ref_2',
        13 => 'field_body_bottom',
      ),
      'bottom' => array(
        14 => 'field_logged_in_content',
        15 => 'field_logged_in_attachments',
        16 => 'field_links',
        17 => 'field_attachments',
        18 => 'field_tags',
        19 => 'field_twitter_tag',
        20 => 'child_pages_child_pages',
        21 => 'field_status',
        22 => 'share_buttons',
      ),
    ),
    'fields' => array(
      'field_hero' => 'top',
      'title' => 'top',
      'group_header_inner_wrapper' => 'top',
      'field_teaser' => 'central',
      'field_welcome_message' => 'top',
      'carousel_entity_view_1' => 'central',
      'field_markup' => 'top',
      'field_body_top' => 'central',
      'field_view_ref_1' => 'central',
      'body' => 'central',
      'accordion_entity_view_1' => 'central',
      'field_body_middle' => 'central',
      'field_view_ref_2' => 'central',
      'field_body_bottom' => 'central',
      'field_logged_in_content' => 'bottom',
      'field_logged_in_attachments' => 'bottom',
      'field_links' => 'bottom',
      'field_attachments' => 'bottom',
      'field_tags' => 'bottom',
      'field_twitter_tag' => 'bottom',
      'child_pages_child_pages' => 'bottom',
      'field_status' => 'bottom',
      'share_buttons' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|landing_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|newsletter|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'newsletter';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_caption',
        1 => 'field_image',
      ),
      'topleft' => array(
        2 => 'post_date',
        3 => 'title',
        4 => 'field_teaser',
        5 => 'field_headline_message',
        6 => 'body',
        7 => 'field_story',
        8 => 'field_attachments',
        9 => 'field_tags',
      ),
      'topright' => array(
        10 => 'field_additional_content',
        11 => 'advert_1',
        12 => 'advert_2',
        13 => 'advert_3',
        14 => 'advert_5',
        15 => 'field_cycling_uk_section',
        16 => 'field_status',
        17 => 'field_page_management',
      ),
    ),
    'fields' => array(
      'field_caption' => 'top',
      'field_image' => 'top',
      'post_date' => 'topleft',
      'title' => 'topleft',
      'field_teaser' => 'topleft',
      'field_headline_message' => 'topleft',
      'body' => 'topleft',
      'field_story' => 'topleft',
      'field_attachments' => 'topleft',
      'field_tags' => 'topleft',
      'field_additional_content' => 'topright',
      'advert_1' => 'topright',
      'advert_2' => 'topright',
      'advert_3' => 'topright',
      'advert_5' => 'topright',
      'field_cycling_uk_section' => 'topright',
      'field_status' => 'topright',
      'field_page_management' => 'topright',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|newsletter|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|newsletter|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'newsletter';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_image',
      ),
      'topright' => array(
        1 => 'field_additional_content',
        9 => 'post_date',
        10 => 'author',
        11 => 'advert_1',
        12 => 'advert_2',
        13 => 'advert_3',
        14 => 'advert_4',
        15 => 'advert_5',
      ),
      'topleft' => array(
        2 => 'title',
        3 => 'field_headline_message',
        4 => 'field_teaser',
        5 => 'body',
        6 => 'field_story',
        7 => 'field_attachments',
        8 => 'field_tags',
      ),
    ),
    'fields' => array(
      'field_image' => 'top',
      'field_additional_content' => 'topright',
      'title' => 'topleft',
      'field_headline_message' => 'topleft',
      'field_teaser' => 'topleft',
      'body' => 'topleft',
      'field_story' => 'topleft',
      'field_attachments' => 'topleft',
      'field_tags' => 'topleft',
      'post_date' => 'topright',
      'author' => 'topright',
      'advert_1' => 'topright',
      'advert_2' => 'topright',
      'advert_3' => 'topright',
      'advert_4' => 'topright',
      'advert_5' => 'topright',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|newsletter|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_caption',
        1 => 'field_hero',
      ),
      'topleft' => array(
        2 => 'title',
        3 => 'field_teaser',
        4 => 'body',
        5 => 'accordion_entity_view_1',
        6 => 'field_gallery_image',
        7 => 'field_attachments',
        8 => 'share_buttons',
        9 => 'field_links',
        10 => 'field_member_only_content',
        11 => 'field_tags',
      ),
      'topright' => array(
        12 => 'menu_level_3_',
        13 => 'field_additional_content',
      ),
      'bottom' => array(
        14 => 'child_pages_child_pages',
      ),
    ),
    'fields' => array(
      'field_caption' => 'top',
      'field_hero' => 'top',
      'title' => 'topleft',
      'field_teaser' => 'topleft',
      'body' => 'topleft',
      'accordion_entity_view_1' => 'topleft',
      'field_gallery_image' => 'topleft',
      'field_attachments' => 'topleft',
      'share_buttons' => 'topleft',
      'field_links' => 'topleft',
      'field_member_only_content' => 'topleft',
      'field_tags' => 'topleft',
      'menu_level_3_' => 'topright',
      'field_additional_content' => 'topright',
      'child_pages_child_pages' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_caption',
        1 => 'field_hero',
      ),
      'topleft' => array(
        2 => 'title',
        3 => 'field_teaser',
        4 => 'body',
        5 => 'field_gallery_image',
        6 => 'field_attachments',
        7 => 'share_buttons',
        11 => 'field_member_only_content',
      ),
      'topright' => array(
        8 => 'field_additional_content',
        9 => 'menu_level_3_',
      ),
      'central' => array(
        10 => 'child_pages_entity_view_1',
      ),
    ),
    'fields' => array(
      'field_caption' => 'top',
      'field_hero' => 'top',
      'title' => 'topleft',
      'field_teaser' => 'topleft',
      'body' => 'topleft',
      'field_gallery_image' => 'topleft',
      'field_attachments' => 'topleft',
      'share_buttons' => 'topleft',
      'field_additional_content' => 'topright',
      'menu_level_3_' => 'topright',
      'child_pages_entity_view_1' => 'central',
      'field_member_only_content' => 'topleft',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|full_content_2';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'full_content_2';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'topleft' => array(
        0 => 'share_buttons',
        1 => 'title',
        4 => 'field_teaser',
        5 => 'body',
        6 => 'field_gallery_image',
        7 => 'field_attachments',
        10 => 'field_member_only_content',
      ),
      'top' => array(
        2 => 'field_caption',
        3 => 'field_hero',
      ),
      'topright' => array(
        8 => 'field_additional_content',
      ),
      'central' => array(
        9 => 'child_pages_entity_view_1',
      ),
    ),
    'fields' => array(
      'share_buttons' => 'topleft',
      'title' => 'topleft',
      'field_caption' => 'top',
      'field_hero' => 'top',
      'field_teaser' => 'topleft',
      'body' => 'topleft',
      'field_gallery_image' => 'topleft',
      'field_attachments' => 'topleft',
      'field_additional_content' => 'topright',
      'child_pages_entity_view_1' => 'central',
      'field_member_only_content' => 'topleft',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|page|full_content_2'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|post|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'post';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_caption',
        1 => 'field_hero',
      ),
      'topleft' => array(
        2 => 'ds_user_picture',
        3 => 'submitted_by',
        4 => 'post_date',
        5 => 'title',
        6 => 'field_teaser',
        7 => 'body',
        8 => 'accordion_entity_view_1',
        9 => 'field_gallery_image',
        10 => 'field_attachments',
        11 => 'field_gpx_map',
        12 => 'field_gpx_files',
        13 => 'field_press_contact_information',
        14 => 'field_press_notes_to_editors',
        15 => 'field_location',
        16 => 'tags',
        17 => 'share_buttons',
      ),
      'topright' => array(
        18 => 'field_additional_content',
        19 => 'advert_1',
        20 => 'advert_2',
        21 => 'advert_3',
        22 => 'advert_4',
        23 => 'advert_5',
        24 => 'advert_6',
      ),
      'central' => array(
        25 => 'related_posts',
      ),
      'bottomleft' => array(
        26 => 'comments',
      ),
    ),
    'fields' => array(
      'field_caption' => 'top',
      'field_hero' => 'top',
      'ds_user_picture' => 'topleft',
      'submitted_by' => 'topleft',
      'post_date' => 'topleft',
      'title' => 'topleft',
      'field_teaser' => 'topleft',
      'body' => 'topleft',
      'accordion_entity_view_1' => 'topleft',
      'field_gallery_image' => 'topleft',
      'field_attachments' => 'topleft',
      'field_gpx_map' => 'topleft',
      'field_gpx_files' => 'topleft',
      'field_press_contact_information' => 'topleft',
      'field_press_notes_to_editors' => 'topleft',
      'field_location' => 'topleft',
      'tags' => 'topleft',
      'share_buttons' => 'topleft',
      'field_additional_content' => 'topright',
      'advert_1' => 'topright',
      'advert_2' => 'topright',
      'advert_3' => 'topright',
      'advert_4' => 'topright',
      'advert_5' => 'topright',
      'advert_6' => 'topright',
      'related_posts' => 'central',
      'comments' => 'bottomleft',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|post|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|post|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'post';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_post_type',
        1 => 'post_date',
        2 => 'field_hero',
      ),
    ),
    'fields' => array(
      'field_post_type' => 'central',
      'post_date' => 'central',
      'field_hero' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|post|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_image',
        1 => 'group_header_inner_wrapper',
        2 => 'field_publication_type',
        5 => 'title',
      ),
      'central' => array(
        3 => 'field_teaser',
        4 => 'body',
        6 => 'field_issuu_embed_code_full',
        7 => 'field_issuu_embed_code',
        8 => 'link_to_this_node',
        9 => 'link_to_node',
        10 => 'field_pdf_copies',
        11 => 'field_soundcloud',
        12 => 'browse_cycle_magazine',
      ),
      'bottom' => array(
        13 => 'field_tags',
      ),
    ),
    'fields' => array(
      'field_image' => 'top',
      'group_header_inner_wrapper' => 'top',
      'field_publication_type' => 'top',
      'field_teaser' => 'central',
      'body' => 'central',
      'title' => 'top',
      'field_issuu_embed_code_full' => 'central',
      'field_issuu_embed_code' => 'central',
      'link_to_this_node' => 'central',
      'link_to_node' => 'central',
      'field_pdf_copies' => 'central',
      'field_soundcloud' => 'central',
      'browse_cycle_magazine' => 'central',
      'field_tags' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|publication|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|venue|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'venue';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_hero',
        1 => 'group_header_inner_wrapper',
        3 => 'title',
      ),
      'topleft' => array(
        2 => 'field_course_venue_accommodation',
        4 => 'field_attachments',
        5 => 'field_tags',
      ),
      'topright' => array(
        6 => 'field_location',
        7 => 'group_contact_details',
        8 => 'field_course_venue_address',
        9 => 'field_course_venue_telephone',
        10 => 'field_course_venue_email',
        11 => 'dynamic1',
        12 => 'field_course_venue_website',
        13 => 'field_page_management',
      ),
    ),
    'fields' => array(
      'field_hero' => 'top',
      'group_header_inner_wrapper' => 'top',
      'field_course_venue_accommodation' => 'topleft',
      'title' => 'top',
      'field_attachments' => 'topleft',
      'field_tags' => 'topleft',
      'field_location' => 'topright',
      'group_contact_details' => 'topright',
      'field_course_venue_address' => 'topright',
      'field_course_venue_telephone' => 'topright',
      'field_course_venue_email' => 'topright',
      'dynamic1' => 'topright',
      'field_course_venue_website' => 'topright',
      'field_page_management' => 'topright',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|venue|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'group_header_inner_wrapper',
        1 => 'title',
        2 => 'field_hero',
        3 => 'field_teaser',
        4 => 'body',
        5 => 'field_caption',
      ),
      'central' => array(
        6 => 'webform',
        7 => 'field_terms_and_conditions',
        8 => 'field_data_protection_statement',
      ),
      'bottom' => array(
        9 => 'field_body_bottom',
      ),
    ),
    'fields' => array(
      'group_header_inner_wrapper' => 'top',
      'title' => 'top',
      'field_hero' => 'top',
      'field_teaser' => 'top',
      'body' => 'top',
      'field_caption' => 'top',
      'webform' => 'central',
      'field_terms_and_conditions' => 'central',
      'field_data_protection_statement' => 'central',
      'field_body_bottom' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|webform|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|post_type|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'post_type';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'title',
        1 => 'description',
      ),
    ),
    'fields' => array(
      'title' => 'top',
      'description' => 'top',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|post_type|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function features_display_suite_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'child_page';
  $ds_view_mode->label = 'Child page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['child_page'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'related';
  $ds_view_mode->label = 'Related';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['related'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'views320x200';
  $ds_view_mode->label = 'Views320x200';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['views320x200'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'views640x240';
  $ds_view_mode->label = 'Views640x240';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['views640x240'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'views640x410';
  $ds_view_mode->label = 'Views640x410';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['views640x410'] = $ds_view_mode;

  return $export;
}
