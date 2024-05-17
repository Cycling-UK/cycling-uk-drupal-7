<?php

/**
 * @file
 * feature_xl_landing_page.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function feature_xl_landing_page_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'field_linkit';
  $linkit_profile->admin_title = 'field_linkit';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:menu_link' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:bean' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:comment' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'affiliated_centre' => 0,
        'announcement' => 0,
        'background_image' => 0,
        'page' => 0,
        'billboard' => 0,
        'billboard_icon' => 0,
        'billboard_text' => 0,
        'biography' => 0,
        'briefings' => 0,
        'campaign' => 0,
        'course_calendar' => 0,
        'course_details' => 0,
        'ride' => 0,
        'feed' => 0,
        'feed_item' => 0,
        'group' => 0,
        'group_child_page' => 0,
        'group_email' => 0,
        'group_post' => 0,
        'landing_page' => 0,
        'landing_page_xl' => 0,
        'link' => 0,
        'newsletter' => 0,
        'event' => 0,
        'poi' => 0,
        'post' => 0,
        'publication' => 0,
        'rider' => 0,
        'route' => 0,
        'traffic_regulation_order' => 0,
        'venue' => 0,
        'webform' => 0,
      ),
      'group_by_bundle' => 0,
      'include_unpublished' => 0,
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'tags' => 0,
        'dfp_ad_categories' => 0,
        'article_type' => 0,
        'cycling_type' => 0,
        'hero' => 0,
        'post_type' => 0,
        'campaign' => 0,
        'status' => 0,
        'ride_type' => 0,
        'event_facility' => 0,
        'event_type' => 0,
        'page_management' => 0,
        'cycling_uk_section' => 0,
        'nested_test' => 0,
        'publication' => 0,
        'newsletter' => 0,
        'care_taxonomy_membership_code' => 0,
        'care_taxonomy_mailing_suppression_code' => 0,
        'care_taxonomy_source_code' => 0,
        'care_taxonomy_promotion_code' => 0,
        'bike_type' => 0,
        'points_of_interest' => 0,
        'ride_level' => 0,
        'ride_section' => 0,
        'route_type' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:comment' => array(
      'result_description' => '',
      'bundles' => array(
        'comment_node_affiliated_centre' => 0,
        'comment_node_announcement' => 0,
        'comment_node_background_image' => 0,
        'comment_node_page' => 0,
        'comment_node_billboard' => 0,
        'comment_node_billboard_icon' => 0,
        'comment_node_billboard_text' => 0,
        'comment_node_biography' => 0,
        'comment_node_briefings' => 0,
        'comment_node_campaign' => 0,
        'comment_node_course_calendar' => 0,
        'comment_node_course_details' => 0,
        'comment_node_ride' => 0,
        'comment_node_feed' => 0,
        'comment_node_feed_item' => 0,
        'comment_node_group' => 0,
        'comment_node_group_child_page' => 0,
        'comment_node_group_email' => 0,
        'comment_node_group_post' => 0,
        'comment_node_landing_page' => 0,
        'comment_node_landing_page_xl' => 0,
        'comment_node_link' => 0,
        'comment_node_newsletter' => 0,
        'comment_node_event' => 0,
        'comment_node_poi' => 0,
        'comment_node_post' => 0,
        'comment_node_publication' => 0,
        'comment_node_rider' => 0,
        'comment_node_route' => 0,
        'comment_node_traffic_regulation_order' => 0,
        'comment_node_venue' => 0,
        'comment_node_webform' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:bean' => array(
      'result_description' => '',
      'bundles' => array(
        'front' => 0,
        'hero' => 0,
        'video' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'document' => 0,
        'image' => 0,
        'video' => 0,
        'audio' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'entity',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'entity:menu_link' => array(
      'result_description' => '',
      'bundles' => array(
        'menu-amp-menu' => 0,
        'menu-bbr-main-menu' => 0,
        'menu-bw-main-menu' => 0,
        'menu-bw' => 0,
        'menu-content' => 0,
        'menu-cycling-uk-grand-draw' => 0,
        'features' => 0,
        'main-menu' => 0,
        'management' => 0,
        'navigation' => 0,
        'menu-top-menu' => 0,
        'menu-top-menu-xl' => 0,
        'user-menu' => 0,
        'menu-wfoc' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'insert_plugin' => array(
      'plugin' => 'raw_url',
      'url_method' => '1',
    ),
    'attribute_plugins' => array(
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['field_linkit'] = $linkit_profile;

  return $export;
}
