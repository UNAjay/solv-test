<?php
/**
 * @file
 * jeeveserp_layout.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function jeeveserp_layout_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|blogs';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'blogs';
  $ds_fieldsetting->settings = array(
    'resources_right_menu' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'blog_list_view' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'social_icons_blogs' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'tag_cloud' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
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
  $export['node|page|blogs'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|company';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'company';
  $ds_fieldsetting->settings = array(
    'resources_right_menu' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'employees_view' => array(
      'weight' => '2',
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
  $export['node|page|company'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|customers';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'customers';
  $ds_fieldsetting->settings = array(
    'resources_right_menu' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'customers_view' => array(
      'weight' => '2',
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
  $export['node|page|customers'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_basic_pages' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'region-holder',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|ds_contact_us';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'ds_contact_us';
  $ds_fieldsetting->settings = array(
    'resources_right_menu' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'offices_with_maps' => array(
      'weight' => '1',
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
    'field_acton_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Contact form',
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
  $export['node|page|ds_contact_us'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|events';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'events';
  $ds_fieldsetting->settings = array(
    'resources_right_menu' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'top_event' => array(
      'weight' => '2',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-def-at' => TRUE,
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'top-event',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'top_event_picker' => array(
      'weight' => '3',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-def-at' => TRUE,
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'top-event',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'events_listing' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'events-listing',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'social_icons_events' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
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
  $export['node|page|events'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|frontpage';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'frontpage';
  $ds_fieldsetting->settings = array(
    'news_slideshow' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'promo_slideshow' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|frontpage'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|industries';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'industries';
  $ds_fieldsetting->settings = array(
    'industries' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'industries_menu' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'success_stories' => array(
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
  $export['node|page|industries'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|news';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'news';
  $ds_fieldsetting->settings = array(
    'resources_right_menu' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'news_listing' => array(
      'weight' => '3',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'All News',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'news-listing',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'news_top_story' => array(
      'weight' => '2',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Top Story',
          'lb-el' => 'h2',
          'lb-def-at' => TRUE,
          'lb-col' => TRUE,
        ),
      ),
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
    'field_acton_newsletter_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-def-at' => TRUE,
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'news-subscr-form-block',
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
  $export['node|page|news'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|partners';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'partners';
  $ds_fieldsetting->settings = array(
    'resources_right_menu' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'partners_view' => array(
      'weight' => '2',
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
    'field_acton_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Contact form',
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
  $export['node|page|partners'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|resources_events';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'resources_events';
  $ds_fieldsetting->settings = array(
    'resources_listing' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'resources_right_menu' => array(
      'weight' => '3',
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
  $export['node|page|resources_events'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|resources_files';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'resources_files';
  $ds_fieldsetting->settings = array(
    'resources_files_listing' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'resources_right_menu' => array(
      'weight' => '3',
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
  $export['node|page|resources_files'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|resources_video';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'resources_video';
  $ds_fieldsetting->settings = array(
    'resources_right_menu' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'resources_videos_listing' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
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
  $export['node|page|resources_video'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function jeeveserp_layout_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'resources_files_listing';
  $ds_field->label = 'Resources Files listing';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|files-block',
    'block_render' => '3',
  );
  $export['resources_files_listing'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'resources_listing';
  $ds_field->label = 'Resources Webinars listing';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|webinars-block',
    'block_render' => '3',
  );
  $export['resources_listing'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'resources_right_menu';
  $ds_field->label = 'Basic page right menu';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'menu_block|2',
    'block_render' => '1',
  );
  $export['resources_right_menu'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'resources_videos_listing';
  $ds_field->label = 'Resources Videos listing';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|videos-block',
    'block_render' => '3',
  );
  $export['resources_videos_listing'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function jeeveserp_layout_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|blogs';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'blogs';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title_field',
        1 => 'blog_list_view',
      ),
      'aside_primary' => array(
        2 => 'resources_right_menu',
        3 => 'field_sidebar_text',
        4 => 'social_icons_blogs',
        5 => 'tag_cloud',
        6 => 'field_acton_url',
      ),
    ),
    'fields' => array(
      'title_field' => 'main_primary',
      'blog_list_view' => 'main_primary',
      'resources_right_menu' => 'aside_primary',
      'field_sidebar_text' => 'aside_primary',
      'social_icons_blogs' => 'aside_primary',
      'tag_cloud' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
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
  $export['node|page|blogs'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|customers';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'customers';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        1 => 'body',
        2 => 'customers_view',
        3 => 'field_clients',
      ),
      'aside_primary' => array(
        4 => 'resources_right_menu',
        5 => 'field_sidebar_text',
        6 => 'field_acton_url',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'body' => 'main_primary',
      'customers_view' => 'main_primary',
      'field_clients' => 'main_primary',
      'resources_right_menu' => 'aside_primary',
      'field_sidebar_text' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
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
  $export['node|page|customers'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'group_region_holder',
      ),
      'right' => array(
        2 => 'field_sidebar_text',
      ),
      'footer' => array(
        3 => 'field_section',
        4 => 'field_basic_pages',
        5 => 'footer_sections',
      ),
      'banner' => array(
        6 => 'field_banner_image',
        7 => 'field_banner_text',
        8 => 'field_promo_link',
        9 => 'group_banner',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'group_region_holder' => 'left',
      'field_sidebar_text' => 'right',
      'field_section' => 'footer',
      'field_basic_pages' => 'footer',
      'footer_sections' => 'footer',
      'field_banner_image' => 'banner',
      'field_banner_text' => 'banner',
      'field_promo_link' => 'banner',
      'group_banner' => 'banner',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
      'preface' => 'div',
      'banner' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|ds_press_releases';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'ds_press_releases';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        1 => 'body',
        2 => 'news_top_story',
        3 => 'news_listing',
      ),
      'aside_primary' => array(
        4 => 'resources_right_menu',
        5 => 'field_sidebar_text',
        6 => 'field_acton_url',
        7 => 'field_acton_newsletter_url',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'body' => 'main_primary',
      'news_top_story' => 'main_primary',
      'news_listing' => 'main_primary',
      'resources_right_menu' => 'aside_primary',
      'field_sidebar_text' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
      'field_acton_newsletter_url' => 'aside_primary',
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
  $export['node|page|ds_press_releases'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|events';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'events';
  $ds_layout->layout = 'panels-eleven-five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title_field',
        1 => 'body',
        2 => 'top_event',
        3 => 'top_event_picker',
        4 => 'events_listing',
      ),
      'aside_primary' => array(
        5 => 'resources_right_menu',
        6 => 'field_sidebar_text',
        7 => 'social_icons_events',
        8 => 'field_acton_url',
      ),
    ),
    'fields' => array(
      'title_field' => 'main_primary',
      'body' => 'main_primary',
      'top_event' => 'main_primary',
      'top_event_picker' => 'main_primary',
      'events_listing' => 'main_primary',
      'resources_right_menu' => 'aside_primary',
      'field_sidebar_text' => 'aside_primary',
      'social_icons_events' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
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
  $export['node|page|events'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|frontpage';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'frontpage';
  $ds_layout->layout = 'jeeves_sixteen';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'regions' => array(
      'main_primary' => array(
        0 => 'promo_slideshow',
        1 => 'news_slideshow',
      ),
    ),
    'fields' => array(
      'promo_slideshow' => 'main_primary',
      'news_slideshow' => 'main_primary',
    ),
  );
  $export['node|page|frontpage'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'group_region_holder',
      ),
      'right' => array(
        2 => 'field_sidebar_text',
      ),
      'footer' => array(
        3 => 'group_banner',
        4 => 'field_section',
        5 => 'field_basic_pages',
        6 => 'field_banner_image',
        7 => 'field_banner_text',
        8 => 'field_promo_link',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'group_region_holder' => 'left',
      'field_sidebar_text' => 'right',
      'group_banner' => 'footer',
      'field_section' => 'footer',
      'field_basic_pages' => 'footer',
      'field_banner_image' => 'footer',
      'field_banner_text' => 'footer',
      'field_promo_link' => 'footer',
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
  $export['node|page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|industries';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'industries';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        1 => 'body',
        2 => 'industries',
      ),
      'aside_primary' => array(
        3 => 'industries_menu',
        4 => 'field_sidebar_text',
        5 => 'success_stories',
        6 => 'field_acton_url',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'body' => 'main_primary',
      'industries' => 'main_primary',
      'industries_menu' => 'aside_primary',
      'field_sidebar_text' => 'aside_primary',
      'success_stories' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
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
  $export['node|page|industries'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|news';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'news';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        1 => 'body',
        2 => 'news_top_story',
        3 => 'news_listing',
      ),
      'aside_primary' => array(
        4 => 'resources_right_menu',
        5 => 'field_sidebar_text',
        6 => 'field_acton_url',
        7 => 'field_acton_newsletter_url',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'body' => 'main_primary',
      'news_top_story' => 'main_primary',
      'news_listing' => 'main_primary',
      'resources_right_menu' => 'aside_primary',
      'field_sidebar_text' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
      'field_acton_newsletter_url' => 'aside_primary',
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
  $export['node|page|news'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|partners';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'partners';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        1 => 'body',
        2 => 'partners_view',
      ),
      'aside_primary' => array(
        3 => 'resources_right_menu',
        4 => 'field_sidebar_text',
        5 => 'field_acton_url',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'body' => 'main_primary',
      'partners_view' => 'main_primary',
      'resources_right_menu' => 'aside_primary',
      'field_sidebar_text' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
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
  $export['node|page|partners'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|resources_events';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'resources_events';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        1 => 'body',
        2 => 'resources_listing',
      ),
      'aside_primary' => array(
        3 => 'resources_right_menu',
        4 => 'field_sidebar_text',
        5 => 'field_acton_url',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'body' => 'main_primary',
      'resources_listing' => 'main_primary',
      'resources_right_menu' => 'aside_primary',
      'field_sidebar_text' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
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
  $export['node|page|resources_events'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|resources_files';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'resources_files';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        1 => 'body',
        2 => 'resources_files_listing',
      ),
      'aside_primary' => array(
        3 => 'resources_right_menu',
        4 => 'field_sidebar_text',
        5 => 'field_acton_url',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'body' => 'main_primary',
      'resources_files_listing' => 'main_primary',
      'resources_right_menu' => 'aside_primary',
      'field_sidebar_text' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
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
  $export['node|page|resources_files'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|resources_video';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'resources_video';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        1 => 'body',
        2 => 'resources_videos_listing',
      ),
      'aside_primary' => array(
        3 => 'resources_right_menu',
        4 => 'field_sidebar_text',
        5 => 'field_acton_url',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'body' => 'main_primary',
      'resources_videos_listing' => 'main_primary',
      'resources_right_menu' => 'aside_primary',
      'field_sidebar_text' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
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
  $export['node|page|resources_video'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_news|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_news';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_news_image',
        1 => 'body',
        2 => 'field_add_this',
        4 => 'flippy_pager',
      ),
      'right' => array(
        3 => 'field_sidebar_text',
      ),
      'footer' => array(
        5 => 'field_section',
      ),
    ),
    'fields' => array(
      'field_news_image' => 'left',
      'body' => 'left',
      'field_add_this' => 'left',
      'field_sidebar_text' => 'right',
      'flippy_pager' => 'left',
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
  $export['node|product_news|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|industries|teaser';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'industries';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_image',
        2 => 'description_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_image' => 'ds_content',
      'description_field' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['taxonomy_term|industries|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function jeeveserp_layout_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'blogs';
  $ds_view_mode->label = 'DS Blogs';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['blogs'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'company';
  $ds_view_mode->label = 'DS Company';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['company'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'customers';
  $ds_view_mode->label = 'DS Customers';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['customers'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'ds_press_releases';
  $ds_view_mode->label = 'DS Press Releases';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['ds_press_releases'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'events';
  $ds_view_mode->label = 'DS Events';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['events'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'frontpage';
  $ds_view_mode->label = 'DS frontpage';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['frontpage'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'industries';
  $ds_view_mode->label = 'DS Industries';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['industries'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'news';
  $ds_view_mode->label = 'DS News';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['news'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'partners';
  $ds_view_mode->label = 'DS Partners';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['partners'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'resources_events';
  $ds_view_mode->label = 'DS Resources - events';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['resources_events'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'resources_files';
  $ds_view_mode->label = 'DS Resources - files';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['resources_files'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'resources_video';
  $ds_view_mode->label = 'DS Resources - video';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['resources_video'] = $ds_view_mode;

  return $export;
}
