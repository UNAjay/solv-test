<?php
/**
 * @file
 * jeeves_media.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function jeeves_media_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'content';
  $ds_view_mode->label = 'Content';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['content'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'logo';
  $ds_view_mode->label = 'Logo';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['logo'] = $ds_view_mode;

  return $export;
}
