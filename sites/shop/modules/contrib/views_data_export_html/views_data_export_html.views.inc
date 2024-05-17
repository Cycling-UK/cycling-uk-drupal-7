<?php
/**
 * @file
 * Views include file with views hooks.
 */

/**
 * Implementation of hook_views_plugins().
 */
function views_data_export_html_views_plugins() {
  $path = drupal_get_path('module', 'views_data_export_html');

  $style_defaults = array(
    'path' => $path . '/plugins',
    'parent' => 'views_data_export',
    'theme' => 'views_data_export',
    'theme path' => $path . '/theme',
    'theme file' => 'views_data_export_html.theme.inc',
    'uses row plugin' => FALSE,
    'uses fields' => TRUE,
    'uses options' => TRUE,
    'type' => 'data_export',
  );

  return array(
    'style' => array(
      'views_data_export_html' => array(
        'title' => t('HTML file'),
        'help' => t('Display the view as an HTML file.'),
        'handler' => 'views_data_export_plugin_style_export',
        'export headers' => array('Content-Type' => 'text/html'),
        'export feed type' => 'html',
        'export feed text' => 'HTML',
        'export feed file' => '%view.html',
        'export feed icon' => drupal_get_path('module', 'views_data_export_html') . '/images/html.png',
        'additional themes' => array(
          'views_data_export_html_header' => 'style',
          'views_data_export_html_body' => 'style',
          'views_data_export_html_footer' => 'style',
        ),
        'additional themes base' => 'views_data_export_html',
      ) + $style_defaults,
    ),
  );
}
