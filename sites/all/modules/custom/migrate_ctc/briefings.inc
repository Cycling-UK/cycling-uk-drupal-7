<?php


/**
 * Extend the default DrupalNode6Migration class to add field migrations.
 */
class MigrateCtcBriefingsMigration extends CtcNode6Migration {

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
    $this->addFieldMapping('field_hero:destination_dir')->defaultValue('public://media/migrated/briefings');

    $this->addFieldMapping('field_attachments', 'file_path');
    $this->addFieldMapping('field_attachments:description', 'file_desc');
    $this->addFieldMapping('field_attachments:preserve_files')->defaultValue(TRUE);
    $this->addFieldMapping('field_attachments:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
    $this->addFieldMapping('field_attachments:source_dir')->defaultValue('public://archive');
    $this->addFieldMapping('field_attachments:urlencode')->defaultValue(FALSE);
    $this->addFieldMapping('field_attachments:destination_dir')->defaultValue('public://document/migrated/info');

    $this->addFieldMapping('field_old_nid', 'nid');

    $this->addFieldMapping('field_headline_message', 'field_headline_message');
    $this->addFieldMapping('field_headline_message:format', 'field_headline_message:format')->callbacks(array($this,'mapFormat'));
    $this->addFieldMapping('field_policy_key_facts', 'field_policy_key_facts');
    $this->addFieldMapping('field_policy_key_facts:format', 'field_policy_key_facts:format')->callbacks(array($this,'mapFormat'));
    $this->addFieldMapping('field_cycling_uk_view', 'field_ctc_view');
    $this->addFieldMapping('field_cycling_uk_view:format', 'field_ctc_view:format')->callbacks(array($this,'mapFormat'));
    $this->addFieldMapping('field_publication_date', 'field_publication_date');

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
      'field_attachments:file_class',
      'field_publication_date:timezone',
      'field_publication_date:rrule',
      'field_publication_date:to',
      'field_attachments:destination_file',
      'field_attachments:display',
      'field_call_to_action',
      'field_call_to_action:source_type',
      'field_call_to_action:create_term',
      'field_call_to_action:ignore_case',
      'field_additional_content',
      'field_additional_content:format',
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
