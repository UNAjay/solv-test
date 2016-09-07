<?php
/**
 * @file
 * webforms.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function webforms_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|webform|webform_without_text';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'webform';
  $ds_fieldsetting->view_mode = 'webform_without_text';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|webform|webform_without_text'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function webforms_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'events_subscr_form_block';
  $ds_field->label = 'Events subscr. form block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'webform|client-block-62',
    'block_render' => '1',
  );
  $export['events_subscr_form_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'news_subscr_form_block';
  $ds_field->label = 'News subscr. form block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'webform|client-block-61',
    'block_render' => '1',
  );
  $export['news_subscr_form_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'rfi_rfp_rfq_contact_form';
  $ds_field->label = 'IPQ contact form block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'webform|client-block-60',
    'block_render' => '1',
  );
  $export['rfi_rfp_rfq_contact_form'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function webforms_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'default';
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
        0 => 'title',
        1 => 'body',
        2 => 'webform',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'body' => 'main_primary',
      'webform' => 'main_primary',
    ),
  );
  $export['node|webform|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|webform_without_text';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'webform_without_text';
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
        0 => 'title',
        1 => 'webform',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'webform' => 'main_primary',
    ),
  );
  $export['node|webform|webform_without_text'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function webforms_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'webform_without_text';
  $ds_view_mode->label = 'Webform without text';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['webform_without_text'] = $ds_view_mode;

  return $export;
}
