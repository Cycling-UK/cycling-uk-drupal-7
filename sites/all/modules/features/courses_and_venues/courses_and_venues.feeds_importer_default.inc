<?php
/**
 * @file
 * courses_and_venues.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function courses_and_venues_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'course_calendar';
  $feeds_importer->config = array(
    'name' => 'course_calendar',
    'description' => 'Imports Course Calendar nodes',
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
        'author' => '1',
        'authorize' => 1,
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
            'source' => 'Course Date',
            'target' => 'field_course_dates:start',
            'timezone' => 'UTC',
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Start Time',
            'target' => 'field_course_dates:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'End Time',
            'target' => 'field_course_dates:end',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Price',
            'target' => 'field_course_price',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Course Code',
            'target' => 'field_booking_code',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Booking Text',
            'target' => 'field_course_booking:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Booking Link',
            'target' => 'field_course_booking:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Event Desc',
            'target' => 'field_course_notes',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Course Number',
            'target' => 'field_course_type:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Venue Number',
            'target' => 'field_course_venue:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'delete',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'course_calendar',
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
  $export['course_calendar'] = $feeds_importer;

  return $export;
}
