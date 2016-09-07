<?php
/**
 * @file
 * success_story.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function success_story_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|customer|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'customer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '6',
    'children' => array(
      0 => 'field_industry',
      1 => 'field_region',
      2 => 'field_market',
      3 => 'field_product',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_categories|node|customer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|customer|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'customer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_customer_website',
      2 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|customer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|customer|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'customer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser image',
    'weight' => '2',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-image field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_image|node|customer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references|node|customer|form';
  $field_group->group_name = 'group_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'customer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'References',
    'weight' => '6',
    'children' => array(
      0 => 'field_partners',
      1 => 'field_files',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-references field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_references|node|customer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_success_story|node|customer|form';
  $field_group->group_name = 'group_success_story';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'customer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Success story',
    'weight' => '5',
    'children' => array(
      0 => 'field_success_story',
      1 => 'field_success_story_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-success-story field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_success_story|node|customer|form'] = $field_group;

  return $export;
}
