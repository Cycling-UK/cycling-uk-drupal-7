<?php
/**
 * @file
 * shop_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function shop_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Join as a group!</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Join as a group!</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => 0,
      \'comment\' => \'0\',
      \'comment_count\' => 0,
      \'created\' => NULL,
      \'data\' => \'a:29:{s:31:"imagepicker_public_currentgroup";s:1:"2";s:17:"messaging_default";s:4:"mail";s:27:"notifications_send_interval";s:1:"0";s:14:"picture_delete";i:0;s:14:"picture_upload";s:0:"";s:7:"contact";i:0;s:5:"block";a:1:{s:4:"menu";a:1:{s:14:"menu-user-menu";i:1;}}s:15:"googleanalytics";a:1:{s:6:"custom";i:1;}s:8:"std_code";s:3:"078";s:12:"phone_number";s:12:"078 14417948";s:22:"profile_contact_number";s:0:"";s:25:"profile_membership_number";s:0:"";s:13:"profile_title";s:2:"Mr";s:18:"profile_first_name";s:8:"Cycling ";s:17:"profile_last_name";s:2:"UK";s:20:"profile_phone_number";s:12:"078 14417948";s:12:"profile_mail";s:20:"webmaster@ctc.org.uk";s:25:"profile_employment_status";s:0:"";s:16:"profile_address1";s:0:"";s:16:"profile_address2";s:0:"";s:16:"profile_address3";s:0:"";s:20:"profile_full_address";s:0:"";s:21:"profile_date_of_birth";a:3:{s:3:"day";s:1:"2";s:5:"month";s:1:"2";s:4:"year";s:4:"1901";}s:12:"profile_town";s:0:"";s:14:"profile_county";s:0:"";s:16:"profile_postcode";s:0:"";s:15:"profile_country";s:0:"";s:17:"mimemail_textonly";i:0;s:11:"remember_me";i:1;}\',
      \'ds_switch\' => \'\',
      \'field_products\' => array(
        \'und\' => array(
          array(
            \'product_id\' => \'17\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Group / Club Membership\',
      \'title_field\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Group / Club Membership\',
            \'format\' => NULL,
            \'safe_value\' => \'Group / Club Membership\',
          ),
        ),
      ),
      \'title_original\' => \'Group / Club Membership\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'product_group_membership\',
      \'uid\' => \'1\',
      \'uuid\' => \'018ffac0-3a36-4df0-95bc-41f8139699da\',
      \'vid\' => NULL,
      \'vuuid\' => \'6b08da9a-6c3d-4b72-bf5e-4dd60bf255f4\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Join a friend or relative to Cycling UK, or give membership to someone else as a gift.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Join a friend or relative to Cycling UK, or give membership to someone else as a gift.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => 0,
      \'comment\' => \'0\',
      \'comment_count\' => 0,
      \'created\' => NULL,
      \'data\' => \'a:29:{s:31:"imagepicker_public_currentgroup";s:1:"2";s:17:"messaging_default";s:4:"mail";s:27:"notifications_send_interval";s:1:"0";s:14:"picture_delete";i:0;s:14:"picture_upload";s:0:"";s:7:"contact";i:0;s:5:"block";a:1:{s:4:"menu";a:1:{s:14:"menu-user-menu";i:1;}}s:15:"googleanalytics";a:1:{s:6:"custom";i:1;}s:8:"std_code";s:3:"078";s:12:"phone_number";s:12:"078 14417948";s:22:"profile_contact_number";s:0:"";s:25:"profile_membership_number";s:0:"";s:13:"profile_title";s:2:"Mr";s:18:"profile_first_name";s:8:"Cycling ";s:17:"profile_last_name";s:2:"UK";s:20:"profile_phone_number";s:12:"078 14417948";s:12:"profile_mail";s:20:"webmaster@ctc.org.uk";s:25:"profile_employment_status";s:0:"";s:16:"profile_address1";s:0:"";s:16:"profile_address2";s:0:"";s:16:"profile_address3";s:0:"";s:20:"profile_full_address";s:0:"";s:21:"profile_date_of_birth";a:3:{s:3:"day";s:1:"2";s:5:"month";s:1:"2";s:4:"year";s:4:"1901";}s:12:"profile_town";s:0:"";s:14:"profile_county";s:0:"";s:16:"profile_postcode";s:0:"";s:15:"profile_country";s:0:"";s:17:"mimemail_textonly";i:0;s:11:"remember_me";i:1;}\',
      \'ds_switch\' => \'\',
      \'field_products\' => array(
        \'und\' => array(
          array(
            \'product_id\' => \'16\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Affiliate membership a friend or relative\',
      \'title_field\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Affiliate membership a friend or relative\',
            \'format\' => NULL,
            \'safe_value\' => \'Affiliate membership a friend or relative\',
          ),
        ),
      ),
      \'title_original\' => \'Affiliate membership a friend or relative\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'product_affiliate_membership\',
      \'uid\' => \'1\',
      \'uuid\' => \'04d50fb8-a4f2-4b8b-93a6-197950efed00\',
      \'vid\' => NULL,
      \'vuuid\' => \'de7f84e4-0ff9-4f3f-aa5b-4d247f44f417\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Join a friend or relative to Cycling UK, or give membership to someone else as a gift.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Join a friend or relative to Cycling UK, or give membership to someone else as a gift.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:29:{s:31:"imagepicker_public_currentgroup";s:1:"2";s:17:"messaging_default";s:4:"mail";s:27:"notifications_send_interval";s:1:"0";s:14:"picture_delete";i:0;s:14:"picture_upload";s:0:"";s:7:"contact";i:0;s:5:"block";a:1:{s:4:"menu";a:1:{s:14:"menu-user-menu";i:1;}}s:15:"googleanalytics";a:1:{s:6:"custom";i:1;}s:8:"std_code";s:3:"078";s:12:"phone_number";s:12:"078 14417948";s:22:"profile_contact_number";s:0:"";s:25:"profile_membership_number";s:0:"";s:13:"profile_title";s:2:"Mr";s:18:"profile_first_name";s:8:"Cycling ";s:17:"profile_last_name";s:2:"UK";s:20:"profile_phone_number";s:12:"078 14417948";s:12:"profile_mail";s:20:"webmaster@ctc.org.uk";s:25:"profile_employment_status";s:0:"";s:16:"profile_address1";s:0:"";s:16:"profile_address2";s:0:"";s:16:"profile_address3";s:0:"";s:20:"profile_full_address";s:0:"";s:21:"profile_date_of_birth";a:3:{s:3:"day";s:1:"2";s:5:"month";s:1:"2";s:4:"year";s:4:"1901";}s:12:"profile_town";s:0:"";s:14:"profile_county";s:0:"";s:16:"profile_postcode";s:0:"";s:15:"profile_country";s:0:"";s:17:"mimemail_textonly";i:0;s:11:"remember_me";i:1;}\',
      \'ds_switch\' => \'\',
      \'field_products\' => array(
        \'und\' => array(
          array(
            \'product_id\' => \'3\',
          ),
          array(
            \'product_id\' => \'10\',
          ),
          array(
            \'product_id\' => \'11\',
          ),
          array(
            \'product_id\' => \'12\',
          ),
          array(
            \'product_id\' => \'13\',
          ),
          array(
            \'product_id\' => \'14\',
          ),
          array(
            \'product_id\' => \'15\',
          ),
          array(
            \'product_id\' => \'8\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Individual membership for a friend or relative\',
      \'title_field\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Individual membership for a friend or relative\',
            \'format\' => NULL,
            \'safe_value\' => \'Individual membership for a friend or relative\',
          ),
        ),
      ),
      \'title_original\' => \'Individual membership for a friend or relative\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'product_membership\',
      \'uid\' => \'1\',
      \'uuid\' => \'094a633b-cdd2-4b36-903f-37ad28941503\',
      \'vid\' => NULL,
      \'vuuid\' => \'d38fbcee-c681-4ad6-9237-75cb4dca67ec\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Join Cycling UK with a household membership which includes 2 adults and unlimited children resident at the same address.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Join Cycling UK with a household membership which includes 2 adults and unlimited children resident at the same address.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => 0,
      \'comment\' => \'0\',
      \'comment_count\' => 0,
      \'created\' => NULL,
      \'data\' => \'a:29:{s:31:"imagepicker_public_currentgroup";s:1:"2";s:17:"messaging_default";s:4:"mail";s:27:"notifications_send_interval";s:1:"0";s:14:"picture_delete";i:0;s:14:"picture_upload";s:0:"";s:7:"contact";i:0;s:5:"block";a:1:{s:4:"menu";a:1:{s:14:"menu-user-menu";i:1;}}s:15:"googleanalytics";a:1:{s:6:"custom";i:1;}s:8:"std_code";s:3:"078";s:12:"phone_number";s:12:"078 14417948";s:22:"profile_contact_number";s:0:"";s:25:"profile_membership_number";s:0:"";s:13:"profile_title";s:2:"Mr";s:18:"profile_first_name";s:8:"Cycling ";s:17:"profile_last_name";s:2:"UK";s:20:"profile_phone_number";s:12:"078 14417948";s:12:"profile_mail";s:20:"webmaster@ctc.org.uk";s:25:"profile_employment_status";s:0:"";s:16:"profile_address1";s:0:"";s:16:"profile_address2";s:0:"";s:16:"profile_address3";s:0:"";s:20:"profile_full_address";s:0:"";s:21:"profile_date_of_birth";a:3:{s:3:"day";s:1:"2";s:5:"month";s:1:"2";s:4:"year";s:4:"1901";}s:12:"profile_town";s:0:"";s:14:"profile_county";s:0:"";s:16:"profile_postcode";s:0:"";s:15:"profile_country";s:0:"";s:17:"mimemail_textonly";i:0;s:11:"remember_me";i:1;}\',
      \'ds_switch\' => \'\',
      \'field_products\' => array(
        \'und\' => array(
          array(
            \'product_id\' => \'6\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Household membership with myself as the main member\',
      \'title_field\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Household membership with myself as the main member\',
            \'format\' => NULL,
            \'safe_value\' => \'Household membership with myself as the main member\',
          ),
        ),
      ),
      \'title_original\' => \'Household membership with myself as the main member\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'product_family_membership_self\',
      \'uid\' => \'1\',
      \'uuid\' => \'4b0af19f-99fe-4015-8052-589109b3730a\',
      \'vid\' => NULL,
      \'vuuid\' => \'89b0bac3-fc08-41e8-9f8b-d4d120283c04\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>asdfasdfas</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>asdfasdfas</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:29:{s:31:"imagepicker_public_currentgroup";s:1:"2";s:17:"messaging_default";s:4:"mail";s:27:"notifications_send_interval";s:1:"0";s:14:"picture_delete";i:0;s:14:"picture_upload";s:0:"";s:7:"contact";i:0;s:5:"block";a:1:{s:4:"menu";a:1:{s:14:"menu-user-menu";i:1;}}s:15:"googleanalytics";a:1:{s:6:"custom";i:1;}s:8:"std_code";s:3:"078";s:12:"phone_number";s:12:"078 14417948";s:22:"profile_contact_number";s:0:"";s:25:"profile_membership_number";s:0:"";s:13:"profile_title";s:2:"Mr";s:18:"profile_first_name";s:8:"Cycling ";s:17:"profile_last_name";s:2:"UK";s:20:"profile_phone_number";s:12:"078 14417948";s:12:"profile_mail";s:20:"webmaster@ctc.org.uk";s:25:"profile_employment_status";s:0:"";s:16:"profile_address1";s:0:"";s:16:"profile_address2";s:0:"";s:16:"profile_address3";s:0:"";s:20:"profile_full_address";s:0:"";s:21:"profile_date_of_birth";a:3:{s:3:"day";s:1:"2";s:5:"month";s:1:"2";s:4:"year";s:4:"1901";}s:12:"profile_town";s:0:"";s:14:"profile_county";s:0:"";s:16:"profile_postcode";s:0:"";s:15:"profile_country";s:0:"";s:17:"mimemail_textonly";i:0;s:11:"remember_me";i:1;}\',
      \'ds_switch\' => \'\',
      \'field_products\' => array(
        \'und\' => array(
          array(
            \'product_id\' => \'7\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'LEJOG cert\',
      \'title_field\' => array(
        \'und\' => array(
          array(
            \'value\' => \'LEJOG cert\',
            \'format\' => NULL,
            \'safe_value\' => \'LEJOG cert\',
          ),
        ),
      ),
      \'title_original\' => \'LEJOG cert\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'product_lejog_certificate\',
      \'uid\' => \'1\',
      \'uuid\' => \'538c44eb-b18d-4c1e-84a2-68ed1362c009\',
      \'vid\' => NULL,
      \'vuuid\' => \'70b11b5e-df9a-40af-a4a1-95f05d379937\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Join friends or relativates to Cycling UK with a household membership which includes 2 adults and unlimited children resident at the same address.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Join friends or relativates to Cycling UK with a household membership which includes 2 adults and unlimited children resident at the same address.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:29:{s:31:"imagepicker_public_currentgroup";s:1:"2";s:17:"messaging_default";s:4:"mail";s:27:"notifications_send_interval";s:1:"0";s:14:"picture_delete";i:0;s:14:"picture_upload";s:0:"";s:7:"contact";i:0;s:5:"block";a:1:{s:4:"menu";a:1:{s:14:"menu-user-menu";i:1;}}s:15:"googleanalytics";a:1:{s:6:"custom";i:1;}s:8:"std_code";s:3:"078";s:12:"phone_number";s:12:"078 14417948";s:22:"profile_contact_number";s:0:"";s:25:"profile_membership_number";s:0:"";s:13:"profile_title";s:2:"Mr";s:18:"profile_first_name";s:8:"Cycling ";s:17:"profile_last_name";s:2:"UK";s:20:"profile_phone_number";s:12:"078 14417948";s:12:"profile_mail";s:20:"webmaster@ctc.org.uk";s:25:"profile_employment_status";s:0:"";s:16:"profile_address1";s:0:"";s:16:"profile_address2";s:0:"";s:16:"profile_address3";s:0:"";s:20:"profile_full_address";s:0:"";s:21:"profile_date_of_birth";a:3:{s:3:"day";s:1:"2";s:5:"month";s:1:"2";s:4:"year";s:4:"1901";}s:12:"profile_town";s:0:"";s:14:"profile_county";s:0:"";s:16:"profile_postcode";s:0:"";s:15:"profile_country";s:0:"";s:17:"mimemail_textonly";i:0;s:11:"remember_me";i:1;}\',
      \'ds_switch\' => \'\',
      \'field_products\' => array(
        \'und\' => array(
          array(
            \'product_id\' => \'6\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Household membership for a friend and relatives\',
      \'title_field\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Household membership for a friend and relatives\',
            \'format\' => NULL,
            \'safe_value\' => \'Household membership for a friend and relatives\',
          ),
        ),
      ),
      \'title_original\' => \'Household membership for a friend and relatives\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'product_family_membership\',
      \'uid\' => \'1\',
      \'uuid\' => \'67520d14-fd93-4585-b701-75a2e19e01ea\',
      \'vid\' => NULL,
      \'vuuid\' => \'69692914-28be-4faf-81ee-7ab4586b4c14\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Join Cycling UK</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Join Cycling UK</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => 0,
      \'comment\' => \'0\',
      \'comment_count\' => 0,
      \'created\' => NULL,
      \'data\' => \'a:29:{s:31:"imagepicker_public_currentgroup";s:1:"2";s:17:"messaging_default";s:4:"mail";s:27:"notifications_send_interval";s:1:"0";s:14:"picture_delete";i:0;s:14:"picture_upload";s:0:"";s:7:"contact";i:0;s:5:"block";a:1:{s:4:"menu";a:1:{s:14:"menu-user-menu";i:1;}}s:15:"googleanalytics";a:1:{s:6:"custom";i:1;}s:8:"std_code";s:3:"078";s:12:"phone_number";s:12:"078 14417948";s:22:"profile_contact_number";s:0:"";s:25:"profile_membership_number";s:0:"";s:13:"profile_title";s:2:"Mr";s:18:"profile_first_name";s:8:"Cycling ";s:17:"profile_last_name";s:2:"UK";s:20:"profile_phone_number";s:12:"078 14417948";s:12:"profile_mail";s:20:"webmaster@ctc.org.uk";s:25:"profile_employment_status";s:0:"";s:16:"profile_address1";s:0:"";s:16:"profile_address2";s:0:"";s:16:"profile_address3";s:0:"";s:20:"profile_full_address";s:0:"";s:21:"profile_date_of_birth";a:3:{s:3:"day";s:1:"2";s:5:"month";s:1:"2";s:4:"year";s:4:"1901";}s:12:"profile_town";s:0:"";s:14:"profile_county";s:0:"";s:16:"profile_postcode";s:0:"";s:15:"profile_country";s:0:"";s:17:"mimemail_textonly";i:0;s:11:"remember_me";i:1;}\',
      \'ds_switch\' => \'\',
      \'field_products\' => array(
        \'und\' => array(
          array(
            \'product_id\' => \'3\',
          ),
          array(
            \'product_id\' => \'10\',
          ),
          array(
            \'product_id\' => \'11\',
          ),
          array(
            \'product_id\' => \'12\',
          ),
          array(
            \'product_id\' => \'13\',
          ),
          array(
            \'product_id\' => \'14\',
          ),
          array(
            \'product_id\' => \'15\',
          ),
          array(
            \'product_id\' => \'8\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Individual membership for myself\',
      \'title_field\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Individual membership for myself\',
            \'format\' => NULL,
            \'safe_value\' => \'Individual membership for myself\',
          ),
        ),
      ),
      \'title_original\' => \'Individual membership for myself\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'product_membership_self\',
      \'uid\' => \'1\',
      \'uuid\' => \'6d10b2cc-7ad4-4f0e-9202-c4df1143e8f6\',
      \'vid\' => NULL,
      \'vuuid\' => \'689be3e9-915c-4b30-a64e-6545a1c4ce58\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Join Cycling UK as an affiliate.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Join Cycling UK as an affiliate.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => 0,
      \'comment\' => \'0\',
      \'comment_count\' => 0,
      \'created\' => NULL,
      \'data\' => \'a:29:{s:31:"imagepicker_public_currentgroup";s:1:"2";s:17:"messaging_default";s:4:"mail";s:27:"notifications_send_interval";s:1:"0";s:14:"picture_delete";i:0;s:14:"picture_upload";s:0:"";s:7:"contact";i:0;s:5:"block";a:1:{s:4:"menu";a:1:{s:14:"menu-user-menu";i:1;}}s:15:"googleanalytics";a:1:{s:6:"custom";i:1;}s:8:"std_code";s:3:"078";s:12:"phone_number";s:12:"078 14417948";s:22:"profile_contact_number";s:0:"";s:25:"profile_membership_number";s:0:"";s:13:"profile_title";s:2:"Mr";s:18:"profile_first_name";s:8:"Cycling ";s:17:"profile_last_name";s:2:"UK";s:20:"profile_phone_number";s:12:"078 14417948";s:12:"profile_mail";s:20:"webmaster@ctc.org.uk";s:25:"profile_employment_status";s:0:"";s:16:"profile_address1";s:0:"";s:16:"profile_address2";s:0:"";s:16:"profile_address3";s:0:"";s:20:"profile_full_address";s:0:"";s:21:"profile_date_of_birth";a:3:{s:3:"day";s:1:"2";s:5:"month";s:1:"2";s:4:"year";s:4:"1901";}s:12:"profile_town";s:0:"";s:14:"profile_county";s:0:"";s:16:"profile_postcode";s:0:"";s:15:"profile_country";s:0:"";s:17:"mimemail_textonly";i:0;s:11:"remember_me";i:1;}\',
      \'ds_switch\' => \'\',
      \'field_products\' => array(
        \'und\' => array(
          array(
            \'product_id\' => \'16\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Affiliate membership for myself\',
      \'title_field\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Affiliate membership for myself\',
            \'format\' => NULL,
            \'safe_value\' => \'Affiliate membership for myself\',
          ),
        ),
      ),
      \'title_original\' => \'Affiliate membership for myself\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'product_affiliate_membership_sel\',
      \'uid\' => \'1\',
      \'uuid\' => \'80994f5f-9eec-4d9c-893d-7b166bc57434\',
      \'vid\' => NULL,
      \'vuuid\' => \'eef443b4-8a10-4521-91ff-72c1b9592fff\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>This display adds a zero-priced donation product to the basket, using a Donation line item type. The user can customise the line item to set the donation amount.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>This display adds a zero-priced donation product to the basket, using a Donation line item type. The user can customise the line item to set the donation amount.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => 0,
      \'comment\' => \'0\',
      \'comment_count\' => 0,
      \'created\' => NULL,
      \'data\' => \'a:29:{s:31:"imagepicker_public_currentgroup";s:1:"2";s:17:"messaging_default";s:4:"mail";s:27:"notifications_send_interval";s:1:"0";s:14:"picture_delete";i:0;s:14:"picture_upload";s:0:"";s:7:"contact";i:0;s:5:"block";a:1:{s:4:"menu";a:1:{s:14:"menu-user-menu";i:1;}}s:15:"googleanalytics";a:1:{s:6:"custom";i:1;}s:8:"std_code";s:3:"078";s:12:"phone_number";s:12:"078 14417948";s:22:"profile_contact_number";s:0:"";s:25:"profile_membership_number";s:0:"";s:13:"profile_title";s:2:"Mr";s:18:"profile_first_name";s:8:"Cycling ";s:17:"profile_last_name";s:2:"UK";s:20:"profile_phone_number";s:12:"078 14417948";s:12:"profile_mail";s:20:"webmaster@ctc.org.uk";s:25:"profile_employment_status";s:0:"";s:16:"profile_address1";s:0:"";s:16:"profile_address2";s:0:"";s:16:"profile_address3";s:0:"";s:20:"profile_full_address";s:0:"";s:21:"profile_date_of_birth";a:3:{s:3:"day";s:1:"2";s:5:"month";s:1:"2";s:4:"year";s:4:"1901";}s:12:"profile_town";s:0:"";s:14:"profile_county";s:0:"";s:16:"profile_postcode";s:0:"";s:15:"profile_country";s:0:"";s:17:"mimemail_textonly";i:0;s:11:"remember_me";i:1;}\',
      \'ds_switch\' => \'\',
      \'field_products\' => array(
        \'und\' => array(
          array(
            \'product_id\' => \'22\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Donate to Cycling UK\',
      \'title_field\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Donate to Cycling UK\',
            \'format\' => NULL,
            \'safe_value\' => \'Donate to Cycling UK\',
          ),
        ),
      ),
      \'title_original\' => \'Donate to Cycling UK\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'product_donation\',
      \'uid\' => \'1\',
      \'uuid\' => \'ae3710c1-52dd-447c-a64c-2fea149208b8\',
      \'vid\' => NULL,
      \'vuuid\' => \'4b9015b5-df67-475b-8a37-4c1f00a58460\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>asdfsdfds</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>asdfsdfds</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:29:{s:31:"imagepicker_public_currentgroup";s:1:"2";s:17:"messaging_default";s:4:"mail";s:27:"notifications_send_interval";s:1:"0";s:14:"picture_delete";i:0;s:14:"picture_upload";s:0:"";s:7:"contact";i:0;s:5:"block";a:1:{s:4:"menu";a:1:{s:14:"menu-user-menu";i:1;}}s:15:"googleanalytics";a:1:{s:6:"custom";i:1;}s:8:"std_code";s:3:"078";s:12:"phone_number";s:12:"078 14417948";s:22:"profile_contact_number";s:0:"";s:25:"profile_membership_number";s:0:"";s:13:"profile_title";s:2:"Mr";s:18:"profile_first_name";s:8:"Cycling ";s:17:"profile_last_name";s:2:"UK";s:20:"profile_phone_number";s:12:"078 14417948";s:12:"profile_mail";s:20:"webmaster@ctc.org.uk";s:25:"profile_employment_status";s:0:"";s:16:"profile_address1";s:0:"";s:16:"profile_address2";s:0:"";s:16:"profile_address3";s:0:"";s:20:"profile_full_address";s:0:"";s:21:"profile_date_of_birth";a:3:{s:3:"day";s:1:"2";s:5:"month";s:1:"2";s:4:"year";s:4:"1901";}s:12:"profile_town";s:0:"";s:14:"profile_county";s:0:"";s:16:"profile_postcode";s:0:"";s:15:"profile_country";s:0:"";s:17:"mimemail_textonly";i:0;s:11:"remember_me";i:1;}\',
      \'ds_switch\' => \'\',
      \'field_product\' => array(
        \'und\' => array(
          array(
            \'product_id\' => \'5\',
          ),
        ),
      ),
      \'field_products\' => array(
        \'und\' => array(
          array(
            \'product_id\' => \'9\',
          ),
          array(
            \'product_id\' => \'5\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'T-shirts\',
      \'title_field\' => array(
        \'und\' => array(
          array(
            \'value\' => \'T-shirts\',
            \'format\' => NULL,
            \'safe_value\' => \'T-shirts\',
          ),
        ),
      ),
      \'title_original\' => \'T-shirts\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'product_display\',
      \'uid\' => \'1\',
      \'uuid\' => \'c29f72ca-02f0-45c7-aa08-09110be5ca27\',
      \'vid\' => NULL,
      \'vuuid\' => \'8e10134f-f923-40c7-820e-e503d5a94e7f\',
    ),
)',
);
  return $node_export;
}
