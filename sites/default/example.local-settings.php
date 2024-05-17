<?php
//Do not edit here!
//Just make copy and save as "local-settings.php"
//-----------------------------------------------



//help you find right template to edit. (page -> view source)

$conf['theme_debug'] = TRUE;


$conf['stage_file_proxy_origin'] = 'https://www.cyclinguk.org';


//database settings

$databases = array (
  'default' => 
  array (
    'default' => 
    array (
      'database' => '',
      'username' => '',
      'password' => '',
      'host' => 'localhost',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
  'drupal6' => 
  array (
    'default' => 
    array (
      'database' => '',
      'username' => '',
      'password' => '',
      'host' => 'localhost',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);


//optional Redis cache
/*
$conf['redis_client_interface'] = 'Predis';
$conf['redis_client_host']      = '127.0.0.1';
$conf['redis_client_port']      = '6379';
$conf['cache_prefix'] 		= 'cyclinguk';
$conf['cache_default_class'] 	= 'Redis_Cache';
$conf['cache_backends'][] 	= 'sites/all/modules/contrib/redis/redis.autoload.inc';
*/
