<?php
/**
 * @file
 * attachments.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function attachments_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|attachments|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'attachments';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_basic_pages' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'region-holder',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|attachments|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|attachments|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'attachments';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_icon' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|attachments|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function attachments_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|attachments|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'attachments';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_file',
        1 => 'field_acton_url',
        2 => 'body',
        3 => 'group_region_holder',
      ),
      'right' => array(
        4 => 'field_sidebar_text',
      ),
      'banner' => array(
        5 => 'field_banner_image',
        8 => 'field_banner_text',
        9 => 'field_promo_link',
        10 => 'group_banner',
      ),
      'footer' => array(
        6 => 'field_section',
        7 => 'field_basic_pages',
      ),
    ),
    'fields' => array(
      'field_file' => 'left',
      'field_acton_url' => 'left',
      'body' => 'left',
      'group_region_holder' => 'left',
      'field_sidebar_text' => 'right',
      'field_banner_image' => 'banner',
      'field_section' => 'footer',
      'field_basic_pages' => 'footer',
      'field_banner_text' => 'banner',
      'field_promo_link' => 'banner',
      'group_banner' => 'banner',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
      'preface' => 'div',
      'banner' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|attachments|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|attachments|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'attachments';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_acton_url',
        1 => 'field_icon',
      ),
    ),
    'fields' => array(
      'field_acton_url' => 'ds_content',
      'field_icon' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|attachments|teaser'] = $ds_layout;

  return $export;
}
