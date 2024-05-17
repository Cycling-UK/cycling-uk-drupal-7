<?php

/**
 * @file
 * features_openlayers.default_openlayers_styles.inc
 */

/**
 * Implements hook_default_openlayers_styles().
 */
function features_openlayers_default_openlayers_styles() {
  $export = array();

  $ol_style = new stdClass();
  $ol_style->disabled = FALSE; /* Edit this to true to make a default ol_style disabled initially */
  $ol_style->api_version = 1;
  $ol_style->machine_name = 'group_style_cluster';
  $ol_style->name = 'Group Style Cluster';
  $ol_style->description = '';
  $ol_style->factory_service = 'openlayers.Style:Cluster';
  $ol_style->options = array();
  $export['group_style_cluster'] = $ol_style;

  return $export;
}
