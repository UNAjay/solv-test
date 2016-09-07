<?php
/**
 * @file
 * jobs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function jobs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|job_posting|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'job_posting';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'resources_right_menu' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_job_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'See This Job On ',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|job_posting|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|ds_job_listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'ds_job_listing';
  $ds_fieldsetting->settings = array(
    'resources_right_menu' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|ds_job_listing'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function jobs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|job_posting|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job_posting';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        1 => 'field_job_date',
        2 => 'field_job_location',
        3 => 'body',
        4 => 'job_postings_entity_view_1',
        5 => 'field_job_apply_info',
        6 => 'flippy_pager',
      ),
      'aside_primary' => array(
        7 => 'field_job_url',
        8 => 'resources_right_menu',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'field_job_date' => 'main_primary',
      'field_job_location' => 'main_primary',
      'body' => 'main_primary',
      'job_postings_entity_view_1' => 'main_primary',
      'field_job_apply_info' => 'main_primary',
      'flippy_pager' => 'main_primary',
      'field_job_url' => 'aside_primary',
      'resources_right_menu' => 'aside_primary',
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
  $export['node|job_posting|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|ds_job_listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'ds_job_listing';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        2 => 'body',
        6 => 'job_postings_job_listing',
      ),
      'aside_primary' => array(
        1 => 'resources_right_menu',
        3 => 'field_sidebar_text',
        4 => 'field_acton_url',
        5 => 'field_acton_newsletter_url',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'resources_right_menu' => 'aside_primary',
      'body' => 'main_primary',
      'field_sidebar_text' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
      'field_acton_newsletter_url' => 'aside_primary',
      'job_postings_job_listing' => 'main_primary',
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
  $export['node|page|ds_job_listing'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function jobs_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'ds_job_listing';
  $ds_view_mode->label = 'DS Job listing';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['ds_job_listing'] = $ds_view_mode;

  return $export;
}
