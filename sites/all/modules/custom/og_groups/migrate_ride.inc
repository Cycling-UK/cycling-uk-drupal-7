<?php

class MigrateD6RideMigration extends DrupalNode6Migration {


    public function __construct(array $arguments) {
        parent::__construct($arguments);

        $this->dependencies = array('groups', 'affiliated_centre', 'taxonomy_ride_type','taxonomy_event_type','taxonomy_event_facility');

        $this->addUnmigratedSources(array('uid', 'revision', 'log', 'revision_uid', 'daycount', 'timestamp', 'totalcount'), 'DNM');
        $this->addFieldMapping('field_image', 'field_image')->callbacks(array($this, 'fixFilePath'));
        $this->addFieldMapping('field_image:alt', 'field_image:alt');
        $this->addFieldMapping('field_image:title', 'field_image:title');
        $this->addFieldMapping('field_image:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_image:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_image:source_dir')->defaultValue('public://archive');
        $this->addFieldMapping('field_image:urlencode')->defaultValue(FALSE);
        $this->addFieldMapping('field_image:destination_dir', 'field_ride_date')->callbacks(array($this, 'eventYear'));

        $this->addFieldMapping('field_date_ride', 'field_ride_date');

        $this->addFieldMapping('field_ride_type', 'field_event_ride_type')->sourceMigration('taxonomy_ride_type');
        $this->addFieldMapping('field_ride_type:source_type')->defaultValue('tid');
        $this->addFieldMapping('field_ride_type:create_term')->defaultValue(FALSE);
        $this->addFieldMapping('field_ride_type:ignore_case')->defaultValue(FALSE);

        $this->addFieldMapping('field_distance', 'field_ride_distance');
        $this->addFieldMapping('field_distance:target_id', 'field_ride_distance:unit');

        $this->addFieldMapping('field_cost', 'field_event_cost');

        //body = description
        $this->addFieldMapping('body:format', 'format', FALSE);

        $this->addFieldMapping('field_location', 'field_event_location');

        $this->addFieldMapping('field_address_information', 'field_event_location_desc');

        $this->addFieldMapping('field_town', 'field_event_address_town');

        $this->addFieldMapping('field_postcode', 'field_event_address_postcode');

        $this->addFieldMapping('field_grid_reference', 'field_event_grid_reference');

        $this->addFieldMapping('field_gpx_files', 'field_gpx_download')->callbacks(array($this, 'fixFilePath'));
        $this->addFieldMapping('field_gpx_files:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_gpx_files:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_gpx_files:source_dir')->defaultValue('public://archive');
        $this->addFieldMapping('field_gpx_files:urlencode')->defaultValue(FALSE);

        $this->addFieldMapping('field_contact_name', 'field_event_contact_name');

        $this->addFieldMapping('field_contact_number', 'field_event_contact_telephone');

        $this->addFieldMapping('field_contact_email', 'field_event_contact_email');

        $this->addFieldMapping('field_contact_address', 'field_event_contact_address');
        $this->addFieldMapping('field_contact_address:format')->defaultValue('public_filter');

        $this->addFieldMapping('field_link', 'field_event_website');

        $this->addFieldMapping('field_cancelled', 'field_ride_cancelled')->callbacks(array($this, 'fixCancelledRide'));

        $this->addFieldMapping('field_cycling_uk_section', '21')->sourceMigration('taxonomy_cuk_section');
        $this->addFieldMapping('field_cycling_uk_section:source_type')->defaultValue('tid');
        $this->addFieldMapping('field_cycling_uk_section:create_term')->defaultValue(FALSE);
        $this->addFieldMapping('field_cycling_uk_section:ignore_case')->defaultValue(TRUE);

        $this->addFieldMapping('og_group_ref', 'og_ref')->sourceMigration(array('groups', 'affiliated_centre'));

    }

    public function prepareRow($row) {
        if (parent::prepareRow($row) === FALSE) {
            return FALSE;
        }

        $year = '';
        if (date('Y',strtotime($row->field_ride_date[0])) < 2016) {
          return FALSE;
        }

        //enforce language neutral
        $row->language = LANGUAGE_NONE;

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

        //sanitize text-format
        $format = 'public_filter';
        if ($row->format == 2) {
            $format = 'full_html';
        }
        $row->format = $format;

        //sanitize ride distance
        $unit = '';
        if ($row->{'field_ride_distance:unit'} == 'length_kilometer') {
            $unit = 1; //target_id @see db:units_unit
        }
        if ($row->{'field_ride_distance:unit'} == 'length_mile') {
            $unit = 6; //target_id @see db:units_unit
        }
        $this->field_distance_units = $unit;

        $row->field_ride_date = array($row->field_ride_date[0]);

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
        $year = date('Y',strtotime($y[0]));
        return 'public://media/event/'.$year;
    }
}
