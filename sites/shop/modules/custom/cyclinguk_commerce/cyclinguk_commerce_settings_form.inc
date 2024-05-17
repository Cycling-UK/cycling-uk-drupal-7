<?php

/**
 * @file
 */

/**
 * Administrator settings form for this module.
 */
function cyclinguk_commerce_settings_form($form) {

  $form['cyclinguk_commerce_log'] = array(
    '#title' => 'Log actions to Watchdog',
    '#type' => 'radios',
    '#options' => array(
      1 => 'Yes',
      0 => 'No'),
    '#default_value' => variable_get('cyclinguk_commerce_log', 0));

  return system_settings_form($form);
}
