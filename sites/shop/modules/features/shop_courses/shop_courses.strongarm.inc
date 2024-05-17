<?php
/**
 * @file
 * shop_courses.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function shop_courses_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_course_booking';
  $strongarm->value = 0;
  $export['comment_anonymous_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_course_booking';
  $strongarm->value = '0';
  $export['comment_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_course_booking';
  $strongarm->value = 1;
  $export['comment_default_mode_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_course_booking';
  $strongarm->value = '50';
  $export['comment_default_per_page_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_course_booking';
  $strongarm->value = 1;
  $export['comment_form_location_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_course_booking';
  $strongarm->value = '1';
  $export['comment_preview_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_course_booking';
  $strongarm->value = 1;
  $export['comment_subject_field_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_course_booking';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_course_booking';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_course_booking';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_line_item__course';
  $strongarm->value = array(
    'view_modes' => array(
      'shopping_basket' => array(
        'custom_settings' => TRUE,
      ),
      'display' => array(
        'custom_settings' => FALSE,
      ),
      'administrator' => array(
        'custom_settings' => FALSE,
      ),
      'customer' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '1',
        ),
        'quantity' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'label' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'customer' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'quantity' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'customer' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_line_item__course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__course_booking';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'amp' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'child_page' => array(
        'custom_settings' => FALSE,
      ),
      'kit' => array(
        'custom_settings' => FALSE,
      ),
      'related' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'field_readonly' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '10',
        ),
        'xmlsitemap' => array(
          'weight' => '11',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '40',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_product_giftaid' => array(
          'default' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'submitted_by' => array(
          'default' => array(
            'weight' => '41',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_course_booking';
  $strongarm->value = array();
  $export['menu_options_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_course_booking';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_course_booking';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_course_booking';
  $strongarm->value = '1';
  $export['node_preview_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_course_booking';
  $strongarm->value = 0;
  $export['node_submitted_course_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_course_booking';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_course_booking'] = $strongarm;

  return $export;
}
