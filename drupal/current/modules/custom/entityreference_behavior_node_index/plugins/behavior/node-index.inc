<?php

/**
 * @file
 * CTools plugin declaration for taxonomy-index behavior.
 */

if (module_exists('taxonomy')) {
  $plugin = array(
    'title' => t('Node index'),
    'description' => t('Include the term references created by instances of this field carried by node entities in the core {taxonomy_index} table. This will allow various modules to handle them like core term_reference fields.'),
    'class' => 'EntityReferenceBehavior_NodeIndex',
    'behavior type' => 'instance',
    'force enabled' => TRUE,
  );
}
