<?php

/**
 * @file
 * Views override file
 */

/**
 * Implements hook_views_default_views_alter().
 */
function views_override_views_default_views_alter(&$views) {
  $replaced = variable_get('views_override', array());
  foreach ($replaced as $view_name => $override) {
    if (!isset($views[$view_name]) or !views_get_view($override)) {
      continue;
    }

    $views[$view_name]->disabled = TRUE;
  }
}
