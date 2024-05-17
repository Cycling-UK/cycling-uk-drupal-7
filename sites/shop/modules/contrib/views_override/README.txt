PREFACE
-------
This module extends the default views behaviour by giving the user a chance 
to override built-in views with his/her custom views.

This is especially handy for modules that come with built-in views, 
i.e. Commerce Backoffice 

Note that this module is not intended to replace pages defined by Drupal core.

Under the hood
Technically, this module is really simple. 
When overriding a certain built in view, 
such as the content overview page (/admin/content/node), this module 
basically does two things for you:

Firstly, it disables the original view (the one that you marked as overriden
on the admin settings form) in code,
Secondly, it alters the load callback (views_get_view) 
to load your overriden view instead of the original every time 
the view is requested.


CONTENTS
--------
1. Installation
2. Configuration
3. Thanks

1. Installation
--------------------------------------------------------------------------------
Download the Views module, enable it and configure to your needs.
Download the Views Override module, enable it and visit 
Configuration -> System -> Views Override (/admin/config/system/views-overide).
Specify which views you want to override, and save the configuration.
You are ready to roll!

2. Configuration
--------------------------------------------------------------------------------
Currently, there is no configuration for this module, "It Just Works". 
