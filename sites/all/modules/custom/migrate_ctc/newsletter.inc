<?php


/**
 * Extend the default DrupalNode6Migration class to add field migrations.
 */
class MigrateCtcNewsletterMigration extends CtcNode6Migration {

    /**
     * Extend parent constructor to add field mappings.
     */
    public function __construct($arguments) {
      parent::__construct($arguments);
      // Map custom CCK fields.

      // For all post nodes
      $this->addFieldMapping('field_teaser', 'field_teaser');

      $this->addFieldMapping('field_image', 'field_image');
      $this->addFieldMapping('field_image:preserve_files')->defaultValue(TRUE);
      $this->addFieldMapping('field_image:alt', 'field_image:alt');
      $this->addFieldMapping('field_image:title', 'field_image:title');
      $this->addFieldMapping('field_caption', 'field_image:title'); //add old title as caption
      $this->addFieldMapping('field_image:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
      $this->addFieldMapping('field_image:source_dir')->defaultValue('public://archive');
      $this->addFieldMapping('field_image:urlencode')->defaultValue(FALSE);
      $this->addFieldMapping('field_image:destination_dir')->defaultValue('public://media/migrated/newsletter');

      $this->addFieldMapping('field_old_nid', 'nid');


      $this->addFieldMapping('field_headline_message', 'field_contents_summary');
      $this->addFieldMapping('field_headline_message:format','field_contents_summary:format')->callbacks(array($this,'mapFormat'));

      $this->addFieldMapping('field_attachments', 'file_path');
      $this->addFieldMapping('field_attachments:description', 'file_desc');
      $this->addFieldMapping('field_attachments:preserve_files')->defaultValue(TRUE);
      $this->addFieldMapping('field_attachments:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
      $this->addFieldMapping('field_attachments:source_dir')->defaultValue('public://archive');
      $this->addFieldMapping('field_attachments:urlencode')->defaultValue(FALSE);
      $this->addFieldMapping('field_attachments:destination_dir')->defaultValue('public://document/migrated/article');

      //$this->addFieldMapping('field_further_reading', '	field_previous_publication');

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
        'field_contents_summary',
        'nid',
        'revision',
        'log',
        'revision_uid',
        'field_image:list',
        'field_file:list',
        'field_publication_type',
        'field_publication_date',
        'field_access_rights',
        'field_supporting_file',
        'field_supporting_file:list',
        'field_supporting_file:description',
        'field_audio_files',
        'field_contents_summary:format',
        'field_previous_publication',
        'field_audio_files:list',
        'field_audio_files:description',
        'daycount',
        'timestamp',
        'totalcount'));

      // Unmigrated destinations.

      $this->addUnmigratedDestinations(array(
        'nid',
        'field_attachments:file_class',
        'field_attachments:destination_file',
        'field_attachments:display',
        'field_additional_content',
        'field_additional_content:format',
        'field_story',
        'field_call_to_action',
        'field_call_to_action:source_type',
        'field_call_to_action:create_term',
        'field_call_to_action:ignore_case',
        'field_image:file_class',
        'field_image:destination_file',
      ));
    }

    public function prepareRow($row) {
      if (parent::prepareRow($row) === FALSE) {
        return FALSE;
      }

      //print_r($row->{'19'}[0]);
      if ($row->{'19'}[0] != 634) {
        //echo 'miss'.$row->p1;
        return FALSE;
      }


    }


  }
