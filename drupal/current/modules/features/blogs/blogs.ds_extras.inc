<?php
/**
 * @file
 * blogs.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function blogs_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'blogs-page_1';
  $ds_vd->label = 'Blogs: Page (Views template)';
  $export['blogs-page_1'] = $ds_vd;

  return $export;
}
