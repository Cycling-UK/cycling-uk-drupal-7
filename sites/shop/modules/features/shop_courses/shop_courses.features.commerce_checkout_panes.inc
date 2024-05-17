<?php
/**
 * @file
 * shop_courses.features.commerce_checkout_panes.inc
 */

/**
 * Implements hook_commerce_checkout_panes_default().
 */
function shop_courses_commerce_checkout_panes_default() {
  $panes = array();

  $panes['commerce_fieldgroup_pane__group_course_booking_terms'] = array(
    'enabled' => 1,
    'pane_id' => 'commerce_fieldgroup_pane__group_course_booking_terms',
    'page' => 'review',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -16,
    'review' => 1,
  );

  return $panes;
}
