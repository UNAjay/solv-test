<?php
/**
 * @file
 * monster_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function monster_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|section|section_dark';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'section';
  $ds_fieldsetting->view_mode = 'section_dark';
  $ds_fieldsetting->settings = array(
    'field_heading' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => 'section-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_background_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|section|section_dark'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|section|section_light';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'section';
  $ds_fieldsetting->view_mode = 'section_light';
  $ds_fieldsetting->settings = array(
    'field_heading' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => 'section-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_promo_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'banner-link',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_background_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|section|section_light'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function monster_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|section|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'section';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'title_field',
        2 => 'field_view',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'title_field' => 'ds_content',
      'field_view' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|section|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|section|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'section';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(),
    'fields' => array(),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|section|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|section|section_dark';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'section';
  $ds_layout->view_mode = 'section_dark';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_heading',
        1 => 'body',
        2 => 'field_banner_image',
        3 => 'group_sidebar',
        4 => 'field_banner_text',
        5 => 'field_promo_link',
        6 => 'group_social',
        7 => 'group_banner',
        8 => 'field_add_this',
        9 => 'field_background_image',
        10 => 'field_sidebar_text',
      ),
    ),
    'fields' => array(
      'field_heading' => 'ds_content',
      'body' => 'ds_content',
      'field_banner_image' => 'ds_content',
      'group_sidebar' => 'ds_content',
      'field_banner_text' => 'ds_content',
      'field_promo_link' => 'ds_content',
      'group_social' => 'ds_content',
      'group_banner' => 'ds_content',
      'field_add_this' => 'ds_content',
      'field_background_image' => 'ds_content',
      'field_sidebar_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|section|section_dark'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|section|section_light';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'section';
  $ds_layout->view_mode = 'section_light';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_heading',
        1 => 'field_banner_image',
        2 => 'field_banner_text',
        3 => 'body',
        4 => 'field_promo_link',
        5 => 'field_content_entity',
        6 => 'field_sidebar_text',
        7 => 'group_sidebar',
        8 => 'group_social',
        9 => 'group_banner',
        10 => 'field_add_this',
        11 => 'field_background_image',
      ),
    ),
    'fields' => array(
      'field_heading' => 'ds_content',
      'field_banner_image' => 'ds_content',
      'field_banner_text' => 'ds_content',
      'body' => 'ds_content',
      'field_promo_link' => 'ds_content',
      'field_content_entity' => 'ds_content',
      'field_sidebar_text' => 'ds_content',
      'group_sidebar' => 'ds_content',
      'group_social' => 'ds_content',
      'group_banner' => 'ds_content',
      'field_add_this' => 'ds_content',
      'field_background_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|section|section_light'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|section|section_text';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'section';
  $ds_layout->view_mode = 'section_text';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_add_this',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_add_this' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|section|section_text'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|section|section_view';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'section';
  $ds_layout->view_mode = 'section_view';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_view',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_view' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|section|section_view'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function monster_page_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'embed';
  $ds_view_mode->label = 'Embed';
  $ds_view_mode->entities = array(
    'ee' => 'ee',
  );
  $export['embed'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'section_dark';
  $ds_view_mode->label = 'Section: Dark';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['section_dark'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'section_light';
  $ds_view_mode->label = 'Section: Light';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['section_light'] = $ds_view_mode;

  return $export;
}
