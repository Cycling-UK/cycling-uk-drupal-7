<?php
/**
 * @file
 * content_type_group_emails.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function content_type_group_emails_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Group Administration';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'mg_admin';
  $fe_block_boxes->body = '<p><ul>
<li><a href="/group_members">Membership List for postcode area</a></li></ul></p>
';

  $export['mg_admin'] = $fe_block_boxes;

  return $export;
}
