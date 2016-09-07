<?php
/**
 * @file
 * jeeveserp_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function jeeveserp_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Product site admin.
  $roles['Product site admin'] = array(
    'name' => 'Product site admin',
    'weight' => 9,
  );

  // Exported role: Regional editor.
  $roles['Regional editor'] = array(
    'name' => 'Regional editor',
    'weight' => 10,
  );

  return $roles;
}
