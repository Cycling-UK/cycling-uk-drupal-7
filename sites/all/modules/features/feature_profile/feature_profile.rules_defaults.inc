<?php

/**
 * @file
 * feature_profile.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function feature_profile_default_rules_configuration() {
  $items = array();
  $items['rules_check_if_user_is_member_and_add_remove_role'] = entity_import('rules_config', '{ "rules_check_if_user_is_member_and_add_remove_role" : {
      "LABEL" : "Check if user is member and add\\/remove role",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [], "user_view" : [] },
      "IF" : [ { "NOT data_is_empty" : { "data" : [ "account:field-memberships" ] } } ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "201" : "201" } } } }
      ]
    }
  }');
  $items['rules_check_if_user_is_member_and_remove_role'] = entity_import('rules_config', '{ "rules_check_if_user_is_member_and_remove_role" : {
      "LABEL" : "Check if user is member and remove role",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [ { "data_is_empty" : { "data" : [ "account:field-memberships" ] } } ],
      "DO" : [
        { "user_remove_role" : { "account" : [ "account" ], "roles" : { "value" : { "201" : "201" } } } }
      ]
    }
  }');
  $items['rules_profile_save_users_data'] = entity_import('rules_config', '{ "rules_profile_save_users_data" : {
      "LABEL" : "Profile - save users data",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Profile" ],
      "REQUIRES" : [ "care_user", "rules" ],
      "ON" : { "user_update" : [] },
      "DO" : [
        { "care_user_save_all" : { "account" : [ "account" ] } },
        { "care_user_care_email_field_to_drupal_mail" : { "account" : [ "account" ] } }
      ]
    }
  }');
  $items['rules_profile_when_user_logs_in'] = entity_import('rules_config', '{ "rules_profile_when_user_logs_in" : {
      "LABEL" : "Profile - when user logs in",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-10",
      "OWNER" : "rules",
      "TAGS" : [ "Profile" ],
      "REQUIRES" : [ "care_user", "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [
        { "care_user_fetch_all" : { "account" : [ "account" ] } },
        { "care_user_care_email_field_to_drupal_mail" : { "account" : [ "account" ] } }
      ]
    }
  }');
  $items['rules_profile_when_user_registers'] = entity_import('rules_config', '{ "rules_profile_when_user_registers" : {
      "LABEL" : "Profile - when user registers",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Profile" ],
      "REQUIRES" : [ "care_user", "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "care_user_fetch_all" : { "account" : [ "account" ] } },
        { "care_user_merge_drupal_mail_into_emails_field" : { "account" : [ "account" ] } }
      ]
    }
  }');
  $items['rules_profile_when_user_views_account_page'] = entity_import('rules_config', '{ "rules_profile_when_user_views_account_page" : {
      "LABEL" : "Profile - when user views account page",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "care_user", "rules" ],
      "ON" : { "user_view" : [] },
      "DO" : [
        { "care_user_fetch_all" : { "account" : [ "account" ] } },
        { "care_user_care_email_field_to_drupal_mail" : { "account" : [ "account" ] } },
        { "entity_save" : { "data" : [ "account" ] } }
      ]
    }
  }');
  return $items;
}
