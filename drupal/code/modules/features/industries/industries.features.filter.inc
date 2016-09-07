<?php
/**
 * @file
 * industries.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function industries_filter_default_formats() {
  $formats = array();

  // Exported format: Display Suite code.
  $formats['ds_code'] = array(
    'format' => 'ds_code',
    'name' => 'Display Suite code',
    'cache' => 1,
    'status' => 0,
    'weight' => 12,
    'filters' => array(),
  );

  return $formats;
}
