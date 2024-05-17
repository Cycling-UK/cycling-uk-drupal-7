<?php

/**
 * @file
 * features_linked_sponsor_logos.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_linked_sponsor_logos_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|sponsor_logos_with_links|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'sponsor_logos_with_links';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_subtitle',
        1 => 'field_text',
        2 => 'field_sponsor',
      ),
    ),
    'fields' => array(
      'field_subtitle' => 'central',
      'field_text' => 'central',
      'field_sponsor' => 'central',
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
  $export['paragraphs_item|sponsor_logos_with_links|default'] = $ds_layout;

  return $export;
}
