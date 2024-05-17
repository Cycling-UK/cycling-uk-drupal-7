<?php

class MigrateTaxRideTypeMigration extends Migration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $query = Database::getConnection('default', $arguments['source_connection'])
                        ->select('content_node_field', 'cnf')
                        ->fields('cnf')
                        ->condition('cnf.field_name', 'field_event_ride_type', '=')
                        ->execute()->fetch();
        $rawdata = unserialize($query->global_settings);
        $rawdata = $rawdata['allowed_values'];
        $data = explode("\n", $rawdata);

        $this->source = new RideTypeSource($data);

        $this->destination = new MigrateDestinationTerm('ride_type');
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

class RideTypeSource extends MigrateSource {

    protected $currentId;
    protected $numRows;
    protected $arrayData;

    public function __construct(array $data, array $options = array()) {
        parent::__construct($options);
        $this->arrayData = $data;
        $this->numRows = sizeof($data);
    }

    public function __toString() {
        return 'Generate taxonomy from field_event_ride_type';
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
            $row->idtag = $line[0];
            $row->name = $line[1];
            $this->currentId++;
            return $row;
        } else {
            return NULL;
        }
    }

}
