<?php

/**
 * @file
 * features_content_type_briefings.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function features_content_type_briefings_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'briefings-page';
  $ds_vd->label = 'Briefings: Page (Views template)';
  $export['briefings-page'] = $ds_vd;

  return $export;
}
