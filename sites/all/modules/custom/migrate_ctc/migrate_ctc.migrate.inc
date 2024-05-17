<?php

/**
 * @file
 * Main file loaded by the Migrate system.
 * Defines the migrations available in this module.
 */

/**
 * Implements hook_migrate_api().
 */
function migrate_ctc_migrate_api() {

  // Array values common to many migrations.
  $common = array(
    'source_connection' => 'drupal6',
    'source_version' => 6,
    'group_name' => 'ctc');

  $migrations = array();

  // Roles and Users.
  $migrations['roles'] = array(
    'description' => t('Migration of Roles from Drupal 6 site'),
    'class_name' => 'DrupalRole6Migration') + $common;
  $migrations['users'] = array(
    'description' => t('Migration of Users from Drupal 6 site'),
    'class_name' => 'MigrateDrupalUser6Migration',
    'role_migration' => 'roles') + $common;
  //$migrations['menu'] = array(
  //  'description' => t('Migration of menu from Drupal 6 site'),
  //  'class_name' => 'MigrateDrupalMenu6Migration') + $common;
  $migrations['menu_links'] = array (
    'description' => t('Migration of menu links from Drupal 6'),
    'class_name' => 'MigrateDrupalMenuLinks6Migration',
    'node_migrations' => array('node_info','node_area','node_article','node_blog','node_briefings','node_campaign','node_case_study','node_course_details','node_course_venues','node_cycle_magazine','node_editorial_page','node_gallery','node_link','node_member_benefit','node_news','node_newsletter','node_panel','node_person_profile','node_press_release','node_project','node_publication','node_tribe')) + $common;
  $migrations['url_redirect'] = array (
    'description' => t('Migration of url_redirects from Drupal 6'),
    'class_name' => 'MigrateDrupalUrlRedirect6Migration') + $common;

  // Taxonomy.
  $migrations['taxonomy_cycling_type'] = array(
    'class_name' => 'DrupalTerm6Migration',
    'description' => t('Migration of Cycling Type terms from Drupal 6 site'),
    'source_vocabulary' => '3,51',
    'destination_vocabulary' => 'cycling_type',
    'group_name' => 'Taxonomy') + $common;
  $migrations['taxonomy_tags'] = array(
    'class_name' => 'DrupalTerm6Migration',
    'description' => t('Migration of Tag terms from Drupal 6 site'),
    'source_vocabulary' => '6,41,8,4,31,19,46',
    'destination_vocabulary' => 'tags',
    'group_name' => 'Taxonomy') + $common;
  $migrations['taxonomy_cuk_section'] = array(
    'class_name' => 'DrupalTerm6Migration',
    'description' => t('Migration of CUK Sectons terms from Drupal 6 site'),
    'source_vocabulary' => '36,21,17,12',
    'destination_vocabulary' => 'cycling_uk_section',
    'group_name' => 'Taxonomy') + $common;
  $migrations['taxonomy_campaign'] = array(
    'class_name' => 'DrupalTerm6Migration',
    'description' => t('Migration of Campaigns terms from Drupal 6 site'),
    'source_vocabulary' => 5,
    'destination_vocabulary' => 'campaign',
    'group_name' => 'Taxonomy') + $common;
  $migrations['taxonomy_status'] = array(
    'class_name' => 'DrupalTerm6Migration',
    'description' => t('Migration of status terms from Drupal 6 site'),
    'source_vocabulary' => 26,
    'destination_vocabulary' => 'status',
    'group_name' => 'Taxonomy') + $common;

// Nodes.

//Library page to taxonomy
  $migrations['node_librarypage'] = array(
    'class_name' => 'MigrateD6LibraryPageMigration',
    'description' => 'Library pages into tags taxonomy',
    'group_name' => 'Other Content Types') + $common;

//Posts
  $migrations['node_article'] = array(
    'class_name' => 'MigrateCtcArticleMigration',
    'description' => t('Migration of Article nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'article',
    'destination_type' => 'post',
    'group_name' => 'posts') + $common;
  $migrations['node_blog'] = array(
    'class_name' => 'MigrateCtcBlogMigration',
    'description' => t('Migration of Blog nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'blog',
    'destination_type' => 'post',
    'group_name' => 'posts') + $common;
  $migrations['node_case_study'] = array(
    'class_name' => 'MigrateCtcCaseStudyMigration',
    'description' => t('Migration of Case Study nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'case_study',
    'destination_type' => 'post',
    'group_name' => 'posts') + $common;
  $migrations['node_cycle_magazine'] = array(
    'class_name' => 'MigrateCtcCycleMagazineMigration',
    'description' => t('Migration of Cycle Magazine nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'cycle_magazine',
    'destination_type' => 'post',
    'group_name' => 'posts') + $common;
  $migrations['node_gallery'] = array(
    'class_name' => 'MigrateCtcGalleryMigration',
    'description' => t('Migration of Gallery nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'gallery',
    'destination_type' => 'post',
    'group_name' => 'posts') + $common;
  $migrations['node_news'] = array(
    'class_name' => 'MigrateCtcNewsMigration',
    'description' => t('Migration of News nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'news',
    'destination_type' => 'post',
    'group_name' => 'posts') + $common;
  $migrations['node_press_release'] = array(
    'class_name' => 'MigrateCtcPressReleaseMigration',
    'description' => t('Migration of Press Release nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'press_release',
    'destination_type' => 'post',
    'group_name' => 'posts') + $common;


//Pages
  $migrations['node_info'] = array(
    'class_name' => 'MigrateCtcInfoMigration',
    'description' => t('Migration of Info Page nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'information_page',
    'destination_type' => 'page',
    'group_name' => 'page') + $common;
  $migrations['node_panel'] = array(
    'class_name' => 'MigrateCtcPanelMigration',
    'description' => t('Migration of Panel Page nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'panel',
    'destination_type' => 'page',
    'group_name' => 'page') + $common;
  $migrations['node_editorial_page'] = array(
    'class_name' => 'MigrateCtcEditorialPageMigration',
    'description' => t('Migration of Editorial Page Page nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'editorial_page',
    'destination_type' => 'page',
    'group_name' => 'page') + $common;
  $migrations['node_person_profile'] = array(
    'class_name' => 'MigrateCtcPersonProfileMigration',
    'description' => t('Migration of Person Profile Page nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'person_profile',
    'destination_type' => 'page',
    'group_name' => 'page') + $common;
  $migrations['node_link'] = array(
    'class_name' => 'MigrateCtcLinkMigration',
    'description' => t('Migration of Link Page nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'link',
    'destination_type' => 'link',
    'group_name' => 'page') + $common;
  $migrations['node_member_benefit'] = array(
    'class_name' => 'MigrateCtcMemberBenefitMigration',
    'description' => t('Migration of member benefits nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'benefit',
    'destination_type' => 'page',
    'group_name' => 'page') + $common;
  $migrations['node_area'] = array(
    'class_name' => 'MigrateCtcAreaMigration',
    'description' => t('Migration of area nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'ctc_area',
    'destination_type' => 'page',
    'group_name' => 'page') + $common;
  $migrations['node_project'] = array(
    'class_name' => 'MigrateCtcProjectMigration',
    'description' => t('Migration of project nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'project',
    'destination_type' => 'page',
    'group_name' => 'page') + $common;
  $migrations['node_tribe'] = array(
    'class_name' => 'MigrateCtcTribeMigration',
    'description' => t('Migration of Tribe nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'tribe',
    'destination_type' => 'page',
    'group_name' => 'page') + $common;

//Other
  $migrations['node_campaign'] = array(
    'class_name' => 'MigrateCtcCampaignMigration',
    'description' => t('Migration of Campaign Page nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'campaign',
    'destination_type' => 'campaign',
    'group_name' => 'Other Content Types') + $common;
  $migrations['node_publication'] = array(
    'class_name' => 'MigrateCtcPublicationMigration',
    'description' => t('Migration of Publication nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'publication',
    'destination_type' => 'publication',
    'group_name' => 'Other Content Types') + $common;
  $migrations['node_briefings'] = array(
    'class_name' => 'MigrateCtcBriefingsMigration',
    'description' => t('Migration of Briefing nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'policy_document',
    'destination_type' => 'briefings',
    'group_name' => 'Other Content Types') + $common;
  $migrations['node_newsletter'] = array(
    'class_name' => 'MigrateCtcNewsletterMigration',
    'description' => t('Migration of newletter nodes from Drupal 6 site'),
    'user_migration' => 'users',
    'source_type' => 'publication',
    'destination_type' => 'newsletter',
    'group_name' => 'Other Content Types') + $common;
  $migrations['node_tro'] = array(
    'class_name' => 'MigrateCtcTROMigration',
    'description' => t('Migration of Traffic Regulation Orders nodes from Drupal 6 site'),
    'source_type' => 'traffic_regulation_order',
    'destination_type' => 'traffic_regulation_order',
    'group_name' => 'Other Content Types') + $common;
  $migrations['node_course_venues'] = array(
    'class_name' => 'MigrateCtcCourseVenuesMigration',
    'description' => t('Migration of Course Venues nodes from Drupal 6 site'),
    'source_type' => 'venue',
    'destination_type' => 'venue',
    'group_name' => 'Other Content Types') + $common;
  $migrations['node_course_details'] = array(
    'class_name' => 'MigrateCtcCourseDetailsMigration',
    'description' => t('Migration of Course Details nodes from Drupal 6 site'),
    'source_type' => 'course_details',
    'destination_type' => 'course_details',
    'group_name' => 'Other Content Types') + $common;
  // Comments.
  $common['class_name'] = 'DrupalComment6Migration';
  $common['group_name'] = 'comments';
  $common['destination_type'] = 'post';
  $common['user_migration'] = 'users';
  $migrations['comments_article'] = array(
    'description' => t('Migration of article comments from Drupal 6 site'),
    'node_migration' => 'node_article',
    'source_type' => 'article') + $common;
  $migrations['comments_blog'] = array(
    'description' => t('Migration of blog comments from Drupal 6 site'),
    'node_migration' => 'node_blog',
    'source_type' => 'blog') + $common;
  $migrations['comments_case_study'] = array(
    'description' => t('Migration of case study comments from Drupal 6 site'),
    'node_migration' => 'node_case_study',
    'source_type' => 'case_study') + $common;
  $migrations['comments_cycle_magazine'] = array(
    'description' => t('Migration of Cycle magazine comments from Drupal 6 site'),
    'node_migration' => 'node_cycle_magazine',
    'source_type' => 'cycle_magazine') + $common;
  $migrations['comments_gallery'] = array(
    'description' => t('Migration of gallery comments from Drupal 6 site'),
    'node_migration' => 'node_gallery',
    'source_type' => 'gallery') + $common;
  $migrations['comments_news'] = array(
    'description' => t('Migration of news comments from Drupal 6 site'),
    'node_migration' => 'node_news',
    'source_type' => 'news') + $common;
  $migrations['comments_press_release'] = array(
    'description' => t('Migration of press release comments from Drupal 6 site'),
    'node_migration' => 'node_press_release',
    'source_type' => 'press_release') + $common;
  $api = array(
    'api' => 2,
    'groups' => array(
      'ctc' => array(
        'title' => t('CTC Migrations'))),
    'migrations' => $migrations);



  return $api;
}
