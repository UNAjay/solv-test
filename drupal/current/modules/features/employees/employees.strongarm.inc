<?php
/**
 * @file
 * employees.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function employees_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'account' => array(
          'weight' => '1',
        ),
        'timezone' => array(
          'weight' => '2',
        ),
        'overlay_control' => array(
          'weight' => '3',
        ),
        'wysiwyg' => array(
          'weight' => '4',
        ),
        'locale' => array(
          'weight' => '5',
        ),
        'metatags' => array(
          'weight' => '5',
        ),
        'googleanalytics' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'people/[user:field_acc_first_name]-[user:field_acc_last_name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 0;
  $export['user_pictures'] = $strongarm;

  return $export;
}
