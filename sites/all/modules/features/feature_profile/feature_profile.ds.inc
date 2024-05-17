<?php

/**
 * @file
 * feature_profile.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_profile_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'ds_user_picture',
        1 => 'field_care_name',
        2 => 'field_membership_number',
        3 => 'field_memberships',
        4 => 'og_user_node',
        5 => 'field_care_addresses',
        6 => 'field_care_emails',
        7 => 'field_care_telephones',
        8 => 'field_care_dob',
        9 => 'field_type_of_cycling',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'central',
      'field_care_name' => 'central',
      'field_membership_number' => 'central',
      'field_memberships' => 'central',
      'og_user_node' => 'central',
      'field_care_addresses' => 'central',
      'field_care_emails' => 'central',
      'field_care_telephones' => 'central',
      'field_care_dob' => 'central',
      'field_type_of_cycling' => 'central',
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
  $export['user|user|default'] = $ds_layout;

  return $export;
}
