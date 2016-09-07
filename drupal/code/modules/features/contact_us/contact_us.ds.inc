<?php
/**
 * @file
 * contact_us.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function contact_us_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|office|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'office';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_location' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|office|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function contact_us_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'offices_with_maps';
  $ds_field->label = 'Offices (with maps)';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|offices-block_1',
    'block_render' => '3',
  );
  $export['offices_with_maps'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function contact_us_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|office|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'office';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'body',
      ),
      'right' => array(
        2 => 'field_location',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'body' => 'left',
      'field_location' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|office|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|ds_contact_us';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'ds_contact_us';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        1 => 'offices_with_maps',
        2 => 'field_apps',
        3 => 'field_videos',
        4 => 'field_clients',
      ),
      'aside_primary' => array(
        5 => 'field_acton_url',
        6 => 'resources_right_menu',
        7 => 'field_sidebar_text',
        8 => 'field_acton_newsletter_url',
        9 => 'field_files',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'offices_with_maps' => 'main_primary',
      'field_apps' => 'main_primary',
      'field_videos' => 'main_primary',
      'field_clients' => 'main_primary',
      'field_acton_url' => 'aside_primary',
      'resources_right_menu' => 'aside_primary',
      'field_sidebar_text' => 'aside_primary',
      'field_acton_newsletter_url' => 'aside_primary',
      'field_files' => 'aside_primary',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main_primary' => 'div',
      'aside_primary' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|page|ds_contact_us'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function contact_us_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'ds_contact_us';
  $ds_view_mode->label = 'DS Contact us';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['ds_contact_us'] = $ds_view_mode;

  return $export;
}
