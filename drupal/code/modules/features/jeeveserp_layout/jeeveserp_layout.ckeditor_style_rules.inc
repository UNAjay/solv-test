<?php
/**
 * @file
 * jeeveserp_layout.ckeditor_style_rules.inc
 */

/**
 * Implements hook_ckeditor_style_rule_default().
 */
function jeeveserp_layout_ckeditor_style_rule_default() {
  $export = array();

  $ckeditor_style_rule = new stdClass();
  $ckeditor_style_rule->disabled = FALSE; /* Edit this to true to make a default ckeditor_style_rule disabled initially */
  $ckeditor_style_rule->api_version = 1;
  $ckeditor_style_rule->rid = '1';
  $ckeditor_style_rule->name = 'Heading 1';
  $ckeditor_style_rule->machine_name = 'heading_1';
  $ckeditor_style_rule->styleset = '-all-';
  $ckeditor_style_rule->description = '';
  $ckeditor_style_rule->element = 'h1';
  $ckeditor_style_rule->attributes = array(
    'class' => '',
    'style' => '',
  );
  $export['heading_1'] = $ckeditor_style_rule;

  $ckeditor_style_rule = new stdClass();
  $ckeditor_style_rule->disabled = FALSE; /* Edit this to true to make a default ckeditor_style_rule disabled initially */
  $ckeditor_style_rule->api_version = 1;
  $ckeditor_style_rule->rid = '2';
  $ckeditor_style_rule->name = 'Heading 2';
  $ckeditor_style_rule->machine_name = 'heading_2';
  $ckeditor_style_rule->styleset = '-all-';
  $ckeditor_style_rule->description = '';
  $ckeditor_style_rule->element = 'h2';
  $ckeditor_style_rule->attributes = array(
    'class' => '',
    'style' => '',
  );
  $export['heading_2'] = $ckeditor_style_rule;

  $ckeditor_style_rule = new stdClass();
  $ckeditor_style_rule->disabled = FALSE; /* Edit this to true to make a default ckeditor_style_rule disabled initially */
  $ckeditor_style_rule->api_version = 1;
  $ckeditor_style_rule->rid = '4';
  $ckeditor_style_rule->name = 'Heading 3';
  $ckeditor_style_rule->machine_name = 'heading_3';
  $ckeditor_style_rule->styleset = '-all-';
  $ckeditor_style_rule->description = '';
  $ckeditor_style_rule->element = 'h3';
  $ckeditor_style_rule->attributes = array(
    'class' => '',
    'style' => '',
  );
  $export['heading_3'] = $ckeditor_style_rule;

  $ckeditor_style_rule = new stdClass();
  $ckeditor_style_rule->disabled = FALSE; /* Edit this to true to make a default ckeditor_style_rule disabled initially */
  $ckeditor_style_rule->api_version = 1;
  $ckeditor_style_rule->rid = '1';
  $ckeditor_style_rule->name = 'Key features bullets';
  $ckeditor_style_rule->machine_name = 'key_features_bullets';
  $ckeditor_style_rule->styleset = '-all-';
  $ckeditor_style_rule->description = 'Specific stylesheet for bullets used in Micro verticals "Key features" block.';
  $ckeditor_style_rule->element = 'ul';
  $ckeditor_style_rule->attributes = array(
    'class' => 'key_features',
    'style' => '',
  );
  $export['key_features_bullets'] = $ckeditor_style_rule;

  $ckeditor_style_rule = new stdClass();
  $ckeditor_style_rule->disabled = FALSE; /* Edit this to true to make a default ckeditor_style_rule disabled initially */
  $ckeditor_style_rule->api_version = 1;
  $ckeditor_style_rule->rid = '3';
  $ckeditor_style_rule->name = 'Paragraph';
  $ckeditor_style_rule->machine_name = 'paragraph';
  $ckeditor_style_rule->styleset = '-all-';
  $ckeditor_style_rule->description = '';
  $ckeditor_style_rule->element = 'p';
  $ckeditor_style_rule->attributes = array(
    'class' => '',
    'style' => '#404040',
  );
  $export['paragraph'] = $ckeditor_style_rule;

  return $export;
}
