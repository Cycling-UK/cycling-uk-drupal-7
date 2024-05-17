<?php

/**
 * @file
 * content_type_group_emails.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function content_type_group_emails_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'riders';
  $feeds_importer->config = array(
    'name' => 'Riders',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => 1,
        'direct' => 0,
        'directory' => 'private://feeds',
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
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'contact_org_id',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'contact_org_id',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'contact_number',
            'target' => 'field_rider_contact_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'membership_type',
            'target' => 'field_membership_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'renewal_date',
            'target' => 'field_rider_renewal_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'joined_date',
            'target' => 'field_rider_joined_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'organisation_number',
            'target' => 'field_organisation_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'forename',
            'target' => 'field_rider_forename',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'surname',
            'target' => 'field_rider_surname',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'email',
            'target' => 'field_rider_email',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'address_line_1',
            'target' => 'field_rider_address_1',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'address_line_2',
            'target' => 'field_rider_address_2',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'address_line_3',
            'target' => 'field_rider_address_3',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'town',
            'target' => 'field_rider_town',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'county',
            'target' => 'field_rider_county',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'postcode',
            'target' => 'field_rider_postcode',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'country',
            'target' => 'field_rider_country',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'voting_rights',
            'target' => 'field_voting_rights',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'organisation_nid',
            'target' => 'og_group_ref:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'salutation',
            'target' => 'field_rider_salutation',
            'unique' => FALSE,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'status',
            'target' => 'field_rider_status',
            'unique' => FALSE,
            'language' => 'und',
          ),
          21 => array(
            'source' => 'published_status',
            'target' => 'status',
            'unique' => FALSE,
            'language' => 'und',
          ),
          22 => array(
            'source' => 'committee_member',
            'target' => 'field_committee_member',
            'unique' => FALSE,
            'language' => 'und',
          ),
          23 => array(
            'source' => 'ride_leader',
            'target' => 'field_rider_leader',
            'unique' => FALSE,
            'language' => 'und',
          ),
          24 => array(
            'source' => 'out_of_area',
            'target' => 'field_rider_out_of_area',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'unpublish',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'rider',
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
  $export['riders'] = $feeds_importer;

  return $export;
}
