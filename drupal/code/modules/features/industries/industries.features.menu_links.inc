<?php
/**
 * @file
 * industries.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function industries_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-industries-menu:taxonomy/term/1
  $menu_links['menu-industries-menu:taxonomy/term/1'] = array(
    'menu_name' => 'menu-industries-menu',
    'link_path' => 'taxonomy/term/1',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Service',
    'options' => array(
      'attributes' => array(
        'title' => 'Service',
      ),
      'alter' => TRUE,
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
  );
  // Exported menu link: menu-industries-menu:taxonomy/term/2
  $menu_links['menu-industries-menu:taxonomy/term/2'] = array(
    'menu_name' => 'menu-industries-menu',
    'link_path' => 'taxonomy/term/2',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Wholesale, Distribution and Retail',
    'options' => array(
      'attributes' => array(
        'title' => 'Wholesale, Distribution and Retail',
      ),
      'alter' => TRUE,
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 7,
  );
  // Exported menu link: menu-industries-menu:taxonomy/term/3
  $menu_links['menu-industries-menu:taxonomy/term/3'] = array(
    'menu_name' => 'menu-industries-menu',
    'link_path' => 'taxonomy/term/3',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Manufacturing',
    'options' => array(
      'attributes' => array(
        'title' => 'Manufacturing',
      ),
      'alter' => TRUE,
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Manufacturing');
  t('Service');
  t('Wholesale, Distribution and Retail');


  return $menu_links;
}
