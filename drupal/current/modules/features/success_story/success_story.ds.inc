<?php
/**
 * @file
 * success_story.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function success_story_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|customer|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'customer';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_partners' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Partners',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-partners partners',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'logo',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_success_story_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|customer|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function success_story_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser';
  $ds_view_mode->label = 'Teaser';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['teaser'] = $ds_view_mode;

  return $export;
}
