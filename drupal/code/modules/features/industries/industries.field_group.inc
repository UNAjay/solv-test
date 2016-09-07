<?php
/**
 * @file
 * industries.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function industries_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|taxonomy_term|industries|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'industries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '4',
    'children' => array(
      0 => 'field_product',
      1 => 'field_region',
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
  $field_groups['group_categories|taxonomy_term|industries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|taxonomy_term|industries|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'industries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '2',
    'children' => array(
      0 => 'description_field',
      1 => 'field_acton_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-content field-group-tab',
        'description' => 'This is retired section, do not use it. Legacy / view usage only, this is about to be removed from system.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_content|taxonomy_term|industries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|taxonomy_term|industries|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'industries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser image',
    'weight' => '1',
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
  $field_groups['group_image|taxonomy_term|industries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references|taxonomy_term|industries|form';
  $field_group->group_name = 'group_references';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'industries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'References',
    'weight' => '3',
    'children' => array(
      0 => 'field_clients',
      1 => 'field_apps',
      2 => 'field_videos',
      3 => 'field_files',
      4 => 'field_basic_page',
      5 => 'field_description_page',
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
  $field_groups['group_references|taxonomy_term|industries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sections|node|customer|form';
  $field_group->group_name = 'group_sections';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'customer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sections',
    'weight' => '4',
    'children' => array(
      0 => 'field_section',
      1 => 'field_promo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sections field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_sections|node|customer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_text|node|customer|form';
  $field_group->group_name = 'group_sidebar_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'customer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar text',
    'weight' => '4',
    'children' => array(
      0 => 'field_sidebar_text',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Sidebar text',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-sidebar-text field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_sidebar_text|node|customer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_system|taxonomy_term|industries|form';
  $field_group->group_name = 'group_system';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'industries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'System settings',
    'weight' => '5',
    'children' => array(
      0 => 'metatags',
      1 => 'path',
      2 => 'xmlsitemap',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-system field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_system|taxonomy_term|industries|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categories');
  t('Content');
  t('References');
  t('Sections');
  t('Sidebar text');
  t('System settings');
  t('Teaser image');

  return $field_groups;
}
