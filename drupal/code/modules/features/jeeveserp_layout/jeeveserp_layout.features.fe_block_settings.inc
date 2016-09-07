<?php
/**
 * @file
 * jeeveserp_layout.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function jeeveserp_layout_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-copyright'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'copyright',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'solvaxis' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'solvaxis',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-footer_info'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'footer_info',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'solvaxis' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'solvaxis',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
