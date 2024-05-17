<?php


/**
 * Extend the default DrupalNode6Migration class to add field migrations.
 */
class MigrateCtcCourseVenuesMigration extends CtcNode6Migration {

  /**
   * Extend parent constructor to add additional field mappings.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    // Map custom CCK fields.

    // For all post nodes;


    $this->addFieldMapping('field_hero', 'field_image');
    $this->addFieldMapping('field_caption', 'field_image:title'); //add old title as caption
    $this->addFieldMapping('field_hero:preserve_files')->defaultValue(TRUE);
    $this->addFieldMapping('field_hero:description', 'merged_alt_title');
    $this->addFieldMapping('field_hero:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
    $this->addFieldMapping('field_hero:source_dir')->defaultValue('public://archive');
    $this->addFieldMapping('field_hero:urlencode')->defaultValue(FALSE);
    $this->addFieldMapping('field_hero:destination_dir')->defaultValue('public://media/migrated/venues');

    $this->addFieldMapping('field_location', 'field_location');

    $this->addFieldMapping('field_attachments', 'file_path');
    $this->addFieldMapping('field_attachments:description', 'file_desc');
    $this->addFieldMapping('field_attachments:preserve_files')->defaultValue(TRUE);
    $this->addFieldMapping('field_attachments:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
    $this->addFieldMapping('field_attachments:source_dir')->defaultValue('public://archive');
    $this->addFieldMapping('field_attachments:urlencode')->defaultValue(FALSE);
    $this->addFieldMapping('field_attachments:destination_dir')->defaultValue('public://document/migrated/info');

    $this->addFieldMapping('field_old_nid', 'nid');

    $this->addFieldMapping('field_venue_type', 'field_venue_type');
    $this->addFieldMapping('field_cycling_uk_venue', 'field_training_venue');
    $this->addFieldMapping('field_course_venue_address', 'field_course_venue_address');
    $this->addFieldMapping('field_course_venue_telephone', 'field_course_venue_telephone');
    $this->addFieldMapping('field_course_venue_website', 'field_course_venue_website');
    $this->addFieldMapping('field_course_venue_website:title', 'field_course_venue_website:title');
    $this->addFieldMapping('field_course_venue_email', 'field_course_venue_email');
    $this->addFieldMapping('field_course_venue_accommodation', 'field_course_venue_accommodation');


    //taxonomy mappings

    $this->addFieldMapping('field_status', '26')->sourceMigration('taxonomy_status');
    $this->addFieldMapping('field_status:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_status:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_status:ignore_case')->defaultValue(TRUE);

    $this->addFieldMapping('field_tags', 'merged_tags')->sourceMigration('taxonomy_tags');
    $this->addFieldMapping('field_tags:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_tags:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_tags:ignore_case')->defaultValue(TRUE);

    $this->addFieldMapping('field_cycling_uk_section', 'merged_cuk_section')->sourceMigration('taxonomy_cuk_section');
    $this->addFieldMapping('field_cycling_uk_section:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_cycling_uk_section:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_cycling_uk_section:ignore_case')->defaultValue(TRUE);

    // Unmigrated sources.
    $this->addUnmigratedSources(array(
      'revision',
      'log',
      'revision_uid',
      'field_image:list',
      'field_image:alt',                  //migrated in separate function
      'daycount',
      'timestamp',
      'totalcount'));

    // Unmigrated destinations.


    $this->addUnmigratedDestinations(array(
      'nid',
      'field_hero:file_class',
      'field_hero:destination_file',
      'field_hero:display'
      ));
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    //print_r($row);

    if (isset($row->field_training_venue)) {
        $row->field_training_venue = ($row->field_training_venue == 'CTC training venue' ? 0 : 1);
    }


  }

}
