<?php
/**
 * @file
 * employees.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function employees_ctools_plugin_api($module = NULL, $api = NULL) {
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
function employees_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function employees_image_default_styles() {
  $styles = array();

  // Exported image style: account_picture.
  $styles['account_picture'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 620,
          'height' => 414,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'account_picture',
  );

  // Exported image style: account_picture_thumb.
  $styles['account_picture_thumb'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'account_picture_thumb',
  );

  return $styles;
}
