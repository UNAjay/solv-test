<?php
/**
 * @file
 * employees.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function employees_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|offices|ds_office_taxonomy';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'offices';
  $ds_fieldsetting->view_mode = 'ds_office_taxonomy';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['taxonomy_term|offices|ds_office_taxonomy'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|full';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'user_menu_block' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'firstname_lastname' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'more_people_in_this_office' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['user|user|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function employees_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'employees_view';
  $ds_field->label = 'Employees view';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|employees-block_2',
    'block_render' => '3',
  );
  $export['employees_view'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'firstname_lastname';
  $ds_field->label = 'Name';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[user:field_acc_first_name] [user:field_acc_last_name]',
      'format' => 'plain_text',
    ),
    'use_token' => 1,
  );
  $export['firstname_lastname'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'more_people_in_this_office';
  $ds_field->label = 'More people in this office';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|employees-block_1',
    'block_render' => '2',
  );
  $export['more_people_in_this_office'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function employees_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|company';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'company';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        1 => 'body',
        2 => 'employees_view',
      ),
      'aside_primary' => array(
        3 => 'resources_right_menu',
        4 => 'field_sidebar_text',
        5 => 'field_acton_url',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'body' => 'main_primary',
      'employees_view' => 'main_primary',
      'resources_right_menu' => 'aside_primary',
      'field_sidebar_text' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main_primary' => 'div',
      'aside_primary' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|page|company'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|offices|ds_office_taxonomy';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'offices';
  $ds_layout->view_mode = 'ds_office_taxonomy';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'description',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['taxonomy_term|offices|ds_office_taxonomy'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|full';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'field_acc_photo',
        1 => 'field_additional_information',
        2 => 'more_people_in_this_office',
      ),
      'aside_primary' => array(
        3 => 'user_menu_block',
        4 => 'firstname_lastname',
        5 => 'field_acc_role',
        6 => 'field_acc_region',
        7 => 'field_acc_office',
        8 => 'field_acc_phone',
        9 => 'field_acc_link',
      ),
    ),
    'fields' => array(
      'field_acc_photo' => 'main_primary',
      'field_additional_information' => 'main_primary',
      'more_people_in_this_office' => 'main_primary',
      'user_menu_block' => 'aside_primary',
      'firstname_lastname' => 'aside_primary',
      'field_acc_role' => 'aside_primary',
      'field_acc_region' => 'aside_primary',
      'field_acc_office' => 'aside_primary',
      'field_acc_phone' => 'aside_primary',
      'field_acc_link' => 'aside_primary',
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
  $export['user|user|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function employees_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'ds_office_taxonomy';
  $ds_view_mode->label = 'DS Office taxonomy';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['ds_office_taxonomy'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'search_result';
  $ds_view_mode->label = 'DS User search result';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['search_result'] = $ds_view_mode;

  return $export;
}
