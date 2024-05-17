<?php

/**
 * @file
 * og_groups.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function og_groups_default_rules_configuration() {
  $items = array();
  $items['rules_add_cycling_uk_group_to_all_logged_in_users'] = entity_import('rules_config', '{ "rules_add_cycling_uk_group_to_all_logged_in_users" : {
      "LABEL" : "Add Cycling UK Group to All Logged in Users",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "user_login" : [], "user_view" : [] },
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : "304136" },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "og_subcribe_user" : { "user" : [ "account" ], "group" : [ "entity-fetched" ] } }
      ]
    }
  }');
  $items['rules_og_group_admin_group_administrator_permission'] = entity_import('rules_config', '{ "rules_og_group_admin_group_administrator_permission" : {
      "LABEL" : "OG Group Admin - group administrator permission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "og", "rules" ],
      "ON" : { "node_view--group" : { "bundle" : "group" } },
      "IF" : [
        { "og_user_in_group" : {
            "account" : [ "site:current-user" ],
            "group" : [ "node" ],
            "states" : { "value" : { "1" : "1" } }
          }
        },
        { "OR" : [
            { "og_user_has_role" : {
                "account" : [ "site:current-user" ],
                "group" : [ "site:og-context--node" ],
                "roles" : { "value" : { "Group Administrator" : "Group Administrator" } }
              }
            },
            { "og_user_has_role" : {
                "account" : [ "site:current-user" ],
                "group" : [ "site:og-context--node" ],
                "roles" : { "value" : { "Content Editor" : "Content Editor" } }
              }
            },
            { "og_user_has_role" : {
                "account" : [ "site:current-user" ],
                "group" : [ "site:og-context--node" ],
                "roles" : { "value" : { "Events Editor" : "Events Editor" } }
              }
            },
            { "og_user_has_role" : {
                "account" : [ "site:current-user" ],
                "group" : [ "site:og-context--node" ],
                "roles" : { "value" : { "Communications Officer (Member Groups Only)" : "Communications Officer (Member Groups Only)" } }
              }
            }
          ]
        }
      ],
      "DO" : [
        { "user_add_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "241" : "241" } }
          }
        }
      ]
    }
  }');
  $items['rules_og_group_admin_group_administrator_permission_login'] = entity_import('rules_config', '{ "rules_og_group_admin_group_administrator_permission_login" : {
      "LABEL" : "OG Group Admin - group administrator permission Login",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "og", "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "og_user_in_group" : {
            "account" : [ "account" ],
            "group" : [ "site:current-user:og-user-node:0" ],
            "states" : { "value" : { "1" : "1" } }
          }
        },
        { "OR" : [
            { "og_user_has_role" : {
                "account" : [ "account" ],
                "group" : [ "account:og-user-node:0" ],
                "roles" : { "value" : { "Group Administrator" : "Group Administrator" } }
              }
            },
            { "og_user_has_role" : {
                "account" : [ "account" ],
                "group" : [ "account:og-user-node:0" ],
                "roles" : { "value" : { "Content Editor" : "Content Editor" } }
              }
            },
            { "og_user_has_role" : {
                "account" : [ "account" ],
                "group" : [ "account:og-user-node:0" ],
                "roles" : { "value" : { "Events Editor" : "Events Editor" } }
              }
            },
            { "og_user_has_role" : {
                "account" : [ "account" ],
                "group" : [ "account:og-user-node:0" ],
                "roles" : { "value" : { "Communications Officer (Member Groups Only)" : "Communications Officer (Member Groups Only)" } }
              }
            }
          ]
        }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "241" : "241" } } } }
      ]
    }
  }');
  $items['rules_og_group_admin_removed_group_administrator_permission'] = entity_import('rules_config', '{ "rules_og_group_admin_removed_group_administrator_permission" : {
      "LABEL" : "OG Group Admin Removed - group administrator permission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "og", "rules" ],
      "ON" : { "og_role_revoke" : [] },
      "IF" : [
        { "NOT og_user_has_role" : {
            "account" : [ "account" ],
            "group" : [ "account:og-user-node:0" ],
            "roles" : { "value" : { "administrator member" : "administrator member" } }
          }
        }
      ],
      "DO" : [
        { "user_remove_role" : { "account" : [ "account" ], "roles" : { "value" : { "241" : "241" } } } }
      ]
    }
  }');
  $items['rules_og_manager_change'] = entity_import('rules_config', '{ "rules_og_manager_change" : {
      "LABEL" : "OG Manager Change",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "node_update--group" : { "bundle" : "group" } },
      "IF" : [
        { "NOT data_is" : { "data" : [ "node:author" ], "value" : [ "node-unchanged:author" ] } }
      ],
      "DO" : [
        { "og_grant_og_role" : {
            "account" : [ "node:author" ],
            "group" : [ "node" ],
            "roles" : { "value" : {
                "Group Administrator" : "Group Administrator",
                "Group Manager (automatically assigned)" : "Group Manager (automatically assigned)"
              }
            }
          }
        },
        { "drupal_message" : { "message" : "Group updated..." } },
        { "og_revoke_og_role" : {
            "account" : [ "node-unchanged:author" ],
            "group" : [ "node" ],
            "roles" : { "value" : { "Group Manager (automatically assigned)" : "Group Manager (automatically assigned)" } }
          }
        },
        { "mail" : {
            "to" : "groups@cyclinguk.org",
            "subject" : "Group manager updated for [node:title]",
            "message" : "Group manager updated for [node:title]: [node:url].\\r\\nNew group manager is [node:author]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_update_town_on_saving'] = entity_import('rules_config', '{ "rules_update_town_on_saving" : {
      "LABEL" : "Update \\u0022Town\\u0022 on saving",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave--ride" : { "bundle" : "ride" } },
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-town" ],
            "value" : "[node:field-addressfield:locality]"
          }
        },
        { "data_set" : {
            "data" : [ "node:field-postcode" ],
            "value" : "[node:field-addressfield:postal-code]"
          }
        }
      ]
    }
  }');
  return $items;
}
