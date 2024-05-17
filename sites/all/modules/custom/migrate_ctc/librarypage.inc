<?php

class MigrateD6LibraryPageMigration extends Migration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $this->description = 'Migrate node type "Library page" into taxonomy "glossary"';

        $query = Database::getConnection('default', $arguments['source_connection'])
                ->select('node', 'n')
                ->fields('n', array('nid', 'vid', 'title'))
                ->fields('rr', array('body'))
                ->fields('f', array('fid', 'filepath'))
                ->fields('rt', array('field_teaser_value'))
                ->fields('ri', array('field_image_data'))
                ->condition('n.type', 'library_page', '=')
                ->condition('n.status', '1', '=');
        $query->leftJoin('node_revisions', 'rr', 'rr.nid = n.nid AND rr.vid = n.vid');
        $query->leftJoin('content_field_teaser', 'rt', 'rt.nid = n.nid AND rt.vid = n.vid');
        $query->leftJoin('content_field_image', 'ri', 'ri.nid = n.nid AND ri.vid = n.vid');
        $query->leftJoin('files', 'f', 'f.fid = ri.field_image_fid');
        $query->orderBy('nid', 'ASC');

        $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

        $this->destination = new MigrateDestinationTerm('glossary');

        $this->map = new MigrateSQLMap($this->machineName, array(
            'nid' => array('type' => 'int',
                'unsigned' => TRUE,
                'not null' => TRUE,
                'description' => 'node id',
            ),
                ), MigrateDestinationTerm::getKeySchema()
        );

        $unmigratedSources = array('vid', 'fid', 'field_image_data');
        $this->addUnmigratedSources($unmigratedSources, 'DNM');

        $this->addFieldMapping('name', 'title');
        $this->addFieldMapping('description', 'body');
        $this->addFieldMapping('format')->defaultValue('filtered_html');

        $this->addFieldMapping('field_teaser', 'field_teaser_value');

        $this->addFieldMapping('field_image', 'filepath');
        $this->addFieldMapping('field_image:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_image:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_image:source_dir')->defaultValue('public://archive');
        $this->addFieldMapping('field_image:urlencode')->defaultValue(FALSE);
    }
    
    public function prepareRow($row) {
        if (parent::prepareRow($row) === FALSE) {
            return FALSE;
        }

        //sanitize file path
        if (isset($row->fid)) {
            $file[$row->fid] = str_replace('sites/default/files', '', $row->filepath);
            $row->filepath = $file;
        }
        
        //print_r($row);
    }

}
