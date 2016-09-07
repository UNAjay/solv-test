<?php
/**
 * @file
 * partners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function partners_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function partners_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function partners_image_default_styles() {
  $styles = array();

  // Exported image style: partner_badge.
  $styles['partner_badge'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 46,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'partner_badge',
  );

  // Exported image style: partner_logo.
  $styles['partner_logo'] = array(
    'label' => 'partner_logo',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function partners_node_info() {
  $items = array(
    'partner' => array(
      'name' => t('Implementation partner'),
      'base' => 'node_content',
      'description' => t('Implementation partner'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
