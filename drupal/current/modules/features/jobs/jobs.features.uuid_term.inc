<?php
/**
 * @file
 * jobs.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function jobs_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Career Builder',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2c2d3425-b704-4fdd-af9a-459548352b23',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'job_posting_sites',
    'field_job_site_logo' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 24,
          'revision_id' => 24,
          'language' => 'und',
          'source' => '',
          'uid' => 0,
          'status' => 1,
          'translate' => 0,
          'created' => 1446631202,
          'changed' => 1446631202,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'StepStone',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5d591489-94d9-4f42-aa06-7f6b120ffdaf',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'job_posting_sites',
    'field_job_site_logo' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 25,
          'revision_id' => 25,
          'language' => 'und',
          'source' => '',
          'uid' => 0,
          'status' => 1,
          'translate' => 0,
          'created' => 1446631202,
          'changed' => 1446631202,
        ),
      ),
    ),
  );
  return $terms;
}
