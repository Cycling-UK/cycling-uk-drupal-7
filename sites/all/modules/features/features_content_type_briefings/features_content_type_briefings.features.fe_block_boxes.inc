<?php
/**
 * @file
 * features_content_type_briefings.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function features_content_type_briefings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Briefings Side Bar Copy';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'briefings_sidebar_copy';
  $fe_block_boxes->body = '<ul>
	<li>Need facts and figures? See Cycling UK\'s round-up of <a href="/node/46751" target="_blank">cycling statistics</a>.</li>
	<li>Need quick-fire answers? See Cycling UK\'s <a href="/node/23771" target="_blank">10 most common questions</a> about the benefits and risks of cycling, helmets, hi-viz, behaviour, tax, licencing, registration and cycling\'s potential.</li>
	<li>Want regular campaigning updates from Cycling UK? Subscribe to our monthly&nbsp;<a href="/node/69166" target="_blank">Cycle Campaign News</a>.</li>
</ul>

<p>The briefing&nbsp;series is gradually replacing the policies published in Cycling UK’s&nbsp;<a href="/node/22591" target="_blank">Policy Handbook, 2004</a>.</p>

<p>&nbsp;</p>
';

  $export['briefings_sidebar_copy'] = $fe_block_boxes;

  return $export;
}
