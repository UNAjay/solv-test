<?php
/**
 * @file
 * industries.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function industries_taxonomy_default_vocabularies() {
  return array(
    'industries' => array(
      'name' => 'Industries',
      'machine_name' => 'industries',
      'description' => 'Industries and Micro verticals',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'product' => array(
      'name' => 'Products',
      'machine_name' => 'product',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
