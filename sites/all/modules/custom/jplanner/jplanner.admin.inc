<?php

function jplanner_settings() {
  $form['jplanner_apikey'] = array(
    '#type' => 'textfield',
    '#title' => 'Cycle Streets API key',
    '#description' => 'for more info go to '.l('https://cyclestreets.net/api/v1/','https://cyclestreets.net/api/v1/'),
    '#default_value' => variable_get('jplanner_apikey', NULL),
  );
  
  return system_settings_form($form);
}
