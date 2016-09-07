<?php
/**
 * @file
 * partners.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function partners_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__partner';
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
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
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
      'partners' => array(
        'custom_settings' => FALSE,
      ),
      'news' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'webform_without_text' => array(
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
      'ds_success_stories' => array(
        'custom_settings' => FALSE,
      ),
      'ds_contact_us' => array(
        'custom_settings' => FALSE,
      ),
      'ds_response' => array(
        'custom_settings' => FALSE,
      ),
      'ds_with_sidebar' => array(
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
        'language' => array(
          'weight' => '1',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'metatags' => array(
          'weight' => '8',
        ),
        'xmlsitemap' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '45',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'flippy_pager' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_custom_sorting_partner';
  $strongarm->value = 0;
  $export['flippy_custom_sorting_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_ellipse_partner';
  $strongarm->value = '...';
  $export['flippy_ellipse_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_firstlast_partner';
  $strongarm->value = 0;
  $export['flippy_firstlast_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_first_label_partner';
  $strongarm->value = '« First';
  $export['flippy_first_label_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_head_partner';
  $strongarm->value = 1;
  $export['flippy_head_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_last_label_partner';
  $strongarm->value = 'Last »';
  $export['flippy_last_label_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_loop_partner';
  $strongarm->value = 0;
  $export['flippy_loop_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_next_label_partner';
  $strongarm->value = 'Next';
  $export['flippy_next_label_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_order_partner';
  $strongarm->value = 'ASC';
  $export['flippy_order_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_partner';
  $strongarm->value = 1;
  $export['flippy_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_prev_label_partner';
  $strongarm->value = 'Previous';
  $export['flippy_prev_label_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_random_label_partner';
  $strongarm->value = 'Random';
  $export['flippy_random_label_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_random_partner';
  $strongarm->value = 0;
  $export['flippy_random_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_show_empty_partner';
  $strongarm->value = 0;
  $export['flippy_show_empty_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_sort_partner';
  $strongarm->value = 'created';
  $export['flippy_sort_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_truncate_partner';
  $strongarm->value = '';
  $export['flippy_truncate_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_partner';
  $strongarm->value = '1';
  $export['i18n_node_extended_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_partner';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_partner';
  $strongarm->value = array();
  $export['i18n_sync_node_type_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_partner';
  $strongarm->value = '4';
  $export['language_content_type_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_partner';
  $strongarm->value = array();
  $export['menu_options_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_partner';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_partner';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_partner';
  $strongarm->value = '0';
  $export['node_preview_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_partner';
  $strongarm->value = 0;
  $export['node_submitted_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_partner_pattern';
  $strongarm->value = 'partners/[node:title]';
  $export['pathauto_node_partner_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_partner_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_partner_und_pattern'] = $strongarm;

  return $export;
}
