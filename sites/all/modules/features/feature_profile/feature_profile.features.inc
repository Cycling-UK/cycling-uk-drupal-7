<?php

/**
 * @file
 * feature_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function feature_profile_image_default_styles() {
  $styles = array();

  // Exported image style: avatar_100x100.
  $styles['avatar_100x100'] = array(
    'label' => 'Avatar (100x100)',
    'effects' => array(
      366 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: avatar_220x220.
  $styles['avatar_220x220'] = array(
    'label' => 'Avatar (220x220)',
    'effects' => array(
      371 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_password_policy_features_default_policies().
 */
function feature_profile_password_policy_features_default_policies() {
  return array(
    'General password' => array(
      'name' => 'General password',
      'description' => '',
      'enabled' => 1,
      'constraints' => array(
        'length' => 8,
        'username' => 1,
        'character_types' => 3,
      ),
      'created' => 1504705874,
      'expiration' => 0,
      'warning' => '',
      'weight' => -9,
      'roles' => array(
        0 => 'authenticated user',
      ),
      'excluded_authentication_modules' => array(),
    ),
    'Staff' => array(
      'name' => 'Staff',
      'description' => '',
      'enabled' => 1,
      'constraints' => array(
        'length' => 12,
        'username' => 1,
        'character_types' => 3,
      ),
      'created' => 1504705911,
      'expiration' => 0,
      'warning' => '',
      'weight' => -10,
      'roles' => array(
        0 => 'Staff Member',
      ),
      'excluded_authentication_modules' => array(),
    ),
  );
}
