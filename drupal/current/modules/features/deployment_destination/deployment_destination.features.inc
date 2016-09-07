<?php
/**
 * @file
 * deployment_destination.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function deployment_destination_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}
