<?php
/**
 * @file
 * jeeveserp_permissions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jeeveserp_permissions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "config_perms" && $api == "config_perms") {
    return array("version" => "1");
  }
}
