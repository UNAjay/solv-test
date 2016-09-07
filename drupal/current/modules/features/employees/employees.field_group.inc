<?php
/**
 * @file
 * employees.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function employees_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_acc_info|user|user|form';
  $field_group->group_name = 'group_acc_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Account information',
    'weight' => '0',
    'children' => array(
      0 => 'account',
      1 => 'timezone',
      2 => 'overlay_control',
      3 => 'locale',
      4 => 'wysiwyg',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-acc-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_acc_info|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pers_info|user|user|form';
  $field_group->group_name = 'group_pers_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal information',
    'weight' => '1',
    'children' => array(
      0 => 'field_acc_first_name',
      1 => 'field_acc_last_name',
      2 => 'field_acc_link',
      3 => 'field_acc_office',
      4 => 'field_acc_phone',
      5 => 'field_acc_photo',
      6 => 'field_acc_role',
      7 => 'field_additional_information',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-pers-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pers_info|user|user|form'] = $field_group;

  return $export;
}
