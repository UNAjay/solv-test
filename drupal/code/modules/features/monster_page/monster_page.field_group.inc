<?php
/**
 * @file
 * monster_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function monster_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner|node|section|form';
  $field_group->group_name = 'group_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Banner',
    'weight' => '7',
    'children' => array(
      0 => 'field_banner_text',
      1 => 'field_banner_image',
      2 => 'field_banner_style',
      3 => 'field_promo_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-banner field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_banner|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner|node|section|section_dark';
  $field_group->group_name = 'group_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'section_dark';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Banner',
    'weight' => '4',
    'children' => array(
      0 => 'field_banner_text',
      1 => 'field_banner_image',
      2 => 'field_promo_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Banner',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-banner field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_banner|node|section|section_dark'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner|node|section|section_light';
  $field_group->group_name = 'group_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'section_light';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Banner',
    'weight' => '5',
    'children' => array(
      0 => 'field_banner_text',
      1 => 'field_banner_image',
      2 => 'field_promo_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Banner',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-banner field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_banner|node|section|section_light'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bg_image|node|section|form';
  $field_group->group_name = 'group_bg_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background image',
    'weight' => '8',
    'children' => array(
      0 => 'field_background_image',
      1 => 'field_background_transparent',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bg-image field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_bg_image|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|section|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_add_this',
      2 => 'field_heading',
      3 => 'field_full_width',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_region_holder|node|page|default';
  $field_group->group_name = 'group_region_holder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Region Holder',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Region Holder',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-region-holder field-group-div region-holder',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_region_holder|node|page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sections|node|page|form';
  $field_group->group_name = 'group_sections';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
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
  $field_groups['group_sections|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|section|form';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '6',
    'children' => array(
      0 => 'field_sidebar_text',
      1 => 'field_sidebar_position',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sidebar field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_sidebar|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|section|section_dark';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'section_dark';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '2',
    'children' => array(
      0 => 'field_sidebar_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sidebar field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sidebar|node|section|section_dark'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|section|section_light';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'section_light';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '3',
    'children' => array(
      0 => 'field_sidebar_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sidebar field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sidebar|node|section|section_light'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social|node|section|section_dark';
  $field_group->group_name = 'group_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'section_dark';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social',
    'weight' => '3',
    'children' => array(
      0 => 'field_add_this',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Social',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-social field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_social|node|section|section_dark'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social|node|section|section_light';
  $field_group->group_name = 'group_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'section_light';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social',
    'weight' => '4',
    'children' => array(
      0 => 'field_add_this',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Social',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-social field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_social|node|section|section_light'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Background image');
  t('Banner');
  t('Content');
  t('Region Holder');
  t('Sections');
  t('Sidebar');
  t('Social');

  return $field_groups;
}
