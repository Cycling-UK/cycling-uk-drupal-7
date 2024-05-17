<?php

/**
 * @file
 * feature_workbench.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function feature_workbench_workbench_moderation_export_states() {
  $items = array(
    'draft' => array(
      'name' => 'draft',
      'label' => 'Draft',
      'description' => 'Save draft',
      'weight' => -10,
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => 'Needs Review',
      'description' => 'Ready for review',
      'weight' => -9,
    ),
    'publish_in_advance' => array(
      'name' => 'publish_in_advance',
      'label' => 'Approved set to publish in the future',
      'description' => 'Publish in the future (add date in schedule)',
      'weight' => -7,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Published',
      'description' => 'Publish this version',
      'weight' => -8,
    ),
  );
  return $items;
}
