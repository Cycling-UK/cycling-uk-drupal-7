<?php

/**
 * @file
 * og_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function og_groups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function og_groups_node_info() {
  $items = array(
    'affiliated_centre' => array(
      'name' => t('Affiliated Centre'),
      'base' => 'node_content',
      'description' => t('part of Organic Groups'),
      'has_title' => '1',
      'title_label' => t('Name of the centre'),
      'help' => t('Affiliated centre including the inclusive cycling network'),
    ),
    'event' => array(
      'name' => t('Old Events (Do Not Use)'),
      'base' => 'node_content',
      'description' => t('part of Organic Groups - Group Events'),
      'has_title' => '1',
      'title_label' => t('Event'),
      'help' => t('<span class="input-help">Events include: single and multi-day festivals and rallies; large occasional rides often with multiple starts open to both club members and the general public; competitive events such as hill climbs and touring competitions.</span>'),
    ),
    'group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('part of Organic Groups'),
      'has_title' => '1',
      'title_label' => t('Name of the group'),
      'help' => t('<em>Please note</em>: any changes made on this page will only affect your group\'s online homepage. For any formal changes to the group name or group secretary, please follow the standard procedures.'),
    ),
    'group_child_page' => array(
      'name' => t('Group Child Page'),
      'base' => 'node_content',
      'description' => t('part of Organic Groups - Group Child Page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'group_post' => array(
      'name' => t('Group Post'),
      'base' => 'node_content',
      'description' => t('Part of Organic Groups - Group Post (D6 :: Group News, Gallery or Announcement).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ride' => array(
      'name' => t('Event/Ride'),
      'base' => 'node_content',
      'description' => t('Group Events and Rides (rides and socials)'),
      'has_title' => '1',
      'title_label' => t('Event title'),
      'help' => t('<!--<span class="input-help">Rides include: regular monthly or weekly rides (primarily for club members); a one off ride to promote cycling in the local area; a social activity such as an annual dinner or BBQ.</span>-->'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
