<?php

class MigrateD6EventMigration extends DrupalNode6Migration {


    public function __construct(array $arguments) {

        $this->sourceFields += array(
            'field_facilities' => 'Combination of facilities fields in D6',
        );
        parent::__construct($arguments);

        $this->dependencies = array('groups', 'affiliated_centre', 'taxonomy_ride_type','taxonomy_event_type','taxonomy_event_facility');

        $unmigratedSources = array('field_event_facility_signed', 'field_event_facility_entry_day', 'field_event_facility_entry_post', 'field_event_facility_feedstops',
            'field_event_facility_car_parking', 'field_event_facility_changing', 'field_event_facility_showers', 'field_event_facility_routecard', 'field_event_facility_sagwagon',
            'field_event_facility_feedstops', 'daycount', 'timestamp', 'totalcount');
        $this->addUnmigratedSources($unmigratedSources, 'DNM');

        $this->addFieldMapping('field_image', 'field_image')->callbacks(array($this, 'fixFilePath'));
        $this->addFieldMapping('field_image:alt', 'field_image:alt');
        $this->addFieldMapping('field_image:title', 'field_image:title');
        $this->addFieldMapping('field_image:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_image:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_image:source_dir')->defaultValue('public://archive');
        $this->addFieldMapping('field_image:urlencode')->defaultValue(FALSE);
        $this->addFieldMapping('field_image:destination_dir', 'field_event_date')->callbacks(array($this, 'eventYear'));

        $this->addFieldMapping('field_date', 'field_event_date');

        $this->addFieldMapping('field_event_type', 'field_event_type')->sourceMigration('taxonomy_event_type');
        $this->addFieldMapping('field_event_type:source_type')->defaultValue('tid');
        $this->addFieldMapping('field_event_type:create_term')->defaultValue(FALSE);
        $this->addFieldMapping('field_event_type:ignore_case')->defaultValue(TRUE);

        $this->addFieldMapping('field_cost', 'field_event_cost');

        $this->addFieldMapping('field_risk_assessment', 'field_event_risk_assessment');

        $this->addFieldMapping('body:format', 'format', FALSE); //body = description

        //for rides see migrate_eventrides.inc

        $this->addFieldMapping('field_event_facilities', 'field_facilities')->sourceMigration('taxonomy_event_facility');
        $this->addFieldMapping('field_event_facilities:source_type')->defaultValue('tid');
        $this->addFieldMapping('field_event_facilities:create_term')->defaultValue(FALSE);
        $this->addFieldMapping('field_event_facilities:ignore_case')->defaultValue(TRUE);

        $this->addFieldMapping('field_location', 'field_event_location');

        $this->addFieldMapping('field_address_information', 'field_event_location_desc');

        $this->addFieldMapping('field_town', 'field_event_address_town');

        $this->addFieldMapping('field_postcode', 'field_event_address_postcode');

        $this->addFieldMapping('field_grid_reference', 'field_event_grid_reference');

        $this->addFieldMapping('field_contact_name', 'field_event_contact_name');

        $this->addFieldMapping('field_contact_number', 'field_event_contact_telephone');

        $this->addFieldMapping('field_contact_email', 'field_event_contact_email');

        $this->addFieldMapping('field_contact_address', 'field_event_contact_address');
        $this->addFieldMapping('field_contact_address:format')->defaultValue('public_filter');

        $this->addFieldMapping('field_link', 'field_event_website');

        $this->addFieldMapping('field_cancelled', 'field_ride_cancelled')->callbacks(array($this, 'fixCancelledRide'));

        $this->addFieldMapping('og_group_ref', 'og_ref')->sourceMigration(array('groups', 'affiliated_centre'));

    }

    public function prepareRow($row) {
        if (parent::prepareRow($row) === FALSE) {
            return FALSE;
        }

        if (date('Y',strtotime($row->field_event_date)) < 2016) {
          return FALSE;
        }

        //enforce language neutral
        $row->language = LANGUAGE_NONE;

        //sanitize text-format
        $format = 'public_filter';
        if ($row->format == 2) {
            $format = 'public_filter';
        }
        $row->format = $format;

        //sanitize Event facilities into taxonomy field_event_facilities
        if ($row->field_event_facility_car_parking) {
            $row->field_facilities[] = 'CARPARKING';
        }
        if ($row->field_event_facility_changing) {
            $row->field_facilities[] = 'CHANGINGROOM';
        }
        if ($row->field_event_facility_showers) {
            $row->field_facilities[] = 'SHOWER';
        }
        if ($row->field_event_facility_routecard) {
            $row->field_facilities[] = 'ROUTECARD';
        }
        if ($row->field_event_facility_sagwagon) {
            $row->field_facilities[] = 'SAGWAGON';
        }
        if ($row->field_event_facility_feedstops) {
            $row->field_facilities[] = 'FEEDSTOPS';
        }
        if ($row->field_event_facility_signed) {
            $row->field_facilities[] = 'SIGNEDROUTE';
        }
        if ($row->field_event_facility_entry_post) {
            $row->field_facilities[] = 'ENTRYPOST';
        }
        if ($row->field_event_facility_entry_day) {
            $row->field_facilities[] = 'ENTRYDAY';
        }

        //print_R($row);
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

    protected function fixCancelledRide($v) {
        if ($v[0] == 'N') {
            $v[0] = 'Yes';
        }
        if ($v[0] == 'Y') {
            $v[0] = 'Yes';
        }
        return $v;
    }

    protected function eventYear($y) {
        $year = date('Y',strtotime($y));
        return 'public://media/event/'.$year;
    }

}
