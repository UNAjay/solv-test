<?php
/**
 * @file
 * jobs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function jobs_taxonomy_default_vocabularies() {
  return array(
    'job_posting_sites' => array(
      'name' => 'Job Posting Sites',
      'machine_name' => 'job_posting_sites',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
