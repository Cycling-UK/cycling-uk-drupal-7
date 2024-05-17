<?php

/**
 * @file
 * feature_workbench.features.workbench_scheduler.inc
 */

/**
 * Implements hook_workbench_scheduler_export_schedules().
 */
function feature_workbench_workbench_scheduler_export_schedules() {
  $items = array(
    'publish_in_advance' => array(
      'name' => 'publish_in_advance',
      'label' => 'Publish in advance',
      'types' => array(
        0 => 'briefings',
        1 => 'course_details',
        2 => 'landing_page',
        3 => 'newsletter',
        4 => 'page',
        5 => 'post',
        6 => 'publication',
      ),
      'from_name' => 'publish_in_advance',
      'to_name' => 'published',
    ),
  );
  return $items;
}
