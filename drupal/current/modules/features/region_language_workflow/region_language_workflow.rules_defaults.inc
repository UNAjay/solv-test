<?php
/**
 * @file
 * region_language_workflow.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function region_language_workflow_default_rules_configuration() {
  $items = array();
  $items['region_language_workflow_message_basic_page_updated'] = entity_import('rules_config', '{ "region_language_workflow_message_basic_page_updated" : {
      "LABEL" : "Message: Basic Page updated",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "page" : "page" } }
          }
        },
        { "NOT data_is" : { "data" : [ "node-unchanged:vid" ], "value" : [ "node:vid" ] } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "basic_page_updated",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-target-node" ], "value" : [ "node" ] } },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4", "5" : "5" } },
            "subject" : "There is Basic Page updated @ [site:name]",
            "message" : "[entity-created:text]\\r\\nRevision log: [node:log]"
          }
        }
      ]
    }
  }');
  return $items;
}
