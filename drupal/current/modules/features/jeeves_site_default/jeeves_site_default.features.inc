<?php
/**
 * @file
 * jeeves_site_default.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jeeves_site_default_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
