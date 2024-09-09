<?php

/**
 * @file
 * #ddev-generated: Automatically generated Drupal settings file.
 * ddev manages this file and may delete or overwrite the file unless this
 * comment is removed.
 */

$host = "db";
$port = 3306;
$driver = "mysql";

// If DDEV_PHP_VERSION is not set but IS_DDEV_PROJECT *is*, it means we're running (drush) on the host,
// so use the host-side bind port on docker IP
if (empty(getenv('DDEV_PHP_VERSION') && getenv('IS_DDEV_PROJECT') == 'true')) {
  $host = "127.0.0.1";
  $port = 59050;
}

$databases['default']['default']['database'] = "db";
$databases['default']['default']['username'] = "db";
$databases['default']['default']['password'] = "db";
$databases['default']['default']['host'] = $host;
$databases['default']['default']['driver'] = $driver;
$databases['default']['default']['port'] = $port;

$drupal_hash_salt = 'deb134abf7e10153c111b862ad58491cdb65fc0a5534ea956617d43035810cda';

// Enable verbose logging for errors.
// https://www.drupal.org/docs/7/creating-custom-modules/show-all-errors-while-developing
$conf['error_level'] = 2;
