<?php

class MigrateD6ChildPageMigration extends DrupalNode6Migration {

    public function __construct(array $arguments) {
        parent::__construct($arguments);

        $this->addFieldMapping('field_teaser', 'teaser');

        $this->addFieldMapping('body:format', 'format', FALSE); //body = description

        $this->addFieldMapping('field_attachments', 'field_group_files')->callbacks(array($this, 'fixFilePath'));
        $this->addFieldMapping('field_attachments:description', 'field_group_files:description');
        $this->addFieldMapping('field_attachments:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_attachments:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_attachments:source_dir')->defaultValue('public://archive');
        $this->addFieldMapping('field_attachments:urlencode')->defaultValue(FALSE);
        $this->addFieldMapping('field_attachments:destination_dir')->defaultValue('public://document/migrated/groupchildpage');

        $this->addFieldMapping('field_gallery_image', 'field_gallery_image')->callbacks(array($this, 'fixFilePath'));
        $this->addFieldMapping('field_gallery_image:alt', 'field_gallery_image:alt');
        $this->addFieldMapping('field_gallery_image:title', 'field_gallery_image:title');
        $this->addFieldMapping('field_gallery_image:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_gallery_image:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_gallery_image:source_dir')->defaultValue('public://archive');
        $this->addFieldMapping('field_gallery_image:urlencode')->defaultValue(FALSE);
        $this->addFieldMapping('field_gallery_image:destination_dir')->defaultValue('public://media/migrated/gallery');

        $this->addFieldMapping('og_group_ref', 'og_ref')->sourceMigration(array('groups', 'affiliated_centre'));

    }

    public function prepareRow($row) {
        if (parent::prepareRow($row) === FALSE) {
            return FALSE;
        }

        //sanitize text-format
        $format = 'public_filter';
        if ($row->format == 2) {
            $format = 'full_html';
        }
        $row->format = $format;


        //enforce language neutral
        $row->language = LANGUAGE_NONE;

        //print_r($row);
    }

    protected function fixFilePath($fids) {
        foreach ($fids as $k => $fid) {
            $query = Database::getConnection('default', $this->sourceConnection)
                ->select('files', 'f')
                ->fields('f', array('filename', 'filepath'))
                ->condition('fid', $fid);
            $result = $query->execute()->fetchAssoc();
            $fids[$k] = str_replace('sites/default/files', '', $result['filepath']);
        }
        return $fids;
  }

}
