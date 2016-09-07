<?php

/**
 * @file
 * Administrative page callbacks for the robotstxt_custom module.
 */

/**
 * Administration settings form.
 *
 * @see system_settings_form()
 */
function robotstxt_custom_admin_settings() {
  $form['robotstxt_custom'] = array(
    '#type' => 'textarea',
    '#title' => t('Contents of robots.txt'),
    '#default_value' => _robotstxt_custom_get_content(),
    '#cols' => 60,
    '#rows' => 20,
    '#wysiwyg' => FALSE,
  );

  return system_settings_form($form, FALSE);
}


/**
 * Implements hook_form_BASE_FORM_ID_alter().
 */
function robotstxt_custom_form_robotstxt_custom_admin_settings_alter(&$form, &$form_state) {
  $form['#submit'][] = 'robotstxt_custom_admin_settings_submit';
}

function robotstxt_custom_admin_settings_submit($form, $form_state) {

  $values = $form_state['values'];

  $destination = 'public://robots.txt';
  file_unmanaged_save_data($values['robotstxt_custom'], $destination, FILE_EXISTS_REPLACE);

}
