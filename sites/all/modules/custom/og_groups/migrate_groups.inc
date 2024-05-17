<?php

class MigrateD6GroupsMigration extends DrupalNode6Migration {

    public function __construct(array $arguments) {
        parent::__construct($arguments);

        $this->addUnmigratedSources(array('revision', 'log', 'revision_uid', 'daycount', 'timestamp', 'totalcount', '26'), 'DNM');

        //$this->addFieldMapping('uid', 'uid',FALSE)->sourceMigration('users');

        $this->addFieldMapping('field_group_image', 'field_image')->callbacks(array($this, 'fixFilePath'));
        $this->addFieldMapping('field_group_image:alt', 'field_image:alt');
        $this->addFieldMapping('field_group_image:title', 'field_image:title');
        $this->addFieldMapping('field_group_image:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_group_image:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_group_image:source_dir')->defaultValue('public://archive');
        $this->addFieldMapping('field_group_image:urlencode')->defaultValue(FALSE);

        $this->addFieldMapping('field_about_the_group', 'body'); //contains external <img
        $this->addFieldMapping('field_about_the_group:format')->defaultValue('public_filter');

        $this->addFieldMapping('field_group_welcome', 'field_group_welcome'); //contains external <img
        $this->addFieldMapping('field_group_welcome:format')->defaultValue('basic');

        $this->addFieldMapping('field_group_files', 'field_group_files')->callbacks(array($this, 'fixFilePath'));
        $this->addFieldMapping('field_group_files:description', 'field_group_files:description');
        $this->addFieldMapping('field_group_files:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_group_files:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_group_files:source_dir')->defaultValue('public://archive');
        $this->addFieldMapping('field_group_files:urlencode')->defaultValue(FALSE);

        $this->addFieldMapping('field_group_ride_info','field_group_ride_info');
        $this->addFieldMapping('field_group_ride_info:format')->defaultValue('public_filter');

        $this->addFieldMapping('field_group_ride_programme', 'field_group_ride_programme')->callbacks(array($this, 'fixFilePath'));
        $this->addFieldMapping('field_group_ride_programme:description', 'field_group_ride_programme:description');
        $this->addFieldMapping('field_group_ride_programme:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_group_ride_programme:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_group_ride_programme:source_dir')->defaultValue('public://archive');
        $this->addFieldMapping('field_group_ride_programme:urlencode')->defaultValue(FALSE);

        $this->addFieldMapping('field_group_activities','field_group_activities');
        $this->addFieldMapping('field_group_parent','field_group_parent');
        $this->addFieldMapping('field_area_covered','field_group_area');
        $this->addFieldMapping('field_group_postcodes','field_group_postcodes');
        $this->addFieldMapping('field_group_contact_name', 'field_group_contact_name');
        $this->addFieldMapping('field_group_phone_number', 'field_group_contact_phone');
        $this->addFieldMapping('field_group_contact_email', 'field_group_contact_email')->callbacks(array($this, 'fixGroupEmail'));

        $this->addFieldMapping('field_group_website', 'field_group_website');
        $this->addFieldMapping('field_group_website:title', 'field_group_website:title');
        $this->addFieldMapping('field_group_website:attributes', 'field_group_website:attributes');

        $this->addFieldMapping('field_extra_contact_details', 'field_extra_contact_details');
        $this->addFieldMapping('field_extra_contact_details:format')->defaultValue('filtered_html');

        $this->addFieldMapping('field_group_type','field_group_type')->callbacks(array($this, 'fixGroupType'));
        $this->addFieldMapping('field_group_region','field_group_region');
        $this->addFieldMapping('field_group_owner_member_no', 'field_group_owner_member_no');
        $this->addFieldMapping('field_group_org_member_no', 'field_group_org_member_no');

        $this->addFieldMapping('field_inclusive_cycling', 'field_inclusive_cycling_project');
        $this->addFieldMapping('field_renewal_date', 'field_renewal_date');

        $this->addFieldMapping('group_group')->defaultValue(1);

    }

    public function prepareRow($row) {
        if (parent::prepareRow($row) === FALSE) {
            return FALSE;
        }

        //enforce language neutral
        $row->language = LANGUAGE_NONE;

    }

    public function postImport() {
      parent::postImport();
        $query = db_select('field_data_field_group_parent', 'gp');
        $query->join('migrate_map_groups', 'mm', 'mm.sourceid1 = gp.field_group_parent_target_id');
        $query->fields('gp');
        $query->fields('mm');
        $results = $query->execute()->fetchAll();

        foreach ($results as $result) {

            db_update('field_data_field_group_parent')
            ->fields(array('field_group_parent_target_id' => $result->destid1))
            ->condition('entity_id', $result->entity_id, '=')
            ->execute();
        }
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

    protected function fixGroupType($v) {
        if ($v == 'SMG') {
            $v = 'MG';
        }
        return $v;
    }

    protected function fixGroupEmail($email) {
        foreach ($email as $k=>&$v) {
            $v = rtrim($v,'.');
        }
        return $email;
    }

}
