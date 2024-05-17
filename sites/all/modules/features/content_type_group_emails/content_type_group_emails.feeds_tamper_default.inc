<?php

/**
 * @file
 * content_type_group_emails.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function content_type_group_emails_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'riders-published_status-default_value';
  $feeds_tamper->importer = 'riders';
  $feeds_tamper->source = 'published_status';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '1',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value';
  $export['riders-published_status-default_value'] = $feeds_tamper;

  return $export;
}
