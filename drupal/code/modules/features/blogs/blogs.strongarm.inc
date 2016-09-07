<?php
/**
 * @file
 * blogs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function blogs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'M d Y';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_vd';
  $strongarm->value = 1;
  $export['ds_extras_vd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__blog_post';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'webform_without_text' => array(
        'custom_settings' => FALSE,
      ),
      'blogs' => array(
        'custom_settings' => FALSE,
      ),
      'company' => array(
        'custom_settings' => FALSE,
      ),
      'customers' => array(
        'custom_settings' => FALSE,
      ),
      'events' => array(
        'custom_settings' => FALSE,
      ),
      'frontpage' => array(
        'custom_settings' => FALSE,
      ),
      'industries' => array(
        'custom_settings' => FALSE,
      ),
      'news' => array(
        'custom_settings' => FALSE,
      ),
      'partners' => array(
        'custom_settings' => FALSE,
      ),
      'resources_events' => array(
        'custom_settings' => FALSE,
      ),
      'resources_files' => array(
        'custom_settings' => FALSE,
      ),
      'resources_video' => array(
        'custom_settings' => FALSE,
      ),
      'content_image' => array(
        'custom_settings' => FALSE,
      ),
      'ds_section' => array(
        'custom_settings' => FALSE,
      ),
      'ds_contact_us' => array(
        'custom_settings' => FALSE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => FALSE,
      ),
      'ds_press_releases' => array(
        'custom_settings' => FALSE,
      ),
      'section_dark' => array(
        'custom_settings' => FALSE,
      ),
      'section_light' => array(
        'custom_settings' => FALSE,
      ),
      'ds_job_listing' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'metatags' => array(
          'weight' => '9',
        ),
        'xmlsitemap' => array(
          'weight' => '9',
        ),
        'language' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '41',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
        ),
        'flippy_pager' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '44',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_blog_post';
  $strongarm->value = 1;
  $export['flippy_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_custom_sorting_blog_post';
  $strongarm->value = 0;
  $export['flippy_custom_sorting_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_ellipse_blog_post';
  $strongarm->value = '...';
  $export['flippy_ellipse_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_firstlast_blog_post';
  $strongarm->value = 0;
  $export['flippy_firstlast_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_first_label_blog_post';
  $strongarm->value = '« First';
  $export['flippy_first_label_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_head_blog_post';
  $strongarm->value = 1;
  $export['flippy_head_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_last_label_blog_post';
  $strongarm->value = 'Last »';
  $export['flippy_last_label_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_loop_blog_post';
  $strongarm->value = 0;
  $export['flippy_loop_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_next_label_blog_post';
  $strongarm->value = 'Next article';
  $export['flippy_next_label_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_order_blog_post';
  $strongarm->value = 'ASC';
  $export['flippy_order_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_prev_label_blog_post';
  $strongarm->value = 'Previous article';
  $export['flippy_prev_label_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_random_blog_post';
  $strongarm->value = 0;
  $export['flippy_random_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_random_label_blog_post';
  $strongarm->value = 'Random';
  $export['flippy_random_label_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_show_empty_blog_post';
  $strongarm->value = 0;
  $export['flippy_show_empty_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_sort_blog_post';
  $strongarm->value = 'created';
  $export['flippy_sort_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_truncate_blog_post';
  $strongarm->value = '';
  $export['flippy_truncate_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_blog_post';
  $strongarm->value = '1';
  $export['i18n_node_extended_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_blog_post';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_blog_post';
  $strongarm->value = array();
  $export['i18n_sync_node_type_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_blog_post';
  $strongarm->value = '4';
  $export['language_content_type_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_blog_post';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_blog_post';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_blog_post';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_blog_post';
  $strongarm->value = '1';
  $export['node_preview_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_blog_post';
  $strongarm->value = 0;
  $export['node_submitted_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_post_pattern';
  $strongarm->value = 'blog/[node:title]';
  $export['pathauto_node_blog_post_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_post_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blog_post_und_pattern'] = $strongarm;

  return $export;
}
