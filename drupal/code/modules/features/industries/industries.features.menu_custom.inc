<?php
/**
 * @file
 * industries.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function industries_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-industries-menu.
  $menus['menu-industries-menu'] = array(
    'menu_name' => 'menu-industries-menu',
    'title' => 'Industries menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Industries menu');


  return $menus;
}
