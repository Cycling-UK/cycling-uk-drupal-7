<?php

/**
 * @file
 * content_type_paragraphs.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function content_type_paragraphs_filter_default_formats() {
  $formats = array();

  // Exported format: Paragraphs.
  $formats['paragraphs'] = array(
    'format' => 'paragraphs',
    'name' => 'Paragraphs',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'noreferrer' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
