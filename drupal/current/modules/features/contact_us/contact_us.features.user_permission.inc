<?php
/**
 * @file
 * contact_us.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function contact_us_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create office content'.
  $permissions['create office content'] = array(
    'name' => 'create office content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any office content'.
  $permissions['delete any office content'] = array(
    'name' => 'delete any office content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own office content'.
  $permissions['delete own office content'] = array(
    'name' => 'delete own office content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any office content'.
  $permissions['edit any office content'] = array(
    'name' => 'edit any office content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own office content'.
  $permissions['edit own office content'] = array(
    'name' => 'edit own office content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'geocoder_service_all_handlers'.
  $permissions['geocoder_service_all_handlers'] = array(
    'name' => 'geocoder_service_all_handlers',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_google'.
  $permissions['geocoder_service_handler_google'] = array(
    'name' => 'geocoder_service_handler_google',
    'roles' => array(),
    'module' => 'geocoder',
  );

  return $permissions;
}
