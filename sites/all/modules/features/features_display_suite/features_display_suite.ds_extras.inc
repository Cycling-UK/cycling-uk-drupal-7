<?php

/**
 * @file
 * features_display_suite.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function features_display_suite_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'blog_listing-page';
  $ds_vd->label = 'Blog_listing: Page (Views template)';
  $export['blog_listing-page'] = $ds_vd;

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'listings-page';
  $ds_vd->label = 'Listings: Page (Views template)';
  $export['listings-page'] = $ds_vd;

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'taxonomy-page';
  $ds_vd->label = 'Taxonomy: Page (Views template)';
  $export['taxonomy-page'] = $ds_vd;

  return $export;
}
