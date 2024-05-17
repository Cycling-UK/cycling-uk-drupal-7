<?php

/**
 * @file
 * features_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function features_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1::bundle';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = '';
  $facet->facet = 'bundle';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => 0,
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['apachesolr@acquia_search_server_1::bundle'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1::geom_field_gpx_map';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = '';
  $facet->facet = 'geom_field_gpx_map';
  $facet->enabled = FALSE;
  $facet->hash = 'h7hQPGWXPDHg00EfewxlOfN8uRyNhnZu';
  $facet->settings = array(
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => 1,
    'facet_missing' => 0,
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['apachesolr@acquia_search_server_1::geom_field_gpx_map'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1::im_field_cycling_type';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = '';
  $facet->facet = 'im_field_cycling_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => 0,
    'flatten' => '0',
    'hard_limit' => '50',
    'individual_parent' => '0',
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['apachesolr@acquia_search_server_1::im_field_cycling_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1::im_field_tags';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = '';
  $facet->facet = 'im_field_tags';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => 0,
    'flatten' => '0',
    'hard_limit' => '50',
    'individual_parent' => '0',
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['apachesolr@acquia_search_server_1::im_field_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:author';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'author';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Author',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_active';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_active';
  $facet->enabled = FALSE;
  $facet->hash = 'iQm4L50oiAFOYe7D4jzPKlREvWnK20NB';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Active',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_active'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_committee_member';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_committee_member';
  $facet->enabled = FALSE;
  $facet->hash = 'Hb502WGBI9bxegB38Dxyojqx1v0F3TPr';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Committee Member',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_committee_member'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_course_residential';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_course_residential';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Residential',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_course_residential'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_cycling_uk_venue';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_cycling_uk_venue';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Cycling UK venue',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_cycling_uk_venue'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_email_suppression';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_email_suppression';
  $facet->enabled = FALSE;
  $facet->hash = '3fjSkGOIj6AWAzZ3ijrVSryB7BJfqD7E';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Email Suppression',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_email_suppression'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_exclude_from_main_feeds';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_exclude_from_main_feeds';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_exclude_from_main_feeds'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_historic';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_historic';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Historic',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_historic'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_postal_suppression';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_postal_suppression';
  $facet->enabled = FALSE;
  $facet->hash = '5J1l3rU5WWWEIDjZ02SF2kWV61IodpBX';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Postal Suppression',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_postal_suppression'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_promoted';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_promoted';
  $facet->enabled = FALSE;
  $facet->hash = 'e9I0aR09WH2HsN4XmYPDEE7OVGOC1iIZ';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Promoted',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_promoted'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_redirect_website';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_redirect_website';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Automatic redirect',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_redirect_website'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_remove_child_page_links';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_remove_child_page_links';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Remove Child Page Links',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_remove_child_page_links'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_rider_email_suppression';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_rider_email_suppression';
  $facet->enabled = FALSE;
  $facet->hash = 'N9maMuJwOOKNRbG465y0gJVP6GGCQJHD';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Central Email Suppression',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_rider_email_suppression'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_rider_leader';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_rider_leader';
  $facet->enabled = FALSE;
  $facet->hash = 'cn5oTR3XQhqjHMcHW7esP0Wvsyvb0Wxz';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Rider Leader',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_rider_leader'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_rider_out_of_area';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_rider_out_of_area';
  $facet->enabled = FALSE;
  $facet->hash = 'tBbO5131wqneCBlhiq9FbdVW0iWYJqIA';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Out Of Area',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_rider_out_of_area'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_show_on_latest_feed';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_show_on_latest_feed';
  $facet->enabled = FALSE;
  $facet->hash = 'nM1kTR1gBtQnE48vd8T0XsvQMXlAeO0K';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Show on Group Home Page',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_show_on_latest_feed'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_sub_to_groups_comms';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_sub_to_groups_comms';
  $facet->enabled = FALSE;
  $facet->hash = 'XprRWOCzel9cTKCJn1xefD1kMGUrSaPs';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Subscribed to groups emails',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_sub_to_groups_comms'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_field_voting_rights';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_voting_rights';
  $facet->enabled = FALSE;
  $facet->hash = 'F7h0olK0h1uJAnAh2BLPgALLi2BSyGsi';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Voting Rights',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_field_voting_rights'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bm_group_group';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bm_group_group';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Group',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bm_group_group'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:bundle';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'bundle';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'plain_text',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'title' => 'Content type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['apachesolr@acquia_search_server_1:block:bundle'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:changed';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'changed';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'indexed' => 'indexed',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'indexed' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'indexed' => -49,
    ),
    'title' => 'Updated date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:changed'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:created';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'created';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'indexed' => 'indexed',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'indexed' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'indexed' => -49,
    ),
    'title' => 'Post date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:created'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:dm_field_closing_date';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_closing_date';
  $facet->enabled = FALSE;
  $facet->hash = 'fuXD6IuZx10X4h3NA23wJeo7y750Y1P3';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Closing date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:dm_field_closing_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:dm_field_completed_date';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_completed_date';
  $facet->enabled = FALSE;
  $facet->hash = 'gNV2EERwbm5ckIxIBTDA0PdTo8Emsum0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Completed date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:dm_field_completed_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:dm_field_course_dates';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_course_dates';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Course dates',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:dm_field_course_dates'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:dm_field_date';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_date';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'End of objection period',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:dm_field_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:dm_field_group_newsletter_subscr';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_group_newsletter_subscr';
  $facet->enabled = FALSE;
  $facet->hash = 'hlGRzXZJQqTQIBYCvqZvzgysxEJc3gWJ';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Newsletter Subscriber (date range)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:dm_field_group_newsletter_subscr'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:dm_field_publication_date';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_publication_date';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Publication Date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:dm_field_publication_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:dm_field_renewal_date';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_renewal_date';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Renewal Date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:dm_field_renewal_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:dm_field_review_date';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_review_date';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Review date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:dm_field_review_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:dm_field_rider_joined_date';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_rider_joined_date';
  $facet->enabled = FALSE;
  $facet->hash = '8poAgAQVjRIEmbWTO9Cf7PKShBtN7nFL';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Joined Date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:dm_field_rider_joined_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:dm_field_rider_renewal_date';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_rider_renewal_date';
  $facet->enabled = FALSE;
  $facet->hash = 'IbgIk9jsymu8oIYQyJbWJFKruHvvNcGh';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Renewal Date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:dm_field_rider_renewal_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:dm_field_sub_to_groups_comms_dat';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_sub_to_groups_comms_dat';
  $facet->enabled = FALSE;
  $facet->hash = 'of2JPJf9NbhwSw6ZXyDQWvgtHw8qZG0D';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Date Subscribed',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:dm_field_sub_to_groups_comms_dat'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:dm_field_welcome_email_sent';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_welcome_email_sent';
  $facet->enabled = FALSE;
  $facet->hash = '8Bc0RaLqqVTJd4rt5q46mXS83n151mS9';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Welcome Email Sent',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:dm_field_welcome_email_sent'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:ftm_field_course_price';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'ftm_field_course_price';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Price (inc VAT)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:ftm_field_course_price'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:geom_field_area_covered';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'geom_field_area_covered';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Catchment area of the group',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:geom_field_area_covered'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:geom_field_finish_address';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'geom_field_finish_address';
  $facet->enabled = FALSE;
  $facet->hash = '8IdthZXBlF41r7q5AuGxe9yPAWmLdI2F';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Finish address',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:geom_field_finish_address'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:geom_field_gpx_map';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'geom_field_gpx_map';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 0,
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'display_count' => 1,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'filtered_html',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => '1',
    'show_expanded' => 0,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'title' => 'Map',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:geom_field_gpx_map'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:geom_field_location';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'geom_field_location';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Location',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:geom_field_location'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:geom_field_start_address';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'geom_field_start_address';
  $facet->enabled = FALSE;
  $facet->hash = 'FaVtpIxYp1WcXgrwnwCqdH9NLbwR63b6';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Start address',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:geom_field_start_address'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_article_type';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_article_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_article_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_bcq_award_level';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_bcq_award_level';
  $facet->enabled = FALSE;
  $facet->hash = 'H7J5r5sjCFvV0LD8PEM8th5hgBEuBvRk';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'BCQ Award level',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_bcq_award_level'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_call_to_action';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_call_to_action';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Call to action',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_call_to_action'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_campaign';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_campaign';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Campaign',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_campaign'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_challenge_group_and_typ';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_challenge_group_and_typ';
  $facet->enabled = FALSE;
  $facet->hash = 'oGKHNMx08RonCfjXa7ImNljSyMuWV9VN';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Challenge group and type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_challenge_group_and_typ'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_cycling_type';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_cycling_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'plain_text',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'title' => 'Cycling type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_cycling_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_cycling_uk_section';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_cycling_uk_section';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Cycling UK section',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_cycling_uk_section'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_event_facilities';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_event_facilities';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Event Facilities',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_event_facilities'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_event_type';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_event_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_event_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_page_management';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_page_management';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Page management',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_page_management'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_poi_type';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_poi_type';
  $facet->enabled = FALSE;
  $facet->hash = 'bGf8ToEl328t0rO1s3hIDy7007RlLGZf';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'POI type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_poi_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_post_type';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_post_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Post type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_post_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_publication_type';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_publication_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Publication type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_publication_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_ride_type';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_ride_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_ride_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_status';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_status';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Status',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:im_field_tags';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'im_field_tags';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'plain_text',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'title' => 'Tags',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['apachesolr@acquia_search_server_1:block:im_field_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:itm_field_checkpoints';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'itm_field_checkpoints';
  $facet->enabled = FALSE;
  $facet->hash = 'Z7C6j5jNRpssuDw9kD81AhZQzic7rTp9';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Checkpoints',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:itm_field_checkpoints'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:itm_field_completion_year';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'itm_field_completion_year';
  $facet->enabled = FALSE;
  $facet->hash = 'C3K9seLr2pJTdVOmLpNod1Xced1qa1yn';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Year',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:itm_field_completion_year'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:itm_field_old_nid';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'itm_field_old_nid';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Old Node ID',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:itm_field_old_nid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:itm_field_organisation_number';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'itm_field_organisation_number';
  $facet->enabled = FALSE;
  $facet->hash = 'bheMja2ajuUNc1CpzlBuquVdo15Tz3l5';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Organisation Number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:itm_field_organisation_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:itm_field_rider_contact_number';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'itm_field_rider_contact_number';
  $facet->enabled = FALSE;
  $facet->hash = 'rzlZJd58S6hU10RtIoVfYYUdjv05p5SK';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'contact_number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:itm_field_rider_contact_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:itm_field_shop_node_id';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'itm_field_shop_node_id';
  $facet->enabled = FALSE;
  $facet->hash = 'kl0Y17jpfdkswZIZc0haGzc5NT9JKIxk';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Shop Node ID',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:itm_field_shop_node_id'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:language';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'language';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Language',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field__volunteer_form';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field__volunteer_form';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => ' Volunteer form',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field__volunteer_form'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_announcement_type';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_announcement_type';
  $facet->enabled = FALSE;
  $facet->hash = 'N680FSSdb0LiJyciXMTxdEOB56jaLfnB';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Announcement type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_announcement_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_background_colour';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_background_colour';
  $facet->enabled = FALSE;
  $facet->hash = 'jMhUgj2L2fJTGtDO898IzFolO07fBjDO';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Background colour',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_background_colour'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_biography_category';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_biography_category';
  $facet->enabled = FALSE;
  $facet->hash = 'gkMAg61UrrzKZewM1GTeN2ioE9dzGJat';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Biography category',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_biography_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_boards_firstname';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_boards_firstname';
  $facet->enabled = FALSE;
  $facet->hash = 'GrgOPcRmIAa1JpNZHUUNZInLREeMQtoa';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'First Name',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_boards_firstname'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_boards_lastname';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_boards_lastname';
  $facet->enabled = FALSE;
  $facet->hash = '8hiNSiwj97bKD07ANoyaGAd4h4ctGT8f';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Last Name',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_boards_lastname'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_booking_code';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_booking_code';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Booking code',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_booking_code'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_cancelled';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_cancelled';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Cancelled',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_cancelled'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_caption';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_caption';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Caption',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_caption'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_centre_activities';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_centre_activities';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Centre activities',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_centre_activities'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_centre_facilities';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_centre_facilities';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Centre facilities',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_centre_facilities'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_contact_name';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_contact_name';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Contact name',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_contact_name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_contact_number';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_contact_number';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Contact phone number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_contact_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_cost';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_cost';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Cost',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_cost'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_course_assessment';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_assessment';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Assessment',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_course_assessment'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_course_availability';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_availability';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Availability',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_course_availability'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_course_category';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_category';
  $facet->enabled = FALSE;
  $facet->hash = 'o5E3bG3FOcPAVsx4aGJT42I08HbMJUeN';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Course Category',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_course_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_course_duration';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_duration';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Duration',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_course_duration'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_course_fitness_level';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_fitness_level';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Fitness level',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_course_fitness_level'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_course_group_size';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_group_size';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Group size',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_course_group_size'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_course_status';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_status';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Course status',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_course_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_course_terrain';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_terrain';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Terrain',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_course_terrain'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_course_tutor';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_tutor';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Course tutor',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_course_tutor'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_course_type';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Course type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_course_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_course_venue';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_venue';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Course venue',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_course_venue'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_course_venue_telephone';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_venue_telephone';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Telephone',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_course_venue_telephone'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_editorial';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_editorial';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Editorial',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_editorial'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_email_audience';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_email_audience';
  $facet->enabled = FALSE;
  $facet->hash = 'NLnRw5lRP1SS4m2mUXou6pRPo5I1Gn4v';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Email Audience',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_email_audience'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_email_status';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_email_status';
  $facet->enabled = FALSE;
  $facet->hash = 'lDrhgai3pa8FE8nvUs5MSHur4H0ybNW1';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Status',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_email_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_feed_in_courses';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_feed_in_courses';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Feeds to',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_feed_in_courses'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_further_reading';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_further_reading';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Further reading',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_further_reading'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_grid_reference';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_grid_reference';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Map grid reference',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_grid_reference'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_group_activities';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_activities';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Activities of group',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_group_activities'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_group_contact_name';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_contact_name';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Contact name for the group',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_group_contact_name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_group_org_member_no';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_org_member_no';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Organisation member number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_group_org_member_no'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_group_owner_member_no';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_owner_member_no';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Owner member number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_group_owner_member_no'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_group_parent';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_parent';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Name of the parent group',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_group_parent'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_group_phone_number';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_phone_number';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Contact phone number for the group',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_group_phone_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_group_postcodes';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_postcodes';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Postcode(s) of the group',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_group_postcodes'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_group_region';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_region';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Region of the group',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_group_region'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_group_type';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Type of group',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_group_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_headline';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_headline';
  $facet->enabled = FALSE;
  $facet->hash = '1gFX3ndD9SNtKf0ZjOJOinquBj0wIYI6';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Headline',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_headline'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_ice_name';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_ice_name';
  $facet->enabled = FALSE;
  $facet->hash = 'fWtrjNJczs14B0jBazD51gTQ3GDfNx0C';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'ICE Name',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_ice_name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_ice_notes';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_ice_notes';
  $facet->enabled = FALSE;
  $facet->hash = '0rjtKeJVmLXmiIMA2V0FZ0Xu5ZWme9cB';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'ICE Notes',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_ice_notes'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_ice_phone_number';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_ice_phone_number';
  $facet->enabled = FALSE;
  $facet->hash = 'y0T07n1Hp3BqIXh7JbYzo0d1HjtbzQvp';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'ICE Phone Number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_ice_phone_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_inclusive_cycling';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_inclusive_cycling';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Inclusive Cycling Project',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_inclusive_cycling'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_member_benefit_category';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_member_benefit_category';
  $facet->enabled = FALSE;
  $facet->hash = '07VYsqOyuFOh0HT7mroYj0M0RvdjiwAQ';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Member benefit category',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_member_benefit_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_membership_type';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_membership_type';
  $facet->enabled = FALSE;
  $facet->hash = '0YcPdJoP1GuKL0Ora12AT5ij9mopp13a';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Membership Type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_membership_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_position';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_position';
  $facet->enabled = FALSE;
  $facet->hash = 'p1OvyTwH0qdet60KFhT5CgyHM2y2FjbT';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Position',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_position'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_postcode';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_postcode';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Postcode',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_postcode'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_prerequisite_courses';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_prerequisite_courses';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Prerequisite courses',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_prerequisite_courses'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_price_summary';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_price_summary';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Price',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_price_summary'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_ride_level';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_ride_level';
  $facet->enabled = FALSE;
  $facet->hash = 'IsKOcKlM0QISlsTawYNNL9gA4JswqHfn';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Level of ride',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_ride_level'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_rider_address_1';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_address_1';
  $facet->enabled = FALSE;
  $facet->hash = '11UidCWjF2Gk8snCZ8fkAlC9EHsVgFpF';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Address Line 1',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_rider_address_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_rider_address_2';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_address_2';
  $facet->enabled = FALSE;
  $facet->hash = 'PsnFtvcYcyGEg1GPhk0MBUSa4A2fD9Ak';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Address Line 2',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_rider_address_2'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_rider_address_3';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_address_3';
  $facet->enabled = FALSE;
  $facet->hash = 'rWsFVwQSopBAI3QkGw04CLhP8QMVaW1L';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Address Line 3',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_rider_address_3'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_rider_country';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_country';
  $facet->enabled = FALSE;
  $facet->hash = 'uHiD9xyGRRzsKNL1fg7SCpxzSOJroQqD';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Country',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_rider_country'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_rider_county';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_county';
  $facet->enabled = FALSE;
  $facet->hash = 'cRxqycE0qLyc1J1ufFBZz3h0CmKxiNWY';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'County',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_rider_county'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_rider_forename';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_forename';
  $facet->enabled = FALSE;
  $facet->hash = 'wLFeHfPQRe5pp5w16XVr5QID6qiRqVlQ';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Forename',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_rider_forename'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_rider_local_mobile_numb';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_local_mobile_numb';
  $facet->enabled = FALSE;
  $facet->hash = 'fyiu2COcZrdDGtj0DgCoy58ehka9fRCP';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Mobile Number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_rider_local_mobile_numb'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_rider_postcode';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_postcode';
  $facet->enabled = FALSE;
  $facet->hash = 'xoMbxTUo79v1v6r5upDTHG5gN7fM2aRS';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Postcode',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_rider_postcode'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_rider_salutation';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_salutation';
  $facet->enabled = FALSE;
  $facet->hash = 'OZa8CN4E1DcFwwhRjMwhRc5dGyLukpwY';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Salutation',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_rider_salutation'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_rider_status';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_status';
  $facet->enabled = FALSE;
  $facet->hash = '4UjAkex5OOHxJMHMPNMoENpmX0uiKQGt';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Status',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_rider_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_rider_surname';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_surname';
  $facet->enabled = FALSE;
  $facet->hash = 'y7Rtw8sTVChEBSY2fWEqNDOvA2iX7hDM';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Surname',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_rider_surname'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_rider_town';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_town';
  $facet->enabled = FALSE;
  $facet->hash = '7mEpFPskHktH11YBF5WUw11QB6zBafJ0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Town',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_rider_town'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_risk_assessment';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_risk_assessment';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Risk assessment',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_risk_assessment'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_skill_level';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_skill_level';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Skill level',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_skill_level'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_story';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_story';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Story',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_story'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_sub_to_groups_comms_not';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_sub_to_groups_comms_not';
  $facet->enabled = FALSE;
  $facet->hash = 'ifjdrW9VdjTP0KErHX5g1dvYLrchMEdW';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Notes',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_sub_to_groups_comms_not'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_subtitle';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_subtitle';
  $facet->enabled = FALSE;
  $facet->hash = 'yAorFvYOqzpPaTwZtCURZ9M6jLUg2thW';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Title B',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_subtitle'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_title';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_title';
  $facet->enabled = FALSE;
  $facet->hash = 'tA0HB4JQL3OkLcHi30BfAEIfnHiGVaup';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Title A',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_title'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_town';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_town';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Town',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_town'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_tro_local_authority';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_tro_local_authority';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Relevant Local Authority',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_tro_local_authority'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_tro_status';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_tro_status';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Status',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_tro_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_tro_subject';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_tro_subject';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Subject',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_tro_subject'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_tro_type';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_tro_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_tro_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_twitter_tag';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_twitter_tag';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Twitter Tag',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_twitter_tag'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_user';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_user';
  $facet->enabled = FALSE;
  $facet->hash = 'avQGhUnMraz9z0Y3E0m1DlV3t5gTQvl2';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'User',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_user'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_field_venue_type';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_venue_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Type of venue',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_field_venue_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_og_group_ref';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_og_group_ref';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Groups audience',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_og_group_ref'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:sm_title_field';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'sm_title_field';
  $facet->enabled = FALSE;
  $facet->hash = 'Ii8PY0uptofBzn28zd3jE1Xt0LxgDtgc';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Title',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_1:block:sm_title_field'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:author';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'author';
  $facet->enabled = FALSE;
  $facet->hash = 'oy7zYatWAPy3FPHXWNgF4gxA2PLThDQa';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Author',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bm_field_active';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_active';
  $facet->enabled = FALSE;
  $facet->hash = 'T8KtR0BQmdnweKuWTwqRhZj9Bo8SMZgv';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Active',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bm_field_active'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bm_field_committee_member';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_committee_member';
  $facet->enabled = FALSE;
  $facet->hash = 'LzLInKrew1kL1NObqKtEL8FeL2gP57lO';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Committee Member',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bm_field_committee_member'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bm_field_course_residential';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_course_residential';
  $facet->enabled = FALSE;
  $facet->hash = 'tYsX99wOamuNL0TuubvQjD9RTCagWuJS';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Residential',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bm_field_course_residential'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bm_field_email_suppression';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_email_suppression';
  $facet->enabled = FALSE;
  $facet->hash = '777ld1h3V08pJ30TYBOuaUgce3nHdn4G';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Email Suppression',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bm_field_email_suppression'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bm_field_postal_suppression';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_postal_suppression';
  $facet->enabled = FALSE;
  $facet->hash = 'ADyF4ZNolHSMV84h9E3gLQL0xV4jjvfV';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Postal Suppression',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bm_field_postal_suppression'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bm_field_promoted';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_promoted';
  $facet->enabled = FALSE;
  $facet->hash = '9thO2eO9akvFutshxKGIvpeK3F5ZE3M3';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Promoted',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bm_field_promoted'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bm_field_remove_child_page_links';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_remove_child_page_links';
  $facet->enabled = FALSE;
  $facet->hash = '2hKsWFc13TQ3nP4mCiLUvOuwDVSkpKTx';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Remove Child Page Links',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bm_field_remove_child_page_links'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bm_field_rider_email_suppression';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_rider_email_suppression';
  $facet->enabled = FALSE;
  $facet->hash = 'WjUb7U5ieMbkdcCfHS16mmJU4SZWEpuz';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Central Email Suppression',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bm_field_rider_email_suppression'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bm_field_rider_leader';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_rider_leader';
  $facet->enabled = FALSE;
  $facet->hash = 'ab8kNalazN13F0yUryJN9njYLIIH4tfC';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Rider Leader',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bm_field_rider_leader'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bm_field_rider_out_of_area';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_rider_out_of_area';
  $facet->enabled = FALSE;
  $facet->hash = 'ICzS5JBAiX91WPIyBg8BPbqKpKni7e2b';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Out Of Area',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bm_field_rider_out_of_area'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bm_field_show_on_latest_feed';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_show_on_latest_feed';
  $facet->enabled = FALSE;
  $facet->hash = 'WzhyWAprxWcQJphmJzXTg99b351y5a1h';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Show on Group Home Page',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bm_field_show_on_latest_feed'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bm_field_sub_to_groups_comms';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_sub_to_groups_comms';
  $facet->enabled = FALSE;
  $facet->hash = 'oVi4ohKuv5lK00rFwvczEd7r8N3Dds9m';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Subscribed to groups emails',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bm_field_sub_to_groups_comms'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bm_field_voting_rights';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_voting_rights';
  $facet->enabled = FALSE;
  $facet->hash = 's5XCxl7wdHEPQOdZHqIim1opmRdTuoL7';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Voting Rights',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bm_field_voting_rights'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bm_group_group';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bm_group_group';
  $facet->enabled = FALSE;
  $facet->hash = '10JzXOsKccyBYsKlK8iZT1ax10cYz1pJ';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Group',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bm_group_group'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:bundle';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'bundle';
  $facet->enabled = TRUE;
  $facet->hash = '2oSZEo4iHzPoi0Verf9Tmw1QcN1m121f';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Content type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:bundle'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:changed';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'changed';
  $facet->enabled = FALSE;
  $facet->hash = 'eO1yyTFmqGvc1lWgaabibyUxRVP8fGEN';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'indexed' => 'indexed',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'indexed' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'indexed' => -49,
    ),
    'title' => 'Updated date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:changed'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:created';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'created';
  $facet->enabled = FALSE;
  $facet->hash = 'WlXRlQBDQnW1mh11BZsz37AWa2oeS1ME';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'indexed' => 'indexed',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'indexed' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'indexed' => -49,
    ),
    'title' => 'Post date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:created'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:dm_field_closing_date';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_closing_date';
  $facet->enabled = FALSE;
  $facet->hash = 'OnTooX85qXSDjqhvA2bKKtizZ43MFU1O';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Closing date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:dm_field_closing_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:dm_field_completed_date';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_completed_date';
  $facet->enabled = FALSE;
  $facet->hash = 'Q5KKi1ZgEthlm6QDxL1utIPRdSEEuYl9';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Completed date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:dm_field_completed_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:dm_field_course_dates';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_course_dates';
  $facet->enabled = FALSE;
  $facet->hash = 's0lntOKhKkTeN16Avxy7wK6WfT9G3RDV';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Course dates',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:dm_field_course_dates'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:dm_field_date';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_date';
  $facet->enabled = FALSE;
  $facet->hash = 'ukLh08ZcilsXu4TRkwK6G2R4c85tnQez';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'End of objection period',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:dm_field_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:dm_field_group_newsletter_subscr';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_group_newsletter_subscr';
  $facet->enabled = FALSE;
  $facet->hash = 'mvE0SGS10VEc1MJkL51iDdSvAfbVD2Ck';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Newsletter Subscriber (date range)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:dm_field_group_newsletter_subscr'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:dm_field_renewal_date';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_renewal_date';
  $facet->enabled = FALSE;
  $facet->hash = 'qxGQkq1JCZ1eu1wFkSsdeQ9vPPn5zLRz';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Renewal Date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:dm_field_renewal_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:dm_field_rider_joined_date';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_rider_joined_date';
  $facet->enabled = FALSE;
  $facet->hash = '0qDrzpnsnit4POAK6p02LaBLdBiY7s1T';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Joined Date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:dm_field_rider_joined_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:dm_field_rider_renewal_date';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_rider_renewal_date';
  $facet->enabled = FALSE;
  $facet->hash = 'Zs7TnRNpYq0x6a4DzyODsaHm0yx4Sbl0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Renewal Date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:dm_field_rider_renewal_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:dm_field_sub_to_groups_comms_dat';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_sub_to_groups_comms_dat';
  $facet->enabled = FALSE;
  $facet->hash = 'N0vKx8X10isqpvFI42W7YvtIncjmAoyb';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Date Subscribed',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:dm_field_sub_to_groups_comms_dat'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:dm_field_welcome_email_sent';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_welcome_email_sent';
  $facet->enabled = FALSE;
  $facet->hash = 'PbyCH0stRSW3iXjW1eQXVDCvtFo3DvLn';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Welcome Email Sent',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:dm_field_welcome_email_sent'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:ftm_field_course_price';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'ftm_field_course_price';
  $facet->enabled = FALSE;
  $facet->hash = 'zLzMygwBvw5i9ci61FhYjBU6X8l0BFdX';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Price (inc VAT)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:ftm_field_course_price'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:geom_field_area_covered';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'geom_field_area_covered';
  $facet->enabled = FALSE;
  $facet->hash = 'BvAPli448rkSfFaw0BBiviQMbqAMZuRV';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Locations',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:geom_field_area_covered'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:geom_field_finish_address';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'geom_field_finish_address';
  $facet->enabled = FALSE;
  $facet->hash = 'Q0MGuW7a5hPPtuRceqSJI38KuGHqB0XZ';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Finish address',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:geom_field_finish_address'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:geom_field_gpx_map';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'geom_field_gpx_map';
  $facet->enabled = FALSE;
  $facet->hash = 'GMEliOCST00nRnQhbWvUOAV1vHNUZn0o';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Map',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:geom_field_gpx_map'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:geom_field_location';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'geom_field_location';
  $facet->enabled = FALSE;
  $facet->hash = 'zXDW93RPnLl0H0Yd31SJXjiLKCMeoqUS';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Location',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:geom_field_location'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:geom_field_start_address';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'geom_field_start_address';
  $facet->enabled = FALSE;
  $facet->hash = '4bdmXup3F1gFbl25rpUDoosI27jFP0Af';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Start address',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:geom_field_start_address'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:im_field_bcq_award_level';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'im_field_bcq_award_level';
  $facet->enabled = FALSE;
  $facet->hash = 'YuOCz0lonKzOrSzl5XzUg1FW04sw3LnF';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'BCQ Award level',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:im_field_bcq_award_level'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:im_field_call_to_action';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'im_field_call_to_action';
  $facet->enabled = FALSE;
  $facet->hash = 't6YTHb3vupEF3Up7BlJAYcR7aIlo1JAa';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Call to action',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:im_field_call_to_action'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:im_field_campaign';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'im_field_campaign';
  $facet->enabled = FALSE;
  $facet->hash = '44PH1WzrSDnbdbwMFMWGbEzs6dPzPxCG';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Campaign',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:im_field_campaign'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:im_field_challenge_group_and_typ';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'im_field_challenge_group_and_typ';
  $facet->enabled = FALSE;
  $facet->hash = '8BDkfYeg7u4aDyEiHaPCT1reLkx0LeAq';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Challenge group and type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:im_field_challenge_group_and_typ'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:im_field_cycling_uk_section';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'im_field_cycling_uk_section';
  $facet->enabled = FALSE;
  $facet->hash = 'Cd4IE0JLXx0z14RZyH1KijD533413B39';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Cycling UK section',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:im_field_cycling_uk_section'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:im_field_event_facilities';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'im_field_event_facilities';
  $facet->enabled = FALSE;
  $facet->hash = 'Hl8Lrb7XSIPCkAiz1d0ToCc0glrVI8al';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Event Facilities',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:im_field_event_facilities'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:im_field_event_type';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'im_field_event_type';
  $facet->enabled = FALSE;
  $facet->hash = 'pGiBUfn5Ebnkz0N2ReuxhIoouVeArHc4';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:im_field_event_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:im_field_page_management';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'im_field_page_management';
  $facet->enabled = FALSE;
  $facet->hash = 'Fo5WaLvLpvRYYzB0PlhafywfOF32WX1e';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Page management',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:im_field_page_management'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:im_field_poi_type';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'im_field_poi_type';
  $facet->enabled = FALSE;
  $facet->hash = 'dBfp7flaP3sxjEK5kzZ2tzMqGWtWFqOa';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'POI type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:im_field_poi_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:im_field_post_type';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'im_field_post_type';
  $facet->enabled = FALSE;
  $facet->hash = 'yAHkikPt5WwyjvspLIWC1GgUU71JYE03';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Post type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:im_field_post_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:im_field_publication_type';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'im_field_publication_type';
  $facet->enabled = FALSE;
  $facet->hash = '0wTYnPqQx223MyflzMd6TXJdr0p7SkrI';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Publication type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:im_field_publication_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:im_field_status';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'im_field_status';
  $facet->enabled = FALSE;
  $facet->hash = 'KcFn9ifX9Y8PJARxTwV57fw0pRKveC1c';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Status',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:im_field_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:im_field_tags';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'im_field_tags';
  $facet->enabled = FALSE;
  $facet->hash = 'f6jwHJ0YG1dJsI6vfN34uFQHGK2ijsgn';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Tags',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:im_field_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:itm_field_checkpoints';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'itm_field_checkpoints';
  $facet->enabled = FALSE;
  $facet->hash = 'tz5iXnAoATWZHvY6aykR8flRRcAGRNCY';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Checkpoints',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:itm_field_checkpoints'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:itm_field_completion_year';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'itm_field_completion_year';
  $facet->enabled = FALSE;
  $facet->hash = 'XY1nls0BfLVWdnmVBGMO1swk8Ydw4T0m';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Year',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:itm_field_completion_year'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:itm_field_old_nid';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'itm_field_old_nid';
  $facet->enabled = FALSE;
  $facet->hash = 'dxcwqBM6dP4L9wByYpkzp1W3l1M8p0Qm';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Old Nid',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:itm_field_old_nid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:itm_field_organisation_number';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'itm_field_organisation_number';
  $facet->enabled = FALSE;
  $facet->hash = 'hOoMImb2ca012KN7eFhLB6MGeuDdjp51';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Organisation Number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:itm_field_organisation_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:itm_field_rider_contact_number';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'itm_field_rider_contact_number';
  $facet->enabled = FALSE;
  $facet->hash = '0RX6vWJ6B7TVxa4dz7OvDE3FfGLpSZ4d';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'contact_number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:itm_field_rider_contact_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:itm_field_shop_node_id';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'itm_field_shop_node_id';
  $facet->enabled = FALSE;
  $facet->hash = '4mT7ow1eZuGKA49Xm0c3BK2J53jxG0lj';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Shop Node ID',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:itm_field_shop_node_id'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:language';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'language';
  $facet->enabled = FALSE;
  $facet->hash = '032m8dYk0UueoCoCe9v6eLxBF0D5xc6s';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Language',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field__volunteer_form';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field__volunteer_form';
  $facet->enabled = FALSE;
  $facet->hash = 'BjTT25QUBibdgw3Lo0lROAYFtltyi18b';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => ' Volunteer form',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field__volunteer_form'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_announcement_type';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_announcement_type';
  $facet->enabled = FALSE;
  $facet->hash = '9cnL11a2ROnbpP4ExZlKKt8hlQBcUfIt';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Announcement type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_announcement_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_boards_firstname';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_boards_firstname';
  $facet->enabled = FALSE;
  $facet->hash = 'ywbyf6AaznZzGQls0tCoKvM2pOUuBPE4';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'First Name',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_boards_firstname'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_boards_lastname';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_boards_lastname';
  $facet->enabled = FALSE;
  $facet->hash = 'ip06JKyl9BlKYKS41O6Ja0g1MF5C2VHE';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Last Name',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_boards_lastname'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_booking_code';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_booking_code';
  $facet->enabled = FALSE;
  $facet->hash = '712A8oF6OpdrIFBFIFpl3hbDRncv7JgH';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Booking code',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_booking_code'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_cancelled';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_cancelled';
  $facet->enabled = FALSE;
  $facet->hash = 'hXZhfL98qyEct7yAIq5jar2Zv2RxD3TR';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Cancelled',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_cancelled'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_caption';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_caption';
  $facet->enabled = FALSE;
  $facet->hash = 'FF9yFHpmUIAPTyhia897bdP1iLmA0ScH';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Caption',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_caption'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_centre_activities';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_centre_activities';
  $facet->enabled = FALSE;
  $facet->hash = 'S0W2SwE07yl0uX1SbNZEw4gkC0vd2WJV';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Centre activities',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_centre_activities'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_centre_facilities';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_centre_facilities';
  $facet->enabled = FALSE;
  $facet->hash = '4eEN51vevvRdxfnxnVc6T3N1ArR9JtDL';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Centre facilities',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_centre_facilities'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_contact_name';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_contact_name';
  $facet->enabled = FALSE;
  $facet->hash = 'EJRifbg0is9JsfFiLSoX8ZYzCEJLgL8i';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Contact name',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_contact_name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_contact_number';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_contact_number';
  $facet->enabled = FALSE;
  $facet->hash = 'JXislB1SaEi3db2AgmKFbzcXDrXkNTBy';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Contact phone number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_contact_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_cost';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_cost';
  $facet->enabled = FALSE;
  $facet->hash = 'RkMI7p9GGWLERwLSeMSXAPABLdxE4xNC';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Cost',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_cost'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_course_assessment';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_assessment';
  $facet->enabled = FALSE;
  $facet->hash = 'SYhBCBbS1gLjgGL6HazL3lIX3U4B6J31';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Assessment',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_course_assessment'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_course_category';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_category';
  $facet->enabled = FALSE;
  $facet->hash = 'qRlMGjFRhTL3ydGN6lMCWjJcFj5wk23i';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Course Category',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_course_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_course_fitness_level';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_fitness_level';
  $facet->enabled = FALSE;
  $facet->hash = 'EXRKNDShfE6t8JDc6CH0uaOmmq7FNmyf';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Fitness level',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_course_fitness_level'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_course_status';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_status';
  $facet->enabled = FALSE;
  $facet->hash = 'u6ewIOHt7jaCQg4jE2EPKtRC2MKt7VMA';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Course status',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_course_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_course_terrain';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_terrain';
  $facet->enabled = FALSE;
  $facet->hash = 'o4I943wII1e4zSRGb145zKJno6q1alfw';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Terrain',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_course_terrain'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_course_type';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_type';
  $facet->enabled = FALSE;
  $facet->hash = 'RJXddiJv0wB71I4Uo3XrbPuALSzxZ05C';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Course type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_course_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_course_venue';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_course_venue';
  $facet->enabled = FALSE;
  $facet->hash = '7CylfLg0mfgmCr3gggnkupjmtjR260BM';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Course venue',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_course_venue'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_editorial';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_editorial';
  $facet->enabled = FALSE;
  $facet->hash = 'lyUtE5WFA1tGqSOtrs6rMcabiAJ7LP0u';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Editorial',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_editorial'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_email_audience';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_email_audience';
  $facet->enabled = FALSE;
  $facet->hash = 'gzXLvOntyDZZNodNFtgnfaZtFoTJTZGn';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Email Audience',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_email_audience'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_email_status';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_email_status';
  $facet->enabled = FALSE;
  $facet->hash = 'Cf03UVuAZtVuhpdneQYGdsajOS33YdSJ';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Status',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_email_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_grid_reference';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_grid_reference';
  $facet->enabled = FALSE;
  $facet->hash = 'ZbMGhux3SzKizyn9sW8WUUaB1zVaCNfr';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Map grid reference',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_grid_reference'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_group_activities';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_activities';
  $facet->enabled = FALSE;
  $facet->hash = '3IgZ1jbAdJvUxYXuFBuTh8ai3kGiaHHJ';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Activities of group',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_group_activities'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_group_contact_name';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_contact_name';
  $facet->enabled = FALSE;
  $facet->hash = '301xiUYDm70DGCmmW173ELuqkwfepT95';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Contact name for the group',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_group_contact_name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_group_org_member_no';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_org_member_no';
  $facet->enabled = FALSE;
  $facet->hash = 'R3czv0A4k978tBoV9moFRwgl2z00dQQG';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Organisation member number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_group_org_member_no'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_group_owner_member_no';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_owner_member_no';
  $facet->enabled = FALSE;
  $facet->hash = 'BIWmvmcNn8l8JbGfCvHqyfuKP4jfsRNQ';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Owner member number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_group_owner_member_no'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_group_phone_number';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_phone_number';
  $facet->enabled = FALSE;
  $facet->hash = 'nSbJzHmyQNbrhlRGGVE9J8NwfPtsESMe';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Phone number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_group_phone_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_group_type';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_group_type';
  $facet->enabled = FALSE;
  $facet->hash = '3eQqsOohAorHtOAw6ZzmfbnrlqCSAdKq';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Type of group',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_group_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_headline';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_headline';
  $facet->enabled = FALSE;
  $facet->hash = '7dvhD0AUQwt203Xt2dRn0KCuYnAS8dR3';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Headline',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_headline'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_ice_name';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_ice_name';
  $facet->enabled = FALSE;
  $facet->hash = 'orGhQHp7emLZwqLGoMB0Ac01KHPQEMWv';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'ICE Name',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_ice_name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_ice_notes';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_ice_notes';
  $facet->enabled = FALSE;
  $facet->hash = '3DpwHio9gyyFGpnAAaLjaqeRqPZZ5bZF';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'ICE Notes',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_ice_notes'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_ice_phone_number';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_ice_phone_number';
  $facet->enabled = FALSE;
  $facet->hash = '61v7Lj1322pqBr24qfbjIta4U7Z0Dv4w';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'ICE Phone Number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_ice_phone_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_inclusive_cycling';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_inclusive_cycling';
  $facet->enabled = FALSE;
  $facet->hash = 'FFkUoHbWmARE9XupNAoDTMMmMEyEslB3';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Inclusive Cycling Project',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_inclusive_cycling'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_membership_type';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_membership_type';
  $facet->enabled = FALSE;
  $facet->hash = 'WOQC5rCpl0UvhydQozXxTeBt51UVXXSF';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Membership Type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_membership_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_position';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_position';
  $facet->enabled = FALSE;
  $facet->hash = 'PNFwADkyvRUS3uMXiPER6MKiPJQA7EW2';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Position',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_position'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_postcode';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_postcode';
  $facet->enabled = FALSE;
  $facet->hash = '77fFfJ0p3i0Fh6epb4OnpEMQ1FOykFdG';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Postcode',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_postcode'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_prerequisite_courses';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_prerequisite_courses';
  $facet->enabled = FALSE;
  $facet->hash = 'kfg5Bfktk1IocQ2awZMESB0NQLldkjm7';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Prerequisite courses',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_prerequisite_courses'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_ride_level';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_ride_level';
  $facet->enabled = FALSE;
  $facet->hash = 'dzjVfvSSfxqNw1iDaKWjlsn1wT63O1YH';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Level of ride',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_ride_level'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_rider_address_1';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_address_1';
  $facet->enabled = FALSE;
  $facet->hash = '2POEgIQAO00Hi6Z9ymBkIM6ZgLd6qdrB';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Address Line 1',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_rider_address_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_rider_address_2';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_address_2';
  $facet->enabled = FALSE;
  $facet->hash = 'pZrzIq6SQ71lSoh0ySmMQWsolD57nk6a';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Address Line 2',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_rider_address_2'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_rider_address_3';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_address_3';
  $facet->enabled = FALSE;
  $facet->hash = 'vDWLqPVJqUqd5S11XJtZp3ebtHrw4vRb';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Address Line 3',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_rider_address_3'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_rider_country';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_country';
  $facet->enabled = FALSE;
  $facet->hash = 'ByIfM7fWMdpxS5xsFr1QrgZvBBUxsN4V';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Country',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_rider_country'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_rider_county';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_county';
  $facet->enabled = FALSE;
  $facet->hash = 'HngbfJSfXWyiAWCLoq1EFdTUmCgBzFOT';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'County',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_rider_county'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_rider_forename';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_forename';
  $facet->enabled = FALSE;
  $facet->hash = 'g9hx6Xu0NFYeHKHunzQhQgszk8d9reK8';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Forename',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_rider_forename'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_rider_local_mobile_numb';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_local_mobile_numb';
  $facet->enabled = FALSE;
  $facet->hash = 'fqrtiaCO2W5q035pcC1JAjUHDNqX1qiI';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Mobile Number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_rider_local_mobile_numb'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_rider_postcode';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_postcode';
  $facet->enabled = FALSE;
  $facet->hash = 'sv0en7cVs49IP5VFG6IEAoy2e1LKjdBZ';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Postcode',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_rider_postcode'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_rider_salutation';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_salutation';
  $facet->enabled = FALSE;
  $facet->hash = 'zqb6lhYQU4NXBdlKg1vm69Kd0KCrWtHZ';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Salutation',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_rider_salutation'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_rider_status';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_status';
  $facet->enabled = FALSE;
  $facet->hash = 'l1urzR9606D34jbBu3u0wcQGa15x2MMr';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Status',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_rider_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_rider_surname';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_surname';
  $facet->enabled = FALSE;
  $facet->hash = 'RmkHLdPWuVyt3ZOgU3CRlolFzyLXSqe1';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Surname',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_rider_surname'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_rider_town';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_rider_town';
  $facet->enabled = FALSE;
  $facet->hash = '4866O1MNkSZcekiGtQwr80nUoUS0GBGi';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Town',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_rider_town'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_risk_assessment';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_risk_assessment';
  $facet->enabled = FALSE;
  $facet->hash = 'z1O0PWmMtvRDW11oWEhVU9skuwH76BIl';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Risk assessment',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_risk_assessment'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_skill_level';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_skill_level';
  $facet->enabled = FALSE;
  $facet->hash = 'DxNf2xyex66aNO61S6sq3aRdoXv1cO0q';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Skill level',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_skill_level'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_story';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_story';
  $facet->enabled = FALSE;
  $facet->hash = 'x9obiEaG91aQD7ywaW09lMj2bj1meuF6';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Story',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_story'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_sub_to_groups_comms_not';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_sub_to_groups_comms_not';
  $facet->enabled = FALSE;
  $facet->hash = 'srhw8obeyOZbUbi28X1r2FbzOzYoBrKH';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Notes',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_sub_to_groups_comms_not'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_subtitle';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_subtitle';
  $facet->enabled = FALSE;
  $facet->hash = 'iLgs2qgEH0uzKW1o3w7Fq2SN4SdSgdKP';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Title B',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_subtitle'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_title';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_title';
  $facet->enabled = FALSE;
  $facet->hash = 'Va8CjdUQbr55uGUVLpK2GqSpSvE1rv4K';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Title A',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_title'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_town';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_town';
  $facet->enabled = FALSE;
  $facet->hash = 'ns85TNRAoJIq2kpDuuHAXShqDkBOiVBD';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Town',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_town'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_tro_local_authority';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_tro_local_authority';
  $facet->enabled = FALSE;
  $facet->hash = 'h4OULrj7W1zS7iKGMbz8zX6wHXdKDO4d';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Relevant Local Authority',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_tro_local_authority'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_tro_status';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_tro_status';
  $facet->enabled = FALSE;
  $facet->hash = 'r07BRfozCkeTVwSn9ZHzF3pgkxCSxJ1o';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Status',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_tro_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_tro_subject';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_tro_subject';
  $facet->enabled = FALSE;
  $facet->hash = 'rrD6y1OF2pg7P1UBkWbkTU7iwM7ze2wU';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Subject',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_tro_subject'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_tro_type';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_tro_type';
  $facet->enabled = FALSE;
  $facet->hash = 'KASxyscIlZTSqf8GIIKwAEKQ8YoBW88W';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_tro_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_twitter_tag';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_twitter_tag';
  $facet->enabled = FALSE;
  $facet->hash = 'F1wa0FEN4FKqAeNWtr88zPQ1iLmVQAl2';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Twitter Tag',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_twitter_tag'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_field_user';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_user';
  $facet->enabled = FALSE;
  $facet->hash = 'kk6qxzsijhOs1zB1x3efXSBy62OVD0UE';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'User',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_field_user'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_og_group_ref';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_og_group_ref';
  $facet->enabled = FALSE;
  $facet->hash = 'TWLUPkK0u3jduQv0Od9gJHDO8poZ40Ri';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Groups audience',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_og_group_ref'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_3:block:sm_title_field';
  $facet->searcher = 'apachesolr@acquia_search_server_3';
  $facet->realm = 'block';
  $facet->facet = 'sm_title_field';
  $facet->enabled = FALSE;
  $facet->hash = 't3QNtIY1gqAXQ4gjd08W9zZnMxMhWt6C';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Title',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['apachesolr@acquia_search_server_3:block:sm_title_field'] = $facet;

  return $export;
}
