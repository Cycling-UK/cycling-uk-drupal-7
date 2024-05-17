<?php

class MigrateCtcTROMigration extends DrupalNode6Migration {

    public function __construct(array $arguments) {
        parent::__construct($arguments);
        
        $this->addFieldMapping('field_tro_status', 'field_tro_status');
        $this->addFieldMapping('field_tro_type', 'field_tro_type');
        $this->addFieldMapping('field_tro_subject', 'field_tro_temporary_type');
        $this->addFieldMapping('field_date', 'field_tro_closing_date');
        $this->addFieldMapping('field_tro_local_authority', 'field_tro_local_authority');
        
        $this->addFieldMapping('field_attachments', 'field_tro_supporting_file')->callbacks(array($this, 'fixFilePath'));
        $this->addFieldMapping('field_attachments:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_attachments:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_attachments:source_dir')->defaultValue('public://archive');
        $this->addFieldMapping('field_attachments:urlencode')->defaultValue(FALSE);
        $this->addFieldMapping('field_attachments:destination_dir')->defaultValue('public://document/migrated/tro');
    
        
        $this->addFieldMapping('field_location', 'field_tro_location');

        $this->addFieldMapping('field_status', '26')->sourceMigration('taxonomy_status');
        $this->addFieldMapping('field_status:source_type')->defaultValue('tid');
        $this->addFieldMapping('field_status:create_term')->defaultValue(FALSE);
        $this->addFieldMapping('field_status:ignore_case')->defaultValue(TRUE);        
        

    }

    public function prepareRow($row) {
        if (parent::prepareRow($row) === FALSE) {
            return FALSE;
        }
        //enforce language neutral
        $row->language = LANGUAGE_NONE;

        $row->field_tro_local_authority = html_entity_decode($row->field_tro_local_authority);
        
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
