<?php
/**
 * @file
 * industries.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function industries_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|customer|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'customer';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'logo',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|customer|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|industries|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'industries';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'resources_right_menu' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'description_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_apps' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Apps',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-clients clients',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_clients' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Customer Cases',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-clients clients',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_files' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Downloads',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'attachments',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_videos' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Videos',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'videos',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_acton_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-form',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['taxonomy_term|industries|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|industries|teaser';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'industries';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['taxonomy_term|industries|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function industries_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'contact_form_block';
  $ds_field->label = 'Contact form block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'webform|client-block-27',
    'block_render' => '1',
  );
  $export['contact_form_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'customer_cases';
  $ds_field->label = 'Customer Cases';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = 'industries|*';
  $ds_field->properties = array(
    'block' => 'views|Customers-block_3',
    'block_render' => '1',
  );
  $export['customer_cases'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'customers_success_stories';
  $ds_field->label = 'Customers Success Stories';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'page|*';
  $ds_field->properties = array(
    'block' => 'views|Customers-block_1',
    'block_render' => '3',
  );
  $export['customers_success_stories'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'customers_view';
  $ds_field->label = 'Customers';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|Customers-block_2',
    'block_render' => '3',
  );
  $export['customers_view'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'industries';
  $ds_field->label = 'Industries';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|industries-block',
    'block_render' => '3',
  );
  $export['industries'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'industries_menu';
  $ds_field->label = 'Industries menu';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'menu_block|5',
    'block_render' => '1',
  );
  $export['industries_menu'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'micro_vertical';
  $ds_field->label = 'Micro verticals';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|micro_verticals-block_1',
    'block_render' => '2',
  );
  $export['micro_vertical'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'promo_text';
  $ds_field->label = 'Promo text';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|1',
    'block_render' => '2',
  );
  $export['promo_text'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'success_stories';
  $ds_field->label = 'Success stories';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|success_stories-block',
    'block_render' => '2',
  );
  $export['success_stories'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function industries_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|customer|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'customer';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'field_partners',
        2 => 'field_add_this',
      ),
      'right' => array(
        3 => 'field_image',
        4 => 'field_sidebar_text',
      ),
      'footer' => array(
        5 => 'field_section',
        6 => 'flippy_pager',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_partners' => 'left',
      'field_add_this' => 'left',
      'field_image' => 'right',
      'field_sidebar_text' => 'right',
      'field_section' => 'footer',
      'flippy_pager' => 'footer',
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
  $export['node|customer|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|customer|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'customer';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
        1 => 'body',
        2 => 'node_link',
        3 => 'field_partners',
        4 => 'field_add_this',
      ),
      'right' => array(
        5 => 'field_sidebar_text',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'body' => 'left',
      'node_link' => 'left',
      'field_partners' => 'left',
      'field_add_this' => 'left',
      'field_sidebar_text' => 'right',
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
  $export['node|customer|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|industries|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'industries';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        1 => 'description_field',
        2 => 'field_clients',
        3 => 'field_apps',
        4 => 'field_videos',
      ),
      'aside_primary' => array(
        5 => 'resources_right_menu',
        6 => 'field_acton_url',
        7 => 'field_files',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'description_field' => 'main_primary',
      'field_clients' => 'main_primary',
      'field_apps' => 'main_primary',
      'field_videos' => 'main_primary',
      'resources_right_menu' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
      'field_files' => 'aside_primary',
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
  $export['taxonomy_term|industries|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|industries|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'industries';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'aside_primary' => array(
        0 => 'contact_form_block',
        2 => 'industries_menu',
        7 => 'field_acton_url',
        8 => 'field_files',
      ),
      'main_primary' => array(
        1 => 'title',
        3 => 'description_field',
        4 => 'field_clients',
        5 => 'field_apps',
        6 => 'field_videos',
      ),
    ),
    'fields' => array(
      'contact_form_block' => 'aside_primary',
      'title' => 'main_primary',
      'industries_menu' => 'aside_primary',
      'description_field' => 'main_primary',
      'field_clients' => 'main_primary',
      'field_apps' => 'main_primary',
      'field_videos' => 'main_primary',
      'field_acton_url' => 'aside_primary',
      'field_files' => 'aside_primary',
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
  $export['taxonomy_term|industries|full'] = $ds_layout;

  return $export;
}
