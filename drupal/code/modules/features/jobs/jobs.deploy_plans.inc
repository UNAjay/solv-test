<?php
/**
 * @file
 * jobs.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function jobs_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'job_postings_garp';
  $plan->title = 'Job postings: Garp';
  $plan->description = '';
  $plan->debug = 0;
  $plan->aggregator_plugin = 'DeployAggregatorManaged';
  $plan->aggregator_config = array(
    'delete_post_deploy' => 1,
  );
  $plan->fetch_only = 0;
  $plan->processor_plugin = 'DeployProcessorQueue';
  $plan->processor_config = array();
  $plan->endpoints = array(
    'garp' => 'garp',
    'jeeveserp' => 0,
  );
  $export['job_postings_garp'] = $plan;

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'job_postings_jeeveserp';
  $plan->title = 'Job postings: JeevesERP';
  $plan->description = '';
  $plan->debug = 0;
  $plan->aggregator_plugin = 'DeployAggregatorManaged';
  $plan->aggregator_config = array(
    'delete_post_deploy' => 1,
  );
  $plan->fetch_only = 0;
  $plan->processor_plugin = 'DeployProcessorQueue';
  $plan->processor_config = array();
  $plan->endpoints = array(
    'jeeveserp' => 'jeeveserp',
  );
  $export['job_postings_jeeveserp'] = $plan;

  return $export;
}
