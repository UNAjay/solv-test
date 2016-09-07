<?php
/**
 * @file
 * jeeveserp_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function jeeveserp_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = 'Applies to all pages, common headers and footers';
  $context->tag = 'global';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~landing_page' => '~landing_page',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'theme' => array(
      'values' => array(
        'solvaxis' => 'solvaxis',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'header_secondary',
          'weight' => '-9',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header_secondary',
          'weight' => '-8',
        ),
        'lang_dropdown-language' => array(
          'module' => 'lang_dropdown',
          'delta' => 'language',
          'region' => 'header_secondary',
          'weight' => '-7',
        ),
        'floatbar-floatbar' => array(
          'module' => 'floatbar',
          'delta' => 'floatbar',
          'region' => 'content',
          'weight' => '-10',
        ),
        'site_socialicons-site_socialicons_global' => array(
          'module' => 'site_socialicons',
          'delta' => 'site_socialicons_global',
          'region' => 'footer_primary',
          'weight' => '-37',
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
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Applies to all pages, common headers and footers');
  t('global');
  $export['global'] = $context;

  return $export;
}
