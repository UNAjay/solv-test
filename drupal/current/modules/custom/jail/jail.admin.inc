<?php

/**
 * @file
 * Configuration options for JAIL Formatter settings.
 */

/**
 * Menu callback; Settings administration.
 */
function jail_admin_settings() {
  $form['jail_users'] = array(
    '#type' => 'checkbox',
    '#title' => t('Lazy load user images'),
    '#description' => t('If enabled, user pictures will "lazy load".'),
    '#default_value' => variable_get('jail_users', 0),
  );
  $form['jail_noscript'] = array(
    '#title' => t('NoScript images'),
    '#type' => 'checkbox',
    '#description' => t('When checked, a &lt;noscript&gt; tag will be added containing a regular version of the file. This will increase markup.'),
    '#default_value' => variable_get('jail_noscript', 0),
  );
  $form['jail_place'] = array(
    '#type' => 'textfield',
    '#title' => t('Placeholder image'),
    '#description' => t('Path to placeholder image.'),
    '#default_value' => variable_get('jail_place', drupal_get_path('module', 'jail') . '/white.gif'),
  );
  $form['jail_loader'] = array(
    '#type' => 'textfield',
    '#title' => t('Loader image'),
    '#description' => t('Path to loader image.'),
    '#default_value' => variable_get('jail_loader', drupal_get_path('module', 'jail') . '/white.gif'),
  );

  $form['jail_offset'] = array(
    '#type' => 'textfield',
    '#title' => t('Offset'),
    '#description' => t('A pixel offset below or above the browser window to start loading images.'),
    '#default_value' => variable_get('jail_offset', 0),
  );

  $form['jail_event'] = array(
    '#type' => 'select',
    '#title' => t('Event'),
    '#description' => t('The event on which to load images.'),
    '#options' => array(
      'load+scroll' => 'load+scroll',
      'load' => 'load',
      'scroll' => 'scroll',
    ),
    '#default_value' => variable_get('jail_event', 'load+scroll'),
  );
  $form['jail_timeout'] = array(
    '#type' => 'textfield',
    '#title' => t('Timeout'),
    '#description' => t('Delay before loading images, used for "load" event'),
    '#default_value' => variable_get('jail_timeout', 0),
  );
  $form['jail_effect'] = array(
    '#type' => 'select',
    '#title' => t('User picture effect'),
    '#description' => t('Select the effect to use for user pictures.'),
    '#default_value' => variable_get('jail_effect', 'show'),
    '#options' => array(
      'show' => 'None',
      'fadeIn' => 'Fade in',
      'slideDown' => 'Slide down',
    ),
  );
  $form['jail_version'] = array(
    '#type' => 'select',
    '#title' => t('JAIL Version'),
    '#description' => t('The version of JAIL installed'),
    '#default_value' => variable_get('jail_version', 0),
    '#options' => array(
      "0.9.5" => "0.9.5",
      "0.9.9" => "0.9.9",
    )
  );

  return system_settings_form($form);
}
