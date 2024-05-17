<?php

/**
 * @file
 * features_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function features_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'acquia_search_server_3';
  $environment->name = 'Acquia Search';
  $environment->url = 'https://s-1w1m0bhwu07-eu-west-1.sr-prod02.acquia.com/solr/ARTY-195792.prod.cyclinguk';
  $environment->service_class = 'AcquiaSearchSolrService';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_read_only' => '0',
    'apachesolr_soft_commit' => 0,
  );
  $environment->index_bundles = array(
    'node' => array(
      'biography' => 'biography',
      'briefings' => 'briefings',
      'campaign' => 'campaign',
      'course_details' => 'course_details',
      'group' => 'group',
      'group_child_page' => 'group_child_page',
      'group_post' => 'group_post',
      'member_benefit' => 'member_benefit',
      'newsletter' => 'newsletter',
      'paragraphs' => 'paragraphs',
      'partner' => 'partner',
      'post' => 'post',
      'publication' => 'publication',
      'ride' => 'ride',
      'route' => 'route',
      'venue' => 'venue',
      'webform' => 'webform',
    ),
  );
  $export['acquia_search_server_3'] = $environment;

  return $export;
}
