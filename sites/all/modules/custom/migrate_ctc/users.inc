<?php

class MigrateDrupalUser6Migration extends DrupalUser6Migration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $this->addFieldMapping('field_profile_picture', 'picture');
        $this->addFieldMapping('field_profile_picture:alt', 'picture:alt');
        $this->addFieldMapping('field_profile_picture:title', 'picture:title');
        $this->addFieldMapping('field_profile_picture:preserve_files')->defaultValue(TRUE);
        $this->addFieldMapping('field_profile_picture:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
        $this->addFieldMapping('field_profile_picture:source_dir')->defaultValue('public://archive/pictures/');
        $this->addFieldMapping('field_profile_picture:urlencode')->defaultValue(FALSE);


        $this->addFieldMapping('field_membership_number', 'data')->callbacks(array($this, 'filterDataMembershipNumber'));
        $this->addFieldMapping('field_membership_number:local_unsent_changes')->defaultValue(1);
    }

    protected function filterDataMembershipNumber($raw) {
        $data = unserialize($raw);
        if (isset($data['profile_contact_number'])) {
            return $data['profile_contact_number'];
        }
        return NULL;
    }

    public function prepareRow($row) {
        if (parent::prepareRow($row) === FALSE) {
            return FALSE;
        }
        if (isset($row->picture)) {
          // Strip front off filepath so we can use public:// scheme.
          // In this case we're keeping the original tree structure.
          // Alternative is to use filename, to flatten tree, or use
          // filename plus some other path parts to re-arrange tree.
          $image_path = substr($row->picture, 29);
	  //echo $image_path;
          $row->picture = $image_path;
        }
    }

}
