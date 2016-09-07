<?php
/**
 * @file
 * landing_pages.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function landing_pages_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-landing-pages.
  $menus['menu-landing-pages'] = array(
    'menu_name' => 'menu-landing-pages',
    'title' => 'Landing pages',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Landing pages');


  return $menus;
}
