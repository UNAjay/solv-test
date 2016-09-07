<?php
/**
 * @file
 * jeeves_acton.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jeeves_acton_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_acton_form';
  $strongarm->value = 'edit-i18n-sync';
  $export['additional_settings__active_tab_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_acton_form';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_acton_form';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_acton_form';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_acton_form';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_acton_form';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__acton_form';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'ds_response' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
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
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'webform_without_text' => array(
        'custom_settings' => FALSE,
      ),
      'ds_contact_us' => array(
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
      'ds_job_listing' => array(
        'custom_settings' => FALSE,
      ),
      'ds_with_sidebar' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '6',
        ),
        'xmlsitemap' => array(
          'weight' => '5',
        ),
        'language' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_acton_form';
  $strongarm->value = array();
  $export['i18n_sync_node_type_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_acton_form';
  $strongarm->value = '4';
  $export['language_content_type_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_acton_form';
  $strongarm->value = '';
  $export['maxlength_js_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_acton_form';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_acton_form';
  $strongarm->value = array();
  $export['menu_options_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_acton_form';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_acton_form';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_acton_form';
  $strongarm->value = '0';
  $export['node_preview_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_acton_form';
  $strongarm->value = 0;
  $export['node_submitted_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_acton_form';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_acton_form';
  $strongarm->value = 0;
  $export['webform_node_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_acton_form';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_acton_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_acton_form';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_acton_form'] = $strongarm;

  return $export;
}
