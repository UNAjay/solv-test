<?php
/**
 * @file
 * employees.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function employees_user_default_roles() {
  $roles = array();

  // Exported role: Employees.
  $roles['Employees'] = array(
    'name' => 'Employees',
    'weight' => 3,
  );

  return $roles;
}
