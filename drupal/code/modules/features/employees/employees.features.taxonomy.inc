<?php
/**
 * @file
 * employees.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function employees_taxonomy_default_vocabularies() {
  return array(
    'offices' => array(
      'name' => 'Offices',
      'machine_name' => 'offices',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'roles' => array(
      'name' => 'Roles',
      'machine_name' => 'roles',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
