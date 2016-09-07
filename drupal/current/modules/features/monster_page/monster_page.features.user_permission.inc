<?php
/**
 * @file
 * monster_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function monster_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create section content'.
  $permissions['create section content'] = array(
    'name' => 'create section content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any section content'.
  $permissions['delete any section content'] = array(
    'name' => 'delete any section content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own section content'.
  $permissions['delete own section content'] = array(
    'name' => 'delete own section content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'eck add ee embed_block entities'.
  $permissions['eck add ee embed_block entities'] = array(
    'name' => 'eck add ee embed_block entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add ee embed_form entities'.
  $permissions['eck add ee embed_form entities'] = array(
    'name' => 'eck add ee embed_form entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add ee embed_list entities'.
  $permissions['eck add ee embed_list entities'] = array(
    'name' => 'eck add ee embed_list entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add ee embed_map entities'.
  $permissions['eck add ee embed_map entities'] = array(
    'name' => 'eck add ee embed_map entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer ee embed_block entities'.
  $permissions['eck administer ee embed_block entities'] = array(
    'name' => 'eck administer ee embed_block entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer ee embed_form entities'.
  $permissions['eck administer ee embed_form entities'] = array(
    'name' => 'eck administer ee embed_form entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer ee embed_list entities'.
  $permissions['eck administer ee embed_list entities'] = array(
    'name' => 'eck administer ee embed_list entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer ee embed_map entities'.
  $permissions['eck administer ee embed_map entities'] = array(
    'name' => 'eck administer ee embed_map entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete ee embed_block entities'.
  $permissions['eck delete ee embed_block entities'] = array(
    'name' => 'eck delete ee embed_block entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete ee embed_form entities'.
  $permissions['eck delete ee embed_form entities'] = array(
    'name' => 'eck delete ee embed_form entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete ee embed_list entities'.
  $permissions['eck delete ee embed_list entities'] = array(
    'name' => 'eck delete ee embed_list entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete ee embed_map entities'.
  $permissions['eck delete ee embed_map entities'] = array(
    'name' => 'eck delete ee embed_map entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit ee embed_block entities'.
  $permissions['eck edit ee embed_block entities'] = array(
    'name' => 'eck edit ee embed_block entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit ee embed_form entities'.
  $permissions['eck edit ee embed_form entities'] = array(
    'name' => 'eck edit ee embed_form entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit ee embed_list entities'.
  $permissions['eck edit ee embed_list entities'] = array(
    'name' => 'eck edit ee embed_list entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit ee embed_map entities'.
  $permissions['eck edit ee embed_map entities'] = array(
    'name' => 'eck edit ee embed_map entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list ee embed_block entities'.
  $permissions['eck list ee embed_block entities'] = array(
    'name' => 'eck list ee embed_block entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list ee embed_form entities'.
  $permissions['eck list ee embed_form entities'] = array(
    'name' => 'eck list ee embed_form entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list ee embed_list entities'.
  $permissions['eck list ee embed_list entities'] = array(
    'name' => 'eck list ee embed_list entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list ee embed_map entities'.
  $permissions['eck list ee embed_map entities'] = array(
    'name' => 'eck list ee embed_map entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view ee embed_block entities'.
  $permissions['eck view ee embed_block entities'] = array(
    'name' => 'eck view ee embed_block entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view ee embed_form entities'.
  $permissions['eck view ee embed_form entities'] = array(
    'name' => 'eck view ee embed_form entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view ee embed_list entities'.
  $permissions['eck view ee embed_list entities'] = array(
    'name' => 'eck view ee embed_list entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view ee embed_map entities'.
  $permissions['eck view ee embed_map entities'] = array(
    'name' => 'eck view ee embed_map entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'edit any section content'.
  $permissions['edit any section content'] = array(
    'name' => 'edit any section content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own section content'.
  $permissions['edit own section content'] = array(
    'name' => 'edit own section content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter section revision log entry'.
  $permissions['enter section revision log entry'] = array(
    'name' => 'enter section revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override section authored by option'.
  $permissions['override section authored by option'] = array(
    'name' => 'override section authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override section authored on option'.
  $permissions['override section authored on option'] = array(
    'name' => 'override section authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override section promote to front page option'.
  $permissions['override section promote to front page option'] = array(
    'name' => 'override section promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override section published option'.
  $permissions['override section published option'] = array(
    'name' => 'override section published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override section revision option'.
  $permissions['override section revision option'] = array(
    'name' => 'override section revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override section sticky option'.
  $permissions['override section sticky option'] = array(
    'name' => 'override section sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'translate ee entities'.
  $permissions['translate ee entities'] = array(
    'name' => 'translate ee entities',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  return $permissions;
}
