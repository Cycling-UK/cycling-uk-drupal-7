<?php

class MigrateD6AffiliatedGroupsMigration extends DrupalNode6Migration {

    public function __construct(array $arguments) {
        parent::__construct($arguments);

        $this->addUnmigratedSources(array('uid', 'revision', 'log', 'revision_uid', 'daycount', 'timestamp', 'totalcount', '3'), 'DNM');

        $this->addFieldMapping('field_group_org_member_no', 'field_group_org_member_no');
        $this->addFieldMapping('field_group_owner_member_no', 'field_group_owner_member_no');

        $this->addFieldMapping('field_group_phone_number', 'field_group_contact_phone');
        $this->addFieldMapping('field_group_contact_name', 'field_group_contact_name');
        $this->addFieldMapping('field_group_contact_email', 'field_group_contact_email');

        $this->addFieldMapping('field_centre_activities', 'field_centre_activities');
        $this->addFieldMapping('field_centre_facilities', 'field_centre_facilities');

        $this->addFieldMapping('field_partner_logo', 'field_partner_logo')->callbacks(array($this, 'fixFilePath'));
        $this->addFieldMapping('field_partner_logo:alt', 'field_partner_logo:alt');
        $this->addFieldMapping('field_partner_logo:title', 'field_partner_logo:title');
        $this->addFieldMapping('field_partner_logo:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_partner_logo:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_partner_logo:source_dir')->defaultValue('public://archive');
        $this->addFieldMapping('field_partner_logo:urlencode')->defaultValue(FALSE);

        $this->addFieldMapping('field_image_gallery', 'field_image_gallery')->callbacks(array($this, 'fixFilePath'));
        $this->addFieldMapping('field_image_gallery:alt', 'field_image_gallery:alt');
        $this->addFieldMapping('field_image_gallery:title', 'field_image_gallery:title');
        $this->addFieldMapping('field_image_gallery:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_image_gallery:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_image_gallery:source_dir')->defaultValue('public://archive');
        $this->addFieldMapping('field_image_gallery:urlencode')->defaultValue(FALSE);

        $this->addFieldMapping('field_group_files', 'field_group_files')->callbacks(array($this, 'fixFilePath'));
        $this->addFieldMapping('field_group_files:description', 'field_group_files:description');
        $this->addFieldMapping('field_group_files:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_group_files:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_group_files:source_dir')->defaultValue('public://archive');
        $this->addFieldMapping('field_group_files:urlencode')->defaultValue(FALSE);

        $this->addFieldMapping('field_activities_available', 'body');
        $this->addFieldMapping('field_activities_available:format')->defaultValue('public_filter');

        $this->addFieldMapping('field__location_details', 'field_location_details');
        $this->addFieldMapping('field__location_details:format')->defaultValue('public_filter');

        $this->addFieldMapping('field_facility_details', 'field_facility_details');
        $this->addFieldMapping('field_facility_details:format')->defaultValue('public_filter');

        $this->addFieldMapping('field_about_centre', 'field_about_centre');
        $this->addFieldMapping('field_about_centre:format')->defaultValue('public_filter');

        $this->addFieldMapping('field__cost', 'field_cost');
        $this->addFieldMapping('field__cost:format')->defaultValue('public_filter');

        $this->addFieldMapping('field_group_welcome', 'field_group_welcome');
        $this->addFieldMapping('field_group_welcome:format')->defaultValue('basic');

        $this->addFieldMapping('field_inclusive_cycling', 'field_inclusive_cycling_project')->callbacks(array($this, 'fixCyclingProject'));
        $this->addFieldMapping('field_renewal_date', 'field_renewal_date');

        $this->addFieldMapping('field_extra_contact_details', 'field_extra_contact_details');
        $this->addFieldMapping('field_extra_contact_details:format')->defaultValue('public_filter');

        $this->addFieldMapping('field_opening_times', 'field_opening_times');
        $this->addFieldMapping('field_opening_times:format')->defaultValue('public_filter');

        $this->addFieldMapping('field_volunteer_opportunities', 'field_voluneer_opportunities');
        $this->addFieldMapping('field_volunteer_opportunities:format')->defaultValue('public_filter');

        $this->addFieldMapping('field_area_covered', 'field_area_covered');

        $this->addFieldMapping('field_links', 'field_links');
        $this->addFieldMapping('field_links:title', 'field_links:title');
        $this->addFieldMapping('field_links:attributes', 'field_links:attributes');

        $this->addFieldMapping('field_group_website', 'field_group_website');
        $this->addFieldMapping('field_group_website:title', 'field_group_website:title');
        $this->addFieldMapping('field_group_website:attributes', 'field_group_website:attributes');

        $this->addFieldMapping('field_volunteer_form_external', 'field_volunteer_link');
        $this->addFieldMapping('field_volunteer_form_external:title', 'field_volunteer_link:title');
        $this->addFieldMapping('field_volunteer_form_external:attributes', 'field_volunteer_link:attributes');

        $this->addFieldMapping('group_group')->defaultValue(1);

    }

    public function prepareRow($row) {
        if (parent::prepareRow($row) === FALSE) {
            return FALSE;
        }

        //enforce language neutral
        $row->language = LANGUAGE_NONE;

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

    protected function fixCyclingProject($v) {
        if ($v[0] == 'Y') {
            $v[0] = 'Yes';
        }
        return $v;
    }

}
