<?php

class MigrateD6EventRidesMigration extends Migration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $this->description = 'Migrate Field collection "Rides & Activities" for Event content type';
        $this->dependencies = array('event','taxonomy_ride_type','taxonomy_event_type','taxonomy_event_facility');

        $query = Database::getConnection('default', $arguments['source_connection'])
                ->select('node', 'n')
                ->fields('n', array('nid', 'vid'))
                ->fields('rn', array('delta', 'field_event_ride_name_value'))
                ->fields('rd', array('field_event_ride_date_value'))
                ->fields('rt', array('field_event_ride_type_value'))
                ->fields('dis', array('field_event_ride_distance_value', 'field_event_ride_distance_unit'))
                ->fields('det', array('field_event_ride_details_value', 'field_event_ride_details_format'))
                ->fields('rstart', array('field_event_ride_start_value'))
                ->fields('datc', array('field_event_ride_datc_value'))
                ->fields('audax', array('field_event_ride_audax_value'))
                ->fields('trivet', array('field_trivet_value'))
                ->fields('f', array('fid', 'filepath'))
                ->fields('booknow', array('field_link_book_now_url'))
                ->fields('paypal', array('field_paypal_value'))
                ->condition('n.type', 'event', '=')
                ->isNotNull('field_event_ride_name_value');
        $query->leftJoin('content_field_event_ride_name', 'rn', 'rn.nid = n.nid');
        $query->leftJoin('content_field_event_ride_date', 'rd', 'rd.nid = n.nid AND rd.delta = rn.delta');
        $query->leftJoin('content_field_event_ride_type', 'rt', 'rt.nid = n.nid AND rt.delta = rn.delta');
        $query->leftJoin('content_field_event_ride_distance', 'dis', 'dis.nid = n.nid AND dis.delta = rn.delta');
        $query->leftJoin('content_field_event_ride_details', 'det', 'det.nid = n.nid AND det.delta = rn.delta');
        $query->leftJoin('content_field_event_ride_start', 'rstart', 'rstart.nid = n.nid AND rstart.delta = rn.delta');
        $query->leftJoin('content_field_event_ride_datc', 'datc', 'datc.nid = n.nid AND datc.delta = rn.delta');
        $query->leftJoin('content_field_event_ride_audax', 'audax', 'audax.nid = n.nid AND audax.delta = rn.delta');
        $query->leftJoin('content_field_trivet', 'trivet', 'trivet.nid = n.nid AND trivet.delta = rn.delta');
        $query->leftJoin('content_field_gpx_download', 'gpx', 'gpx.nid = n.nid AND gpx.delta = rn.delta');
        $query->leftJoin('files', 'f', 'f.fid = gpx.field_gpx_download_fid');
        $query->leftJoin('content_field_link_book_now', 'booknow', 'booknow.nid = n.nid AND booknow.delta = rn.delta');
        $query->leftJoin('content_field_paypal', 'paypal', 'paypal.nid = n.nid AND paypal.delta = rn.delta');
        $query->orderBy('nid', 'ASC');

        $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

        $this->destination = new MigrateDestinationFieldCollection('field_rides_and_activities', array('host_entity_type' => 'node'));

        $this->map = new MigrateSQLMap($this->machineName, array(
            'nid' => array('type' => 'int',
                'unsigned' => TRUE,
                'not null' => TRUE,
                'description' => 'node id',
            ),
            'delta' => array('type' => 'int',
                'unsigned' => TRUE,
                'not null' => TRUE,
                'description' => 'delta',
            ),
                ), MigrateDestinationFieldCollection::getKeySchema()
        );

        $unmigratedSources = array('vid', 'delta', 'field_event_ride_distance_unit', 'field_event_ride_details_format', 'fid');
        $this->addUnmigratedSources($unmigratedSources, 'DNM');


        $this->addFieldMapping('host_entity_id', 'nid')->sourceMigration('event');

        $this->addFieldMapping('field_event_ride_name', 'field_event_ride_name_value');

        $this->addFieldMapping('field_date_and_time', 'field_event_ride_date_value');

        $this->addFieldMapping('field_event_ride_type', 'field_event_ride_type_value')->sourceMigration('taxonomy_ride_type');
        $this->addFieldMapping('field_event_ride_type:source_type')->defaultValue('tid');
        $this->addFieldMapping('field_event_ride_type:create_term')->defaultValue(FALSE);
        $this->addFieldMapping('field_event_ride_type:ignore_case')->defaultValue(TRUE);

        $this->addFieldMapping('field_distance', 'field_event_ride_distance_value');
        $this->addFieldMapping('field_distance:target_id', 'field_distance_units');

        $this->addFieldMapping('field_event_ride_description', 'field_event_ride_details_value');
        $this->addFieldMapping('field_event_ride_description:format')->defaultValue('public_filter');

        $this->addFieldMapping('field_event_ride_start', 'field_event_ride_start_value');
        $this->addFieldMapping('field_event_ride_start:format')->defaultValue('public_filter');

        $this->addFieldMapping('field_event_ride_datc', 'field_event_ride_datc_value');

        $this->addFieldMapping('field_event_ride_audax', 'field_event_ride_audax_value');

        $this->addFieldMapping('field_tri_vet_event', 'field_trivet_value');

        $this->addFieldMapping('field_gpx_files', 'filepath');
        $this->addFieldMapping('field_gpx_files:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_gpx_files:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_gpx_files:source_dir')->defaultValue('public://archive');
        $this->addFieldMapping('field_gpx_files:urlencode')->defaultValue(FALSE);

        $this->addFieldMapping('field_link_booknow', 'field_link_book_now_url');

        $this->addFieldMapping('field_paypal_code', 'field_paypal_value');
        $this->addFieldMapping('field_paypal_code:format')->defaultValue('public_filter');
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

        //sanitize ride types
        if (isset($row->field_event_ride_type)) {
            foreach ($row->field_event_ride_type as $k => &$v) {
                $v = strtoupper($v);
                if (in_array($v, array('RIDE', 'SOCIAL', 'HOL'))) {
                    $v = 'OTHER';
                }
            }
        } else {
            $row->field_event_ride_type = 'OTHER';
        }

        //sanitize ride distance
        $unit = '';
        if ($row->field_event_ride_distance_unit == 'length_kilometer') {
            $unit = 1; //target_id @see db:units_unit
        }
        if ($row->field_event_ride_distance_unit == 'length_mile') {
            $unit = 6; //target_id @see db:units_unit
        }

        $this->field_distance_units = $unit;

        //print_r($row);
    }

}
