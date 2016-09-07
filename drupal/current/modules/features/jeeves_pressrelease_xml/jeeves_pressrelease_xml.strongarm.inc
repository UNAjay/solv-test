<?php
/**
 * @file
 * jeeves_pressrelease_xml.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jeeves_pressrelease_xml_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_tamper';
  $strongarm->value = array(
    'pressreleasexml_us-blank_source_1-default_value' => FALSE,
    'pressreleasexml_us-xpathparser_2-html_entity_decode' => FALSE,
    'pressreleasexml_us-xpathparser_1-strip_tags' => FALSE,
    'pressreleasexml_us-xpathparser_0-strip_tags' => FALSE,
    'pressreleasexml_us-xpathparser_3-strip_tags' => FALSE,
    'pressreleasexml_us-xpathparser_2-strtotime' => FALSE,
    'pressreleasexml_us-blank_source_2-default_value' => FALSE,
    'pressreleasexml_us-xpathparser_3-trim' => FALSE,
    'pressreleasexml_us-xpathparser_0-trim' => FALSE,
    'pressreleasexml_us-xpathparser_4-strtotime' => FALSE,
    'pressreleasexml_us-blank_source_3-default_value' => FALSE,
    'pressreleasexml_us-xpathparser_4-trim' => FALSE,
    'pressreleasexml_us-xpathparser_2-trim' => FALSE,
    'pressreleasexml_us-blank_source_4-default_value' => FALSE,
    'pressreleasexml_us-blank_source_5-default_value' => FALSE,
  );
  $export['default_feeds_tamper'] = $strongarm;

  return $export;
}
