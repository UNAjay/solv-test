<?php
/**
 * @file
 * landing_pages.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function landing_pages_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 3,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
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
