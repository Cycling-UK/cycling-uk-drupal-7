<?php


/**
 * Extend the default DrupalNode6Migration class to add field migrations.
 */
class MigrateCtcCaseStudyMigration extends CtcNode6Migration {

  /**
   * Extend parent constructor to add field mappings.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    // Map custom CCK fields.
    // For all post nodes
    $this->addFieldMapping('field_teaser', 'field_teaser');

    $this->addFieldMapping('field_post_type:source_type')->defaultValue('term');
    $this->addFieldMapping('field_post_type:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_post_type:ignore_case')->defaultValue(TRUE);

    $this->addFieldMapping('field_hero', 'field_image');
    $this->addFieldMapping('field_caption', 'field_image:title'); //add old title as caption
    $this->addFieldMapping('field_hero:preserve_files')->defaultValue(TRUE);
    $this->addFieldMapping('field_hero:description', 'merged_alt_title');
    $this->addFieldMapping('field_hero:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
    $this->addFieldMapping('field_hero:source_dir')->defaultValue('public://archive');
    $this->addFieldMapping('field_hero:urlencode')->defaultValue(FALSE);

    $this->addFieldMapping('field_old_nid', 'nid');

    //case study specific
    $this->addFieldMapping('field_post_type')->defaultValue('Case study');
    $this->addFieldMapping('field_hero:destination_dir')->defaultValue('public://media/migrated/case_study');

    $this->addFieldMapping('field_location', 'field_location');
    $this->addFieldMapping('field_location:geo_type')->defaultValue('wkt');

    $this->addFieldMapping('field_attachments', 'file_path');
    $this->addFieldMapping('field_attachments:description', 'file_desc');
    $this->addFieldMapping('field_attachments:preserve_files')->defaultValue(TRUE);
    $this->addFieldMapping('field_attachments:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
    $this->addFieldMapping('field_attachments:source_dir')->defaultValue('public://archive');
    $this->addFieldMapping('field_attachments:urlencode')->defaultValue(FALSE);
    $this->addFieldMapping('field_attachments:destination_dir')->defaultValue('public://document/migrated/case-study');

    //taxonomy mappings

    $this->addFieldMapping('field_campaign', '5')->sourceMigration('taxonomy_campaign');
    $this->addFieldMapping('field_campaign:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_campaign:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_campaign:ignore_case')->defaultValue(TRUE);

    $this->addFieldMapping('field_status', '26')->sourceMigration('taxonomy_status');
    $this->addFieldMapping('field_status:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_status:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_status:ignore_case')->defaultValue(TRUE);

    $this->addFieldMapping('field_tags', 'merged_tags')->sourceMigration('taxonomy_tags');
    $this->addFieldMapping('field_tags:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_tags:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_tags:ignore_case')->defaultValue(TRUE);

    $this->addFieldMapping('field_cycling_type', 'merged_cycling_type')->sourceMigration('taxonomy_cycling_type');
    $this->addFieldMapping('field_cycling_type:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_cycling_type:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_cycling_type:ignore_case')->defaultValue(TRUE);

    $this->addFieldMapping('field_cycling_uk_section', 'merged_cuk_section')->sourceMigration('taxonomy_cuk_section');
    $this->addFieldMapping('field_cycling_uk_section:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_cycling_uk_section:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_cycling_uk_section:ignore_case')->defaultValue(TRUE);

    // Unmigrated sources.
    //$this->addFieldMapping(NULL, '3')->issueGroup('DNM')->description('Cycling Tribe');
    //$this->addFieldMapping(NULL, '12')->issueGroup('DNM')->description('Project');
    //$this->addFieldMapping(NULL, '17')->issueGroup('DNM')->description('Section');
    $this->addUnmigratedSources(array(
      'nid',
      'revision',
      'log',
      'revision_uid',
      'field_image:list',
      'field_image:alt',                  //migrated in separate function
      'upload:list',
      'upload:weight',
      'daycount',
      'timestamp',
      'totalcount'));
    // Unmigrated destinations.
    $this->addUnmigratedImageFieldDestination('field_gallery_image');
    $this->addUnmigratedFileFieldDestination('field_gpx_files');
    $this->addUnmigratedGeoFieldDestination('field_gpx_map');
    $this->addUnmigratedAddressDestination('field_address');
    $this->addUnmigratedDestinations(array(
      'nid',
      'field_article_type',
      'field_article_type:source_type',
      'field_article_type:create_term',
      'field_article_type:ignore_case',
      'field_attachments:file_class',
      'field_attachments:destination_file',
      'field_attachments:display',
      'field_call_to_action',
      'field_call_to_action:source_type',
      'field_call_to_action:create_term',
      'field_call_to_action:ignore_case',
      'field_hero:file_class',
      'field_hero:destination_file',
      'field_hero:display',
      'field_location:geohash',
      'field_location:lat',
      'field_location:lon',
      'field_location:left',
      'field_location:top',
      'field_location:right',
      'field_location:bottom',
      'field_additional_content',
      'field_additional_content:format',
      'field_exclude_from_main_feeds',
      'field_further_reading',
      'field_press_contact_information',
      'field_press_contact_information:format',
      'field_press_notes_to_editors',
      'field_press_notes_to_editors:format'));

  }
}
