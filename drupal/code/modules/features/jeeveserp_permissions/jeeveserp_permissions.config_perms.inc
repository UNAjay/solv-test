<?php
/**
 * @file
 * jeeveserp_permissions.config_perms.inc
 */

/**
 * Implements hook_config_perms().
 */
function jeeveserp_permissions_config_perms() {
  $export = array();

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_menu_block';
  $config_perms->status = TRUE;
  $config_perms->name = 'administer menu block';
  $config_perms->path = array(
    0 => 'admin/config/user-interface/menu-block',
  );
  $export['administer_menu_block'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'display_block_admin_page';
  $config_perms->status = TRUE;
  $config_perms->name = 'display block admin page';
  $config_perms->path = array(
    0 => 'admin/structure/block',
  );
  $export['display_block_admin_page'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'display_site_configuration_menu';
  $config_perms->status = TRUE;
  $config_perms->name = 'display site configuration menu';
  $config_perms->path = array(
    0 => 'admin/config',
  );
  $export['display_site_configuration_menu'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'display_site_structure_menu';
  $config_perms->status = TRUE;
  $config_perms->name = 'display site structure menu';
  $config_perms->path = array(
    0 => 'admin/structure',
  );
  $export['display_site_structure_menu'] = $config_perms;

  return $export;
}
