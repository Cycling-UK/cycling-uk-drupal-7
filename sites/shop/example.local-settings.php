<?php
//Do not edit here!
//Just make copy and save as "local-settings.php"
//-----------------------------------------------



//help you find right template to edit. (page -> view source)

$conf['theme_debug'] = TRUE;


//url override for stage_file_proxy module

$conf['stage_file_proxy_origin'] = 'https://shop.cyclinguk.org';


//database settings

$databases = array(
  'default' =>
  array(
    'default' =>
    array(
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