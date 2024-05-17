<?php


/**
 * Extend the default DrupalNode6Migration class to add field migrations.
 */
class MigrateCtcPanelMigration extends CtcNode6Migration {

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
    $this->addFieldMapping('field_hero:destination_dir')->defaultValue('public://media/migrated/info');

    $this->addFieldMapping('field_old_nid', 'nid');

    $this->addFieldMapping('field_further_reading', 'merged_node_references');

    // Unmigrated sources.
    $this->addUnmigratedSources(array(
      'revision',
      'log',
      'revision_uid',
      'field_image:list',
      'field_image:alt',                  //migrated in separate function
      'field_featured',                   //migrate in separate function
      'daycount',
      'timestamp',
      'totalcount'));

    // Unmigrated destinations.
    $this->addUnmigratedImageFieldDestination('field_gallery_image');
    $this->addUnmigratedFileFieldDestination('field_attachments');
    $this->addUnmigratedDestinations(array(
      'nid',
      'field_call_to_action',
      'field_call_to_action:source_type',
      'field_call_to_action:create_term',
      'field_call_to_action:ignore_case',
      'field_additional_content',
      'field_additional_content:format',
      'field_hero:file_class',
      'field_hero:destination_file',
      'field_hero:display',
      'field_tags',
      'field_tags:source_type',
      'field_tags:create_term',
      'field_tags:ignore_case',
      'field_area',
      'field_area:source_type',
      'field_area:create_term',
      'field_area:ignore_case',
      'field_cycling_type',
      'field_cycling_type:source_type',
      'field_cycling_type:create_term',
      'field_cycling_type:ignore_case',
      'field_status',
      'field_status:source_type',
      'field_status:create_term',
      'field_status:ignore_case'
      ));
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    //print_r($row);



  }

}
