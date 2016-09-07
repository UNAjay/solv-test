<?php
/**
 * @file
 * success_story.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function success_story_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-customer-field_industry'
  $field_instances['node-customer-field_industry'] = array(
    'bundle' => 'customer',
    'default_value' => array(
      0 => array(
        'target_id' => 1,
      ),
      1 => array(
        'target_id' => 3,
      ),
      2 => array(
        'target_id' => 5,
      ),
      3 => array(
        'target_id' => 6,
      ),
      4 => array(
        'target_id' => 4,
      ),
      5 => array(
        'target_id' => 64,
      ),
      6 => array(
        'target_id' => 2,
      ),
      7 => array(
        'target_id' => 65,
      ),
      8 => array(
        'target_id' => 7,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'blogs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'company' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'customers' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'ds_contact_us' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ds_press_releases' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'events' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'frontpage' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'industries' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'news' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'partners' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resources_events' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resources_files' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resources_video' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_industry',
    'label' => 'Industry',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-customer-field_partners'
  $field_instances['node-customer-field_partners'] = array(
    'bundle' => 'customer',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => TRUE,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_partners',
    'label' => 'Partners',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'delete_references' => 0,
          'match_operator' => 'CONTAINS',
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Industry');
  t('Partners');

  return $field_instances;
}
