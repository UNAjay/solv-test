<?php
/**
 * @file
 * jobs.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function jobs_default_rules_configuration() {
  $items = array();
  $items['rules_jobs_deploy_garp'] = entity_import('rules_config', '{ "rules_jobs_deploy_garp" : {
      "LABEL" : "Jobs:Deploy:Garp",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "deploy" ],
      "ON" : { "node_update--job_posting" : { "bundle" : "job_posting" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_job_post_on" } },
        { "data_is" : {
            "data" : [ "node:field-job-post-on" ],
            "value" : { "value" : { "garp" : "garp" } }
          }
        }
      ],
      "DO" : [
        { "deploy_rules_action_add_to_managed_plan" : { "plan_name" : "job_postings_garp", "entity" : [ "node" ] } },
        { "deploy_rules_action_deploy_plan" : { "plan_name" : "job_postings_garp" } }
      ]
    }
  }');
  $items['rules_jobs_deploy_jeeveserp'] = entity_import('rules_config', '{ "rules_jobs_deploy_jeeveserp" : {
      "LABEL" : "Jobs:Deploy:JeevesERP",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "deploy" ],
      "ON" : { "node_update--job_posting" : { "bundle" : "job_posting" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_job_post_on" } },
        { "data_is" : {
            "data" : [ "node:field-job-post-on" ],
            "value" : { "value" : { "jeeveserp" : "jeeveserp" } }
          }
        }
      ],
      "DO" : [
        { "deploy_rules_action_add_to_managed_plan" : { "plan_name" : "job_postings_jeeveserp", "entity" : [ "node" ] } },
        { "deploy_rules_action_deploy_plan" : { "plan_name" : "job_postings_jeeveserp" } }
      ]
    }
  }');
  return $items;
}
