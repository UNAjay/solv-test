<?php
/**
 * @file
 * video.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function video_taxonomy_default_vocabularies() {
  return array(
    'video_type' => array(
      'name' => 'Video type',
      'machine_name' => 'video_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
