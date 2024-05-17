<?php

/**
 * @file
 * feature_workbench.features.workbench_email.inc
 */

/**
 * Implements hook_workbench_email_export().
 */
function feature_workbench_workbench_email_export() {
  $items = array(
    'draft:needs_review:Editor' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
      'author' => 0,
      'automatic' => 1,
      'subject' => 'Page ready for review - [current-page:title] ([node:status])',
      'message' => '<p>The page "[current-page:title]" is ready for review:<br>
[current-page:url]</p>
<p>[current-page:title]</p>
<p>Status: [node:status]</p>
<p>Difference: [node:diff-markdown]</p>',
      'role' => 'Editor',
    ),
    'needs_review:draft:original author' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
      'author' => 1,
      'automatic' => 1,
      'subject' => 'Your page [current-page:title] has been returned to Draft',
      'message' => '<p>Your page "[current-page:title]" has been returned to draft:<br>
[current-page:url]</p>
<p>Status: [node:status]</p>
<p>Difference: [node:diff-markdown]</p>',
      'role' => 'original author',
    ),
    'needs_review:publish_in_advance:original author' => array(
      'from_name' => 'needs_review',
      'to_name' => 'publish_in_advance',
      'author' => 1,
      'automatic' => 1,
      'subject' => 'Your page [current-page:title] has been set to publish in the future',
      'message' => '<p>Your page [current-page:title] has been set to publish in the future<br>
[current-page:url]</p>
',
      'role' => 'original author',
    ),
    'needs_review:published:original author' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
      'author' => 1,
      'automatic' => 1,
      'subject' => 'Your page [current-page:title] has been published',
      'message' => '<p>Your page [current-page:title] has been published<br>
[current-page:url]</p>
',
      'role' => 'original author',
    ),
    'publish_in_advance:published:Editor' => array(
      'from_name' => 'publish_in_advance',
      'to_name' => 'published',
      'author' => 0,
      'automatic' => 1,
      'subject' => 'Your page [current-page:title] has now been published',
      'message' => '<p>Your page [current-page:title] has been published<br>
[current-page:url]</p>
',
      'role' => 'Editor',
    ),
    'publish_in_advance:published:original author' => array(
      'from_name' => 'publish_in_advance',
      'to_name' => 'published',
      'author' => 1,
      'automatic' => 1,
      'subject' => 'Your page [current-page:title] has now been published',
      'message' => '<p>Your page [current-page:title] has been published<br>
[current-page:url]</p>',
      'role' => 'original author',
    ),
    'published:needs_review:Editor' => array(
      'from_name' => 'published',
      'to_name' => 'needs_review',
      'author' => 0,
      'automatic' => 1,
      'subject' => 'Page ready for review - [current-page:title] ([node:status])',
      'message' => '<p>The page "[current-page:title]" is ready for review:<br>
[current-page:url]</p>
<p>Status: [node:status]</p>
<p>Difference: [node:diff-markdown]</p>',
      'role' => 'Editor',
    ),
  );
  return $items;
}
