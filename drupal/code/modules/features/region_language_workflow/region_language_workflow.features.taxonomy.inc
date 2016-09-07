<?php
/**
 * @file
 * region_language_workflow.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function region_language_workflow_taxonomy_default_vocabularies() {
  return array(
    'employee_region' => array(
      'name' => 'Regions',
      'machine_name' => 'employee_region',
      'description' => 'Employee region',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
