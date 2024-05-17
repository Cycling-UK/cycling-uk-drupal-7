<?php

/**
 * @file
 * features_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_theme_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'adminimal_admin_menu_core-toolbar-disabled';
  $strongarm->value = TRUE;
  $export['adminimal_admin_menu_core-toolbar-disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'adminimal_admin_menu_toolbar-disabled';
  $strongarm->value = TRUE;
  $export['adminimal_admin_menu_toolbar-disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'adminimal';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_bg_color';
  $strongarm->value = '#F7F7F7';
  $export['back_to_top_bg_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_border_color';
  $strongarm->value = '#CCCCCC';
  $export['back_to_top_border_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_place';
  $strongarm->value = '3';
  $export['back_to_top_button_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_text';
  $strongarm->value = 'Back to top';
  $export['back_to_top_button_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_trigger';
  $strongarm->value = '100';
  $export['back_to_top_button_trigger'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_type';
  $strongarm->value = 'image';
  $export['back_to_top_button_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_hover_color';
  $strongarm->value = '#EEEEEE';
  $export['back_to_top_hover_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_pages';
  $strongarm->value = '';
  $export['back_to_top_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_prevent_in_admin';
  $strongarm->value = 1;
  $export['back_to_top_prevent_in_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_prevent_in_front';
  $strongarm->value = 0;
  $export['back_to_top_prevent_in_front'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_prevent_on_mobile';
  $strongarm->value = 0;
  $export['back_to_top_prevent_on_mobile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_prevent_on_non_mobile';
  $strongarm->value = 0;
  $export['back_to_top_prevent_on_non_mobile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_text_color';
  $strongarm->value = '#333333';
  $export['back_to_top_text_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_visibility';
  $strongarm->value = '0';
  $export['back_to_top_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'environment_indicator_favicon_overlay';
  $strongarm->value = 1;
  $export['environment_indicator_favicon_overlay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'environment_indicator_git_support';
  $strongarm->value = 1;
  $export['environment_indicator_git_support'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'environment_indicator_integration';
  $strongarm->value = array(
    'toolbar' => 'toolbar',
    'admin_menu' => 'admin_menu',
    'navbar' => 'navbar',
  );
  $export['environment_indicator_integration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'environment_indicator_suppress_pages';
  $strongarm->value = '';
  $export['environment_indicator_suppress_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontawesome_use_cdn';
  $strongarm->value = 1;
  $export['fontawesome_use_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scroll_button_settings';
  $strongarm->value = array(
    'title' => 'Back to top',
    'position' => 'static',
    'buttons' => array(
      'top' => 1,
      'bot' => 0,
    ),
    'always_show' => 0,
    'speed' => 'slow',
    'duration' => 400,
    'distance' => 100,
    'offset' => array(
      'x' => 80,
      'y' => 3,
    ),
    'css' => '',
    'color' => array(
      'bg' => '#bababa',
      'hv' => '#999999',
    ),
  );
  $export['scroll_button_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme';
  $strongarm->value = '0';
  $export['theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_attributes';
  $strongarm->value = array(
    'comment:cid' => array(
      'description' => 'Comment: ID - The id of a comment (cid). See <a href="/admin/content/comment">admin/content/comment</a> for your published comments or <a href="/admin/content/comment/approval">admin/content/comment/approval</a> for comments awaiting approval',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'drupal:base_path' => array(
      'description' => 'Drupal: Base path - If Drupal is installed in a subdirectory, the base path will be \'/[subdirectory]/\', otherwise just \'/\'.',
      'page cache' => 1,
    ),
    'drupal:get_q' => array(
      'description' => 'Drupal: $_GET[\'q\'] - Current value of Drupal\'s query parameter "q"',
      'validator' => '',
      'page cache' => 1,
    ),
    'drupal:is_front_page' => array(
      'description' => 'Drupal: Is front page - \'true\' if current page is front page, otherwise just \'false\'.',
      'validator' => 'themekey_validator_string_boolean',
      'page cache' => 1,
    ),
    'drupal:path' => array(
      'description' => 'Drupal: Drupal path like "node/add/story" or path alias with support for wildcards.<br />
Query parameters are stripped off before the path gets examined. P.e. "node/add/story?destination=node" becomes "node/add/story" first. If you want to access query parameters, have a look at the <strong>system:query_param</strong> property.<br />
Wildcard characters are "#" for numeric parts and "%" for all characters. To match conditions against a certain part, use an identifier with the wildcard. For example "comment/reply/#xyz" matches all paths with "comment/reply" and a numeric third argument. You can then specify conditions for every wildcard argument using the property "drupal:path:wildcard" and the identifier you choose ("xyz" in this example).<br />
These are the possible wildcard replacements for foo/bar/42/test.html:<pre>
foo/bar/42/test.html
foo/bar/42/%
foo/bar/42
foo/bar/%/test.html
foo/bar/%/%
foo/bar/%
foo/bar/#/test.html
foo/bar/#/%
foo/bar/#
foo/bar
foo/%/42/test.html
foo/%/42/%
foo/%/42
foo/%/%/test.html
foo/%/%/%
foo/%/%
foo/%/#/test.html
foo/%/#/%
foo/%/#
foo/%
foo
%/bar/42/test.html
%/bar/42/%
%/bar/42
%/bar/%/test.html
%/bar/%/%
%/bar/%
%/bar/#/test.html
%/bar/#/%
%/bar/#
%/bar
%/%/42/test.html
%/%/42/%
%/%/42
%/%/%/test.html
%/%/%/%
%/%/%
%/%/#/test.html
%/%/#/%
%/%/#
%/%
%
</pre>',
      'validator' => 'themekey_validator_drupal_path',
      'page cache' => 1,
    ),
    'drupal:path:wildcard' => array(
      'description' => 'Wildcard of "drupal:path". See explanation of "drupal:path" for details.',
      'validator' => 'themekey_validator_wildcard',
      'page cache' => 1,
    ),
    'drupal:path_is_admin' => array(
      'description' => 'Drupal: Path is admin - \'true\' if current page\'s path belongs to the admin section, otherwise just \'false\'.',
      'validator' => 'themekey_validator_string_boolean',
      'page cache' => 1,
    ),
    'group:id' => array(
      'description' => 'Group: ID - The og group ID',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'group:type' => array(
      'description' => 'Group: Type - The type of an og group',
      'validator' => 'themekey_validator_og_group_type',
      'page cache' => 1,
    ),
    'node:body_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:body_summary' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">summary</em> of the field <em class="placeholder">body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:body_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:changed' => array(
      'description' => 'Node: Changed date - The date when the node was last edited/updated, formatted as unix timestamp like "1248873565".',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:changed_date' => array(
      'description' => 'Node: Changed date - The date without the time when the node was last edited/updated, formatted like "2009-12-24"',
      'validator' => 'themekey_validator_date',
      'page cache' => 1,
    ),
    'node:changed_date_time' => array(
      'description' => 'Node: Changed date - The date including the time when the node was last edited/updated, formatted like "2009-12-24 18:13:24"',
      'validator' => 'themekey_validator_date_time',
      'page cache' => 1,
    ),
    'node:created' => array(
      'description' => 'Node: Created date - The date when the node was created, formatted as unix timestamp like "1248873565".',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:created_date' => array(
      'description' => 'Node: Created date - The date without the time when the node was created, formatted like "2009-12-24"',
      'validator' => 'themekey_validator_date',
      'page cache' => 1,
    ),
    'node:created_date_time' => array(
      'description' => 'Node: Created date - The date including the time when the node was created, formatted like "2009-12-24 18:13:24"',
      'validator' => 'themekey_validator_date_time',
      'page cache' => 1,
    ),
    'node:field__cost_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field__cost</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field__cost_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field__cost</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field__location_details_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field__location_details</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field__location_details_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field__location_details</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field__volunteer_form_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field__volunteer_form</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_about_centre_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_about_centre</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_about_centre_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_about_centre</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_about_the_group_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_about_the_group</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_about_the_group_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_about_the_group</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_accordion_revision_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">revision_id</em> of the field <em class="placeholder">field_accordion</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_accordion_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_accordion</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_active_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_active</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_activities_available_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_activities_available</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_activities_available_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_activities_available</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_additional_content_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_additional_content</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_additional_content_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_additional_content</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_administrative_area' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">administrative_area</em> of the field <em class="placeholder">field_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_country' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">country</em> of the field <em class="placeholder">field_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_data' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">data</em> of the field <em class="placeholder">field_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_dependent_locality' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">dependent_locality</em> of the field <em class="placeholder">field_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_first_name' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">first_name</em> of the field <em class="placeholder">field_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_information_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_address_information</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_information_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_address_information</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_last_name' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">last_name</em> of the field <em class="placeholder">field_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_locality' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">locality</em> of the field <em class="placeholder">field_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_name_line' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">name_line</em> of the field <em class="placeholder">field_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_organisation_name' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">organisation_name</em> of the field <em class="placeholder">field_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_postal_code' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">postal_code</em> of the field <em class="placeholder">field_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_premise' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">premise</em> of the field <em class="placeholder">field_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_sub_administrative_area' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">sub_administrative_area</em> of the field <em class="placeholder">field_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_sub_premise' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">sub_premise</em> of the field <em class="placeholder">field_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_address_thoroughfare' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">thoroughfare</em> of the field <em class="placeholder">field_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_addressfield_administrative_area' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">administrative_area</em> of the field <em class="placeholder">field_addressfield</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_addressfield_country' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">country</em> of the field <em class="placeholder">field_addressfield</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_addressfield_data' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">data</em> of the field <em class="placeholder">field_addressfield</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_addressfield_dependent_locality' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">dependent_locality</em> of the field <em class="placeholder">field_addressfield</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_addressfield_first_name' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">first_name</em> of the field <em class="placeholder">field_addressfield</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_addressfield_last_name' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">last_name</em> of the field <em class="placeholder">field_addressfield</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_addressfield_locality' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">locality</em> of the field <em class="placeholder">field_addressfield</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_addressfield_name_line' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">name_line</em> of the field <em class="placeholder">field_addressfield</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_addressfield_organisation_name' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">organisation_name</em> of the field <em class="placeholder">field_addressfield</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_addressfield_postal_code' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">postal_code</em> of the field <em class="placeholder">field_addressfield</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_addressfield_premise' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">premise</em> of the field <em class="placeholder">field_addressfield</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_addressfield_sub_administrative_area' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">sub_administrative_area</em> of the field <em class="placeholder">field_addressfield</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_addressfield_sub_premise' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">sub_premise</em> of the field <em class="placeholder">field_addressfield</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_addressfield_thoroughfare' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">thoroughfare</em> of the field <em class="placeholder">field_addressfield</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_announcement_type_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_announcement_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_area_covered_bottom' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">bottom</em> of the field <em class="placeholder">field_area_covered</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_area_covered_geo_type' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geo_type</em> of the field <em class="placeholder">field_area_covered</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_area_covered_geohash' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geohash</em> of the field <em class="placeholder">field_area_covered</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_area_covered_geom' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geom</em> of the field <em class="placeholder">field_area_covered</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_area_covered_lat' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">lat</em> of the field <em class="placeholder">field_area_covered</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_area_covered_left' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">left</em> of the field <em class="placeholder">field_area_covered</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_area_covered_lon' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">lon</em> of the field <em class="placeholder">field_area_covered</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_area_covered_right' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">right</em> of the field <em class="placeholder">field_area_covered</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_area_covered_top' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">top</em> of the field <em class="placeholder">field_area_covered</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_article_type_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_article_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_attachments_description' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">description</em> of the field <em class="placeholder">field_attachments</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_attachments_display' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">display</em> of the field <em class="placeholder">field_attachments</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_attachments_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_attachments</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_attendance_size_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_attendance_size</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_author_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_author</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_author_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_author</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_background_colour_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_background_colour</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_background_watermark_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_background_watermark</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_banner_image_paragraph_revision_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">revision_id</em> of the field <em class="placeholder">field_banner_image_paragraph</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_banner_image_paragraph_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_banner_image_paragraph</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_bike_type_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_bike_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_billboard_paragraph_text_revision_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">revision_id</em> of the field <em class="placeholder">field_billboard_paragraph_text</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_billboard_paragraph_text_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_billboard_paragraph_text</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_biography_category_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_biography_category</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_body_bottom_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_body_bottom</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_body_bottom_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_body_bottom</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_body_middle_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_body_middle</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_body_middle_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_body_middle</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_body_top_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_body_top</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_body_top_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_body_top</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_booking_code_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_booking_code</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_booking_code_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_booking_code</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_button_a_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_button_a</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_button_a_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_button_a</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_button_a_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_button_a</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_button_b_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_button_b</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_button_b_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_button_b</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_button_b_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_button_b</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_call_to_action_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_call_to_action</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_campaign_call_to_action_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_campaign_call_to_action</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_campaign_call_to_action_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_campaign_call_to_action</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_campaign_call_to_action_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_campaign_call_to_action</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_campaign_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_campaign</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_cancelled_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_cancelled</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_caption_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_caption</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_caption_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_caption</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_centre_activities_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_centre_activities</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_centre_facilities_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_centre_facilities</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_circular_route_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_circular_route</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_closing_date_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_closing_date</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_committee_member_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_committee_member</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_contact_address_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_contact_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_contact_address_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_contact_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_contact_email_email' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">email</em> of the field <em class="placeholder">field_contact_email</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_contact_name_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_contact_name</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_contact_name_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_contact_name</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_contact_number_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_contact_number</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_contact_number_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_contact_number</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_contact_organisation_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_contact_organisation</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_contact_organisation_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_contact_organisation</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_cost_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_cost</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_cost_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_cost</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_assessment_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_course_assessment</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_assessment_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_assessment</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_availability_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_availability</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_booking_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_course_booking</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_booking_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_course_booking</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_booking_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_course_booking</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_category_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_category</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_dates_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_dates</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_dates_value2' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value2</em> of the field <em class="placeholder">field_course_dates</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_duration_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_course_duration</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_duration_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_duration</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_files_description' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">description</em> of the field <em class="placeholder">field_course_files</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_files_display' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">display</em> of the field <em class="placeholder">field_course_files</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_files_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_course_files</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_fitness_level_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_course_fitness_level</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_fitness_level_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_fitness_level</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_group_size_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_course_group_size</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_group_size_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_group_size</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_key_content_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_course_key_content</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_key_content_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_key_content</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_notes_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_course_notes</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_notes_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_notes</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_outcomes_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_course_outcomes</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_outcomes_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_outcomes</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_prerequisites_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_course_prerequisites</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_prerequisites_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_prerequisites</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_price_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_price</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_residential_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_residential</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_resources_description' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">description</em> of the field <em class="placeholder">field_course_resources</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_resources_display' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">display</em> of the field <em class="placeholder">field_course_resources</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_resources_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_course_resources</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_status_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_status</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_terrain_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_course_terrain</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_terrain_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_terrain</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_tutor_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_course_tutor</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_tutor_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_tutor</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_type_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_course_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_venue_accommodation_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_course_venue_accommodation</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_venue_accommodation_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_venue_accommodation</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_venue_address_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_course_venue_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_venue_address_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_venue_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_venue_email_email' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">email</em> of the field <em class="placeholder">field_course_venue_email</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_venue_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_course_venue</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_venue_telephone_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_course_venue_telephone</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_venue_telephone_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_course_venue_telephone</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_venue_website_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_course_venue_website</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_venue_website_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_course_venue_website</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_course_venue_website_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_course_venue_website</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_cycling_type_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_cycling_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_cycling_uk_section_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_cycling_uk_section</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_cycling_uk_venue_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_cycling_uk_venue</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_cycling_uk_view_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_cycling_uk_view</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_cycling_uk_view_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_cycling_uk_view</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_data_protection_statement_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_data_protection_statement</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_data_protection_statement_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_data_protection_statement</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_date_ride_rrule' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">rrule</em> of the field <em class="placeholder">field_date_ride</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_date_ride_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_date_ride</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_date_ride_value2' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value2</em> of the field <em class="placeholder">field_date_ride</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_date_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_date</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_distance_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_distance</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_distance_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_distance</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_duration_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_duration</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_editorial_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_editorial</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_email_attachments_description' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">description</em> of the field <em class="placeholder">field_email_attachments</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_email_attachments_display' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">display</em> of the field <em class="placeholder">field_email_attachments</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_email_attachments_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_email_attachments</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_email_audience_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_email_audience</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_email_footer_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_email_footer</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_email_footer_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_email_footer</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_email_status_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_email_status</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_email_suppression_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_email_suppression</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_event_facilities_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_event_facilities</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_event_ride_audax_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_event_ride_audax</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_event_type_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_event_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_exclude_from_main_feeds_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_exclude_from_main_feeds</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_extra_contact_details_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_extra_contact_details</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_extra_contact_details_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_extra_contact_details</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_facebook_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_facebook</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_facebook_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_facebook</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_facebook_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_facebook</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_facility_details_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_facility_details</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_facility_details_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_facility_details</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_feed_in_courses_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_feed_in_courses</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_feed_item_description_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_feed_item_description</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_feed_item_description_summary' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">summary</em> of the field <em class="placeholder">field_feed_item_description</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_feed_item_description_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_feed_item_description</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_address_bottom' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">bottom</em> of the field <em class="placeholder">field_finish_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_address_geo_type' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geo_type</em> of the field <em class="placeholder">field_finish_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_address_geohash' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geohash</em> of the field <em class="placeholder">field_finish_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_address_geom' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geom</em> of the field <em class="placeholder">field_finish_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_address_lat' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">lat</em> of the field <em class="placeholder">field_finish_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_address_left' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">left</em> of the field <em class="placeholder">field_finish_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_address_lon' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">lon</em> of the field <em class="placeholder">field_finish_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_address_right' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">right</em> of the field <em class="placeholder">field_finish_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_address_top' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">top</em> of the field <em class="placeholder">field_finish_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_location_bottom' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">bottom</em> of the field <em class="placeholder">field_finish_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_location_geo_type' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geo_type</em> of the field <em class="placeholder">field_finish_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_location_geohash' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geohash</em> of the field <em class="placeholder">field_finish_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_location_geom' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geom</em> of the field <em class="placeholder">field_finish_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_location_lat' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">lat</em> of the field <em class="placeholder">field_finish_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_location_left' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">left</em> of the field <em class="placeholder">field_finish_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_location_lon' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">lon</em> of the field <em class="placeholder">field_finish_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_location_right' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">right</em> of the field <em class="placeholder">field_finish_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_finish_location_top' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">top</em> of the field <em class="placeholder">field_finish_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_further_reading_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_further_reading</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gallery_image_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_gallery_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gallery_image_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_gallery_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gallery_image_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_gallery_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gallery_image_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_gallery_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gallery_image_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_gallery_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gpx_files_description' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">description</em> of the field <em class="placeholder">field_gpx_files</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gpx_files_display' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">display</em> of the field <em class="placeholder">field_gpx_files</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gpx_files_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_gpx_files</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gpx_map_bottom' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">bottom</em> of the field <em class="placeholder">field_gpx_map</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gpx_map_geo_type' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geo_type</em> of the field <em class="placeholder">field_gpx_map</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gpx_map_geohash' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geohash</em> of the field <em class="placeholder">field_gpx_map</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gpx_map_geom' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geom</em> of the field <em class="placeholder">field_gpx_map</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gpx_map_lat' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">lat</em> of the field <em class="placeholder">field_gpx_map</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gpx_map_left' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">left</em> of the field <em class="placeholder">field_gpx_map</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gpx_map_lon' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">lon</em> of the field <em class="placeholder">field_gpx_map</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gpx_map_right' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">right</em> of the field <em class="placeholder">field_gpx_map</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_gpx_map_top' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">top</em> of the field <em class="placeholder">field_gpx_map</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_grid_reference_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_grid_reference</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_grid_reference_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_grid_reference</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_activities_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_group_activities</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_contact_email_email' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">email</em> of the field <em class="placeholder">field_group_contact_email</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_contact_name_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_group_contact_name</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_contact_name_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_group_contact_name</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_files_description' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">description</em> of the field <em class="placeholder">field_group_files</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_files_display' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">display</em> of the field <em class="placeholder">field_group_files</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_files_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_group_files</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_image_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_group_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_image_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_group_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_image_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_group_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_image_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_group_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_image_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_group_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_newsletter_subscribe_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_group_newsletter_subscribe</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_newsletter_subscribe_value2' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value2</em> of the field <em class="placeholder">field_group_newsletter_subscribe</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_org_member_no_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_group_org_member_no</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_org_member_no_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_group_org_member_no</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_owner_member_no_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_group_owner_member_no</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_owner_member_no_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_group_owner_member_no</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_parent_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_group_parent</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_phone_number_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_group_phone_number</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_phone_number_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_group_phone_number</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_postcodes_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_group_postcodes</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_postcodes_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_group_postcodes</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_region_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_group_region</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_region_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_group_region</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_ride_info_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_group_ride_info</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_ride_info_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_group_ride_info</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_ride_programme_description' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">description</em> of the field <em class="placeholder">field_group_ride_programme</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_ride_programme_display' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">display</em> of the field <em class="placeholder">field_group_ride_programme</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_ride_programme_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_group_ride_programme</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_type_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_group_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_website_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_group_website</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_website_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_group_website</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_website_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_group_website</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_welcome_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_group_welcome</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_group_welcome_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_group_welcome</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_headline_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_headline</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_headline_message_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_headline_message</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_headline_message_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_headline_message</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_headline_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_headline</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_hero_description' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">description</em> of the field <em class="placeholder">field_hero</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_hero_display' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">display</em> of the field <em class="placeholder">field_hero</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_hero_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_hero</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_historic_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_historic</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_ice_name_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_ice_name</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_ice_name_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_ice_name</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_ice_notes_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_ice_notes</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_ice_notes_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_ice_notes</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_ice_phone_number_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_ice_phone_number</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_ice_phone_number_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_ice_phone_number</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_icons_revision_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">revision_id</em> of the field <em class="placeholder">field_icons</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_icons_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_icons</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_image_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_image_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_image_gallery_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_image_gallery</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_image_gallery_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_image_gallery</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_image_gallery_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_image_gallery</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_image_gallery_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_image_gallery</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_image_gallery_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_image_gallery</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_image_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_image_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_image_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_inclusive_cycling_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_inclusive_cycling</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_instagram_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_instagram</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_instagram_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_instagram</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_instagram_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_instagram</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_insurance_required__value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_insurance_required_</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_issuu_embed_code_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_issuu_embed_code</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_issuu_embed_code_full_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_issuu_embed_code_full</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_issuu_embed_code_full_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_issuu_embed_code_full</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_issuu_embed_code_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_issuu_embed_code</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_link_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_link_booknow_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_link_booknow</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_link_booknow_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_link_booknow</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_link_booknow_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_link_booknow</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_link_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_link_to_articles_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_link_to_articles</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_link_to_author_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_link_to_author</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_link_to_author_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_link_to_author</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_link_to_author_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_link_to_author</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_link_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_linkedin_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_linkedin</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_linkedin_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_linkedin</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_linkedin_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_linkedin</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_links_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_links</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_links_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_links</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_links_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_links</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_location_bottom' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">bottom</em> of the field <em class="placeholder">field_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_location_geo_type' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geo_type</em> of the field <em class="placeholder">field_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_location_geohash' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geohash</em> of the field <em class="placeholder">field_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_location_geom' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geom</em> of the field <em class="placeholder">field_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_location_lat' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">lat</em> of the field <em class="placeholder">field_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_location_left' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">left</em> of the field <em class="placeholder">field_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_location_lon' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">lon</em> of the field <em class="placeholder">field_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_location_right' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">right</em> of the field <em class="placeholder">field_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_location_top' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">top</em> of the field <em class="placeholder">field_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_log_revision_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">revision_id</em> of the field <em class="placeholder">field_log</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_log_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_log</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_logged_in_attachments_description' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">description</em> of the field <em class="placeholder">field_logged_in_attachments</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_logged_in_attachments_display' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">display</em> of the field <em class="placeholder">field_logged_in_attachments</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_logged_in_attachments_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_logged_in_attachments</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_logged_in_content_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_logged_in_content</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_logged_in_content_summary' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">summary</em> of the field <em class="placeholder">field_logged_in_content</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_logged_in_content_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_logged_in_content</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_magazine_cover_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_magazine_cover</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_magazine_cover_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_magazine_cover</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_magazine_cover_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_magazine_cover</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_magazine_cover_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_magazine_cover</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_magazine_cover_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_magazine_cover</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_mailing_preferences_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_mailing_preferences</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_markup_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_markup</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_markup_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_markup</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_member_only_content_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_member_only_content</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_member_only_content_summary' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">summary</em> of the field <em class="placeholder">field_member_only_content</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_member_only_content_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_member_only_content</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_membership_type_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_membership_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_membership_type_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_membership_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_old_nid_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_old_nid</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_open_to_over_200_participa_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_open_to_over_200_participa</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_opening_times_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_opening_times</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_opening_times_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_opening_times</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_organisation_number_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_organisation_number</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_page_management_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_page_management</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_paragraph_revision_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">revision_id</em> of the field <em class="placeholder">field_paragraph</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_paragraph_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_paragraph</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_partner_logo_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_partner_logo</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_partner_logo_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_partner_logo</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_partner_logo_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_partner_logo</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_partner_logo_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_partner_logo</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_partner_logo_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_partner_logo</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_partners_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_partners</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_partners_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_partners</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_paypal_code_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_paypal_code</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_paypal_code_summary' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">summary</em> of the field <em class="placeholder">field_paypal_code</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_paypal_code_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_paypal_code</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_pdf_copies_description' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">description</em> of the field <em class="placeholder">field_pdf_copies</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_pdf_copies_display' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">display</em> of the field <em class="placeholder">field_pdf_copies</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_pdf_copies_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_pdf_copies</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_poi_type_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_poi_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_policy_key_facts_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_policy_key_facts</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_policy_key_facts_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_policy_key_facts</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_position_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_position</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_post_type_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_post_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_postal_suppression_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_postal_suppression</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_postcode_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_postcode</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_postcode_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_postcode</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_prerequisite_courses_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_prerequisite_courses</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_contact_information_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_press_contact_information</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_contact_information_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_press_contact_information</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_notes_to_editors_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_press_notes_to_editors</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_notes_to_editors_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_press_notes_to_editors</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_price_summary_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_price_summary</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_price_summary_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_price_summary</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_progression_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_progression</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_progression_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_progression</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_promoted_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_promoted</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_publication_date_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_publication_date</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_publication_type_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_publication_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_redirect_link_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_redirect_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_redirect_link_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_redirect_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_redirect_link_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_redirect_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_redirect_website_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_redirect_website</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_related_county_guides_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_related_county_guides</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_remove_bottom_margin_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_remove_bottom_margin</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_remove_child_page_links_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_remove_child_page_links</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_renewal_date_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_renewal_date</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_reply_to_email_address_email' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">email</em> of the field <em class="placeholder">field_reply_to_email_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_review_comments_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_review_comments</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_review_comments_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_review_comments</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_review_date_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_review_date</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_ride_level_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_ride_level</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_ride_section_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_ride_section</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_ride_type_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_ride_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_address_1_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_rider_address_1</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_address_1_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_address_1</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_address_2_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_rider_address_2</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_address_2_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_address_2</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_address_3_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_rider_address_3</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_address_3_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_address_3</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_contact_number_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_contact_number</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_country_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_rider_country</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_country_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_country</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_county_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_rider_county</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_county_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_county</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_email_email' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">email</em> of the field <em class="placeholder">field_rider_email</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_email_suppression_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_email_suppression</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_forename_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_rider_forename</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_forename_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_forename</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_joined_date_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_joined_date</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_leader_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_leader</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_local_mobile_number_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_rider_local_mobile_number</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_local_mobile_number_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_local_mobile_number</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_notes_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_rider_notes</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_notes_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_notes</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_out_of_area_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_out_of_area</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_postcode_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_rider_postcode</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_postcode_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_postcode</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_renewal_date_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_renewal_date</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_salutation_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_rider_salutation</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_salutation_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_salutation</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_status_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_status</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_surname_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_rider_surname</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_surname_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_surname</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_town_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_rider_town</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rider_town_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rider_town</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rides_and_activities_revision_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">revision_id</em> of the field <em class="placeholder">field_rides_and_activities</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_rides_and_activities_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_rides_and_activities</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_risk_assessment_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_risk_assessment</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_route_features_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_route_features</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_route_length_kilometres_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_route_length_kilometres</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_route_length_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_route_length</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_shop_node_id_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_shop_node_id</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_short_biography_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_short_biography</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_short_biography_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_short_biography</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_show_on_latest_feed_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_show_on_latest_feed</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_skill_level_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_skill_level</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_skill_level_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_skill_level</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_soundcloud_data' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">data</em> of the field <em class="placeholder">field_soundcloud</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_soundcloud_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_soundcloud</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_soundcloud_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_soundcloud</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_address_bottom' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">bottom</em> of the field <em class="placeholder">field_start_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_address_geo_type' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geo_type</em> of the field <em class="placeholder">field_start_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_address_geohash' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geohash</em> of the field <em class="placeholder">field_start_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_address_geom' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geom</em> of the field <em class="placeholder">field_start_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_address_lat' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">lat</em> of the field <em class="placeholder">field_start_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_address_left' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">left</em> of the field <em class="placeholder">field_start_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_address_lon' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">lon</em> of the field <em class="placeholder">field_start_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_address_right' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">right</em> of the field <em class="placeholder">field_start_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_address_top' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">top</em> of the field <em class="placeholder">field_start_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_location_bottom' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">bottom</em> of the field <em class="placeholder">field_start_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_location_geo_type' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geo_type</em> of the field <em class="placeholder">field_start_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_location_geohash' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geohash</em> of the field <em class="placeholder">field_start_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_location_geom' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">geom</em> of the field <em class="placeholder">field_start_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_location_lat' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">lat</em> of the field <em class="placeholder">field_start_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_location_left' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">left</em> of the field <em class="placeholder">field_start_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_location_lon' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">lon</em> of the field <em class="placeholder">field_start_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_location_right' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">right</em> of the field <em class="placeholder">field_start_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_start_location_top' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">top</em> of the field <em class="placeholder">field_start_location</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_status_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_status</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_stories_revision_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">revision_id</em> of the field <em class="placeholder">field_stories</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_stories_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_stories</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_story_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_story</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_to_groups_comms_date_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sub_to_groups_comms_date</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_to_groups_comms_notes_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_sub_to_groups_comms_notes</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_to_groups_comms_notes_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sub_to_groups_comms_notes</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_to_groups_comms_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sub_to_groups_comms</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_subtitle_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_subtitle</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_subtitle_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_subtitle</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_tags_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_tags</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_teaser_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_teaser</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_teaser_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_teaser</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_terms_and_conditions_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_terms_and_conditions</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_terms_and_conditions_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_terms_and_conditions</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_title_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_title</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_title_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_title</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_town_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_town</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_town_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_town</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_tro_local_authority_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_tro_local_authority</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_tro_status_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_tro_status</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_tro_subject_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_tro_subject</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_tro_type_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_tro_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_twitter_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_twitter</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_twitter_tag_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_twitter_tag</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_twitter_tag_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_twitter_tag</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_twitter_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_twitter</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_twitter_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_twitter</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_user_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_user</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_venue_type_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_venue_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_video_data' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">data</em> of the field <em class="placeholder">field_video</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_video_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_video</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_video_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_video</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_view_ref_1_revision_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">revision_id</em> of the field <em class="placeholder">field_view_ref_1</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_view_ref_1_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_view_ref_1</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_view_ref_2_revision_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">revision_id</em> of the field <em class="placeholder">field_view_ref_2</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_view_ref_2_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_view_ref_2</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_volunteer_form_external_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_volunteer_form_external</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_volunteer_form_external_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_volunteer_form_external</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_volunteer_form_external_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_volunteer_form_external</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_volunteer_opportunities_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_volunteer_opportunities</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_volunteer_opportunities_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_volunteer_opportunities</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_voting_rights_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_voting_rights</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_webform_email_email' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">email</em> of the field <em class="placeholder">field_webform_email</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_website_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_website</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_website_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_website</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_website_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_website</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_welcome_email_sent_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_welcome_email_sent</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_welcome_message_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_welcome_message</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_welcome_message_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_welcome_message</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_youtube_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_youtube</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_youtube_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_youtube</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_youtube_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_youtube</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:group_group_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">group_group</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:language' => array(
      'description' => 'Node: Language - The code of the selected language of a node (formatted like "en" or "de") or "neutral". See <a href="/admin/config/language">admin/config/language</a> for the codes of your enabled languages',
      'validator' => 'themekey_validator_language',
      'page cache' => 1,
    ),
    'node:nid' => array(
      'description' => 'Node: ID - The id of a node (nid), can be found in the URL of the node, "node/23" or "node/23/edit" (23 = nid)',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:og_group_ref_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">og_group_ref</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:promote' => array(
      'description' => 'Node: Promoted - If the node is promoted to the front page. Possible values are "0" for true and "1" for false.',
      'validator' => 'themekey_validator_numeric_boolean',
      'page cache' => 1,
    ),
    'node:sticky' => array(
      'description' => 'Node: Sticky - If the node is set "Sticky at top of lists". Possible values are "0" for true and "1" for false.',
      'validator' => 'themekey_validator_numeric_boolean',
      'page cache' => 1,
    ),
    'node:title' => array(
      'description' => 'Node: Title - The title of the node.',
      'page cache' => 1,
    ),
    'node:title_field_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">title_field</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:title_field_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">title_field</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:type' => array(
      'description' => 'Node: Type - The machine-readable content type of the node. See <a href="/admin/structure/types">admin/structure/types</a> for your content types (use column "Type"). Drupal default types are "page" and "story".',
      'validator' => 'themekey_validator_node_type',
      'page cache' => 1,
    ),
    'node:uid' => array(
      'description' => 'Node: User ID - The node author\'s user id (uid). The user id can be found in the URL of the user\'s profile page, "user/23" or "user/23/edit" (23 = uid). See <a href="/admin/user/user/list">admin/user/user/list</a> for your users.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:vid' => array(
      'description' => 'Node: The version id of a node (vid), mostly for internal use within ThemeKey. In most cases it\'s better to use node:nid within your rule chains.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'path:node_alias' => array(
      'description' => 'Path: Node alias - The path alias assigned to a node.',
      'validator' => '',
      'page cache' => 1,
    ),
    'system:cookie' => array(
      'description' => 'System: Cookie - Every single cookie and its value if present will be formatted like \'COOKIE_NAME=COOKIE_VALUE\'',
      'page cache' => 0,
    ),
    'system:date' => array(
      'description' => 'System: Date - Current time formatted as Y-m-d (example: 2009-12-24)',
      'validator' => 'themekey_validator_date',
      'page cache' => 2,
    ),
    'system:date_time' => array(
      'description' => 'System: Date Time - Current time formatted as Y-m-d H:i:s (example: 2009-12-24 18:30:10)',
      'validator' => 'themekey_validator_date_time',
      'page cache' => 2,
    ),
    'system:day_of_month' => array(
      'description' => 'System: Day of Month - Current day of the month formatted as 1 - 31',
      'validator' => 'themekey_validator_day_of_month',
      'page cache' => 2,
    ),
    'system:day_of_week' => array(
      'description' => 'System: Day of Week - Current day of the week formatted as three letters \'Mon\' through \'Sun\'',
      'validator' => 'themekey_validator_day_of_week',
      'page cache' => 2,
    ),
    'system:dummy' => array(
      'description' => 'System: Dummy - Dummy property. Value is always \'dummy\'',
      'page cache' => 1,
    ),
    'system:host' => array(
      'description' => 'System: HTTP_HOST - The hostname/domain of the site without http:// or https://, like "www.drupal.org" or "www.biologis.com"',
      'validator' => 'themekey_validator_http_host',
      'page cache' => 1,
    ),
    'system:http_header' => array(
      'description' => 'System: HTTP Header - Every single HTTP header and its value if present will be formatted like \'HEADER_NAME=HEADER_VALUE\'',
      'page cache' => 0,
    ),
    'system:https' => array(
      'description' => 'System: \'HTTPS\' - Set to \'true\' value if the script was queried through the HTTPS protocol, otherwise \'false\'.',
      'validator' => 'themekey_validator_string_boolean',
      'page cache' => 1,
    ),
    'system:month' => array(
      'description' => 'System: Month - Current month formatted as \'Jan\' through \'Dec\'',
      'validator' => 'themekey_validator_month',
      'page cache' => 2,
    ),
    'system:post' => array(
      'description' => 'System: POST - Every single POST value formatted like \'POST_VARIABLE_NAME=POST_VARIABLE_VALUE\'. Example: form_id=node_form. If the POST value is not a scalar but a complex type like array or object, the resulting string is formatted as \'POST_VARIABLE_NAME\' without a value.',
      'page cache' => 0,
    ),
    'system:query_param' => array(
      'description' => 'System: Query Parameter - Every single query parameter other than \'q\' and its value, if present. Note that values are url decoded. Example: \'?q=node&foo=bar&dummy&filter=tid%3A27\' will cause three entries \'foo=bar\', \'dummy\' and \'filter=tid:27\'. For \'q\', see property drupal:get_q.',
      'page cache' => 1,
    ),
    'system:query_string' => array(
      'description' => 'System: Query String - Complete query string except parameter \'q\'. Example: \'?q=node&foo=bar&dummy&filter=tid%3A27\' will result in \'foo=bar&dummy&filter=tid%3A27\'. For \'q\' see property drupal:get_q.',
      'page cache' => 1,
    ),
    'system:random' => array(
      'description' => 'System: Random - A random value that could be \'0\' or 1\'.',
      'validator' => 'themekey_validator_numeric_boolean',
      'page cache' => 0,
    ),
    'system:referer' => array(
      'description' => 'System: \'HTTP_REFERER\' - The address of the page (if any) which referred the user agent to the current page. This is set by the user agent. Not all user agents will set this, and some provide the ability to modify HTTP_REFERER as a feature. In short, it cannot really be trusted.',
      'page cache' => 0,
    ),
    'system:remote_ip' => array(
      'description' => 'System: \'REMOTE_ADDR\' - The IP address from which the user is viewing the current page.',
      'validator' => 'themekey_validator_ip_address',
      'page cache' => 0,
    ),
    'system:server_ip' => array(
      'description' => 'System: \'SERVER_ADDR\' - The IP address of the server under which the current script is executing.',
      'validator' => 'themekey_validator_ip_address',
      'page cache' => 0,
    ),
    'system:server_name' => array(
      'description' => 'System:  \'SERVER_NAME\' - The name of the server host under which the current script is executing. If the script is running on a virtual host, this will be the value defined for that virtual host.',
      'page cache' => 0,
    ),
    'system:server_port' => array(
      'description' => 'System: \'SERVER_PORT\' - The port on the server machine being used by the web server for communication. For default setups, this will be \'80\'; using SSL, for instance, will change this to whatever your defined secure HTTP port is.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 0,
    ),
    'system:session' => array(
      'description' => 'System: Session - Every single session parameter and its value, if a value is present and a simple type (string, integer, boolean). Booleans are represented as integers; \'1\' as TRUE and \'0\' as FALSE.',
      'page cache' => 1,
    ),
    'system:time' => array(
      'description' => 'System: Time - Current time formatted as H:i:s (example: 18:30:10)',
      'validator' => 'themekey_validator_time',
      'page cache' => 2,
    ),
    'system:user_agent' => array(
      'description' => 'System: \'HTTP_USER_AGENT\' - Contents of the User-Agent: header from the current request, if there is one. This is a string denoting the user agent which is accessing the page. A typical example is: Mozilla/4.5 [en] (X11; U; Linux 2.2.9 i586).',
      'page cache' => 0,
    ),
    'system:user_browser' => array(
      'description' => 'System: Browser - Information about user\'s browser. Possible values: \'Blazer [VERSION]\', \'Internet Explorer [VERSION]\', \'Internet Explorer Mobile [VERSION]\', \'Mozilla Firefox [VERSION]\', \'Netscape [VERSION]\', \'Google Chrome [VERSION]\', \'Safari [VERSION]\', \'Galeon [VERSION]\', \'Konqueror [VERSION]\', \'Gecko based\', \'Opera [VERSION]\', \'Lynx [VERSION]\', \'Fennec [VERSION]\', \'Maemo [VERSION]\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_browser is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap" rel="noreferrer">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api" rel="noreferrer">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api" rel="noreferrer">Mobile Detect</a>.',
    ),
    'system:user_browser_simplified' => array(
      'description' => 'System: Browser - Simplified information about user\'s browser. Possible values: \'Blazer\', \'Internet Explorer\', \'Internet Explorer Mobile\', \'Mozilla Firefox\', \'Netscape\', \'Google Chrome\', \'Safari\', \'Galeon\', \'Konqueror\', \'Gecko based\', \'Opera\', \'Lynx\', \'Fennec\', \'Maemo\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_browser_simplified is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap" rel="noreferrer">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api" rel="noreferrer">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api" rel="noreferrer">Mobile Detect</a>.',
    ),
    'system:user_os' => array(
      'description' => 'System: Operating System - Information about user\'s browser. Possible values: \'Windows XP\', \'Windows Vista\', \'Windows 98\', \'Windows 2000\', \'Windows 2003 server\', \'Windows NT\',  \'Windows ME\', \'Windows CE\', \'Windows ME\', \'Windows Phone\', \'iPhone\', \'iPad\', \'Mac OS X\', \'Macintosh\', \'Linux\', \'Free BSD\', \'Symbian\', \'webOS\', \'Android\', \'Blackberry\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_os is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap" rel="noreferrer">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api" rel="noreferrer">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api" rel="noreferrer">Mobile Detect</a>.',
    ),
    'system:user_os_simplified' => array(
      'description' => 'System: Operating System - Simplified information about user\'s browser. Possible values: \'Windows\', \'Windows Phone\', \'iPhone\', \'iPad\', \'Mac OS X\', \'Macintosh\', \'Linux\', \'Free BSD\', \'Symbian\', \'webOS\', \'Android\', \'Blackberry\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_os_simplified is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap" rel="noreferrer">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api" rel="noreferrer">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api" rel="noreferrer">Mobile Detect</a>.',
    ),
    'taxonomy:name' => array(
      'description' => 'Taxonomy: Name - The term name (name) of a taxonomy term without support for translations.',
      'validator' => '',
      'page cache' => 1,
    ),
    'taxonomy:tid' => array(
      'description' => 'Taxonomy: Term - The term id (tid) of a taxonomy term.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'taxonomy:tid_and_childs' => array(
      'description' => 'Taxonomy: Term and its childs - The term id (tid) of a taxonomy term. If set, all child terms of this term will be used too.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 0,
    ),
    'taxonomy:vid' => array(
      'description' => 'Taxonomy: Vocabulary - The vocabulary id (vid) of a taxonomy vocabulary. See <a href="/admin/structure/taxonomy">admin/structure/taxonomy</a> for your vocabularies.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'themekey_ui:author_triggers_theme' => array(
      'description' => 'The property, themekey_ui:author_triggers_theme, could not be selected from the property drop down. You get this static property by activating <a href="/admin/config/user-interface/themekey/settings/ui">Let the user select a theme that will be used to display all content she creates.</a>. Afterwards, you can move the property to any position in the rule chain. When done, it triggers the switch to the theme the author selected in her user profile for own content, a contact form or blog pages.',
      'page cache' => 1,
      'static' => TRUE,
    ),
    'themekey_ui:node_triggers_theme' => array(
      'description' => 'The property, themekey_ui:node_triggers_theme, could not be selected from the property drop-down. You get this static property by activating <a href="/admin/config/user-interface/themekey/settings/ui">Show theme option in create/edit node forms</a>. Afterwards, you can move the property to any position in the rule chain. When done, it triggers the switch to the theme assigned to the current node using ThemeKey UI.',
      'page cache' => 1,
      'static' => TRUE,
    ),
    'user:hostname' => array(
      'description' => 'User: Hostname - The user hostname property which is the IP address of client machine, adjusted for reverse proxy. Text from Drupal bootstrap.inc:
      If Drupal is behind a reverse proxy, we use the X-Forwarded-For header instead of $_SERVER[\'REMOTE_ADDR\'], which would be the IP address of the proxy server, and not the client\'s.',
      'validator' => 'themekey_validator_http_host',
      'page cache' => 0,
    ),
    'user:language' => array(
      'description' => 'User: Language - The language the user has set in the settings of his profile page.
      Format is the language code (for example "en" for English or "de" for German) that can be found on <a href="/admin/config/regional/language/overview">admin/config/regional/language/overview</a>.',
      'validator' => 'themekey_validator_language',
      'page cache' => 1,
    ),
    'user:name' => array(
      'description' => 'User: Name - The username of the user. See <a href="/admin/people/people">admin/people/people</a> for your users.',
      'page cache' => 1,
    ),
    'user:role' => array(
      'description' => 'User: Role - Defined user roles (examples: \'anonymous user\', \'authenticated user\')',
      'validator' => 'themekey_validator_role',
      'page cache' => 1,
    ),
    'user:uid' => array(
      'description' => 'User: ID - The id of the user (uid). The user id can be found in the URL of the users profile page, "user/23" or "user/23/edit" (23 = uid). See <a href="/admin/people/people">admin/people/people</a> for your users.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'views:human_name' => array(
      'description' => 'Views: Human Name - The (human readable) name of a view',
      'page cache' => 1,
    ),
    'views:machine_name' => array(
      'description' => 'Views: Machine Name - The machine name of a view',
      'page cache' => 1,
    ),
    'views:vid' => array(
      'description' => 'Views: VID - The vid of a view (vid)',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
  );
  $export['themekey_attributes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_cron_rules_processed';
  $strongarm->value = array();
  $export['themekey_cron_rules_processed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_maps';
  $strongarm->value = array(
    0 => array(
      'src' => 'comment:cid',
      'dst' => 'node:nid',
      'callback' => 'themekey_comment_cid2nid',
    ),
    1 => array(
      'src' => 'node:nid',
      'dst' => 'node:changed',
      'callback' => 'themekey_node_nid2changed',
    ),
    2 => array(
      'src' => 'node:nid',
      'dst' => 'node:created',
      'callback' => 'themekey_node_nid2created',
    ),
    3 => array(
      'src' => 'node:changed',
      'dst' => 'node:changed_date_time',
      'callback' => 'themekey_node_timestamp2datetime',
    ),
    4 => array(
      'src' => 'node:created',
      'dst' => 'node:created_date_time',
      'callback' => 'themekey_node_timestamp2datetime',
    ),
    5 => array(
      'src' => 'node:changed',
      'dst' => 'node:changed_date',
      'callback' => 'themekey_node_timestamp2date',
    ),
    6 => array(
      'src' => 'node:created',
      'dst' => 'node:created_date',
      'callback' => 'themekey_node_timestamp2date',
    ),
    7 => array(
      'src' => 'node:nid',
      'dst' => 'node:language',
      'callback' => 'themekey_node_nid2language',
    ),
    8 => array(
      'src' => 'node:nid',
      'dst' => 'node:vid',
      'callback' => 'themekey_node_nid2vid',
    ),
    9 => array(
      'src' => 'node:nid',
      'dst' => 'node:promote',
      'callback' => 'themekey_node_nid2promote',
    ),
    10 => array(
      'src' => 'node:nid',
      'dst' => 'node:sticky',
      'callback' => 'themekey_node_nid2sticky',
    ),
    11 => array(
      'src' => 'node:nid',
      'dst' => 'node:type',
      'callback' => 'themekey_node_nid2type',
    ),
    12 => array(
      'src' => 'node:nid',
      'dst' => 'node:uid',
      'callback' => 'themekey_node_nid2uid',
    ),
    13 => array(
      'src' => 'node:nid',
      'dst' => 'node:title',
      'callback' => 'themekey_node_nid2title',
    ),
    14 => array(
      'src' => 'drupal:get_q',
      'dst' => 'node:type',
      'callback' => 'themekey_node_get_q2type',
    ),
    15 => array(
      'src' => 'node:nid',
      'dst' => 'node:body_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'body',
        'type' => 'text_with_summary',
        'column' => 'value',
        'translatable' => '1',
      ),
    ),
    16 => array(
      'src' => 'node:nid',
      'dst' => 'node:body_summary',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'body',
        'type' => 'text_with_summary',
        'column' => 'summary',
        'translatable' => '1',
      ),
    ),
    17 => array(
      'src' => 'node:nid',
      'dst' => 'node:body_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'body',
        'type' => 'text_with_summary',
        'column' => 'format',
        'translatable' => '1',
      ),
    ),
    18 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_additional_content_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_additional_content',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    19 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_additional_content_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_additional_content',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    20 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_country',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address',
        'type' => 'addressfield',
        'column' => 'country',
        'translatable' => '0',
      ),
    ),
    21 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_administrative_area',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address',
        'type' => 'addressfield',
        'column' => 'administrative_area',
        'translatable' => '0',
      ),
    ),
    22 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_sub_administrative_area',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address',
        'type' => 'addressfield',
        'column' => 'sub_administrative_area',
        'translatable' => '0',
      ),
    ),
    23 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_locality',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address',
        'type' => 'addressfield',
        'column' => 'locality',
        'translatable' => '0',
      ),
    ),
    24 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_dependent_locality',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address',
        'type' => 'addressfield',
        'column' => 'dependent_locality',
        'translatable' => '0',
      ),
    ),
    25 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_postal_code',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address',
        'type' => 'addressfield',
        'column' => 'postal_code',
        'translatable' => '0',
      ),
    ),
    26 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_thoroughfare',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address',
        'type' => 'addressfield',
        'column' => 'thoroughfare',
        'translatable' => '0',
      ),
    ),
    27 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_premise',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address',
        'type' => 'addressfield',
        'column' => 'premise',
        'translatable' => '0',
      ),
    ),
    28 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_sub_premise',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address',
        'type' => 'addressfield',
        'column' => 'sub_premise',
        'translatable' => '0',
      ),
    ),
    29 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_organisation_name',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address',
        'type' => 'addressfield',
        'column' => 'organisation_name',
        'translatable' => '0',
      ),
    ),
    30 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_name_line',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address',
        'type' => 'addressfield',
        'column' => 'name_line',
        'translatable' => '0',
      ),
    ),
    31 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_first_name',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address',
        'type' => 'addressfield',
        'column' => 'first_name',
        'translatable' => '0',
      ),
    ),
    32 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_last_name',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address',
        'type' => 'addressfield',
        'column' => 'last_name',
        'translatable' => '0',
      ),
    ),
    33 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_data',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address',
        'type' => 'addressfield',
        'column' => 'data',
        'translatable' => '0',
      ),
    ),
    34 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_article_type_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_article_type',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    35 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_attachments_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_attachments',
        'type' => 'file',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    36 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_attachments_display',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_attachments',
        'type' => 'file',
        'column' => 'display',
        'translatable' => '0',
      ),
    ),
    37 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_attachments_description',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_attachments',
        'type' => 'file',
        'column' => 'description',
        'translatable' => '0',
      ),
    ),
    38 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_call_to_action_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_call_to_action',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    39 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_cycling_type_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_cycling_type',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    40 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_exclude_from_main_feeds_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_exclude_from_main_feeds',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    41 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_further_reading_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_further_reading',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    42 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gallery_image_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gallery_image',
        'type' => 'image',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    43 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gallery_image_alt',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gallery_image',
        'type' => 'image',
        'column' => 'alt',
        'translatable' => '0',
      ),
    ),
    44 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gallery_image_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gallery_image',
        'type' => 'image',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    45 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gallery_image_width',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gallery_image',
        'type' => 'image',
        'column' => 'width',
        'translatable' => '0',
      ),
    ),
    46 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gallery_image_height',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gallery_image',
        'type' => 'image',
        'column' => 'height',
        'translatable' => '0',
      ),
    ),
    47 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gpx_files_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gpx_files',
        'type' => 'file',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    48 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gpx_files_display',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gpx_files',
        'type' => 'file',
        'column' => 'display',
        'translatable' => '0',
      ),
    ),
    49 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gpx_files_description',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gpx_files',
        'type' => 'file',
        'column' => 'description',
        'translatable' => '0',
      ),
    ),
    50 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gpx_map_geom',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gpx_map',
        'type' => 'geofield',
        'column' => 'geom',
        'translatable' => '0',
      ),
    ),
    51 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gpx_map_geo_type',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gpx_map',
        'type' => 'geofield',
        'column' => 'geo_type',
        'translatable' => '0',
      ),
    ),
    52 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gpx_map_lat',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gpx_map',
        'type' => 'geofield',
        'column' => 'lat',
        'translatable' => '0',
      ),
    ),
    53 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gpx_map_lon',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gpx_map',
        'type' => 'geofield',
        'column' => 'lon',
        'translatable' => '0',
      ),
    ),
    54 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gpx_map_left',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gpx_map',
        'type' => 'geofield',
        'column' => 'left',
        'translatable' => '0',
      ),
    ),
    55 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gpx_map_top',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gpx_map',
        'type' => 'geofield',
        'column' => 'top',
        'translatable' => '0',
      ),
    ),
    56 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gpx_map_right',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gpx_map',
        'type' => 'geofield',
        'column' => 'right',
        'translatable' => '0',
      ),
    ),
    57 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gpx_map_bottom',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gpx_map',
        'type' => 'geofield',
        'column' => 'bottom',
        'translatable' => '0',
      ),
    ),
    58 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_gpx_map_geohash',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_gpx_map',
        'type' => 'geofield',
        'column' => 'geohash',
        'translatable' => '0',
      ),
    ),
    59 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_location_geom',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_location',
        'type' => 'geofield',
        'column' => 'geom',
        'translatable' => '0',
      ),
    ),
    60 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_location_geo_type',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_location',
        'type' => 'geofield',
        'column' => 'geo_type',
        'translatable' => '0',
      ),
    ),
    61 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_location_lat',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_location',
        'type' => 'geofield',
        'column' => 'lat',
        'translatable' => '0',
      ),
    ),
    62 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_location_lon',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_location',
        'type' => 'geofield',
        'column' => 'lon',
        'translatable' => '0',
      ),
    ),
    63 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_location_left',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_location',
        'type' => 'geofield',
        'column' => 'left',
        'translatable' => '0',
      ),
    ),
    64 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_location_top',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_location',
        'type' => 'geofield',
        'column' => 'top',
        'translatable' => '0',
      ),
    ),
    65 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_location_right',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_location',
        'type' => 'geofield',
        'column' => 'right',
        'translatable' => '0',
      ),
    ),
    66 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_location_bottom',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_location',
        'type' => 'geofield',
        'column' => 'bottom',
        'translatable' => '0',
      ),
    ),
    67 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_location_geohash',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_location',
        'type' => 'geofield',
        'column' => 'geohash',
        'translatable' => '0',
      ),
    ),
    68 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_post_type_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_post_type',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    69 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_contact_information_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_contact_information',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    70 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_contact_information_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_contact_information',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    71 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_notes_to_editors_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_notes_to_editors',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    72 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_notes_to_editors_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_notes_to_editors',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    73 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_tags_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_tags',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    74 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_teaser_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_teaser',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    75 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_teaser_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_teaser',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    76 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_date_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_date',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    77 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_image_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_image',
        'type' => 'image',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    78 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_image_alt',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_image',
        'type' => 'image',
        'column' => 'alt',
        'translatable' => '0',
      ),
    ),
    79 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_image_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_image',
        'type' => 'image',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    80 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_image_width',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_image',
        'type' => 'image',
        'column' => 'width',
        'translatable' => '0',
      ),
    ),
    81 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_image_height',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_image',
        'type' => 'image',
        'column' => 'height',
        'translatable' => '0',
      ),
    ),
    82 => array(
      'src' => 'node:nid',
      'dst' => 'node:field__cost_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field__cost',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    83 => array(
      'src' => 'node:nid',
      'dst' => 'node:field__cost_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field__cost',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    84 => array(
      'src' => 'node:nid',
      'dst' => 'node:field__location_details_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field__location_details',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    85 => array(
      'src' => 'node:nid',
      'dst' => 'node:field__location_details_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field__location_details',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    86 => array(
      'src' => 'node:nid',
      'dst' => 'node:field__volunteer_form_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field__volunteer_form',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    87 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_about_centre_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_about_centre',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    88 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_about_centre_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_about_centre',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    89 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_area_covered_geom',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_area_covered',
        'type' => 'geofield',
        'column' => 'geom',
        'translatable' => '0',
      ),
    ),
    90 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_area_covered_geo_type',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_area_covered',
        'type' => 'geofield',
        'column' => 'geo_type',
        'translatable' => '0',
      ),
    ),
    91 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_area_covered_lat',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_area_covered',
        'type' => 'geofield',
        'column' => 'lat',
        'translatable' => '0',
      ),
    ),
    92 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_area_covered_lon',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_area_covered',
        'type' => 'geofield',
        'column' => 'lon',
        'translatable' => '0',
      ),
    ),
    93 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_area_covered_left',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_area_covered',
        'type' => 'geofield',
        'column' => 'left',
        'translatable' => '0',
      ),
    ),
    94 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_area_covered_top',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_area_covered',
        'type' => 'geofield',
        'column' => 'top',
        'translatable' => '0',
      ),
    ),
    95 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_area_covered_right',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_area_covered',
        'type' => 'geofield',
        'column' => 'right',
        'translatable' => '0',
      ),
    ),
    96 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_area_covered_bottom',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_area_covered',
        'type' => 'geofield',
        'column' => 'bottom',
        'translatable' => '0',
      ),
    ),
    97 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_area_covered_geohash',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_area_covered',
        'type' => 'geofield',
        'column' => 'geohash',
        'translatable' => '0',
      ),
    ),
    98 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_centre_activities_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_centre_activities',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    99 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_centre_facilities_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_centre_facilities',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    100 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_extra_contact_details_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_extra_contact_details',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    101 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_extra_contact_details_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_extra_contact_details',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    102 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_facility_details_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_facility_details',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    103 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_facility_details_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_facility_details',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    104 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_contact_name_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_contact_name',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    105 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_contact_name_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_contact_name',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    106 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_files_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_files',
        'type' => 'file',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    107 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_files_display',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_files',
        'type' => 'file',
        'column' => 'display',
        'translatable' => '0',
      ),
    ),
    108 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_files_description',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_files',
        'type' => 'file',
        'column' => 'description',
        'translatable' => '0',
      ),
    ),
    109 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_org_member_no_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_org_member_no',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    110 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_org_member_no_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_org_member_no',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    111 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_owner_member_no_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_owner_member_no',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    112 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_owner_member_no_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_owner_member_no',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    113 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_phone_number_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_phone_number',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    114 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_phone_number_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_phone_number',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    115 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_website_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_website',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    116 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_website_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_website',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    117 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_website_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_website',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    118 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_welcome_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_welcome',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    119 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_welcome_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_welcome',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    120 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_image_gallery_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_image_gallery',
        'type' => 'image',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    121 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_image_gallery_alt',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_image_gallery',
        'type' => 'image',
        'column' => 'alt',
        'translatable' => '0',
      ),
    ),
    122 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_image_gallery_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_image_gallery',
        'type' => 'image',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    123 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_image_gallery_width',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_image_gallery',
        'type' => 'image',
        'column' => 'width',
        'translatable' => '0',
      ),
    ),
    124 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_image_gallery_height',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_image_gallery',
        'type' => 'image',
        'column' => 'height',
        'translatable' => '0',
      ),
    ),
    125 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_links_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_links',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    126 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_links_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_links',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    127 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_links_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_links',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    128 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_opening_times_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_opening_times',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    129 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_opening_times_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_opening_times',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    130 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_partner_logo_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_partner_logo',
        'type' => 'image',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    131 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_partner_logo_alt',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_partner_logo',
        'type' => 'image',
        'column' => 'alt',
        'translatable' => '0',
      ),
    ),
    132 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_partner_logo_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_partner_logo',
        'type' => 'image',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    133 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_partner_logo_width',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_partner_logo',
        'type' => 'image',
        'column' => 'width',
        'translatable' => '0',
      ),
    ),
    134 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_partner_logo_height',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_partner_logo',
        'type' => 'image',
        'column' => 'height',
        'translatable' => '0',
      ),
    ),
    135 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_renewal_date_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_renewal_date',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    136 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_volunteer_form_external_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_volunteer_form_external',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    137 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_volunteer_form_external_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_volunteer_form_external',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    138 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_volunteer_form_external_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_volunteer_form_external',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    139 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_volunteer_opportunities_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_volunteer_opportunities',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    140 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_volunteer_opportunities_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_volunteer_opportunities',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    141 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_activities_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_activities',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    142 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_image_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_image',
        'type' => 'image',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    143 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_image_alt',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_image',
        'type' => 'image',
        'column' => 'alt',
        'translatable' => '0',
      ),
    ),
    144 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_image_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_image',
        'type' => 'image',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    145 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_image_width',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_image',
        'type' => 'image',
        'column' => 'width',
        'translatable' => '0',
      ),
    ),
    146 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_image_height',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_image',
        'type' => 'image',
        'column' => 'height',
        'translatable' => '0',
      ),
    ),
    147 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_parent_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_parent',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    148 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_postcodes_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_postcodes',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    149 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_postcodes_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_postcodes',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    150 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_region_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_region',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    151 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_region_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_region',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    152 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_ride_info_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_ride_info',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    153 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_ride_info_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_ride_info',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    154 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_ride_programme_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_ride_programme',
        'type' => 'file',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    155 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_ride_programme_display',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_ride_programme',
        'type' => 'file',
        'column' => 'display',
        'translatable' => '0',
      ),
    ),
    156 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_ride_programme_description',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_ride_programme',
        'type' => 'file',
        'column' => 'description',
        'translatable' => '0',
      ),
    ),
    157 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_type_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_type',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    158 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_markup_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_markup',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    159 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_markup_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_markup',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    160 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_activities_available_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_activities_available',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    161 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_activities_available_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_activities_available',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    162 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_caption_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_caption',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    163 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_caption_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_caption',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    164 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_contact_email_email',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_contact_email',
        'type' => 'email',
        'column' => 'email',
        'translatable' => '0',
      ),
    ),
    165 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_inclusive_cycling_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_inclusive_cycling',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    166 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_about_the_group_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_about_the_group',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    167 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_about_the_group_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_about_the_group',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    168 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_hero_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_hero',
        'type' => 'file',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    169 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_hero_display',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_hero',
        'type' => 'file',
        'column' => 'display',
        'translatable' => '0',
      ),
    ),
    170 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_hero_description',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_hero',
        'type' => 'file',
        'column' => 'description',
        'translatable' => '0',
      ),
    ),
    171 => array(
      'src' => 'node:nid',
      'dst' => 'node:group_group_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'group_group',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    172 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_information_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address_information',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    173 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_address_information_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_address_information',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    174 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_cancelled_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_cancelled',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    175 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_contact_email_email',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_contact_email',
        'type' => 'email',
        'column' => 'email',
        'translatable' => '0',
      ),
    ),
    176 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_contact_name_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_contact_name',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    177 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_contact_name_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_contact_name',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    178 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_contact_number_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_contact_number',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    179 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_contact_number_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_contact_number',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    180 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_cost_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_cost',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    181 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_cost_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_cost',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    182 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_grid_reference_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_grid_reference',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    183 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_grid_reference_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_grid_reference',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    184 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_link_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_link',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    185 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_link_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_link',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    186 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_link_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_link',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    187 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_postcode_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_postcode',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    188 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_postcode_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_postcode',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    189 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_ride_type_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_ride_type',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    190 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_town_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_town',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    191 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_town_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_town',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    192 => array(
      'src' => 'node:nid',
      'dst' => 'node:og_group_ref_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'og_group_ref',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    193 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_campaign_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_campaign',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    194 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_status_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_status',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    195 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_old_nid_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_old_nid',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    196 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_issuu_embed_code_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_issuu_embed_code',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    197 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_issuu_embed_code_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_issuu_embed_code',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    198 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_magazine_cover_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_magazine_cover',
        'type' => 'image',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    199 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_magazine_cover_alt',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_magazine_cover',
        'type' => 'image',
        'column' => 'alt',
        'translatable' => '0',
      ),
    ),
    200 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_magazine_cover_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_magazine_cover',
        'type' => 'image',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    201 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_magazine_cover_width',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_magazine_cover',
        'type' => 'image',
        'column' => 'width',
        'translatable' => '0',
      ),
    ),
    202 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_magazine_cover_height',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_magazine_cover',
        'type' => 'image',
        'column' => 'height',
        'translatable' => '0',
      ),
    ),
    203 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_pdf_copies_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_pdf_copies',
        'type' => 'file',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    204 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_pdf_copies_display',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_pdf_copies',
        'type' => 'file',
        'column' => 'display',
        'translatable' => '0',
      ),
    ),
    205 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_pdf_copies_description',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_pdf_copies',
        'type' => 'file',
        'column' => 'description',
        'translatable' => '0',
      ),
    ),
    206 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_soundcloud_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_soundcloud',
        'type' => 'media',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    207 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_soundcloud_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_soundcloud',
        'type' => 'media',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    208 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_soundcloud_data',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_soundcloud',
        'type' => 'media',
        'column' => 'data',
        'translatable' => '0',
      ),
    ),
    209 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_event_facilities_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_event_facilities',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    210 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_event_type_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_event_type',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    211 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_risk_assessment_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_risk_assessment',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    212 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_contact_address_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_contact_address',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    213 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_contact_address_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_contact_address',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    214 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_event_ride_audax_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_event_ride_audax',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    215 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_link_booknow_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_link_booknow',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    216 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_link_booknow_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_link_booknow',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    217 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_link_booknow_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_link_booknow',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    218 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_paypal_code_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_paypal_code',
        'type' => 'text_with_summary',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    219 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_paypal_code_summary',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_paypal_code',
        'type' => 'text_with_summary',
        'column' => 'summary',
        'translatable' => '0',
      ),
    ),
    220 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_paypal_code_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_paypal_code',
        'type' => 'text_with_summary',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    221 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rides_and_activities_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rides_and_activities',
        'type' => 'field_collection',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    222 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rides_and_activities_revision_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rides_and_activities',
        'type' => 'field_collection',
        'column' => 'revision_id',
        'translatable' => '0',
      ),
    ),
    223 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_redirect_link_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_redirect_link',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    224 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_redirect_link_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_redirect_link',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    225 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_redirect_link_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_redirect_link',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    226 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_page_management_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_page_management',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    227 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_review_comments_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_review_comments',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    228 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_review_comments_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_review_comments',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    229 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_review_date_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_review_date',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    230 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_cycling_uk_section_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_cycling_uk_section',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    231 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_publication_type_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_publication_type',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    232 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_campaign_call_to_action_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_campaign_call_to_action',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    233 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_campaign_call_to_action_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_campaign_call_to_action',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    234 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_campaign_call_to_action_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_campaign_call_to_action',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    235 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_historic_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_historic',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    236 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_twitter_tag_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_twitter_tag',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    237 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_twitter_tag_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_twitter_tag',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    238 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_headline_message_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_headline_message',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    239 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_headline_message_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_headline_message',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    240 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_story_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_story',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    241 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_cycling_uk_view_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_cycling_uk_view',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    242 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_cycling_uk_view_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_cycling_uk_view',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    243 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_policy_key_facts_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_policy_key_facts',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    244 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_policy_key_facts_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_policy_key_facts',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    245 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_publication_date_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_publication_date',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    246 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_member_only_content_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_member_only_content',
        'type' => 'text_with_summary',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    247 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_member_only_content_summary',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_member_only_content',
        'type' => 'text_with_summary',
        'column' => 'summary',
        'translatable' => '0',
      ),
    ),
    248 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_member_only_content_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_member_only_content',
        'type' => 'text_with_summary',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    249 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_dates_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_dates',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    250 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_dates_value2',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_dates',
        'type' => 'datetime',
        'column' => 'value2',
        'translatable' => '0',
      ),
    ),
    251 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_residential_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_residential',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    252 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_status_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_status',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    253 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_price_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_price',
        'type' => 'number_decimal',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    254 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_booking_code_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_booking_code',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    255 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_booking_code_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_booking_code',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    256 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_booking_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_booking',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    257 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_booking_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_booking',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    258 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_booking_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_booking',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    259 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_notes_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_notes',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    260 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_notes_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_notes',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    261 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_files_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_files',
        'type' => 'file',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    262 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_files_display',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_files',
        'type' => 'file',
        'column' => 'display',
        'translatable' => '0',
      ),
    ),
    263 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_files_description',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_files',
        'type' => 'file',
        'column' => 'description',
        'translatable' => '0',
      ),
    ),
    264 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_type_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_type',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    265 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_venue_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_venue',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    266 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_key_content_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_key_content',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    267 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_key_content_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_key_content',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    268 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_outcomes_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_outcomes',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    269 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_outcomes_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_outcomes',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    270 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_availability_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_availability',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    271 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_duration_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_duration',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    272 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_duration_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_duration',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    273 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_terrain_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_terrain',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    274 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_terrain_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_terrain',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    275 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_fitness_level_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_fitness_level',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    276 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_fitness_level_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_fitness_level',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    277 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_group_size_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_group_size',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    278 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_group_size_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_group_size',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    279 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_skill_level_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_skill_level',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    280 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_skill_level_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_skill_level',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    281 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_price_summary_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_price_summary',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    282 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_price_summary_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_price_summary',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    283 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_assessment_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_assessment',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    284 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_assessment_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_assessment',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    285 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_tutor_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_tutor',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    286 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_tutor_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_tutor',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    287 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_prerequisite_courses_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_prerequisite_courses',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    288 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_feed_in_courses_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_feed_in_courses',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    289 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_prerequisites_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_prerequisites',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    290 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_prerequisites_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_prerequisites',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    291 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_progression_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_progression',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    292 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_progression_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_progression',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    293 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_resources_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_resources',
        'type' => 'file',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    294 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_resources_display',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_resources',
        'type' => 'file',
        'column' => 'display',
        'translatable' => '0',
      ),
    ),
    295 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_resources_description',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_resources',
        'type' => 'file',
        'column' => 'description',
        'translatable' => '0',
      ),
    ),
    296 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_venue_type_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_venue_type',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    297 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_cycling_uk_venue_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_cycling_uk_venue',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    298 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_venue_address_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_venue_address',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    299 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_venue_address_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_venue_address',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    300 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_venue_telephone_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_venue_telephone',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    301 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_venue_telephone_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_venue_telephone',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    302 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_venue_website_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_venue_website',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    303 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_venue_website_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_venue_website',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    304 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_venue_website_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_venue_website',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    305 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_venue_email_email',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_venue_email',
        'type' => 'email',
        'column' => 'email',
        'translatable' => '0',
      ),
    ),
    306 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_venue_accommodation_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_venue_accommodation',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    307 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_venue_accommodation_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_venue_accommodation',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    308 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_data_protection_statement_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_data_protection_statement',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    309 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_data_protection_statement_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_data_protection_statement',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    310 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_terms_and_conditions_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_terms_and_conditions',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    311 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_terms_and_conditions_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_terms_and_conditions',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    312 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_accordion_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_accordion',
        'type' => 'field_collection',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    313 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_accordion_revision_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_accordion',
        'type' => 'field_collection',
        'column' => 'revision_id',
        'translatable' => '0',
      ),
    ),
    314 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_editorial_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_editorial',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    315 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_welcome_message_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_welcome_message',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    316 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_welcome_message_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_welcome_message',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    317 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_tro_local_authority_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_tro_local_authority',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    318 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_tro_status_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_tro_status',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    319 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_tro_subject_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_tro_subject',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    320 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_tro_type_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_tro_type',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    321 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_body_bottom_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_body_bottom',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    322 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_body_bottom_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_body_bottom',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    323 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_webform_email_email',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_webform_email',
        'type' => 'email',
        'column' => 'email',
        'translatable' => '0',
      ),
    ),
    324 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_body_middle_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_body_middle',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    325 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_body_middle_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_body_middle',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    326 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_distance_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_distance',
        'type' => 'mvf_number_integer_entityreference',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    327 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_distance_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_distance',
        'type' => 'mvf_number_integer_entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    328 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_remove_child_page_links_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_remove_child_page_links',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    329 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_redirect_website_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_redirect_website',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    330 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_view_ref_1_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_view_ref_1',
        'type' => 'field_collection',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    331 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_view_ref_1_revision_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_view_ref_1',
        'type' => 'field_collection',
        'column' => 'revision_id',
        'translatable' => '0',
      ),
    ),
    332 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_view_ref_2_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_view_ref_2',
        'type' => 'field_collection',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    333 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_view_ref_2_revision_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_view_ref_2',
        'type' => 'field_collection',
        'column' => 'revision_id',
        'translatable' => '0',
      ),
    ),
    334 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_title_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_title',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    335 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_title_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_title',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    336 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_feed_item_description_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_feed_item_description',
        'type' => 'text_with_summary',
        'column' => 'value',
        'translatable' => '1',
      ),
    ),
    337 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_feed_item_description_summary',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_feed_item_description',
        'type' => 'text_with_summary',
        'column' => 'summary',
        'translatable' => '1',
      ),
    ),
    338 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_feed_item_description_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_feed_item_description',
        'type' => 'text_with_summary',
        'column' => 'format',
        'translatable' => '1',
      ),
    ),
    339 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_date_ride_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_date_ride',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    340 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_date_ride_value2',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_date_ride',
        'type' => 'datetime',
        'column' => 'value2',
        'translatable' => '0',
      ),
    ),
    341 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_date_ride_rrule',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_date_ride',
        'type' => 'datetime',
        'column' => 'rrule',
        'translatable' => '0',
      ),
    ),
    342 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_closing_date_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_closing_date',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    343 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_announcement_type_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_announcement_type',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    344 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_partners_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_partners',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    345 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_partners_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_partners',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    346 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_facebook_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_facebook',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    347 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_facebook_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_facebook',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    348 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_facebook_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_facebook',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    349 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_instagram_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_instagram',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    350 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_instagram_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_instagram',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    351 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_instagram_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_instagram',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    352 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_twitter_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_twitter',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    353 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_twitter_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_twitter',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    354 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_twitter_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_twitter',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    355 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_position_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_position',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    356 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_body_top_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_body_top',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    357 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_body_top_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_body_top',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    358 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_promoted_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_promoted',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    359 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_video_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_video',
        'type' => 'media',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    360 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_video_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_video',
        'type' => 'media',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    361 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_video_data',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_video',
        'type' => 'media',
        'column' => 'data',
        'translatable' => '0',
      ),
    ),
    362 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_author_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_author',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    363 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_author_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_author',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    364 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_bike_type_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_bike_type',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    365 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_circular_route_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_circular_route',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    366 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_address_geom',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_address',
        'type' => 'geofield',
        'column' => 'geom',
        'translatable' => '0',
      ),
    ),
    367 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_address_geo_type',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_address',
        'type' => 'geofield',
        'column' => 'geo_type',
        'translatable' => '0',
      ),
    ),
    368 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_address_lat',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_address',
        'type' => 'geofield',
        'column' => 'lat',
        'translatable' => '0',
      ),
    ),
    369 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_address_lon',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_address',
        'type' => 'geofield',
        'column' => 'lon',
        'translatable' => '0',
      ),
    ),
    370 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_address_left',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_address',
        'type' => 'geofield',
        'column' => 'left',
        'translatable' => '0',
      ),
    ),
    371 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_address_top',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_address',
        'type' => 'geofield',
        'column' => 'top',
        'translatable' => '0',
      ),
    ),
    372 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_address_right',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_address',
        'type' => 'geofield',
        'column' => 'right',
        'translatable' => '0',
      ),
    ),
    373 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_address_bottom',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_address',
        'type' => 'geofield',
        'column' => 'bottom',
        'translatable' => '0',
      ),
    ),
    374 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_address_geohash',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_address',
        'type' => 'geofield',
        'column' => 'geohash',
        'translatable' => '0',
      ),
    ),
    375 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_link_to_articles_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_link_to_articles',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    376 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_link_to_author_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_link_to_author',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    377 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_link_to_author_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_link_to_author',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    378 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_link_to_author_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_link_to_author',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    379 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_related_county_guides_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_related_county_guides',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    380 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_ride_level_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_ride_level',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    381 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_route_features_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_route_features',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    382 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_route_length_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_route_length',
        'type' => 'number_decimal',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    383 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_address_geom',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_address',
        'type' => 'geofield',
        'column' => 'geom',
        'translatable' => '0',
      ),
    ),
    384 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_address_geo_type',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_address',
        'type' => 'geofield',
        'column' => 'geo_type',
        'translatable' => '0',
      ),
    ),
    385 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_address_lat',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_address',
        'type' => 'geofield',
        'column' => 'lat',
        'translatable' => '0',
      ),
    ),
    386 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_address_lon',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_address',
        'type' => 'geofield',
        'column' => 'lon',
        'translatable' => '0',
      ),
    ),
    387 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_address_left',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_address',
        'type' => 'geofield',
        'column' => 'left',
        'translatable' => '0',
      ),
    ),
    388 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_address_top',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_address',
        'type' => 'geofield',
        'column' => 'top',
        'translatable' => '0',
      ),
    ),
    389 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_address_right',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_address',
        'type' => 'geofield',
        'column' => 'right',
        'translatable' => '0',
      ),
    ),
    390 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_address_bottom',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_address',
        'type' => 'geofield',
        'column' => 'bottom',
        'translatable' => '0',
      ),
    ),
    391 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_address_geohash',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_address',
        'type' => 'geofield',
        'column' => 'geohash',
        'translatable' => '0',
      ),
    ),
    392 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_location_geom',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_location',
        'type' => 'geofield',
        'column' => 'geom',
        'translatable' => '0',
      ),
    ),
    393 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_location_geo_type',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_location',
        'type' => 'geofield',
        'column' => 'geo_type',
        'translatable' => '0',
      ),
    ),
    394 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_location_lat',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_location',
        'type' => 'geofield',
        'column' => 'lat',
        'translatable' => '0',
      ),
    ),
    395 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_location_lon',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_location',
        'type' => 'geofield',
        'column' => 'lon',
        'translatable' => '0',
      ),
    ),
    396 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_location_left',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_location',
        'type' => 'geofield',
        'column' => 'left',
        'translatable' => '0',
      ),
    ),
    397 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_location_top',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_location',
        'type' => 'geofield',
        'column' => 'top',
        'translatable' => '0',
      ),
    ),
    398 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_location_right',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_location',
        'type' => 'geofield',
        'column' => 'right',
        'translatable' => '0',
      ),
    ),
    399 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_location_bottom',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_location',
        'type' => 'geofield',
        'column' => 'bottom',
        'translatable' => '0',
      ),
    ),
    400 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_finish_location_geohash',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_finish_location',
        'type' => 'geofield',
        'column' => 'geohash',
        'translatable' => '0',
      ),
    ),
    401 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_location_geom',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_location',
        'type' => 'geofield',
        'column' => 'geom',
        'translatable' => '0',
      ),
    ),
    402 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_location_geo_type',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_location',
        'type' => 'geofield',
        'column' => 'geo_type',
        'translatable' => '0',
      ),
    ),
    403 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_location_lat',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_location',
        'type' => 'geofield',
        'column' => 'lat',
        'translatable' => '0',
      ),
    ),
    404 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_location_lon',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_location',
        'type' => 'geofield',
        'column' => 'lon',
        'translatable' => '0',
      ),
    ),
    405 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_location_left',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_location',
        'type' => 'geofield',
        'column' => 'left',
        'translatable' => '0',
      ),
    ),
    406 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_location_top',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_location',
        'type' => 'geofield',
        'column' => 'top',
        'translatable' => '0',
      ),
    ),
    407 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_location_right',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_location',
        'type' => 'geofield',
        'column' => 'right',
        'translatable' => '0',
      ),
    ),
    408 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_location_bottom',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_location',
        'type' => 'geofield',
        'column' => 'bottom',
        'translatable' => '0',
      ),
    ),
    409 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_start_location_geohash',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_start_location',
        'type' => 'geofield',
        'column' => 'geohash',
        'translatable' => '0',
      ),
    ),
    410 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_shop_node_id_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_shop_node_id',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    411 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_course_category_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_course_category',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    412 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_billboard_paragraph_text_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_billboard_paragraph_text',
        'type' => 'paragraphs',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    413 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_billboard_paragraph_text_revision_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_billboard_paragraph_text',
        'type' => 'paragraphs',
        'column' => 'revision_id',
        'translatable' => '0',
      ),
    ),
    414 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_icons_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_icons',
        'type' => 'paragraphs',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    415 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_icons_revision_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_icons',
        'type' => 'paragraphs',
        'column' => 'revision_id',
        'translatable' => '0',
      ),
    ),
    416 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_subtitle_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_subtitle',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    417 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_subtitle_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_subtitle',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    418 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_button_a_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_button_a',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    419 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_button_a_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_button_a',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    420 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_button_a_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_button_a',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    421 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_button_b_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_button_b',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    422 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_button_b_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_button_b',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    423 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_button_b_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_button_b',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    424 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_banner_image_paragraph_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_banner_image_paragraph',
        'type' => 'paragraphs',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    425 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_banner_image_paragraph_revision_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_banner_image_paragraph',
        'type' => 'paragraphs',
        'column' => 'revision_id',
        'translatable' => '0',
      ),
    ),
    426 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_email_audience_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_email_audience',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    427 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_email_footer_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_email_footer',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    428 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_email_footer_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_email_footer',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    429 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_email_status_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_email_status',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    430 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_reply_to_email_address_email',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_reply_to_email_address',
        'type' => 'email',
        'column' => 'email',
        'translatable' => '0',
      ),
    ),
    431 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_show_on_latest_feed_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_show_on_latest_feed',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    432 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_stories_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_stories',
        'type' => 'paragraphs',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    433 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_stories_revision_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_stories',
        'type' => 'paragraphs',
        'column' => 'revision_id',
        'translatable' => '0',
      ),
    ),
    434 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_active_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_active',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    435 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_email_suppression_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_email_suppression',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    436 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_newsletter_subscribe_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_newsletter_subscribe',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    437 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_group_newsletter_subscribe_value2',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_group_newsletter_subscribe',
        'type' => 'datetime',
        'column' => 'value2',
        'translatable' => '0',
      ),
    ),
    438 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_ice_name_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_ice_name',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    439 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_ice_name_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_ice_name',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    440 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_ice_notes_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_ice_notes',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    441 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_ice_notes_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_ice_notes',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    442 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_ice_phone_number_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_ice_phone_number',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    443 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_ice_phone_number_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_ice_phone_number',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    444 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_membership_type_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_membership_type',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    445 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_membership_type_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_membership_type',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    446 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_organisation_number_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_organisation_number',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    447 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_postal_suppression_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_postal_suppression',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    448 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_address_1_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_address_1',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    449 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_address_1_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_address_1',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    450 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_address_2_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_address_2',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    451 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_address_2_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_address_2',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    452 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_address_3_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_address_3',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    453 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_address_3_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_address_3',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    454 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_contact_number_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_contact_number',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    455 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_country_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_country',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    456 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_country_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_country',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    457 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_county_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_county',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    458 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_county_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_county',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    459 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_email_email',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_email',
        'type' => 'email',
        'column' => 'email',
        'translatable' => '0',
      ),
    ),
    460 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_email_suppression_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_email_suppression',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    461 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_forename_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_forename',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    462 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_forename_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_forename',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    463 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_joined_date_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_joined_date',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    464 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_notes_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_notes',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    465 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_notes_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_notes',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    466 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_postcode_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_postcode',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    467 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_postcode_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_postcode',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    468 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_renewal_date_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_renewal_date',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    469 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_salutation_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_salutation',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    470 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_salutation_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_salutation',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    471 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_status_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_status',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    472 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_surname_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_surname',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    473 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_surname_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_surname',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    474 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_town_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_town',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    475 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_town_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_town',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    476 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_user_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_user',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    477 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_voting_rights_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_voting_rights',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    478 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_welcome_email_sent_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_welcome_email_sent',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    479 => array(
      'src' => 'node:nid',
      'dst' => 'node:title_field_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'title_field',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '1',
      ),
    ),
    480 => array(
      'src' => 'node:nid',
      'dst' => 'node:title_field_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'title_field',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '1',
      ),
    ),
    481 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_local_mobile_number_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_local_mobile_number',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    482 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_local_mobile_number_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_local_mobile_number',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    483 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sub_to_groups_comms_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sub_to_groups_comms',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    484 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sub_to_groups_comms_date_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sub_to_groups_comms_date',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    485 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sub_to_groups_comms_notes_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sub_to_groups_comms_notes',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    486 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sub_to_groups_comms_notes_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sub_to_groups_comms_notes',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    487 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_email_attachments_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_email_attachments',
        'type' => 'file',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    488 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_email_attachments_display',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_email_attachments',
        'type' => 'file',
        'column' => 'display',
        'translatable' => '0',
      ),
    ),
    489 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_email_attachments_description',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_email_attachments',
        'type' => 'file',
        'column' => 'description',
        'translatable' => '0',
      ),
    ),
    490 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_log_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_log',
        'type' => 'field_collection',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    491 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_log_revision_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_log',
        'type' => 'field_collection',
        'column' => 'revision_id',
        'translatable' => '0',
      ),
    ),
    492 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_committee_member_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_committee_member',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    493 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_leader_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_leader',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    494 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_attendance_size_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_attendance_size',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    495 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_contact_organisation_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_contact_organisation',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    496 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_contact_organisation_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_contact_organisation',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    497 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_duration_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_duration',
        'type' => 'number_decimal',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    498 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_insurance_required__value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_insurance_required_',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    499 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_mailing_preferences_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_mailing_preferences',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    500 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_ride_section_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_ride_section',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    501 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_logged_in_content_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_logged_in_content',
        'type' => 'text_with_summary',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    502 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_logged_in_content_summary',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_logged_in_content',
        'type' => 'text_with_summary',
        'column' => 'summary',
        'translatable' => '0',
      ),
    ),
    503 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_logged_in_content_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_logged_in_content',
        'type' => 'text_with_summary',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    504 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_logged_in_attachments_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_logged_in_attachments',
        'type' => 'file',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    505 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_logged_in_attachments_display',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_logged_in_attachments',
        'type' => 'file',
        'column' => 'display',
        'translatable' => '0',
      ),
    ),
    506 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_logged_in_attachments_description',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_logged_in_attachments',
        'type' => 'file',
        'column' => 'description',
        'translatable' => '0',
      ),
    ),
    507 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_rider_out_of_area_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_rider_out_of_area',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    508 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_addressfield_country',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_addressfield',
        'type' => 'addressfield',
        'column' => 'country',
        'translatable' => '0',
      ),
    ),
    509 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_addressfield_administrative_area',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_addressfield',
        'type' => 'addressfield',
        'column' => 'administrative_area',
        'translatable' => '0',
      ),
    ),
    510 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_addressfield_sub_administrative_area',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_addressfield',
        'type' => 'addressfield',
        'column' => 'sub_administrative_area',
        'translatable' => '0',
      ),
    ),
    511 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_addressfield_locality',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_addressfield',
        'type' => 'addressfield',
        'column' => 'locality',
        'translatable' => '0',
      ),
    ),
    512 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_addressfield_dependent_locality',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_addressfield',
        'type' => 'addressfield',
        'column' => 'dependent_locality',
        'translatable' => '0',
      ),
    ),
    513 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_addressfield_postal_code',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_addressfield',
        'type' => 'addressfield',
        'column' => 'postal_code',
        'translatable' => '0',
      ),
    ),
    514 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_addressfield_thoroughfare',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_addressfield',
        'type' => 'addressfield',
        'column' => 'thoroughfare',
        'translatable' => '0',
      ),
    ),
    515 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_addressfield_premise',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_addressfield',
        'type' => 'addressfield',
        'column' => 'premise',
        'translatable' => '0',
      ),
    ),
    516 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_addressfield_sub_premise',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_addressfield',
        'type' => 'addressfield',
        'column' => 'sub_premise',
        'translatable' => '0',
      ),
    ),
    517 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_addressfield_organisation_name',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_addressfield',
        'type' => 'addressfield',
        'column' => 'organisation_name',
        'translatable' => '0',
      ),
    ),
    518 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_addressfield_name_line',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_addressfield',
        'type' => 'addressfield',
        'column' => 'name_line',
        'translatable' => '0',
      ),
    ),
    519 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_addressfield_first_name',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_addressfield',
        'type' => 'addressfield',
        'column' => 'first_name',
        'translatable' => '0',
      ),
    ),
    520 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_addressfield_last_name',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_addressfield',
        'type' => 'addressfield',
        'column' => 'last_name',
        'translatable' => '0',
      ),
    ),
    521 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_addressfield_data',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_addressfield',
        'type' => 'addressfield',
        'column' => 'data',
        'translatable' => '0',
      ),
    ),
    522 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_open_to_over_200_participa_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_open_to_over_200_participa',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    523 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_poi_type_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_poi_type',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    524 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_route_length_kilometres_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_route_length_kilometres',
        'type' => 'computed',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    525 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_issuu_embed_code_full_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_issuu_embed_code_full',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    526 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_issuu_embed_code_full_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_issuu_embed_code_full',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    527 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_biography_category_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_biography_category',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    528 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_headline_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_headline',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    529 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_headline_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_headline',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    530 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_linkedin_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_linkedin',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    531 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_linkedin_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_linkedin',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    532 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_linkedin_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_linkedin',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    533 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_short_biography_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_short_biography',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    534 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_short_biography_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_short_biography',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    535 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_website_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_website',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    536 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_website_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_website',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    537 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_website_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_website',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    538 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_youtube_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_youtube',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    539 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_youtube_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_youtube',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    540 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_youtube_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_youtube',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    541 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_paragraph_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_paragraph',
        'type' => 'paragraphs',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    542 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_paragraph_revision_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_paragraph',
        'type' => 'paragraphs',
        'column' => 'revision_id',
        'translatable' => '0',
      ),
    ),
    543 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_background_colour_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_background_colour',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    544 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_background_watermark_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_background_watermark',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    545 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_remove_bottom_margin_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_remove_bottom_margin',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    546 => array(
      'src' => 'node:nid',
      'dst' => 'group:id',
      'callback' => 'themekey_og_context_nid2gid',
    ),
    547 => array(
      'src' => 'node:nid',
      'dst' => 'group:type',
      'callback' => 'themekey_og_context_nid2type',
    ),
    548 => array(
      'src' => 'node:nid',
      'dst' => 'path:node_alias',
      'callback' => 'themekey_path_nid2alias',
    ),
    549 => array(
      'src' => 'system:dummy',
      'dst' => 'system:query_param',
      'callback' => 'themekey_dummy2query_param',
    ),
    550 => array(
      'src' => 'system:dummy',
      'dst' => 'system:cookie',
      'callback' => 'themekey_dummy2cookie',
    ),
    551 => array(
      'src' => 'system:dummy',
      'dst' => 'system:http_header',
      'callback' => 'themekey_dummy2http_header',
    ),
    552 => array(
      'src' => 'system:dummy',
      'dst' => 'system:post',
      'callback' => 'themekey_dummy2post',
    ),
    553 => array(
      'src' => 'system:dummy',
      'dst' => 'system:query_string',
      'callback' => 'themekey_dummy2query_string',
    ),
    554 => array(
      'src' => 'system:dummy',
      'dst' => 'system:date_time',
      'callback' => 'themekey_dummy2date_time',
    ),
    555 => array(
      'src' => 'system:dummy',
      'dst' => 'system:date',
      'callback' => 'themekey_dummy2date',
    ),
    556 => array(
      'src' => 'system:dummy',
      'dst' => 'system:month',
      'callback' => 'themekey_dummy2month',
    ),
    557 => array(
      'src' => 'system:dummy',
      'dst' => 'system:time',
      'callback' => 'themekey_dummy2time',
    ),
    558 => array(
      'src' => 'system:dummy',
      'dst' => 'system:day_of_week',
      'callback' => 'themekey_dummy2day_of_week',
    ),
    559 => array(
      'src' => 'system:dummy',
      'dst' => 'system:day_of_month',
      'callback' => 'themekey_dummy2day_of_month',
    ),
    560 => array(
      'src' => 'system:dummy',
      'dst' => 'system:user_browser',
      'callback' => 'themekey_dummy2user_browser',
    ),
    561 => array(
      'src' => 'system:dummy',
      'dst' => 'system:user_os',
      'callback' => 'themekey_dummy2user_os',
    ),
    562 => array(
      'src' => 'system:user_browser',
      'dst' => 'system:user_browser_simplified',
      'callback' => 'themekey_user_browser2user_browser_simplified',
    ),
    563 => array(
      'src' => 'system:user_os',
      'dst' => 'system:user_os_simplified',
      'callback' => 'themekey_user_os2user_os_simplified',
    ),
    564 => array(
      'src' => 'system:dummy',
      'dst' => 'system:session',
      'callback' => 'themekey_dummy2session',
    ),
    565 => array(
      'src' => 'taxonomy:tid',
      'dst' => 'taxonomy:vid',
      'callback' => 'themekey_taxonomy_tid2vid',
    ),
    566 => array(
      'src' => 'taxonomy:tid',
      'dst' => 'taxonomy:tid_and_childs',
      'callback' => 'themekey_taxonomy_tid2tid_and_parents',
    ),
    567 => array(
      'src' => 'node:nid',
      'dst' => 'taxonomy:tid',
      'callback' => 'themekey_taxonomy_nid2tid',
    ),
    568 => array(
      'src' => 'taxonomy:tid',
      'dst' => 'taxonomy:name',
      'callback' => 'themekey_taxonomy_tid2name',
    ),
    569 => array(
      'src' => 'profile:uid',
      'dst' => 'themekey_ui:author_triggers_theme',
      'callback' => 'themekey_user_profile2theme',
    ),
    570 => array(
      'src' => 'drupal:get_q',
      'dst' => 'views:vid',
      'callback' => 'themekey_views_getq2vid',
    ),
    571 => array(
      'src' => 'drupal:get_q',
      'dst' => 'views:machine_name',
      'callback' => 'themekey_views_getq2machine_name',
    ),
    572 => array(
      'src' => 'drupal:get_q',
      'dst' => 'views:human_name',
      'callback' => 'themekey_views_getq2human_name',
    ),
    573 => array(
      'src' => 'node:nid',
      'dst' => 'themekey_ui:node_triggers_theme',
      'callback' => 'themekey_ui_nid2theme',
    ),
    574 => array(
      'src' => 'node:nid',
      'dst' => 'themekey_ui:author_triggers_theme',
      'callback' => 'themekey_ui_node_author2theme',
    ),
  );
  $export['themekey_maps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_modules';
  $strongarm->value = array(
    0 => 'admin_menu',
    1 => 'comment',
    2 => 'node',
    3 => 'og_context',
    4 => 'path',
    5 => 'system',
    6 => 'taxonomy',
    7 => 'user',
    8 => 'views',
  );
  $export['themekey_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_paths';
  $strongarm->value = array(
    0 => array(
      'path' => 'node/#/revisions/#/view',
      'callbacks' => array(),
      'fit' => 21,
      'weight' => 10,
      'wildcards' => array(
        1 => 'node:nid',
        3 => 'node:vid',
      ),
    ),
    1 => array(
      'path' => 'comment/reply/#/#',
      'callbacks' => array(),
      'fit' => 12,
      'weight' => 3,
      'wildcards' => array(
        2 => 'node:nid',
        3 => 'comment:cid',
      ),
    ),
    2 => array(
      'path' => 'comment/reply/#',
      'callbacks' => array(),
      'fit' => 6,
      'weight' => 1,
      'wildcards' => array(
        2 => 'node:nid',
      ),
    ),
    3 => array(
      'path' => 'taxonomy/term/#',
      'callbacks' => array(),
      'fit' => 6,
      'weight' => 1,
      'wildcards' => array(
        2 => 'taxonomy:tid',
      ),
    ),
    4 => array(
      'path' => 'comment/#/edit',
      'callbacks' => array(),
      'fit' => 5,
      'weight' => 2,
      'wildcards' => array(
        1 => 'comment:cid',
      ),
    ),
    5 => array(
      'path' => 'comment/#/delete',
      'callbacks' => array(),
      'fit' => 5,
      'weight' => 2,
      'wildcards' => array(
        1 => 'comment:cid',
      ),
    ),
    6 => array(
      'path' => 'user/#/edit',
      'callbacks' => array(),
      'fit' => 5,
      'weight' => 2,
      'wildcards' => array(
        1 => 'profile:uid',
      ),
    ),
    7 => array(
      'path' => 'group/%/#',
      'callbacks' => array(),
      'fit' => 4,
      'weight' => 1,
      'wildcards' => array(
        1 => 'group:type',
        2 => 'group:id',
      ),
    ),
    8 => array(
      'path' => 'comment/#',
      'callbacks' => array(),
      'fit' => 2,
      'weight' => 1,
      'wildcards' => array(
        1 => 'comment:cid',
      ),
    ),
    9 => array(
      'path' => 'node/#',
      'callbacks' => array(),
      'fit' => 2,
      'weight' => 1,
      'wildcards' => array(
        1 => 'node:nid',
      ),
    ),
    10 => array(
      'path' => 'user/#',
      'callbacks' => array(),
      'fit' => 2,
      'weight' => 1,
      'wildcards' => array(
        1 => 'profile:uid',
      ),
    ),
  );
  $export['themekey_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_properties';
  $strongarm->value = array(
    'comment:cid' => 'comment:cid',
    'drupal:base_path' => 'drupal:base_path',
    'drupal:get_q' => 'drupal:get_q',
    'drupal:is_front_page' => 'drupal:is_front_page',
    'drupal:path' => 'drupal:path',
    'drupal:path:wildcard' => 'drupal:path:wildcard',
    'drupal:path_is_admin' => 'drupal:path_is_admin',
    'group:id' => 'group:id',
    'group:type' => 'group:type',
    'node:body_format' => 'node:body_format',
    'node:body_summary' => 'node:body_summary',
    'node:body_value' => 'node:body_value',
    'node:changed' => 'node:changed',
    'node:changed_date' => 'node:changed_date',
    'node:changed_date_time' => 'node:changed_date_time',
    'node:created' => 'node:created',
    'node:created_date' => 'node:created_date',
    'node:created_date_time' => 'node:created_date_time',
    'node:field__cost_format' => 'node:field__cost_format',
    'node:field__cost_value' => 'node:field__cost_value',
    'node:field__location_details_format' => 'node:field__location_details_format',
    'node:field__location_details_value' => 'node:field__location_details_value',
    'node:field__volunteer_form_target_id' => 'node:field__volunteer_form_target_id',
    'node:field_about_centre_format' => 'node:field_about_centre_format',
    'node:field_about_centre_value' => 'node:field_about_centre_value',
    'node:field_about_the_group_format' => 'node:field_about_the_group_format',
    'node:field_about_the_group_value' => 'node:field_about_the_group_value',
    'node:field_accordion_revision_id' => 'node:field_accordion_revision_id',
    'node:field_accordion_value' => 'node:field_accordion_value',
    'node:field_active_value' => 'node:field_active_value',
    'node:field_activities_available_format' => 'node:field_activities_available_format',
    'node:field_activities_available_value' => 'node:field_activities_available_value',
    'node:field_additional_content_format' => 'node:field_additional_content_format',
    'node:field_additional_content_value' => 'node:field_additional_content_value',
    'node:field_address_administrative_area' => 'node:field_address_administrative_area',
    'node:field_address_country' => 'node:field_address_country',
    'node:field_address_data' => 'node:field_address_data',
    'node:field_address_dependent_locality' => 'node:field_address_dependent_locality',
    'node:field_address_first_name' => 'node:field_address_first_name',
    'node:field_address_information_format' => 'node:field_address_information_format',
    'node:field_address_information_value' => 'node:field_address_information_value',
    'node:field_address_last_name' => 'node:field_address_last_name',
    'node:field_address_locality' => 'node:field_address_locality',
    'node:field_address_name_line' => 'node:field_address_name_line',
    'node:field_address_organisation_name' => 'node:field_address_organisation_name',
    'node:field_address_postal_code' => 'node:field_address_postal_code',
    'node:field_address_premise' => 'node:field_address_premise',
    'node:field_address_sub_administrative_area' => 'node:field_address_sub_administrative_area',
    'node:field_address_sub_premise' => 'node:field_address_sub_premise',
    'node:field_address_thoroughfare' => 'node:field_address_thoroughfare',
    'node:field_addressfield_administrative_area' => 'node:field_addressfield_administrative_area',
    'node:field_addressfield_country' => 'node:field_addressfield_country',
    'node:field_addressfield_data' => 'node:field_addressfield_data',
    'node:field_addressfield_dependent_locality' => 'node:field_addressfield_dependent_locality',
    'node:field_addressfield_first_name' => 'node:field_addressfield_first_name',
    'node:field_addressfield_last_name' => 'node:field_addressfield_last_name',
    'node:field_addressfield_locality' => 'node:field_addressfield_locality',
    'node:field_addressfield_name_line' => 'node:field_addressfield_name_line',
    'node:field_addressfield_organisation_name' => 'node:field_addressfield_organisation_name',
    'node:field_addressfield_postal_code' => 'node:field_addressfield_postal_code',
    'node:field_addressfield_premise' => 'node:field_addressfield_premise',
    'node:field_addressfield_sub_administrative_area' => 'node:field_addressfield_sub_administrative_area',
    'node:field_addressfield_sub_premise' => 'node:field_addressfield_sub_premise',
    'node:field_addressfield_thoroughfare' => 'node:field_addressfield_thoroughfare',
    'node:field_announcement_type_value' => 'node:field_announcement_type_value',
    'node:field_area_covered_bottom' => 'node:field_area_covered_bottom',
    'node:field_area_covered_geo_type' => 'node:field_area_covered_geo_type',
    'node:field_area_covered_geohash' => 'node:field_area_covered_geohash',
    'node:field_area_covered_geom' => 'node:field_area_covered_geom',
    'node:field_area_covered_lat' => 'node:field_area_covered_lat',
    'node:field_area_covered_left' => 'node:field_area_covered_left',
    'node:field_area_covered_lon' => 'node:field_area_covered_lon',
    'node:field_area_covered_right' => 'node:field_area_covered_right',
    'node:field_area_covered_top' => 'node:field_area_covered_top',
    'node:field_article_type_tid' => 'node:field_article_type_tid',
    'node:field_attachments_description' => 'node:field_attachments_description',
    'node:field_attachments_display' => 'node:field_attachments_display',
    'node:field_attachments_fid' => 'node:field_attachments_fid',
    'node:field_attendance_size_value' => 'node:field_attendance_size_value',
    'node:field_author_format' => 'node:field_author_format',
    'node:field_author_value' => 'node:field_author_value',
    'node:field_background_colour_value' => 'node:field_background_colour_value',
    'node:field_background_watermark_value' => 'node:field_background_watermark_value',
    'node:field_banner_image_paragraph_revision_id' => 'node:field_banner_image_paragraph_revision_id',
    'node:field_banner_image_paragraph_value' => 'node:field_banner_image_paragraph_value',
    'node:field_bike_type_target_id' => 'node:field_bike_type_target_id',
    'node:field_billboard_paragraph_text_revision_id' => 'node:field_billboard_paragraph_text_revision_id',
    'node:field_billboard_paragraph_text_value' => 'node:field_billboard_paragraph_text_value',
    'node:field_biography_category_value' => 'node:field_biography_category_value',
    'node:field_body_bottom_format' => 'node:field_body_bottom_format',
    'node:field_body_bottom_value' => 'node:field_body_bottom_value',
    'node:field_body_middle_format' => 'node:field_body_middle_format',
    'node:field_body_middle_value' => 'node:field_body_middle_value',
    'node:field_body_top_format' => 'node:field_body_top_format',
    'node:field_body_top_value' => 'node:field_body_top_value',
    'node:field_booking_code_format' => 'node:field_booking_code_format',
    'node:field_booking_code_value' => 'node:field_booking_code_value',
    'node:field_button_a_attributes' => 'node:field_button_a_attributes',
    'node:field_button_a_title' => 'node:field_button_a_title',
    'node:field_button_a_url' => 'node:field_button_a_url',
    'node:field_button_b_attributes' => 'node:field_button_b_attributes',
    'node:field_button_b_title' => 'node:field_button_b_title',
    'node:field_button_b_url' => 'node:field_button_b_url',
    'node:field_call_to_action_tid' => 'node:field_call_to_action_tid',
    'node:field_campaign_call_to_action_attributes' => 'node:field_campaign_call_to_action_attributes',
    'node:field_campaign_call_to_action_title' => 'node:field_campaign_call_to_action_title',
    'node:field_campaign_call_to_action_url' => 'node:field_campaign_call_to_action_url',
    'node:field_campaign_tid' => 'node:field_campaign_tid',
    'node:field_cancelled_value' => 'node:field_cancelled_value',
    'node:field_caption_format' => 'node:field_caption_format',
    'node:field_caption_value' => 'node:field_caption_value',
    'node:field_centre_activities_value' => 'node:field_centre_activities_value',
    'node:field_centre_facilities_value' => 'node:field_centre_facilities_value',
    'node:field_circular_route_value' => 'node:field_circular_route_value',
    'node:field_closing_date_value' => 'node:field_closing_date_value',
    'node:field_committee_member_value' => 'node:field_committee_member_value',
    'node:field_contact_address_format' => 'node:field_contact_address_format',
    'node:field_contact_address_value' => 'node:field_contact_address_value',
    'node:field_contact_email_email' => 'node:field_contact_email_email',
    'node:field_contact_name_format' => 'node:field_contact_name_format',
    'node:field_contact_name_value' => 'node:field_contact_name_value',
    'node:field_contact_number_format' => 'node:field_contact_number_format',
    'node:field_contact_number_value' => 'node:field_contact_number_value',
    'node:field_contact_organisation_format' => 'node:field_contact_organisation_format',
    'node:field_contact_organisation_value' => 'node:field_contact_organisation_value',
    'node:field_cost_format' => 'node:field_cost_format',
    'node:field_cost_value' => 'node:field_cost_value',
    'node:field_course_assessment_format' => 'node:field_course_assessment_format',
    'node:field_course_assessment_value' => 'node:field_course_assessment_value',
    'node:field_course_availability_value' => 'node:field_course_availability_value',
    'node:field_course_booking_attributes' => 'node:field_course_booking_attributes',
    'node:field_course_booking_title' => 'node:field_course_booking_title',
    'node:field_course_booking_url' => 'node:field_course_booking_url',
    'node:field_course_category_value' => 'node:field_course_category_value',
    'node:field_course_dates_value' => 'node:field_course_dates_value',
    'node:field_course_dates_value2' => 'node:field_course_dates_value2',
    'node:field_course_duration_format' => 'node:field_course_duration_format',
    'node:field_course_duration_value' => 'node:field_course_duration_value',
    'node:field_course_files_description' => 'node:field_course_files_description',
    'node:field_course_files_display' => 'node:field_course_files_display',
    'node:field_course_files_fid' => 'node:field_course_files_fid',
    'node:field_course_fitness_level_format' => 'node:field_course_fitness_level_format',
    'node:field_course_fitness_level_value' => 'node:field_course_fitness_level_value',
    'node:field_course_group_size_format' => 'node:field_course_group_size_format',
    'node:field_course_group_size_value' => 'node:field_course_group_size_value',
    'node:field_course_key_content_format' => 'node:field_course_key_content_format',
    'node:field_course_key_content_value' => 'node:field_course_key_content_value',
    'node:field_course_notes_format' => 'node:field_course_notes_format',
    'node:field_course_notes_value' => 'node:field_course_notes_value',
    'node:field_course_outcomes_format' => 'node:field_course_outcomes_format',
    'node:field_course_outcomes_value' => 'node:field_course_outcomes_value',
    'node:field_course_prerequisites_format' => 'node:field_course_prerequisites_format',
    'node:field_course_prerequisites_value' => 'node:field_course_prerequisites_value',
    'node:field_course_price_value' => 'node:field_course_price_value',
    'node:field_course_residential_value' => 'node:field_course_residential_value',
    'node:field_course_resources_description' => 'node:field_course_resources_description',
    'node:field_course_resources_display' => 'node:field_course_resources_display',
    'node:field_course_resources_fid' => 'node:field_course_resources_fid',
    'node:field_course_status_value' => 'node:field_course_status_value',
    'node:field_course_terrain_format' => 'node:field_course_terrain_format',
    'node:field_course_terrain_value' => 'node:field_course_terrain_value',
    'node:field_course_tutor_format' => 'node:field_course_tutor_format',
    'node:field_course_tutor_value' => 'node:field_course_tutor_value',
    'node:field_course_type_target_id' => 'node:field_course_type_target_id',
    'node:field_course_venue_accommodation_format' => 'node:field_course_venue_accommodation_format',
    'node:field_course_venue_accommodation_value' => 'node:field_course_venue_accommodation_value',
    'node:field_course_venue_address_format' => 'node:field_course_venue_address_format',
    'node:field_course_venue_address_value' => 'node:field_course_venue_address_value',
    'node:field_course_venue_email_email' => 'node:field_course_venue_email_email',
    'node:field_course_venue_target_id' => 'node:field_course_venue_target_id',
    'node:field_course_venue_telephone_format' => 'node:field_course_venue_telephone_format',
    'node:field_course_venue_telephone_value' => 'node:field_course_venue_telephone_value',
    'node:field_course_venue_website_attributes' => 'node:field_course_venue_website_attributes',
    'node:field_course_venue_website_title' => 'node:field_course_venue_website_title',
    'node:field_course_venue_website_url' => 'node:field_course_venue_website_url',
    'node:field_cycling_type_tid' => 'node:field_cycling_type_tid',
    'node:field_cycling_uk_section_tid' => 'node:field_cycling_uk_section_tid',
    'node:field_cycling_uk_venue_value' => 'node:field_cycling_uk_venue_value',
    'node:field_cycling_uk_view_format' => 'node:field_cycling_uk_view_format',
    'node:field_cycling_uk_view_value' => 'node:field_cycling_uk_view_value',
    'node:field_data_protection_statement_format' => 'node:field_data_protection_statement_format',
    'node:field_data_protection_statement_value' => 'node:field_data_protection_statement_value',
    'node:field_date_ride_rrule' => 'node:field_date_ride_rrule',
    'node:field_date_ride_value' => 'node:field_date_ride_value',
    'node:field_date_ride_value2' => 'node:field_date_ride_value2',
    'node:field_date_value' => 'node:field_date_value',
    'node:field_distance_target_id' => 'node:field_distance_target_id',
    'node:field_distance_value' => 'node:field_distance_value',
    'node:field_duration_value' => 'node:field_duration_value',
    'node:field_editorial_target_id' => 'node:field_editorial_target_id',
    'node:field_email_attachments_description' => 'node:field_email_attachments_description',
    'node:field_email_attachments_display' => 'node:field_email_attachments_display',
    'node:field_email_attachments_fid' => 'node:field_email_attachments_fid',
    'node:field_email_audience_value' => 'node:field_email_audience_value',
    'node:field_email_footer_format' => 'node:field_email_footer_format',
    'node:field_email_footer_value' => 'node:field_email_footer_value',
    'node:field_email_status_value' => 'node:field_email_status_value',
    'node:field_email_suppression_value' => 'node:field_email_suppression_value',
    'node:field_event_facilities_tid' => 'node:field_event_facilities_tid',
    'node:field_event_ride_audax_value' => 'node:field_event_ride_audax_value',
    'node:field_event_type_tid' => 'node:field_event_type_tid',
    'node:field_exclude_from_main_feeds_value' => 'node:field_exclude_from_main_feeds_value',
    'node:field_extra_contact_details_format' => 'node:field_extra_contact_details_format',
    'node:field_extra_contact_details_value' => 'node:field_extra_contact_details_value',
    'node:field_facebook_attributes' => 'node:field_facebook_attributes',
    'node:field_facebook_title' => 'node:field_facebook_title',
    'node:field_facebook_url' => 'node:field_facebook_url',
    'node:field_facility_details_format' => 'node:field_facility_details_format',
    'node:field_facility_details_value' => 'node:field_facility_details_value',
    'node:field_feed_in_courses_target_id' => 'node:field_feed_in_courses_target_id',
    'node:field_feed_item_description_format' => 'node:field_feed_item_description_format',
    'node:field_feed_item_description_summary' => 'node:field_feed_item_description_summary',
    'node:field_feed_item_description_value' => 'node:field_feed_item_description_value',
    'node:field_finish_address_bottom' => 'node:field_finish_address_bottom',
    'node:field_finish_address_geo_type' => 'node:field_finish_address_geo_type',
    'node:field_finish_address_geohash' => 'node:field_finish_address_geohash',
    'node:field_finish_address_geom' => 'node:field_finish_address_geom',
    'node:field_finish_address_lat' => 'node:field_finish_address_lat',
    'node:field_finish_address_left' => 'node:field_finish_address_left',
    'node:field_finish_address_lon' => 'node:field_finish_address_lon',
    'node:field_finish_address_right' => 'node:field_finish_address_right',
    'node:field_finish_address_top' => 'node:field_finish_address_top',
    'node:field_finish_location_bottom' => 'node:field_finish_location_bottom',
    'node:field_finish_location_geo_type' => 'node:field_finish_location_geo_type',
    'node:field_finish_location_geohash' => 'node:field_finish_location_geohash',
    'node:field_finish_location_geom' => 'node:field_finish_location_geom',
    'node:field_finish_location_lat' => 'node:field_finish_location_lat',
    'node:field_finish_location_left' => 'node:field_finish_location_left',
    'node:field_finish_location_lon' => 'node:field_finish_location_lon',
    'node:field_finish_location_right' => 'node:field_finish_location_right',
    'node:field_finish_location_top' => 'node:field_finish_location_top',
    'node:field_further_reading_target_id' => 'node:field_further_reading_target_id',
    'node:field_gallery_image_alt' => 'node:field_gallery_image_alt',
    'node:field_gallery_image_fid' => 'node:field_gallery_image_fid',
    'node:field_gallery_image_height' => 'node:field_gallery_image_height',
    'node:field_gallery_image_title' => 'node:field_gallery_image_title',
    'node:field_gallery_image_width' => 'node:field_gallery_image_width',
    'node:field_gpx_files_description' => 'node:field_gpx_files_description',
    'node:field_gpx_files_display' => 'node:field_gpx_files_display',
    'node:field_gpx_files_fid' => 'node:field_gpx_files_fid',
    'node:field_gpx_map_bottom' => 'node:field_gpx_map_bottom',
    'node:field_gpx_map_geo_type' => 'node:field_gpx_map_geo_type',
    'node:field_gpx_map_geohash' => 'node:field_gpx_map_geohash',
    'node:field_gpx_map_geom' => 'node:field_gpx_map_geom',
    'node:field_gpx_map_lat' => 'node:field_gpx_map_lat',
    'node:field_gpx_map_left' => 'node:field_gpx_map_left',
    'node:field_gpx_map_lon' => 'node:field_gpx_map_lon',
    'node:field_gpx_map_right' => 'node:field_gpx_map_right',
    'node:field_gpx_map_top' => 'node:field_gpx_map_top',
    'node:field_grid_reference_format' => 'node:field_grid_reference_format',
    'node:field_grid_reference_value' => 'node:field_grid_reference_value',
    'node:field_group_activities_value' => 'node:field_group_activities_value',
    'node:field_group_contact_email_email' => 'node:field_group_contact_email_email',
    'node:field_group_contact_name_format' => 'node:field_group_contact_name_format',
    'node:field_group_contact_name_value' => 'node:field_group_contact_name_value',
    'node:field_group_files_description' => 'node:field_group_files_description',
    'node:field_group_files_display' => 'node:field_group_files_display',
    'node:field_group_files_fid' => 'node:field_group_files_fid',
    'node:field_group_image_alt' => 'node:field_group_image_alt',
    'node:field_group_image_fid' => 'node:field_group_image_fid',
    'node:field_group_image_height' => 'node:field_group_image_height',
    'node:field_group_image_title' => 'node:field_group_image_title',
    'node:field_group_image_width' => 'node:field_group_image_width',
    'node:field_group_newsletter_subscribe_value' => 'node:field_group_newsletter_subscribe_value',
    'node:field_group_newsletter_subscribe_value2' => 'node:field_group_newsletter_subscribe_value2',
    'node:field_group_org_member_no_format' => 'node:field_group_org_member_no_format',
    'node:field_group_org_member_no_value' => 'node:field_group_org_member_no_value',
    'node:field_group_owner_member_no_format' => 'node:field_group_owner_member_no_format',
    'node:field_group_owner_member_no_value' => 'node:field_group_owner_member_no_value',
    'node:field_group_parent_target_id' => 'node:field_group_parent_target_id',
    'node:field_group_phone_number_format' => 'node:field_group_phone_number_format',
    'node:field_group_phone_number_value' => 'node:field_group_phone_number_value',
    'node:field_group_postcodes_format' => 'node:field_group_postcodes_format',
    'node:field_group_postcodes_value' => 'node:field_group_postcodes_value',
    'node:field_group_region_format' => 'node:field_group_region_format',
    'node:field_group_region_value' => 'node:field_group_region_value',
    'node:field_group_ride_info_format' => 'node:field_group_ride_info_format',
    'node:field_group_ride_info_value' => 'node:field_group_ride_info_value',
    'node:field_group_ride_programme_description' => 'node:field_group_ride_programme_description',
    'node:field_group_ride_programme_display' => 'node:field_group_ride_programme_display',
    'node:field_group_ride_programme_fid' => 'node:field_group_ride_programme_fid',
    'node:field_group_type_value' => 'node:field_group_type_value',
    'node:field_group_website_attributes' => 'node:field_group_website_attributes',
    'node:field_group_website_title' => 'node:field_group_website_title',
    'node:field_group_website_url' => 'node:field_group_website_url',
    'node:field_group_welcome_format' => 'node:field_group_welcome_format',
    'node:field_group_welcome_value' => 'node:field_group_welcome_value',
    'node:field_headline_format' => 'node:field_headline_format',
    'node:field_headline_message_format' => 'node:field_headline_message_format',
    'node:field_headline_message_value' => 'node:field_headline_message_value',
    'node:field_headline_value' => 'node:field_headline_value',
    'node:field_hero_description' => 'node:field_hero_description',
    'node:field_hero_display' => 'node:field_hero_display',
    'node:field_hero_fid' => 'node:field_hero_fid',
    'node:field_historic_value' => 'node:field_historic_value',
    'node:field_ice_name_format' => 'node:field_ice_name_format',
    'node:field_ice_name_value' => 'node:field_ice_name_value',
    'node:field_ice_notes_format' => 'node:field_ice_notes_format',
    'node:field_ice_notes_value' => 'node:field_ice_notes_value',
    'node:field_ice_phone_number_format' => 'node:field_ice_phone_number_format',
    'node:field_ice_phone_number_value' => 'node:field_ice_phone_number_value',
    'node:field_icons_revision_id' => 'node:field_icons_revision_id',
    'node:field_icons_value' => 'node:field_icons_value',
    'node:field_image_alt' => 'node:field_image_alt',
    'node:field_image_fid' => 'node:field_image_fid',
    'node:field_image_gallery_alt' => 'node:field_image_gallery_alt',
    'node:field_image_gallery_fid' => 'node:field_image_gallery_fid',
    'node:field_image_gallery_height' => 'node:field_image_gallery_height',
    'node:field_image_gallery_title' => 'node:field_image_gallery_title',
    'node:field_image_gallery_width' => 'node:field_image_gallery_width',
    'node:field_image_height' => 'node:field_image_height',
    'node:field_image_title' => 'node:field_image_title',
    'node:field_image_width' => 'node:field_image_width',
    'node:field_inclusive_cycling_value' => 'node:field_inclusive_cycling_value',
    'node:field_instagram_attributes' => 'node:field_instagram_attributes',
    'node:field_instagram_title' => 'node:field_instagram_title',
    'node:field_instagram_url' => 'node:field_instagram_url',
    'node:field_insurance_required__value' => 'node:field_insurance_required__value',
    'node:field_issuu_embed_code_format' => 'node:field_issuu_embed_code_format',
    'node:field_issuu_embed_code_full_format' => 'node:field_issuu_embed_code_full_format',
    'node:field_issuu_embed_code_full_value' => 'node:field_issuu_embed_code_full_value',
    'node:field_issuu_embed_code_value' => 'node:field_issuu_embed_code_value',
    'node:field_link_attributes' => 'node:field_link_attributes',
    'node:field_link_booknow_attributes' => 'node:field_link_booknow_attributes',
    'node:field_link_booknow_title' => 'node:field_link_booknow_title',
    'node:field_link_booknow_url' => 'node:field_link_booknow_url',
    'node:field_link_title' => 'node:field_link_title',
    'node:field_link_to_articles_target_id' => 'node:field_link_to_articles_target_id',
    'node:field_link_to_author_attributes' => 'node:field_link_to_author_attributes',
    'node:field_link_to_author_title' => 'node:field_link_to_author_title',
    'node:field_link_to_author_url' => 'node:field_link_to_author_url',
    'node:field_link_url' => 'node:field_link_url',
    'node:field_linkedin_attributes' => 'node:field_linkedin_attributes',
    'node:field_linkedin_title' => 'node:field_linkedin_title',
    'node:field_linkedin_url' => 'node:field_linkedin_url',
    'node:field_links_attributes' => 'node:field_links_attributes',
    'node:field_links_title' => 'node:field_links_title',
    'node:field_links_url' => 'node:field_links_url',
    'node:field_location_bottom' => 'node:field_location_bottom',
    'node:field_location_geo_type' => 'node:field_location_geo_type',
    'node:field_location_geohash' => 'node:field_location_geohash',
    'node:field_location_geom' => 'node:field_location_geom',
    'node:field_location_lat' => 'node:field_location_lat',
    'node:field_location_left' => 'node:field_location_left',
    'node:field_location_lon' => 'node:field_location_lon',
    'node:field_location_right' => 'node:field_location_right',
    'node:field_location_top' => 'node:field_location_top',
    'node:field_log_revision_id' => 'node:field_log_revision_id',
    'node:field_log_value' => 'node:field_log_value',
    'node:field_logged_in_attachments_description' => 'node:field_logged_in_attachments_description',
    'node:field_logged_in_attachments_display' => 'node:field_logged_in_attachments_display',
    'node:field_logged_in_attachments_fid' => 'node:field_logged_in_attachments_fid',
    'node:field_logged_in_content_format' => 'node:field_logged_in_content_format',
    'node:field_logged_in_content_summary' => 'node:field_logged_in_content_summary',
    'node:field_logged_in_content_value' => 'node:field_logged_in_content_value',
    'node:field_magazine_cover_alt' => 'node:field_magazine_cover_alt',
    'node:field_magazine_cover_fid' => 'node:field_magazine_cover_fid',
    'node:field_magazine_cover_height' => 'node:field_magazine_cover_height',
    'node:field_magazine_cover_title' => 'node:field_magazine_cover_title',
    'node:field_magazine_cover_width' => 'node:field_magazine_cover_width',
    'node:field_mailing_preferences_value' => 'node:field_mailing_preferences_value',
    'node:field_markup_format' => 'node:field_markup_format',
    'node:field_markup_value' => 'node:field_markup_value',
    'node:field_member_only_content_format' => 'node:field_member_only_content_format',
    'node:field_member_only_content_summary' => 'node:field_member_only_content_summary',
    'node:field_member_only_content_value' => 'node:field_member_only_content_value',
    'node:field_membership_type_format' => 'node:field_membership_type_format',
    'node:field_membership_type_value' => 'node:field_membership_type_value',
    'node:field_old_nid_value' => 'node:field_old_nid_value',
    'node:field_open_to_over_200_participa_value' => 'node:field_open_to_over_200_participa_value',
    'node:field_opening_times_format' => 'node:field_opening_times_format',
    'node:field_opening_times_value' => 'node:field_opening_times_value',
    'node:field_organisation_number_value' => 'node:field_organisation_number_value',
    'node:field_page_management_tid' => 'node:field_page_management_tid',
    'node:field_paragraph_revision_id' => 'node:field_paragraph_revision_id',
    'node:field_paragraph_value' => 'node:field_paragraph_value',
    'node:field_partner_logo_alt' => 'node:field_partner_logo_alt',
    'node:field_partner_logo_fid' => 'node:field_partner_logo_fid',
    'node:field_partner_logo_height' => 'node:field_partner_logo_height',
    'node:field_partner_logo_title' => 'node:field_partner_logo_title',
    'node:field_partner_logo_width' => 'node:field_partner_logo_width',
    'node:field_partners_format' => 'node:field_partners_format',
    'node:field_partners_value' => 'node:field_partners_value',
    'node:field_paypal_code_format' => 'node:field_paypal_code_format',
    'node:field_paypal_code_summary' => 'node:field_paypal_code_summary',
    'node:field_paypal_code_value' => 'node:field_paypal_code_value',
    'node:field_pdf_copies_description' => 'node:field_pdf_copies_description',
    'node:field_pdf_copies_display' => 'node:field_pdf_copies_display',
    'node:field_pdf_copies_fid' => 'node:field_pdf_copies_fid',
    'node:field_poi_type_tid' => 'node:field_poi_type_tid',
    'node:field_policy_key_facts_format' => 'node:field_policy_key_facts_format',
    'node:field_policy_key_facts_value' => 'node:field_policy_key_facts_value',
    'node:field_position_value' => 'node:field_position_value',
    'node:field_post_type_tid' => 'node:field_post_type_tid',
    'node:field_postal_suppression_value' => 'node:field_postal_suppression_value',
    'node:field_postcode_format' => 'node:field_postcode_format',
    'node:field_postcode_value' => 'node:field_postcode_value',
    'node:field_prerequisite_courses_target_id' => 'node:field_prerequisite_courses_target_id',
    'node:field_press_contact_information_format' => 'node:field_press_contact_information_format',
    'node:field_press_contact_information_value' => 'node:field_press_contact_information_value',
    'node:field_press_notes_to_editors_format' => 'node:field_press_notes_to_editors_format',
    'node:field_press_notes_to_editors_value' => 'node:field_press_notes_to_editors_value',
    'node:field_price_summary_format' => 'node:field_price_summary_format',
    'node:field_price_summary_value' => 'node:field_price_summary_value',
    'node:field_progression_format' => 'node:field_progression_format',
    'node:field_progression_value' => 'node:field_progression_value',
    'node:field_promoted_value' => 'node:field_promoted_value',
    'node:field_publication_date_value' => 'node:field_publication_date_value',
    'node:field_publication_type_tid' => 'node:field_publication_type_tid',
    'node:field_redirect_link_attributes' => 'node:field_redirect_link_attributes',
    'node:field_redirect_link_title' => 'node:field_redirect_link_title',
    'node:field_redirect_link_url' => 'node:field_redirect_link_url',
    'node:field_redirect_website_value' => 'node:field_redirect_website_value',
    'node:field_related_county_guides_target_id' => 'node:field_related_county_guides_target_id',
    'node:field_remove_bottom_margin_value' => 'node:field_remove_bottom_margin_value',
    'node:field_remove_child_page_links_value' => 'node:field_remove_child_page_links_value',
    'node:field_renewal_date_value' => 'node:field_renewal_date_value',
    'node:field_reply_to_email_address_email' => 'node:field_reply_to_email_address_email',
    'node:field_review_comments_format' => 'node:field_review_comments_format',
    'node:field_review_comments_value' => 'node:field_review_comments_value',
    'node:field_review_date_value' => 'node:field_review_date_value',
    'node:field_ride_level_target_id' => 'node:field_ride_level_target_id',
    'node:field_ride_section_tid' => 'node:field_ride_section_tid',
    'node:field_ride_type_tid' => 'node:field_ride_type_tid',
    'node:field_rider_address_1_format' => 'node:field_rider_address_1_format',
    'node:field_rider_address_1_value' => 'node:field_rider_address_1_value',
    'node:field_rider_address_2_format' => 'node:field_rider_address_2_format',
    'node:field_rider_address_2_value' => 'node:field_rider_address_2_value',
    'node:field_rider_address_3_format' => 'node:field_rider_address_3_format',
    'node:field_rider_address_3_value' => 'node:field_rider_address_3_value',
    'node:field_rider_contact_number_value' => 'node:field_rider_contact_number_value',
    'node:field_rider_country_format' => 'node:field_rider_country_format',
    'node:field_rider_country_value' => 'node:field_rider_country_value',
    'node:field_rider_county_format' => 'node:field_rider_county_format',
    'node:field_rider_county_value' => 'node:field_rider_county_value',
    'node:field_rider_email_email' => 'node:field_rider_email_email',
    'node:field_rider_email_suppression_value' => 'node:field_rider_email_suppression_value',
    'node:field_rider_forename_format' => 'node:field_rider_forename_format',
    'node:field_rider_forename_value' => 'node:field_rider_forename_value',
    'node:field_rider_joined_date_value' => 'node:field_rider_joined_date_value',
    'node:field_rider_leader_value' => 'node:field_rider_leader_value',
    'node:field_rider_local_mobile_number_format' => 'node:field_rider_local_mobile_number_format',
    'node:field_rider_local_mobile_number_value' => 'node:field_rider_local_mobile_number_value',
    'node:field_rider_notes_format' => 'node:field_rider_notes_format',
    'node:field_rider_notes_value' => 'node:field_rider_notes_value',
    'node:field_rider_out_of_area_value' => 'node:field_rider_out_of_area_value',
    'node:field_rider_postcode_format' => 'node:field_rider_postcode_format',
    'node:field_rider_postcode_value' => 'node:field_rider_postcode_value',
    'node:field_rider_renewal_date_value' => 'node:field_rider_renewal_date_value',
    'node:field_rider_salutation_format' => 'node:field_rider_salutation_format',
    'node:field_rider_salutation_value' => 'node:field_rider_salutation_value',
    'node:field_rider_status_value' => 'node:field_rider_status_value',
    'node:field_rider_surname_format' => 'node:field_rider_surname_format',
    'node:field_rider_surname_value' => 'node:field_rider_surname_value',
    'node:field_rider_town_format' => 'node:field_rider_town_format',
    'node:field_rider_town_value' => 'node:field_rider_town_value',
    'node:field_rides_and_activities_revision_id' => 'node:field_rides_and_activities_revision_id',
    'node:field_rides_and_activities_value' => 'node:field_rides_and_activities_value',
    'node:field_risk_assessment_value' => 'node:field_risk_assessment_value',
    'node:field_route_features_target_id' => 'node:field_route_features_target_id',
    'node:field_route_length_kilometres_value' => 'node:field_route_length_kilometres_value',
    'node:field_route_length_value' => 'node:field_route_length_value',
    'node:field_shop_node_id_value' => 'node:field_shop_node_id_value',
    'node:field_short_biography_format' => 'node:field_short_biography_format',
    'node:field_short_biography_value' => 'node:field_short_biography_value',
    'node:field_show_on_latest_feed_value' => 'node:field_show_on_latest_feed_value',
    'node:field_skill_level_format' => 'node:field_skill_level_format',
    'node:field_skill_level_value' => 'node:field_skill_level_value',
    'node:field_soundcloud_data' => 'node:field_soundcloud_data',
    'node:field_soundcloud_fid' => 'node:field_soundcloud_fid',
    'node:field_soundcloud_title' => 'node:field_soundcloud_title',
    'node:field_start_address_bottom' => 'node:field_start_address_bottom',
    'node:field_start_address_geo_type' => 'node:field_start_address_geo_type',
    'node:field_start_address_geohash' => 'node:field_start_address_geohash',
    'node:field_start_address_geom' => 'node:field_start_address_geom',
    'node:field_start_address_lat' => 'node:field_start_address_lat',
    'node:field_start_address_left' => 'node:field_start_address_left',
    'node:field_start_address_lon' => 'node:field_start_address_lon',
    'node:field_start_address_right' => 'node:field_start_address_right',
    'node:field_start_address_top' => 'node:field_start_address_top',
    'node:field_start_location_bottom' => 'node:field_start_location_bottom',
    'node:field_start_location_geo_type' => 'node:field_start_location_geo_type',
    'node:field_start_location_geohash' => 'node:field_start_location_geohash',
    'node:field_start_location_geom' => 'node:field_start_location_geom',
    'node:field_start_location_lat' => 'node:field_start_location_lat',
    'node:field_start_location_left' => 'node:field_start_location_left',
    'node:field_start_location_lon' => 'node:field_start_location_lon',
    'node:field_start_location_right' => 'node:field_start_location_right',
    'node:field_start_location_top' => 'node:field_start_location_top',
    'node:field_status_tid' => 'node:field_status_tid',
    'node:field_stories_revision_id' => 'node:field_stories_revision_id',
    'node:field_stories_value' => 'node:field_stories_value',
    'node:field_story_target_id' => 'node:field_story_target_id',
    'node:field_sub_to_groups_comms_date_value' => 'node:field_sub_to_groups_comms_date_value',
    'node:field_sub_to_groups_comms_notes_format' => 'node:field_sub_to_groups_comms_notes_format',
    'node:field_sub_to_groups_comms_notes_value' => 'node:field_sub_to_groups_comms_notes_value',
    'node:field_sub_to_groups_comms_value' => 'node:field_sub_to_groups_comms_value',
    'node:field_subtitle_format' => 'node:field_subtitle_format',
    'node:field_subtitle_value' => 'node:field_subtitle_value',
    'node:field_tags_tid' => 'node:field_tags_tid',
    'node:field_teaser_format' => 'node:field_teaser_format',
    'node:field_teaser_value' => 'node:field_teaser_value',
    'node:field_terms_and_conditions_format' => 'node:field_terms_and_conditions_format',
    'node:field_terms_and_conditions_value' => 'node:field_terms_and_conditions_value',
    'node:field_title_format' => 'node:field_title_format',
    'node:field_title_value' => 'node:field_title_value',
    'node:field_town_format' => 'node:field_town_format',
    'node:field_town_value' => 'node:field_town_value',
    'node:field_tro_local_authority_value' => 'node:field_tro_local_authority_value',
    'node:field_tro_status_value' => 'node:field_tro_status_value',
    'node:field_tro_subject_value' => 'node:field_tro_subject_value',
    'node:field_tro_type_value' => 'node:field_tro_type_value',
    'node:field_twitter_attributes' => 'node:field_twitter_attributes',
    'node:field_twitter_tag_format' => 'node:field_twitter_tag_format',
    'node:field_twitter_tag_value' => 'node:field_twitter_tag_value',
    'node:field_twitter_title' => 'node:field_twitter_title',
    'node:field_twitter_url' => 'node:field_twitter_url',
    'node:field_user_target_id' => 'node:field_user_target_id',
    'node:field_venue_type_value' => 'node:field_venue_type_value',
    'node:field_video_data' => 'node:field_video_data',
    'node:field_video_fid' => 'node:field_video_fid',
    'node:field_video_title' => 'node:field_video_title',
    'node:field_view_ref_1_revision_id' => 'node:field_view_ref_1_revision_id',
    'node:field_view_ref_1_value' => 'node:field_view_ref_1_value',
    'node:field_view_ref_2_revision_id' => 'node:field_view_ref_2_revision_id',
    'node:field_view_ref_2_value' => 'node:field_view_ref_2_value',
    'node:field_volunteer_form_external_attributes' => 'node:field_volunteer_form_external_attributes',
    'node:field_volunteer_form_external_title' => 'node:field_volunteer_form_external_title',
    'node:field_volunteer_form_external_url' => 'node:field_volunteer_form_external_url',
    'node:field_volunteer_opportunities_format' => 'node:field_volunteer_opportunities_format',
    'node:field_volunteer_opportunities_value' => 'node:field_volunteer_opportunities_value',
    'node:field_voting_rights_value' => 'node:field_voting_rights_value',
    'node:field_webform_email_email' => 'node:field_webform_email_email',
    'node:field_website_attributes' => 'node:field_website_attributes',
    'node:field_website_title' => 'node:field_website_title',
    'node:field_website_url' => 'node:field_website_url',
    'node:field_welcome_email_sent_value' => 'node:field_welcome_email_sent_value',
    'node:field_welcome_message_format' => 'node:field_welcome_message_format',
    'node:field_welcome_message_value' => 'node:field_welcome_message_value',
    'node:field_youtube_attributes' => 'node:field_youtube_attributes',
    'node:field_youtube_title' => 'node:field_youtube_title',
    'node:field_youtube_url' => 'node:field_youtube_url',
    'node:group_group_value' => 'node:group_group_value',
    'node:language' => 'node:language',
    'node:nid' => 'node:nid',
    'node:og_group_ref_target_id' => 'node:og_group_ref_target_id',
    'node:promote' => 'node:promote',
    'node:sticky' => 'node:sticky',
    'node:title' => 'node:title',
    'node:title_field_format' => 'node:title_field_format',
    'node:title_field_value' => 'node:title_field_value',
    'node:type' => 'node:type',
    'node:uid' => 'node:uid',
    'node:vid' => 'node:vid',
    'path:node_alias' => 'path:node_alias',
    'system:cookie' => 'system:cookie',
    'system:date' => 'system:date',
    'system:date_time' => 'system:date_time',
    'system:day_of_month' => 'system:day_of_month',
    'system:day_of_week' => 'system:day_of_week',
    'system:dummy' => 'system:dummy',
    'system:host' => 'system:host',
    'system:http_header' => 'system:http_header',
    'system:https' => 'system:https',
    'system:month' => 'system:month',
    'system:post' => 'system:post',
    'system:query_param' => 'system:query_param',
    'system:query_string' => 'system:query_string',
    'system:random' => 'system:random',
    'system:referer' => 'system:referer',
    'system:remote_ip' => 'system:remote_ip',
    'system:server_ip' => 'system:server_ip',
    'system:server_name' => 'system:server_name',
    'system:server_port' => 'system:server_port',
    'system:session' => 'system:session',
    'system:time' => 'system:time',
    'system:user_agent' => 'system:user_agent',
    'system:user_browser' => 'system:user_browser',
    'system:user_browser_simplified' => 'system:user_browser_simplified',
    'system:user_os' => 'system:user_os',
    'system:user_os_simplified' => 'system:user_os_simplified',
    'taxonomy:name' => 'taxonomy:name',
    'taxonomy:tid' => 'taxonomy:tid',
    'taxonomy:tid_and_childs' => 'taxonomy:tid_and_childs',
    'taxonomy:vid' => 'taxonomy:vid',
    'user:hostname' => 'user:hostname',
    'user:language' => 'user:language',
    'user:name' => 'user:name',
    'user:role' => 'user:role',
    'user:uid' => 'user:uid',
    'views:human_name' => 'views:human_name',
    'views:machine_name' => 'views:machine_name',
    'views:vid' => 'views:vid',
  );
  $export['themekey_properties'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_adminimal_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'style_checkboxes' => 1,
    'display_icons_config' => 1,
    'rounded_buttons' => 1,
    'sticky_actions' => 0,
    'avoid_custom_font' => 0,
    'adminimal_ckeditor' => 1,
    'use_custom_media_queries' => 0,
    'media_query_mobile' => 'only screen and (max-width: 480px)',
    'media_query_tablet' => 'only screen and (min-width : 481px) and (max-width : 1024px)',
    'custom_css' => 1,
    'adminimal_theme_skin' => 'default',
    'jquery_update_jquery_version' => '1.12',
    'magic_css_excludes' => '',
    'magic_footer_js' => 0,
    'magic_library_head' => 0,
    'magic_experimental_js' => 0,
    'magic_js_excludes' => '',
  );
  $export['theme_adminimal_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_bbr_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap__active_tab' => 'edit-general',
    'bootstrap_fluid_container' => 0,
    'bootstrap_button_size' => '',
    'bootstrap_button_colorize' => 1,
    'bootstrap_button_iconize' => 1,
    'bootstrap_forms_required_has_error' => 0,
    'bootstrap_forms_smart_descriptions' => 1,
    'bootstrap_forms_smart_descriptions_limit' => '250',
    'bootstrap_forms_smart_descriptions_allowed_tags' => 'b, code, em, i, kbd, span, strong',
    'bootstrap_image_shape' => '',
    'bootstrap_image_responsive' => 1,
    'bootstrap_table_bordered' => 0,
    'bootstrap_table_condensed' => 0,
    'bootstrap_table_hover' => 1,
    'bootstrap_table_striped' => 1,
    'bootstrap_table_responsive' => '-1',
    'bootstrap_breadcrumb' => '0',
    'bootstrap_breadcrumb_home' => 0,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => '',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_pager_first_and_last' => 1,
    'bootstrap_region_well-top_menu' => '',
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-sidebar_first' => 'well',
    'bootstrap_region_well-sidebar_second' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-page_top' => '',
    'bootstrap_region_well-page_bottom' => '',
    'bootstrap_region_well-dashboard_main' => '',
    'bootstrap_region_well-dashboard_sidebar' => '',
    'bootstrap_region_well-dashboard_inactive' => '',
    'bootstrap_anchors_fix' => '0',
    'bootstrap_anchors_smooth_scrolling' => '0',
    'bootstrap_forms_has_error_value_toggle' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'right',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_trigger_autoclose' => 1,
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_toggle_jquery_error' => 0,
    'bootstrap_cdn_provider' => 'jsdelivr',
    'bootstrap_cdn_custom_css' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.css',
    'bootstrap_cdn_custom_css_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.min.css',
    'bootstrap_cdn_custom_js' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.js',
    'bootstrap_cdn_custom_js_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.min.js',
    'bootstrap_cdn_jsdelivr_version' => '3.3.7',
    'bootstrap_cdn_jsdelivr_theme' => 'bootstrap',
    'jquery_update_jquery_version' => '2.2',
    'magic_css_excludes' => '',
    'magic_footer_js' => 0,
    'magic_library_head' => 0,
    'magic_experimental_js' => 0,
    'magic_js_excludes' => '',
  );
  $export['theme_bbr_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_bikeweek_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap__active_tab' => 'edit-general',
    'bootstrap_fluid_container' => 0,
    'bootstrap_button_size' => '',
    'bootstrap_button_colorize' => 1,
    'bootstrap_button_iconize' => 1,
    'bootstrap_forms_required_has_error' => 0,
    'bootstrap_forms_smart_descriptions' => 1,
    'bootstrap_forms_smart_descriptions_limit' => '250',
    'bootstrap_forms_smart_descriptions_allowed_tags' => 'b, code, em, i, kbd, span, strong',
    'bootstrap_image_shape' => '',
    'bootstrap_image_responsive' => 1,
    'bootstrap_table_bordered' => 0,
    'bootstrap_table_condensed' => 0,
    'bootstrap_table_hover' => 1,
    'bootstrap_table_striped' => 1,
    'bootstrap_table_responsive' => '-1',
    'bootstrap_breadcrumb' => '0',
    'bootstrap_breadcrumb_home' => 0,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => '',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_pager_first_and_last' => 1,
    'bootstrap_region_well-top_menu' => '',
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-sidebar_first' => 'well',
    'bootstrap_region_well-sidebar_second' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-page_top' => '',
    'bootstrap_region_well-page_bottom' => '',
    'bootstrap_region_well-dashboard_main' => '',
    'bootstrap_region_well-dashboard_sidebar' => '',
    'bootstrap_region_well-dashboard_inactive' => '',
    'bootstrap_anchors_fix' => '0',
    'bootstrap_anchors_smooth_scrolling' => '0',
    'bootstrap_forms_has_error_value_toggle' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'right',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_trigger_autoclose' => 1,
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_toggle_jquery_error' => 0,
    'bootstrap_cdn_provider' => 'jsdelivr',
    'bootstrap_cdn_custom_css' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.css',
    'bootstrap_cdn_custom_css_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.min.css',
    'bootstrap_cdn_custom_js' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.js',
    'bootstrap_cdn_custom_js_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.min.js',
    'bootstrap_cdn_jsdelivr_version' => '3.3.7',
    'bootstrap_cdn_jsdelivr_theme' => 'bootstrap',
    'jquery_update_jquery_version' => '2.2',
    'magic_css_excludes' => '',
    'magic_footer_js' => 0,
    'magic_library_head' => 0,
    'magic_experimental_js' => 0,
    'magic_js_excludes' => '',
  );
  $export['theme_bikeweek_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_cyclinguk_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap__active_tab' => 'edit-general',
    'bootstrap_fluid_container' => 0,
    'bootstrap_button_size' => '',
    'bootstrap_button_colorize' => 1,
    'bootstrap_button_iconize' => 1,
    'bootstrap_forms_required_has_error' => 0,
    'bootstrap_forms_smart_descriptions' => 1,
    'bootstrap_forms_smart_descriptions_limit' => '250',
    'bootstrap_forms_smart_descriptions_allowed_tags' => 'b, code, em, i, kbd, span, strong',
    'bootstrap_image_shape' => '',
    'bootstrap_image_responsive' => 1,
    'bootstrap_table_bordered' => 0,
    'bootstrap_table_condensed' => 0,
    'bootstrap_table_hover' => 1,
    'bootstrap_table_striped' => 1,
    'bootstrap_table_responsive' => '1',
    'bootstrap_breadcrumb' => '2',
    'bootstrap_breadcrumb_home' => 0,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => '',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_pager_first_and_last' => 1,
    'bootstrap_region_well-top_menu' => '',
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-sidebar_first' => 'well',
    'bootstrap_region_well-sidebar_second' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-page_top' => '',
    'bootstrap_region_well-page_bottom' => '',
    'bootstrap_region_well-dashboard_main' => '',
    'bootstrap_region_well-dashboard_sidebar' => '',
    'bootstrap_region_well-dashboard_inactive' => '',
    'bootstrap_anchors_fix' => '0',
    'bootstrap_anchors_smooth_scrolling' => '0',
    'bootstrap_forms_has_error_value_toggle' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'right',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_trigger_autoclose' => 1,
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_toggle_jquery_error' => 0,
    'bootstrap_cdn_provider' => 'jsdelivr',
    'bootstrap_cdn_custom_css' => 'https://cdnjs.cloudflare.com/ajax/libs/twitter-bootstrap/3.4.0/css/bootstrap.css',
    'bootstrap_cdn_custom_css_min' => 'https://cdnjs.cloudflare.com/ajax/libs/twitter-bootstrap/3.4.0/css/bootstrap.min.css',
    'bootstrap_cdn_custom_js' => 'https://cdnjs.cloudflare.com/ajax/libs/twitter-bootstrap/3.4.0/js/bootstrap.css',
    'bootstrap_cdn_custom_js_min' => 'https://cdnjs.cloudflare.com/ajax/libs/twitter-bootstrap/3.4.0/js/bootstrap.min.css',
    'bootstrap_cdn_jsdelivr_version' => '3.3.7',
    'bootstrap_cdn_jsdelivr_theme' => 'bootstrap',
    'jquery_update_jquery_version' => '2.2',
    'magic_css_excludes' => '',
    'magic_footer_js' => 0,
    'magic_library_head' => 0,
    'magic_experimental_js' => 0,
    'magic_js_excludes' => '',
  );
  $export['theme_cyclinguk_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'cyclinguk';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_maps_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap__active_tab' => 'edit-components',
    'bootstrap_fluid_container' => 1,
    'bootstrap_button_size' => '',
    'bootstrap_button_colorize' => 1,
    'bootstrap_button_iconize' => 1,
    'bootstrap_forms_required_has_error' => 0,
    'bootstrap_forms_smart_descriptions' => 1,
    'bootstrap_forms_smart_descriptions_limit' => '250',
    'bootstrap_forms_smart_descriptions_allowed_tags' => 'b, code, em, i, kbd, span, strong',
    'bootstrap_image_shape' => '',
    'bootstrap_image_responsive' => 1,
    'bootstrap_table_bordered' => 0,
    'bootstrap_table_condensed' => 0,
    'bootstrap_table_hover' => 1,
    'bootstrap_table_striped' => 1,
    'bootstrap_table_responsive' => '-1',
    'bootstrap_breadcrumb' => '0',
    'bootstrap_breadcrumb_home' => 0,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => '',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_pager_first_and_last' => 1,
    'bootstrap_region_well-top_menu' => '',
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-sidebar_first' => 'well',
    'bootstrap_region_well-sidebar_second' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-page_top' => '',
    'bootstrap_region_well-page_bottom' => '',
    'bootstrap_region_well-dashboard_main' => '',
    'bootstrap_region_well-dashboard_sidebar' => '',
    'bootstrap_region_well-dashboard_inactive' => '',
    'bootstrap_anchors_fix' => '0',
    'bootstrap_anchors_smooth_scrolling' => '0',
    'bootstrap_forms_has_error_value_toggle' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'right',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_trigger_autoclose' => 1,
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_toggle_jquery_error' => 0,
    'bootstrap_cdn_provider' => 'jsdelivr',
    'bootstrap_cdn_custom_css' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.css',
    'bootstrap_cdn_custom_css_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.min.css',
    'bootstrap_cdn_custom_js' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.js',
    'bootstrap_cdn_custom_js_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.min.js',
    'bootstrap_cdn_jsdelivr_version' => '3.3.7',
    'bootstrap_cdn_jsdelivr_theme' => 'bootstrap',
    'jquery_update_jquery_version' => '2.1',
    'magic_css_excludes' => '',
    'magic_footer_js' => 0,
    'magic_library_head' => 0,
    'magic_experimental_js' => 0,
    'magic_js_excludes' => '',
  );
  $export['theme_maps_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_wfoc_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap__active_tab' => 'edit-general',
    'bootstrap_fluid_container' => 0,
    'bootstrap_button_size' => '',
    'bootstrap_button_colorize' => 1,
    'bootstrap_button_iconize' => 1,
    'bootstrap_forms_required_has_error' => 0,
    'bootstrap_forms_smart_descriptions' => 1,
    'bootstrap_forms_smart_descriptions_limit' => '250',
    'bootstrap_forms_smart_descriptions_allowed_tags' => 'b, code, em, i, kbd, span, strong',
    'bootstrap_image_shape' => '',
    'bootstrap_image_responsive' => 1,
    'bootstrap_table_bordered' => 0,
    'bootstrap_table_condensed' => 0,
    'bootstrap_table_hover' => 1,
    'bootstrap_table_striped' => 1,
    'bootstrap_table_responsive' => '-1',
    'bootstrap_breadcrumb' => '0',
    'bootstrap_breadcrumb_home' => 0,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => '',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_pager_first_and_last' => 1,
    'bootstrap_region_well-top_menu' => '',
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-sidebar_first' => 'well',
    'bootstrap_region_well-sidebar_second' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-page_top' => '',
    'bootstrap_region_well-page_bottom' => '',
    'bootstrap_region_well-dashboard_main' => '',
    'bootstrap_region_well-dashboard_sidebar' => '',
    'bootstrap_region_well-dashboard_inactive' => '',
    'bootstrap_anchors_fix' => '0',
    'bootstrap_anchors_smooth_scrolling' => '0',
    'bootstrap_forms_has_error_value_toggle' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'right',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_trigger_autoclose' => 1,
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_toggle_jquery_error' => 0,
    'bootstrap_cdn_provider' => 'jsdelivr',
    'bootstrap_cdn_custom_css' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.css',
    'bootstrap_cdn_custom_css_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.min.css',
    'bootstrap_cdn_custom_js' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.js',
    'bootstrap_cdn_custom_js_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.min.js',
    'bootstrap_cdn_jsdelivr_version' => '3.3.7',
    'bootstrap_cdn_jsdelivr_theme' => 'bootstrap',
    'jquery_update_jquery_version' => '2.2',
    'magic_css_excludes' => '',
    'magic_footer_js' => 0,
    'magic_library_head' => 0,
    'magic_experimental_js' => 0,
    'magic_js_excludes' => '',
  );
  $export['theme_wfoc_settings'] = $strongarm;

  return $export;
}
