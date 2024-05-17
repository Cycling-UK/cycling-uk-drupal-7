<?php

/**
 * @file
 * internal_adverts_2022.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function internal_adverts_2022_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'internal_adverts';
  $bean_type->label = 'Internal adverts';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['internal_adverts'] = $bean_type;

  return $export;
}
