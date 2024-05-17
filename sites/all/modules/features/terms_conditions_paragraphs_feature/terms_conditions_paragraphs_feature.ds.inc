<?php

/**
 * @file
 * terms_conditions_paragraphs_feature.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function terms_conditions_paragraphs_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|terms_and_conditions|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'terms_and_conditions';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_subtitle',
        1 => 'field_terms_and_conditions',
      ),
    ),
    'fields' => array(
      'field_subtitle' => 'central',
      'field_terms_and_conditions' => 'central',
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
  $export['paragraphs_item|terms_and_conditions|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|terms_and_conditions|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'terms_and_conditions';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_subtitle',
        1 => 'field_terms_and_conditions',
      ),
    ),
    'fields' => array(
      'field_subtitle' => 'central',
      'field_terms_and_conditions' => 'central',
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
  $export['paragraphs_item|terms_and_conditions|full'] = $ds_layout;

  return $export;
}
