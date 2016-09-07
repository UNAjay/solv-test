<?php
/**
 * @file
 * Views-specific implementations and functions.
 */

/**
 * Implements hook_views_plugins().
 */
function site_views_divtable_views_plugins() {
  return array(
    'style' => array(
      'views_divtable' => array(
        'title' => t('DIV Table'),
        'help' => t('Display html list with field labels in heading.'),
        'handler' => 'site_views_divtable_plugin_style_divtable',
        'theme' => 'views_view_site_views_divtable',
        'uses row plugin' => TRUE,
        'uses row class' => FALSE,
        'uses options' => TRUE,
        'uses grouping' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}
