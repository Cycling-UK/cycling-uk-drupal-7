<?php


/**
 * Extend the default DrupalNode6Migration class to add field migrations.
 */
class MigrateCtcPublicationMigration extends CtcNode6Migration {

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
    $this->addFieldMapping('field_image:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
    $this->addFieldMapping('field_image:source_dir')->defaultValue('public://archive');
    $this->addFieldMapping('field_image:urlencode')->defaultValue(FALSE);
    $this->addFieldMapping('field_image:destination_dir')->defaultValue('public://media/migrated/publication');

    $this->addFieldMapping('field_old_nid', 'nid');


    //mag specific

    $this->addFieldMapping('field_pdf_copies', 'file_path');
    $this->addFieldMapping('field_pdf_copies:description', 'file_desc');
    $this->addFieldMapping('field_pdf_copies:preserve_files')->defaultValue(TRUE);
    $this->addFieldMapping('field_pdf_copies:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
    $this->addFieldMapping('field_pdf_copies:source_dir')->defaultValue('public://archive');
    $this->addFieldMapping('field_pdf_copies:urlencode')->defaultValue(FALSE);
    $this->addFieldMapping('field_pdf_copies:destination_dir')->defaultValue('public://document/migrated/publication');

    $this->addFieldMapping('field_magazine_cover', 'field_image');
    $this->addFieldMapping('field_magazine_cover:preserve_files')->defaultValue(TRUE);
    $this->addFieldMapping('field_magazine_cover:alt', 'field_image:alt');
    $this->addFieldMapping('field_magazine_cover:title', 'field_image:title');
    $this->addFieldMapping('field_magazine_cover:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
    $this->addFieldMapping('field_magazine_cover:source_dir')->defaultValue('public://archive');
    $this->addFieldMapping('field_magazine_cover:urlencode')->defaultValue(FALSE);
    $this->addFieldMapping('field_magazine_cover:destination_dir')->defaultValue('public://media/migrated/publication');

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
    //$this->addFieldMapping(NULL, '6')->issueGroup('DNM')->description('Tags');
    //$this->addFieldMapping(NULL, '26')->issueGroup('DNM')->description('status');
    //$this->addFieldMapping(NULL, '21')->issueGroup('DNM')->description('Area');
    //$this->addFieldMapping(NULL, '17')->issueGroup('DNM')->description('Section');
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
      'field_pdf_copies:file_class',
      'field_pdf_copies:destination_file',
      'field_pdf_copies:display',
      'field_call_to_action',
      'field_call_to_action:source_type',
      'field_call_to_action:create_term',
      'field_call_to_action:ignore_case',
      'field_image:file_class',
      'field_image:destination_file',
      'field_issuu_embed_code',
      'field_issuu_embed_code:format',
      'field_soundcloud',
      'field_soundcloud:file_class',
      'field_soundcloud:preserve_files',
      'field_soundcloud:destination_dir',
      'field_soundcloud:destination_file',
      'field_soundcloud:file_replace',
      'field_soundcloud:source_dir',
      'field_soundcloud:urlencode',
      'field_soundcloud:title',
      'field_soundcloud:data',
    ));
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    //print_r($row->{'19'}[0]);
    if ($row->{'19'}[0] != 631) {
      //echo 'miss'.$row->p1;
      return FALSE;
    }


  }


}
