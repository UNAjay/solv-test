<?php
/**
 * @file
 * jeeveserp_layout.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jeeveserp_layout_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner|node|page|default';
  $field_group->group_name = 'group_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Banner',
    'weight' => '6',
    'children' => array(
      0 => 'field_banner_image',
      1 => 'field_banner_text',
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
  $field_groups['group_banner|node|page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner|node|page|form';
  $field_group->group_name = 'group_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
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
  $field_groups['group_banner|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|page|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '6',
    'children' => array(
      0 => 'field_region',
      1 => 'field_market',
      2 => 'field_industry',
      3 => 'field_product',
      4 => 'field_tags',
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
  $field_groups['group_categories|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|page|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_sidebar_text',
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
  $field_groups['group_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_container|node|customer|teaser';
  $field_group->group_name = 'group_description_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'customer';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description container',
    'weight' => '40',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Description container',
      'instance_settings' => array(
        'classes' => 'description-container group-description-container field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_customer_teaser_group_description_container',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_description_container|node|customer|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_container|node|page|teaser';
  $field_group->group_name = 'group_description_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description container',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Description container',
      'instance_settings' => array(
        'classes' => 'description-container group-description-container field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_page_teaser_group_description_container',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_description_container|node|page|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_container|node|video|teaser';
  $field_group->group_name = 'group_description_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description container',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Description container',
      'instance_settings' => array(
        'classes' => 'description-container group-description-container field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_video_teaser_group_description_container',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_description_container|node|video|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|page|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '2',
    'children' => array(
      0 => 'field_background_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-image field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_image|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references|node|page|form';
  $field_group->group_name = 'group_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'References',
    'weight' => '5',
    'children' => array(
      0 => 'field_basic_pages',
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
  $field_groups['group_references|node|page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner');
  t('Categories');
  t('Content');
  t('Description container');
  t('Image');
  t('References');

  return $field_groups;
}
