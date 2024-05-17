<?php
/**
 * @file
 * simple_feedback_tab.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function simple_feedback_tab_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedback_simple';
  $strongarm->value = array(
    'enabled' => 1,
    'link' => 'join',
    'target' => '_self',
    'class' => array(
      0 => 'feedback_simple',
    ),
    'align' => 'right',
    'top' => '65%',
    'image' => 'sites/all/themes/cyclinguk/images/system/feedback-simple-join-now.png',
    'alt' => 'Join today',
    'deny' => 'admin*
join
join*
user
user*',
    'allow' => '',
  );
  $export['feedback_simple'] = $strongarm;

  return $export;
}
