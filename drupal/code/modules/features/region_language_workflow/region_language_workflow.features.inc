<?php
/**
 * @file
 * region_language_workflow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function region_language_workflow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function region_language_workflow_default_message_type() {
  $items = array();
  $items['basic_page_updated'] = entity_import('message_type', '{
    "name" : "basic_page_updated",
    "description" : "Basic page updated",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 1, "enabled" : 1, "quota" : "200", "days" : "30" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "There is Basic Page ([message:field-target-node:content-type:name]) updated: \\u003Ca href=\\u0022[message:field-target-node:url]\\u0022\\u003E [message:field-target-node:title]\\u003C\\/a\\u003E",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EThere is Basic Page ([message:field-target-node:content-type:name]) updated: \\u003Ca href=\\u0022[message:field-target-node:url]\\u0022\\u003E [message:field-target-node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['new_node'] = entity_import('message_type', '{
    "name" : "new_node",
    "description" : "New node",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 1, "enabled" : 1, "quota" : "200", "days" : "30" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : {
      "en" : [
        {
          "value" : "There is new node ([message:field-target-node:content-type:name]) available for translation: \\u003Ca href=\\u0022[message:field-target-node:url]\\u0022\\u003E [message:field-target-node:title]\\u003C\\/a\\u003E\\r\\nLanguage: [message:field-target-node:language]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EThere is new node ([message:field-target-node:content-type:name]) available for translation: \\u003Ca href=\\u0022[message:field-target-node:url]\\u0022\\u003E [message:field-target-node:title]\\u003C\\/a\\u003E\\u003Cbr \\/\\u003E\\nLanguage: [message:field-target-node:language]\\u003C\\/p\\u003E\\n"
        }
      ],
      "und" : [
        {
          "value" : "There is new node ([message:field-target-node:content-type:name]) available for translation: \\u003Ca href=\\u0022[message:field-target-node:url]\\u0022\\u003E [message:field-target-node:title]\\u003C\\/a\\u003E",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EThere is new node ([message:field-target-node:content-type:name]) available for translation: \\u003Ca href=\\u0022[message:field-target-node:url]\\u0022\\u003E [message:field-target-node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "There is new content available for translation @ [site:name]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EThere is new content available for translation @ [site:name]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "There is new node ([message:field-target-node:content-type:name]) available for translation: \\u003Ca href=\\u0022[message:field-target-node:url]\\u0022\\u003E [message:field-target-node:title]\\u003C\\/a\\u003E\\r\\nLanguage: [message:field-target-node:language]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EThere is new node ([message:field-target-node:content-type:name]) available for translation: \\u003Ca href=\\u0022[message:field-target-node:url]\\u0022\\u003E [message:field-target-node:title]\\u003C\\/a\\u003E\\u003Cbr \\/\\u003E\\nLanguage: [message:field-target-node:language]\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
