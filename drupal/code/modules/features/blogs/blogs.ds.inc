<?php
/**
 * @file
 * blogs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function blogs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|blogs-page_1|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'blogs-page_1';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'vd_title_h1',
    ),
    'rows' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'pager' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'social_icons_blogs' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'tag_cloud' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|blogs-page_1|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog_post|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog_post';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'tag_cloud' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|blog_post|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog_post|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog_post';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|blog_post|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function blogs_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'blog_author';
  $ds_field->label = 'Blog author';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|authors-block',
    'block_render' => '1',
  );
  $export['blog_author'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'blog_list_view';
  $ds_field->label = 'Blog list view';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|blogs-block_1',
    'block_render' => '3',
  );
  $export['blog_list_view'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'social_icons_blogs';
  $ds_field->label = 'Social icons - blogs';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'ds_views' => 'ds_views',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'site_socialicons|site_socialicons_blogs',
    'block_render' => '1',
  );
  $export['social_icons_blogs'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'tag_cloud';
  $ds_field->label = 'Tag cloud';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'ds_views' => 'ds_views',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'blogs|blog_tags',
    'block_render' => '2',
  );
  $export['tag_cloud'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function blogs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|blogs-page_1|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'blogs-page_1';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        1 => 'rows',
        2 => 'pager',
      ),
      'aside_primary' => array(
        3 => 'social_icons_blogs',
        4 => 'tag_cloud',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'rows' => 'main_primary',
      'pager' => 'main_primary',
      'social_icons_blogs' => 'aside_primary',
      'tag_cloud' => 'aside_primary',
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
  $export['ds_views|blogs-page_1|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog_post|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_post';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_author',
        1 => 'field_image',
        2 => 'body',
        3 => 'field_add_this',
        4 => 'flippy_pager',
      ),
      'right' => array(
        5 => 'field_sidebar_text',
        6 => 'tag_cloud',
      ),
      'footer' => array(
        7 => 'field_section',
      ),
    ),
    'fields' => array(
      'field_author' => 'left',
      'field_image' => 'left',
      'body' => 'left',
      'field_add_this' => 'left',
      'flippy_pager' => 'left',
      'field_sidebar_text' => 'right',
      'tag_cloud' => 'right',
      'field_section' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|blog_post|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog_post|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_post';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
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
  $export['node|blog_post|teaser'] = $ds_layout;

  return $export;
}
