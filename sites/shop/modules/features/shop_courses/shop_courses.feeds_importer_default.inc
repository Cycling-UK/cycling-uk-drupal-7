<?php
/**
 * @file
 * shop_courses.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function shop_courses_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'course_booking';
  $feeds_importer->config = array(
    'name' => 'Course Booking',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'delete_uploaded_file' => 0,
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '36551',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Event Number',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Event Desc',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Course Code',
            'target' => 'field_booking_code',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Status',
            'target' => 'field_course_status',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Event Number',
            'target' => 'field_event_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Rate',
            'target' => 'field_products:sku',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Venue URL',
            'target' => 'field_course_venue_link:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Venue Desc',
            'target' => 'field_course_venue_link:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Start Time',
            'target' => 'field_course_dates:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'End Time',
            'target' => 'field_course_dates:end',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Price',
            'target' => 'field_course_price',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Places Left',
            'target' => 'field_places_left',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'Booking Code',
            'target' => 'field_booking_code',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'Course URL',
            'target' => 'field_course_type_link:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'Course Desc',
            'target' => 'field_course_type_link:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'Event Class',
            'target' => 'field_course_category',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'Option Number',
            'target' => 'field_booking_option_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'unpublish',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'course_booking',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['course_booking'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'course_products';
  $feeds_importer->config = array(
    'name' => 'Course Products',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsCommerceProductProcessor',
      'config' => array(
        'product_type' => 'course',
        'author' => 0,
        'tax_rate' => TRUE,
        'mappings' => array(
          0 => array(
            'source' => 'SKU',
            'target' => 'guid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'SKU',
            'target' => 'sku',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Price',
            'target' => 'commerce_price:amount',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'course',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['course_products'] = $feeds_importer;

  return $export;
}
