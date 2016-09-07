<?php
/**
 * @file
 * video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_mediafront_default_presets().
 */
function video_mediafront_default_presets() {
  $items = array(
    'mini' => array(
      'name' => 'mini',
      'description' => 'Mini Player',
      'player' => 'minplayer',
      'connect' => array(
        'iscontroller' => array(),
        'isplaylist' => array(),
      ),
      'settings' => array(
        'template' => 'default',
        'volume' => 80,
        'wmode' => 'transparent',
        'preload' => 1,
        'width' => '100%',
        'height' => '400px',
        'fluidWidth' => TRUE,
        'showWhenEmpty' => 1,
        'debug' => 0,
        'loop' => 0,
        'autoplay' => 0,
        'player_settings__active_tab' => 'edit-player-settings-presentation',
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
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
