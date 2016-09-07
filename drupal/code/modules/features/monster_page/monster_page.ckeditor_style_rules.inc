<?php
/**
 * @file
 * monster_page.ckeditor_style_rules.inc
 */

/**
 * Implements hook_ckeditor_style_rule_default().
 */
function monster_page_ckeditor_style_rule_default() {
  $export = array();

  $ckeditor_style_rule = new stdClass();
  $ckeditor_style_rule->disabled = FALSE; /* Edit this to true to make a default ckeditor_style_rule disabled initially */
  $ckeditor_style_rule->api_version = 1;
  $ckeditor_style_rule->rid = '1';
  $ckeditor_style_rule->name = 'Section title';
  $ckeditor_style_rule->machine_name = 'section_title';
  $ckeditor_style_rule->styleset = '-all-';
  $ckeditor_style_rule->description = 'Section title';
  $ckeditor_style_rule->element = 'h2';
  $ckeditor_style_rule->attributes = array(
    'class' => 'section-title',
    'style' => '',
  );
  $export['section_title'] = $ckeditor_style_rule;

  return $export;
}
