<?php
/**
 * @file
 * jobs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function jobs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create job_posting content'.
  $permissions['create job_posting content'] = array(
    'name' => 'create job_posting content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any job_posting content'.
  $permissions['delete any job_posting content'] = array(
    'name' => 'delete any job_posting content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own job_posting content'.
  $permissions['delete own job_posting content'] = array(
    'name' => 'delete own job_posting content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any job_posting content'.
  $permissions['edit any job_posting content'] = array(
    'name' => 'edit any job_posting content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own job_posting content'.
  $permissions['edit own job_posting content'] = array(
    'name' => 'edit own job_posting content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
