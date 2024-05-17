<?php

/**
 * @file
 * feature_lexicon.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_lexicon_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_allow_no_description';
  $strongarm->value = 0;
  $export['lexicon_allow_no_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_blocking_tags';
  $strongarm->value = 'abbr acronym';
  $export['lexicon_blocking_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_case';
  $strongarm->value = '1';
  $export['lexicon_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_click_option';
  $strongarm->value = '0';
  $export['lexicon_click_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_disable_indicator';
  $strongarm->value = 0;
  $export['lexicon_disable_indicator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_go_to_top_link';
  $strongarm->value = 0;
  $export['lexicon_go_to_top_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_go_to_top_link_fragment';
  $strongarm->value = 'top';
  $export['lexicon_go_to_top_link_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_icon';
  $strongarm->value = 'sites/all/modules/contrib/lexicon/imgs/lexicon.gif';
  $export['lexicon_icon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_link';
  $strongarm->value = 'none';
  $export['lexicon_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_link_related';
  $strongarm->value = 0;
  $export['lexicon_link_related'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_link_to_term_page';
  $strongarm->value = 0;
  $export['lexicon_link_to_term_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_local_links_scroll';
  $strongarm->value = 0;
  $export['lexicon_local_links_scroll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_mark_terms';
  $strongarm->value = 1;
  $export['lexicon_mark_terms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_match';
  $strongarm->value = 'b';
  $export['lexicon_match'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_page_per_letter';
  $strongarm->value = 0;
  $export['lexicon_page_per_letter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_replace';
  $strongarm->value = 'abbr';
  $export['lexicon_replace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_replace_all';
  $strongarm->value = '0';
  $export['lexicon_replace_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_separate_letters';
  $strongarm->value = 0;
  $export['lexicon_separate_letters'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_show_description';
  $strongarm->value = 0;
  $export['lexicon_show_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_show_edit';
  $strongarm->value = 1;
  $export['lexicon_show_edit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_show_search';
  $strongarm->value = 1;
  $export['lexicon_show_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_superscript';
  $strongarm->value = 'i';
  $export['lexicon_superscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_term_class';
  $strongarm->value = 'lexicon-term';
  $export['lexicon_term_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lexicon_vids';
  $strongarm->value = array(
    182 => '182',
    11 => 0,
    156 => 0,
    181 => 0,
    51 => 0,
    141 => 0,
    136 => 0,
    151 => 0,
    146 => 0,
    16 => 0,
    111 => 0,
    6 => 0,
    86 => 0,
    91 => 0,
    21 => 0,
    116 => 0,
    126 => 0,
    106 => 0,
    161 => 0,
    26 => 0,
    121 => 0,
    166 => 0,
    171 => 0,
    76 => 0,
    176 => 0,
    61 => 0,
    1 => 0,
  );
  $export['lexicon_vids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_glossary';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_glossary'] = $strongarm;

  return $export;
}
