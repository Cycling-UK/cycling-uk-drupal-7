<?php


/**
 * Extend the default DrupalNode6Migration class to add field migrations.
 */
class MigrateCtcGalleryMigration extends CtcNode6Migration {

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


    //Gallery specific
    $this->addFieldMapping('field_post_type')->defaultValue('gallery');
    $this->addFieldMapping('field_hero:destination_dir')->defaultValue('public://media/migrated/gallery');

    $this->addFieldMapping('field_gallery_image', 'field_gallery_image');
    $this->addFieldMapping('field_gallery_image:alt', 'field_gallery_image:alt');
    $this->addFieldMapping('field_gallery_image:title', 'field_gallery_image:title');
    $this->addFieldMapping('field_gallery_image:preserve_files')->defaultValue(TRUE);
    $this->addFieldMapping('field_gallery_image:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
    $this->addFieldMapping('field_gallery_image:source_dir')->defaultValue('public://archive');
    $this->addFieldMapping('field_gallery_image:urlencode')->defaultValue(FALSE);
    $this->addFieldMapping('field_gallery_image:destination_dir')->defaultValue('public://media/migrated/gallery');

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
    //$this->addFieldMapping(NULL, '4')->issueGroup('DNM')->description('Campaign Theme');
    //$this->addFieldMapping(NULL, '6')->issueGroup('DNM')->description('Tags');
    //$this->addFieldMapping(NULL, '21')->issueGroup('DNM')->description('Area');
    //$this->addFieldMapping(NULL, '36')->issueGroup('DNM')->description('Category');
    //$this->addFieldMapping(NULL, '41')->issueGroup('DNM')->description('Subject');

    $this->addUnmigratedSources(array(
      'nid',
      'revision',
      'log',
      'revision_uid',
      'field_image:list',
      'field_image:alt',                  //migrated in separate function
      'field_gallery_image:list',
      'daycount',
      'timestamp',
      'totalcount'));
    // Unmigrated destinations.
    $this->addUnmigratedFileFieldDestination('field_attachments');
    $this->addUnmigratedFileFieldDestination('field_gpx_files');
    $this->addUnmigratedGeoFieldDestination('field_gpx_map');
    $this->addUnmigratedGeoFieldDestination('field_location');
    $this->addUnmigratedTaxonomyFieldDestination('field_article_type');
    $this->addUnmigratedAddressDestination('field_address');
    $this->addUnmigratedDestinations(array(
      'nid',
      'field_hero:file_class',
      'field_hero:destination_file',
      'field_hero:display',
      'field_gallery_image:file_class',
      'field_gallery_image:destination_file',
      'field_additional_content',
      'field_additional_content:format',
      'field_exclude_from_main_feeds',
      'field_further_reading',
      'field_press_contact_information',
      'field_press_contact_information:format',
      'field_press_notes_to_editors',
      'field_press_notes_to_editors:format',
      'field_call_to_action',
      'field_call_to_action:source_type',
      'field_call_to_action:create_term',
      'field_call_to_action:ignore_case'
      ));

  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    $image_paths = array();
    if (is_array($row->field_gallery_image)) {
      foreach ($row->field_gallery_image as $image_fid) {
        $query = Database::getConnection('default', $this->sourceConnection)->select('files', 'f');
        $query->fields('f', array(
          'filename',
          'filepath'));
        $query->condition('fid', $image_fid);
        $result = $query->execute();
        // Strip front off filepath so we can use public:// scheme.
        // In this case we're keeping the original tree structure.
        // Alternative is to use filename, to flatten tree, or use
        // filename plus some other path parts to re-arrange tree.
        $image_path = $result->fetch()->filepath;
        $image_paths[] = str_replace('sites/default/files', '', $image_path);
      }
      $row->field_gallery_image = $image_paths;
    }
  }
}
