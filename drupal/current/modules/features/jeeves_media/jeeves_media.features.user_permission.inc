<?php
/**
 * @file
 * jeeves_media.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function jeeves_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer media wysiwyg view mode'.
  $permissions['administer media wysiwyg view mode'] = array(
    'name' => 'administer media wysiwyg view mode',
    'roles' => array(),
    'module' => 'media_wysiwyg_view_mode',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'use media wysiwyg'.
  $permissions['use media wysiwyg'] = array(
    'name' => 'use media wysiwyg',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
      'administrator' => 'administrator',
    ),
    'module' => 'media_wysiwyg',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
