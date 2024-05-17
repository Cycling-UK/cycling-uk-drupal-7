<?php

/**
 * @file
 * feature_workbench.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_workbench_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer drafty'.
  $permissions['administer drafty'] = array(
    'name' => 'administer drafty',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'drafty',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench emails'.
  $permissions['administer workbench emails'] = array(
    'name' => 'administer workbench emails',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'workbench_email',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'administer workbench schedules'.
  $permissions['administer workbench schedules'] = array(
    'name' => 'administer workbench schedules',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'workbench_scheduler',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to needs_review'.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to publish_in_advance'.
  $permissions['moderate content from draft to publish_in_advance'] = array(
    'name' => 'moderate content from draft to publish_in_advance',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to published'.
  $permissions['moderate content from draft to published'] = array(
    'name' => 'moderate content from draft to published',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to draft'.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to publish_in_advance'.
  $permissions['moderate content from needs_review to publish_in_advance'] = array(
    'name' => 'moderate content from needs_review to publish_in_advance',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to published'.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from publish_in_advance to published'.
  $permissions['moderate content from publish_in_advance to published'] = array(
    'name' => 'moderate content from publish_in_advance to published',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'set any workbench schedule'.
  $permissions['set any workbench schedule'] = array(
    'name' => 'set any workbench schedule',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'workbench_scheduler',
  );

  // Exported permission: 'set workbench schedule for publish_in_advance'.
  $permissions['set workbench schedule for publish_in_advance'] = array(
    'name' => 'set workbench schedule for publish_in_advance',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'workbench_scheduler',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_scheduler scheduled content tab'.
  $permissions['use workbench_scheduler scheduled content tab'] = array(
    'name' => 'use workbench_scheduler scheduled content tab',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
    ),
    'module' => 'workbench_scheduler',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view any workbench schedule'.
  $permissions['view any workbench schedule'] = array(
    'name' => 'view any workbench schedule',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'workbench_scheduler',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Administrator - Content' => 'Administrator - Content',
      'Administrator - Technical' => 'Administrator - Technical',
      'Editor' => 'Editor',
      'Editorial Editor' => 'Editorial Editor',
      'Power User' => 'Power User',
      'Staff Member' => 'Staff Member',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view schedule history'.
  $permissions['view schedule history'] = array(
    'name' => 'view schedule history',
    'roles' => array(
      'Administrator - Technical' => 'Administrator - Technical',
    ),
    'module' => 'workbench_scheduler',
  );

  return $permissions;
}
