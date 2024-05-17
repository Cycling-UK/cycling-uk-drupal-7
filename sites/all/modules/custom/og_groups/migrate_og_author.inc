<?php

class MigrateD6OgAuthorMigration extends Migration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $this->addUnmigratedSources(array('type','title','nid_destiny'), 'DNM');
        $this->description = 'Migrate user ownership(author / UID) of OG group related content.. due to issues with OG groups.. this have to be done independent';
        $this->dependencies = array('groups', 'affiliated_centre', 'group_child_page', 'group_post' ,'event' ,'ride', 'og_uid');

        $query = Database::getConnection('default', $arguments['source_connection'])
                ->select('node', 'n')
                ->fields('n', array('nid', 'uid', 'type', 'title'))
                ->condition('n.type', array('group' ,'affiliated_centre' ,'group_child_page' ,'group_news' ,'event' ,'ride'), 'IN');
        $query->orderBy('nid', 'ASC');

        $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

        $this->destination = new MigrateDestinationOgAuthor();

        $this->map = new MigrateSQLMap($this->machineName, array(
            'nid' => array('type' => 'int',
                'unsigned' => TRUE,
                'not null' => TRUE,
                'description' => 'ID of source node',
            ),
            ), MigrateDestinationOgAuthor::getKeySchema()
        );

        $this->addFieldMapping('uid_destiny', 'uid')->sourceMigration('users');
        
    }

    
    
    public function prepareRow($row) {
        
        $row->nid_destiny = NULL;
        
        $sources = array('affiliated_centre', 'group_child_page', 'group_post', 'event', 'groups', 'ride');
        foreach ($sources as $src) {

            $inst = MigrationBase::getInstance($src);
            $data = $inst->getMap()->lookupDestinationID(array($row->nid));
            if (isset($data['destid1']))
            {
                $row->nid_destiny = $data['destid1'];
                break;
            } 

        }
        
        //print_r($row);
    
    }

}

/**
 * Destination class implementing migration
 */
class MigrateDestinationOgAuthor extends MigrateDestination {

    static public function getKeySchema() {
        return array(
            'nid_destiny' => array(
                'type' => 'int',
                'unsigned' => TRUE,
                'not null' => TRUE,
                'description' => 'ID of destination node',
            ),
        );
    }

    public function __construct() {
        parent::__construct();
    }

    public function __toString() {
        $output = t('SQL Update for USER ID on NODE table to update user ownership');
        return $output;
    }

    public function fields($migration = NULL) {
        $fields = array(
            'nid_destiny' => 'Destination Node ID.',
            'uid_destiny' => 'Destination User ID',
        );
        return $fields;
    }

    public function import(stdClass $variable, stdClass $row) {

        if ($variable->uid_destiny && $row->nid_destiny) {
            db_update('node')->fields(array(
                'uid' => $variable->uid_destiny,
                ))
            ->condition('nid', $row->nid_destiny, '=')
            ->execute();
            $this->numUpdated++;
            $return = array($row->nid_destiny);
        } else {
            $migration = Migration::currentMigration();
            $migration->saveMessage('No reference for destiny NID / UID:   '. print_r($variable,1). ' ROW: '.print_r($row,1));
            $return = FALSE;
        }

        return $return;
    }

    public function rollback(array $data) {

        db_update('node')->fields(array(
            'uid' => 1,
            ))
        ->condition('nid', $data['destid1'], '=')
        ->execute();
    }

}
