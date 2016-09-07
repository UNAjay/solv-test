<?php
/**
 * @file
 * jeeves_acton.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function jeeves_acton_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'ds_response';
  $ds_view_mode->label = 'DS Response';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['ds_response'] = $ds_view_mode;

  return $export;
}
