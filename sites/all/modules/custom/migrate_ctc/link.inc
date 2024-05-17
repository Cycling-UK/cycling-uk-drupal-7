<?php


/**
 * Extend the default DrupalNode6Migration class to add field migrations.
 */
class MigrateCtcLinkMigration extends CtcNode6Migration {

  /**
   * Extend parent constructor to add additional field mappings.
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
    $this->addFieldMapping('field_image:destination_dir')->defaultValue('public://media/migrated/link');
    $this->addFieldMapping('field_old_nid', 'nid');

    $this->addFieldMapping('field_redirect_link','field_link');
    $this->addFieldMapping('field_link_type','field_link_type');

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
    $this->addUnmigratedSources(array(
      'revision',
      'log',
      'revision_uid',
      'field_image:list',
      'daycount',
      'timestamp',
      'totalcount'));

    // Unmigrated destinations.
    $this->addUnmigratedDestinations(array(
      'nid',
      'field_redirect_link:title',
      'field_redirect_link:attributes',
      'field_redirect_link:language',
      'field_image:file_class',
      'field_image:destination_file'
    ));
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    //print_r($row);
  }

}
