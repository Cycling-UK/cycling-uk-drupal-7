<?php


/**
 * Extend the default DrupalNode6Migration class to add field migrations.
 */
class MigrateCtcCourseDetailsMigration extends CtcNode6Migration {

  /**
   * Extend parent constructor to add additional field mappings.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    // Map custom CCK fields.

    // For all post nodes
    $this->addFieldMapping('field_teaser', 'field_teaser');


    $this->addFieldMapping('field_hero', 'field_image');
    $this->addFieldMapping('field_caption', 'field_image:title'); //add old title as caption
    $this->addFieldMapping('field_hero:preserve_files')->defaultValue(TRUE);
    $this->addFieldMapping('field_hero:description', 'merged_alt_title');
    $this->addFieldMapping('field_hero:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
    $this->addFieldMapping('field_hero:source_dir')->defaultValue('public://archive');
    $this->addFieldMapping('field_hero:urlencode')->defaultValue(FALSE);
    $this->addFieldMapping('field_hero:destination_dir')->defaultValue('public://media/migrated/courses');

    $this->addFieldMapping('field_course_resources', 'field_course_resources');
    $this->addFieldMapping('field_course_resources:description', 'field_course_resources:description');
    $this->addFieldMapping('field_course_resources:preserve_files')->defaultValue(TRUE);
    $this->addFieldMapping('field_course_resources:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
    $this->addFieldMapping('field_course_resources:source_dir')->defaultValue('public://archive');
    $this->addFieldMapping('field_course_resources:urlencode')->defaultValue(FALSE);
    $this->addFieldMapping('field_course_resources:destination_dir')->defaultValue('public://document/migrated/info');

    $this->addFieldMapping('field_old_nid', 'nid');

    $this->addFieldMapping('field_prerequisite_courses', 'field_prerequisite_courses');
    $this->addFieldMapping('field_feed_in_courses', 'field_feed_in_courses');

    $this->addFieldMapping('field_course_key_content', 'field_course_key_content');
    $this->addFieldMapping('field_course_key_content:format', 'field_course_key_content:format');
    $this->addFieldMapping('field_course_outcomes', 'field_course_outcomes');
    $this->addFieldMapping('field_course_outcomes:format', 'field_course_outcomes:format');
    $this->addFieldMapping('field_course_availability', 'field_course_availability');
    $this->addFieldMapping('field_course_duration', 'field_course_length');
    $this->addFieldMapping('field_course_terrain', 'field_course_terrian');
    $this->addFieldMapping('field_course_fitness_level', 'field_course_fitness_level');
    $this->addFieldMapping('field_course_group_size', 'field_course_group_size');
    $this->addFieldMapping('field_skill_level', 'field_skill_level');
    $this->addFieldMapping('field_price_summary', 'field_price_summary');
    $this->addFieldMapping('field_course_assessment', 'field_course_assessment');
    $this->addFieldMapping('field_course_tutor', 'field_course_tutor');
    $this->addFieldMapping('field_course_prerequisites', 'field_course_prerequisites');
    $this->addFieldMapping('field_progression', 'field_progression');


    //taxonomy mappings

    $this->addFieldMapping('field_status', '26')->sourceMigration('taxonomy_status');
    $this->addFieldMapping('field_status:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_status:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_status:ignore_case')->defaultValue(TRUE);

    $this->addFieldMapping('field_tags', 'merged_tags')->sourceMigration('taxonomy_tags');
    $this->addFieldMapping('field_tags:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_tags:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_tags:ignore_case')->defaultValue(TRUE);

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
    $this->addUnmigratedImageFieldDestination('field_gallery_image');

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



  }

}
