<?php
/**
 * @file
 * products.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function products_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product';
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
  $export['node|product|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function products_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'group_navigation',
        2 => 'product_tour_list',
        3 => 'product_tour_tour_steps',
      ),
      'left' => array(
        1 => 'body',
        4 => 'group_region_holder',
      ),
      'right' => array(
        5 => 'field_sidebar_text',
      ),
      'footer' => array(
        6 => 'field_section',
        7 => 'field_basic_pages',
      ),
      'banner' => array(
        8 => 'field_banner_image',
        9 => 'field_banner_text',
        11 => 'group_banner',
        12 => 'field_promo_link',
      ),
      'preface' => array(
        10 => 'product_tour_tour',
      ),
    ),
    'fields' => array(
      'group_navigation' => 'header',
      'body' => 'left',
      'product_tour_list' => 'header',
      'product_tour_tour_steps' => 'header',
      'group_region_holder' => 'left',
      'field_sidebar_text' => 'right',
      'field_section' => 'footer',
      'field_basic_pages' => 'footer',
      'field_banner_image' => 'banner',
      'field_banner_text' => 'banner',
      'product_tour_tour' => 'preface',
      'group_banner' => 'banner',
      'field_promo_link' => 'banner',
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
  $export['node|product|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|step|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'step';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        1 => 'field_image',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_image' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|step|default'] = $ds_layout;

  return $export;
}
