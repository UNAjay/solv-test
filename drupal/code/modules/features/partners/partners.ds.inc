<?php
/**
 * @file
 * partners.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function partners_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|partner|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'partner';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'related_success_stories' => array(
      'weight' => '2',
      'label' => 'above',
      'format' => 'default',
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|partner|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function partners_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'partner_offices_block';
  $ds_field->label = 'Partner offices block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'partner|*';
  $ds_field->properties = array(
    'block' => 'views|partner-offices',
    'block_render' => '3',
  );
  $export['partner_offices_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'partners_view';
  $ds_field->label = 'Partners view';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|partner-block_1',
    'block_render' => '3',
  );
  $export['partners_view'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'related_success_stories';
  $ds_field->label = 'Related success stories';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|partner-block_2',
    'block_render' => '1',
  );
  $export['related_success_stories'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function partners_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|partner|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'partner';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_partner_logo',
        1 => 'body',
        2 => 'related_success_stories',
        3 => 'field_add_this',
        4 => 'flippy_pager',
      ),
      'right' => array(
        5 => 'field_sidebar_text',
      ),
      'footer' => array(
        6 => 'field_section',
      ),
    ),
    'fields' => array(
      'field_partner_logo' => 'left',
      'body' => 'left',
      'related_success_stories' => 'left',
      'field_add_this' => 'left',
      'flippy_pager' => 'left',
      'field_sidebar_text' => 'right',
      'field_section' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|partner|default'] = $ds_layout;

  return $export;
}
