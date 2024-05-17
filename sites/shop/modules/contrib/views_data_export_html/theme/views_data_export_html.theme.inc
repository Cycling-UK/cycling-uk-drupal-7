<?php

/**
 * Implements hook_preprocess_HOOK().
 */
function template_preprocess_views_data_export_html_body(&$vars) {
  // Pass through the generic MS Office preprocess.
  template_preprocess_views_data_export_msoffice_body($vars);
}

/**
 * Implements hook_preprocess_HOOK().
 */
function template_preprocess_views_data_export_html_header(&$vars) {
  // Pass through the generic MS Office preprocess.
  template_preprocess_views_data_export_msoffice_header($vars);
}

/**
 * Implements hook_process_HOOK().
 */
function template_process_views_data_export_html_body(&$vars) {
  // Pass through the generic MS Office process.
  template_process_views_data_export_msoffice_body($vars);
}
