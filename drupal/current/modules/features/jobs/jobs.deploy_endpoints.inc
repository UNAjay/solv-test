<?php
/**
 * @file
 * jobs.deploy_endpoints.inc
 */

/**
 * Implements hook_deploy_endpoints_default().
 */
function jobs_deploy_endpoints_default() {
  $export = array();

  $endpoint = new DeployEndpoint();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 1;
  $endpoint->name = 'garp';
  $endpoint->title = 'Garp';
  $endpoint->description = '';
  $endpoint->debug = 0;
  $endpoint->authenticator_plugin = 'DeployAuthenticatorSession';
  $endpoint->authenticator_config = array(
    'username' => 'admin',
    'password' => 'RA2BFODc3xO2',
  );
  $endpoint->service_plugin = 'DeployServiceRestJSON';
  $endpoint->service_config = array(
    'url' => 'http://garp.wkdev.lv/services/rest',
  );
  $export['garp'] = $endpoint;

  $endpoint = new DeployEndpoint();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 1;
  $endpoint->name = 'jeeveserp';
  $endpoint->title = 'JeevesERP';
  $endpoint->description = '';
  $endpoint->debug = 0;
  $endpoint->authenticator_plugin = 'DeployAuthenticatorSession';
  $endpoint->authenticator_config = array(
    'username' => 'admin',
    'password' => 'RA2BFODc3xO2',
  );
  $endpoint->service_plugin = 'DeployServiceRestJSON';
  $endpoint->service_config = array(
    'url' => 'http://jeeveserp.wkdev.lv/services/rest',
  );
  $export['jeeveserp'] = $endpoint;

  return $export;
}
