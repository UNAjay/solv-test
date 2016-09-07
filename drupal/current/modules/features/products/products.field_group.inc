<?php
/**
 * @file
 * products.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function products_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner|node|product|default';
  $field_group->group_name = 'group_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Banner',
    'weight' => '7',
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
  $field_groups['group_banner|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner|node|product|form';
  $field_group->group_name = 'group_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Banner',
    'weight' => '8',
    'children' => array(
      0 => 'field_banner_image',
      1 => 'field_banner_style',
      2 => 'field_banner_text',
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
  $field_groups['group_banner|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|product|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '7',
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
  $field_groups['group_categories|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|product|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '4',
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
  $field_groups['group_content|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_container|node|product|teaser';
  $field_group->group_name = 'group_description_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
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
  $field_groups['group_description_container|node|product|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|product|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '3',
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
  $field_groups['group_image|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_navigation|node|product|default';
  $field_group->group_name = 'group_navigation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Navigation',
    'weight' => '0',
    'children' => array(
      0 => 'product_tour_list',
      1 => 'product_tour_tour_steps',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Navigation',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-navigation field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_navigation|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references|node|product|form';
  $field_group->group_name = 'group_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'References',
    'weight' => '6',
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
  $field_groups['group_references|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_region_holder|node|product|default';
  $field_group->group_name = 'group_region_holder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Region Holder',
    'weight' => '2',
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
  $field_groups['group_region_holder|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sections|node|product|form';
  $field_group->group_name = 'group_sections';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sections',
    'weight' => '5',
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
  $field_groups['group_sections|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tour|node|product|form';
  $field_group->group_name = 'group_tour';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tour',
    'weight' => '2',
    'children' => array(
      0 => 'field_product_tour_steps',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tour field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tour|node|product|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner');
  t('Categories');
  t('Content');
  t('Description container');
  t('Image');
  t('Navigation');
  t('References');
  t('Region Holder');
  t('Sections');
  t('Tour');

  return $field_groups;
}
