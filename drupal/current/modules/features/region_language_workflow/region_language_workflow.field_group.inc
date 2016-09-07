<?php
/**
 * @file
 * region_language_workflow.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function region_language_workflow_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_translation_workflow|user|user|form';
  $field_group->group_name = 'group_translation_workflow';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Translation workflow',
    'weight' => '2',
    'children' => array(
      0 => 'field_acc_language',
      1 => 'field_acc_region',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-translation-workflow field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_translation_workflow|user|user|form'] = $field_group;

  return $export;
}
