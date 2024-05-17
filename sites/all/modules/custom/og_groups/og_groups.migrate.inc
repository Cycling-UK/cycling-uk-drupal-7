<?php

function og_groups_migrate_api() {

    $common = array(
        'source_connection' => 'drupal6',
        'source_version' => 6,
        'group_name' => 'ogm');


    $api = array(
        'api' => 2,
        'groups' => array(
            'ogm' => array(
                'title' => t('Organic Groups'),
            ),
        ),
        'migrations' => array(
            'groups' => array(
            'class_name' => 'MigrateD6GroupsMigration',
            'description' => t('Migration of Groups from D6'),
            'destination_type' => 'group',
            'source_type' => 'group',
            ) + $common,
            'affiliated_centre' => array(
            'class_name' => 'MigrateD6AffiliatedGroupsMigration',
            'description' => t('Migration of Affiliated Centres from D6'),
            'destination_type' => 'affiliated_centre',
            'source_type' => 'affiliated_centre',
            ) + $common,
            'og_uid' => array(
            'class_name' => 'MigrateD6OgUidMigration',
            'description' => t('User <> Group relationship'),
            ) + $common,
            'og_author' => array(
            'class_name' => 'MigrateD6OgAuthorMigration',
            'description' => t('User ownership of OG group related content'),
            ) + $common,
            'taxonomy_ride_type' => array(
            'class_name' => 'MigrateTaxRideTypeMigration',
            'description' => t('Taxonomy - Ride types'),
            ) + $common,
            'ride' => array(
            'class_name' => 'MigrateD6RideMigration',
            'description' => t('Ride pages, <strong>using Drush run with --user=1</strong>'),
            'destination_type' => 'ride',
            'source_type' => 'ride',
            'include_organic_groups' => TRUE,
            ) + $common,
            'group_child_page' => array(
            'class_name' => 'MigrateD6ChildPageMigration',
            'description' => t('Group Child pages, <strong>using Drush run with --user=1</strong>'),
            'destination_type' => 'group_child_page',
            'source_type' => 'group_child_page',
            'include_organic_groups' => TRUE,
            ) + $common,
            'group_post' => array(
            'class_name' => 'MigrateD6GroupPostMigration',
            'description' => t('Group Posts, <strong>using Drush run with --user=1</strong>'),
            'destination_type' => 'group_post',
            'source_type' => 'group_news',
            'include_organic_groups' => TRUE,
            ) + $common,
            'taxonomy_event_type' => array(
            'class_name' => 'MigrateTaxEventTypeMigration',
            'description' => t('Taxonomy - Event types'),
            ) + $common,
            'taxonomy_event_facility' => array(
            'class_name' => 'MigrateTaxEventFacilityMigration',
            'description' => t('Taxonomy - Event Facilities'),
            ) + $common,
            'event' => array(
            'class_name' => 'MigrateD6EventMigration',
            'description' => t('Event pages, <strong>using Drush run with --user=1</strong>'),
            'destination_type' => 'event',
            'source_type' => 'event',
            'include_organic_groups' => TRUE,
            ) + $common,            
            'event_rides' => array(
            'class_name' => 'MigrateD6EventRidesMigration',
            'description' => t('Event Rides (Field Collections)'),
            ) + $common,            
        ),
    );
    return $api;
}
