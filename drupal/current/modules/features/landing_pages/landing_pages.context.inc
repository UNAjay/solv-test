<?php
/**
 * @file
 * landing_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function landing_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_page';
  $context->description = 'Applies to content type landing page';
  $context->tag = 'landing_page';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'landing_page' => 'landing_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'header_secondary',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header_secondary',
          'weight' => '-9',
        ),
        'lang_dropdown-language' => array(
          'module' => 'lang_dropdown',
          'delta' => 'language',
          'region' => 'header_secondary',
          'weight' => '-8',
        ),
        'floatbar-floatbar' => array(
          'module' => 'floatbar',
          'delta' => 'floatbar',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'footer_primary',
          'weight' => '-10',
        ),
        'site_socialicons-site_socialicons_global' => array(
          'module' => 'site_socialicons',
          'delta' => 'site_socialicons_global',
          'region' => 'footer_primary',
          'weight' => '-9',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'footer_col_1',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'footer_col_2',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'landing-page',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Applies to content type landing page');
  t('landing_page');
  $export['landing_page'] = $context;

  return $export;
}
