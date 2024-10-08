<?php

class MigrateTaxEventFacilityMigration extends Migration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $data = array(
            'ENTRYPOST|Enter by post',
            'ENTRYDAY|Enter on the day',
            'CARPARKING|Adequate car parking',
            'CHANGINGROOM|Changing rooms',
            'SHOWER|Showers',
            'SIGNEDROUTE|Signed route',
            'ROUTECARD|Route card',
            'SAGWAGON|SAG wagon',
            'FEEDSTOPS|Feed Stops',
        );


        $this->source = new EventFacilitySource($data);

        $this->destination = new MigrateDestinationTerm('event_facility');
        $this->map = new MigrateSQLMap($this->machineName, array(
            'idtag' => array(
                'type' => 'varchar',
                'length' => 16,
                'not null' => TRUE,
                'description' => 'idtag (source tid)',
            ),
                ), MigrateDestinationTerm::getKeySchema());

        $this->addSimpleMappings(array('name'));
        $this->addFieldMapping('description','idtag'); //just in case
    }

    public function prepareRow($row) {
        if (parent::prepareRow($row) === FALSE) {
            return FALSE;
        }
    }
}

class EventFacilitySource extends MigrateSource {

    protected $currentId;
    protected $numRows;
    protected $arrayData;

    public function __construct(array $data, array $options = array()) {
        parent::__construct($options);
        $this->arrayData = $data;
        $this->numRows = sizeof($data);
    }

    public function __toString() {
        return 'Generate taxonomy from combined fields <b>(on d6 event->Facilities)</b> => convertion to taxonomy terms';
    }

    public function fields() {
        return array(
            'idtag' => t('ID TAG'),
            'name' => t('User friendly name'),
        );
    }

    public function computeCount() {
        return $this->numRows;
    }

    public function performRewind() {
        $this->currentId = 1;
    }

    public function getNextRow() {
        if ($this->currentId <= $this->numRows) {
            $line = explode('|', $this->arrayData[$this->currentId - 1]);
            $row = new stdClass;
            $row->idtag = strtoupper($line[0]);
            $row->name = $line[1];
            $this->currentId++;
            return $row;
        } else {
            return NULL;
        }
    }

}
