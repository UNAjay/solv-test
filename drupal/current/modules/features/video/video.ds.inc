<?php
/**
 * @file
 * video.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function video_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|video|preview';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'file',
      ),
    ),
    'fields' => array(
      'file' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
  );
  $export['file|video|preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|video|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'jeeves_sixteen';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'regions' => array(
      'main_primary' => array(
        0 => 'field_video',
      ),
    ),
    'fields' => array(
      'field_video' => 'main_primary',
    ),
  );
  $export['node|video|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|video|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'jeeves_sixteen';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'regions' => array(
      'main_primary' => array(
        0 => 'field_video',
      ),
    ),
    'fields' => array(
      'field_video' => 'main_primary',
    ),
  );
  $export['node|video|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|video|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'jeeves_sixteen';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'field_video',
        1 => 'group_description_container',
        2 => 'title_field',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_video' => 'main_primary',
      'group_description_container' => 'main_primary',
      'title_field' => 'main_primary',
      'body' => 'main_primary',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main_primary' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|video|teaser'] = $ds_layout;

  return $export;
}
