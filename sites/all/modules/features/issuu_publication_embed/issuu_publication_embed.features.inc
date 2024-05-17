<?php

/**
 * @file
 * issuu_publication_embed.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function issuu_publication_embed_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function issuu_publication_embed_paragraphs_info() {
  $items = array(
    'issuu_publication_insert' => array(
      'name' => 'Issuu publication insert',
      'bundle' => 'issuu_publication_insert',
      'locked' => '1',
    ),
  );
  return $items;
}
