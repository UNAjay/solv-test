<?php
/**
 * @file
 * jeeveserp_layout.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function jeeveserp_layout_locale_default_languages() {
  $languages = array();

  // Exported language: de.
  $languages['de'] = array(
    'language' => 'de',
    'name' => 'German',
    'native' => 'DE',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'de',
    'weight' => -8,
  );
  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'U.S. English',
    'native' => 'EN',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => -10,
  );
  // Exported language: fr.
  $languages['fr'] = array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'FR',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n>1)',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => -9,
  );
  // Exported language: zh-hant.
  $languages['zh-hant'] = array(
    'language' => 'zh-hant',
    'name' => 'Chinese, Traditional',
    'native' => 'CH',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'zh-hant',
    'weight' => -7,
  );
  return $languages;
}
