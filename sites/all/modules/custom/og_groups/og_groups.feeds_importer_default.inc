<?php

/**
 * @file
 * og_groups.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function og_groups_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'group';
  $feeds_importer->config = array(
    'name' => 'Group Import',
    'description' => 'Upload Groups',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
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
        'no_headers' => 0,
        'encoding' => 'UTF-8',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'input_format' => 'public_filter',
        'update_existing' => '0',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'Org No',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Org No',
            'target' => 'field_group_org_member_no',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Contact No',
            'target' => 'field_group_owner_member_no',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Group Name',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Type',
            'target' => 'field_group_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Renewal Date: Start',
            'target' => 'field_renewal_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Website',
            'target' => 'field_group_website:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Welcome',
            'target' => 'field_group_welcome',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Activities',
            'target' => 'field_group_activities',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Geo',
            'target' => 'field_area_covered:wkt',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Body',
            'target' => 'field_about_the_group',
            'unique' => FALSE,
          ),
        ),
        'author' => '1',
        'authorize' => 0,
        'insert_new' => '1',
        'update_non_existent' => 'skip',
        'skip_hash_check' => 0,
        'bundle' => 'group',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['group'] = $feeds_importer;

  return $export;
}
