<?php

class MigrateDrupalUrlRedirect6Migration extends Migration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $this->addUnmigratedSources(array('source', 'redirect'), 'DNM');
        $this->description = 'Migrate URL redirects';

        $query = Database::getConnection('default', $arguments['source_connection'])
                ->select('path_redirect', 'pr')
                ->fields('pr', array('rid', 'source', 'redirect'));
        $query->orderBy('rid', 'ASC');

        $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

        $this->destination = new MigrateDestinationUrlRedirect();

        $this->map = new MigrateSQLMap($this->machineName, array(
            'rid' => array('type' => 'int',
                'unsigned' => TRUE,
                'not null' => TRUE,
                'description' => 'Source ID redirect',
            ),
                ), MigrateDestinationUrlRedirect::getKeySchema()
        );
    }

    public function prepareRow($row) {

        $row->newredirect = NULL;

        preg_match('/node\/(\d+)/', $row->redirect, $matches);

        if (isset($matches[1])) { //id of node
            $sources = array('affiliated_centre', 'group_child_page', 'group_post', 'event', 'groups', 'ride', 'node_course_details', 'node_course_venues', 'node_tro',
                'node_briefings', 'node_campaign', 'node_publication', 'node_newsletter', 'node_info', 'node_area', 'node_editorial_page', 'node_link', 'node_member_benefit',
                'node_panel', 'node_person_profile', 'node_project', 'node_tribe', 'node_article', 'node_blog', 'node_case_study', 'node_cycle_magazine', 'node_gallery', 'node_news', 'node_press_release');

            foreach ($sources as $src) {

                $inst = MigrationBase::getInstance($src);
                $data = $inst->getMap()->lookupDestinationID(array($matches[1]));
                if (isset($data['destid1'])) {
                    $row->newredirect = 'node/' . $data['destid1'];
                    break;
                }
            }
        } else { //plain url, string
            $row->newredirect = $row->redirect;
        }

        //print_r($row);
    }

}

/**
 * Destination class implementing migration
 */
class MigrateDestinationUrlRedirect extends MigrateDestination {

    static public function getKeySchema() {
        return array(
            'drid' => array(
                'type' => 'int',
                'unsigned' => TRUE,
                'not null' => TRUE,
                'description' => 'Destination Redirect ID',
            ),
        );
    }

    public function __construct() {
        parent::__construct();
    }

    public function __toString() {
        return t('SQL Update for redirect');
    }

    public function fields($migration = NULL) {
        return array();
    }

    public function import(stdClass $variable, stdClass $row) {

        if (!isset($row->newredirect)) {

            $migration = Migration::currentMigration();
            $migration->saveMessage('No destination node ID for source node ID:' . $row->redirect . ' , source URL:'. $row->source);
            return FALSE;
        }

        $return = FALSE;

        //ONLY NEW CONTENT
        if (!isset($row->migrate_map_destid1)) {

            $redirect = (object) [
                        'type' => 'redirect',
                        'uid' => 1,
                        'source' => $row->source,
                        'source_options' => array(),
                        'redirect' => $row->newredirect,
                        'redirect_options' => array(),
                        'language' => LANGUAGE_NONE,
                        'status' => 1,
                        'status_code' => 0,
                        'override' => NULL,
            ];

            $rid = redirect_save($redirect);

            $this->numCreated++;
            $return = array($rid);
        }

        return $return;
    }

    public function rollback(array $data) {

        redirect_delete($data['destid1']);

    }

}
