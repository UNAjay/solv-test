<?php
/**
 * @file
 * jeeveserp_layout.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function jeeveserp_layout_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'copyright';
  $fe_block_boxes->body = '<p>© 2016 Solvaxis AB. All Rights Reserved.</p><p>Impressum</p><p>CVG</p><p>Site Map</p>';

  $export['copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Solvaxis footer info';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_info';
  $fe_block_boxes->body = '<p>SOLVAXIS SA<br>Z.I. de la Suze<br>2605 Sonceboz<br>Switzerland<br>T +41 58 855 68 68<br>F +41 58 855 68 40<br><a href="mailto:info@solvaxis.com?subject=Message%20Via%20SolvAxis.com">info@solvaxis.com</a></p>';

  $export['footer_info'] = $fe_block_boxes;

  return $export;
}
