<?php
/**
 * @file
 * features_bean_hero.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function features_bean_hero_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'hero';
  $bean_type->label = 'Hero';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['hero'] = $bean_type;

  return $export;
}
