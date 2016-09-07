<?php
/**
 * @file
 * landing_pages.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function landing_pages_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|landing_page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'landing_page';
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
  $export['node|landing_page|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function landing_pages_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|landing_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'landing_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'group_region_holder',
      ),
      'right' => array(
        2 => 'field_sidebar_text',
      ),
      'footer' => array(
        3 => 'field_section',
        4 => 'field_basic_pages',
      ),
      'banner' => array(
        5 => 'field_banner_image',
        6 => 'field_banner_text',
        7 => 'field_promo_link',
        8 => 'group_banner',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'group_region_holder' => 'left',
      'field_sidebar_text' => 'right',
      'field_section' => 'footer',
      'field_basic_pages' => 'footer',
      'field_banner_image' => 'banner',
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
      'banner' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|landing_page|default'] = $ds_layout;

  return $export;
}
