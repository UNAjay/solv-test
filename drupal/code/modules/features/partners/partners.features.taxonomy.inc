<?php
/**
 * @file
 * partners.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function partners_taxonomy_default_vocabularies() {
  return array(
    'partner_location' => array(
      'name' => 'Implementation partner location',
      'machine_name' => 'partner_location',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'partner_type' => array(
      'name' => 'Implementation partner type',
      'machine_name' => 'partner_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
