<?php

/**
 * @file
 * feature_workbench.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function feature_workbench_workbench_moderation_export_transitions() {
  $items = array(
    'draft:needs_review' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
      'name' => 'Submit for Review',
    ),
    'draft:publish_in_advance' => array(
      'from_name' => 'draft',
      'to_name' => 'publish_in_advance',
      'name' => 'Draft to Publish in the Future',
    ),
    'draft:published' => array(
      'from_name' => 'draft',
      'to_name' => 'published',
      'name' => 'Draft to Publish',
    ),
    'needs_review:draft' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
      'name' => 'Reject',
    ),
    'needs_review:publish_in_advance' => array(
      'from_name' => 'needs_review',
      'to_name' => 'publish_in_advance',
      'name' => 'Publish In the Future',
    ),
    'needs_review:published' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
      'name' => 'Publish',
    ),
    'publish_in_advance:published' => array(
      'from_name' => 'publish_in_advance',
      'to_name' => 'published',
      'name' => 'Publish in Advance',
    ),
  );
  return $items;
}
