<?php
/**
 * @file
 * attachments.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function attachments_taxonomy_default_vocabularies() {
  return array(
    'attachment_type' => array(
      'name' => 'Document type',
      'machine_name' => 'attachment_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'market' => array(
      'name' => 'Market',
      'machine_name' => 'market',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
