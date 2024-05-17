<?php

/**
 * @file
 * internal_adverts_2022.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function internal_adverts_2022_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__internal_adverts';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'title' => array(
          'default' => array(
            'visible' => FALSE,
            'weight' => '0',
          ),
        ),
      ),
      'form' => array(
        'label' => array(
          'weight' => '0',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'revision' => array(
          'weight' => '2',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'view_mode' => array(
          'weight' => '3',
        ),
      ),
    ),
    'view_modes' => array(
      'default' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_bean__internal_adverts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_internal_advert';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_taxonomy_term_internal_advert'] = $strongarm;

  return $export;
}
