<?php

class MigrateD6OgUidMigration extends Migration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $this->dependencies = array('groups', 'affiliated_centre');

        $query = Database::getConnection('default', $arguments['source_connection'])
                ->select('og_uid', 'oguid')
                ->fields('oguid');

        $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

        $this->destination = new MigrateDestinationOGMembership();

        $this->map = new MigrateSQLMap($this->machineName, array(
            'nid' => array('type' => 'int',
                'unsigned' => TRUE,
                'not null' => TRUE,
                'description' => 'nid',
            ),
            'is_admin' => array('type' => 'int',
                'unsigned' => TRUE,
                'not null' => TRUE,
                'description' => 'is_admin',
            ),
            'uid' => array('type' => 'int',
                'unsigned' => TRUE,
                'not null' => TRUE,
                'description' => 'uid',
            )
                ), MigrateDestinationOGMembership::getKeySchema()
        );

        $this->addFieldMapping('group_type')->defaultValue('node');
        $this->addFieldMapping('gid', 'nid')->sourceMigration(array('groups', 'affiliated_centre'));

        $this->addFieldMapping('entity_type')->defaultValue('user');
        $this->addFieldMapping('etid', 'uid')->sourceMigration('users');

        $this->addFieldMapping('is_admin', 'is_admin');

        $this->addFieldMapping('state')->defaultValue(OG_STATE_ACTIVE);
    }

    public function prepareRow($row) {
        if (parent::prepareRow($row) === FALSE) {
            return FALSE;
        }
    }

}
