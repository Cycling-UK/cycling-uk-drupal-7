<?php

/**
 * @file
 * features_cta.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function features_cta_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'call_to_action';
  $bean_type->label = 'Call to action';
  $bean_type->options = '';
  $bean_type->description = 'New style call to action blocks for internal advertising.';
  $export['call_to_action'] = $bean_type;

  return $export;
}
