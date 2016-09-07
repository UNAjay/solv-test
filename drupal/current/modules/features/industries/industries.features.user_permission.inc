<?php
/**
 * @file
 * industries.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function industries_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create customer content'.
  $permissions['create customer content'] = array(
    'name' => 'create customer content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any customer content'.
  $permissions['delete any customer content'] = array(
    'name' => 'delete any customer content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own customer content'.
  $permissions['delete own customer content'] = array(
    'name' => 'delete own customer content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any customer content'.
  $permissions['edit any customer content'] = array(
    'name' => 'edit any customer content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
