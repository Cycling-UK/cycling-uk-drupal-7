<?php

function jplanner_journeyplanner_page() {

    libraries_load('openlayers4');
    libraries_load('mustache');
    libraries_load('chart.js');
    libraries_load('typeahead');
    $module_path = drupal_get_path('module', 'jplanner');
    drupal_add_css($module_path . '/css/jplanner.css');
    drupal_add_css($module_path . '/css/jquery.auto-complete.css');
    drupal_add_js($module_path . '/js/jplanner.js');

    drupal_add_js(array('jplanner' => array(
            'apikey' => variable_get('jplanner_apikey', NULL),
            'jplannerpath' => $module_path,
        )), 'setting');

    return theme('journeyplanner_page', array('content' => NULL));
}
