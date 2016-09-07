<?php
/**
 * @file
 * attachments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function attachments_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_image_default_styles().
 */
function attachments_image_default_styles() {
  $styles = array();

  // Exported image style: attachment_image.
  $styles['attachment_image'] = array(
    'label' => 'attachment_image',
    'effects' => array(
      1 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 25,
          'height' => 32,
          'strength' => 'high',
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
function attachments_node_info() {
  $items = array(
    'attachments' => array(
      'name' => t('Attachments'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
