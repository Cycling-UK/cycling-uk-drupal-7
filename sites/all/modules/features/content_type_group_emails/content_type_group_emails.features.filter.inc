<?php

/**
 * @file
 * content_type_group_emails.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function content_type_group_emails_filter_default_formats() {
  $formats = array();

  // Exported format: Email.
  $formats['email'] = array(
    'format' => 'email',
    'name' => 'Email',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
