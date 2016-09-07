<?php
/**
 * @file
 * monster_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function monster_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_background_transparent'
  $field_bases['field_background_transparent'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_background_transparent',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Off',
        1 => 'Add transparent layer',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_banner_image'
  $field_bases['field_banner_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_banner_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 1,
    'type' => 'image',
  );

  // Exported field_base: 'field_banner_style'
  $field_bases['field_banner_style'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_banner_style',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'light' => 'Light',
        'dark' => 'Dark',
        'red' => 'Red',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_banner_text'
  $field_bases['field_banner_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_banner_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_content'
  $field_bases['field_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_content',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_content_entity'
  $field_bases['field_content_entity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_content_entity',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'blog_post' => 'blog_post',
          'customer' => 'customer',
          'diverse' => 'diverse',
          'event' => 'event',
          'news' => 'news',
          'office' => 'office',
          'partner' => 'partner',
          'product_news' => 'product_news',
          'video' => 'video',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_external_form'
  $field_bases['field_external_form'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_external_form',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 1,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_full_width'
  $field_bases['field_full_width'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_full_width',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => 'Full width',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_heading'
  $field_bases['field_heading'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_heading',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_section'
  $field_bases['field_section'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_section',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'section' => 'section',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_show_social_icons'
  $field_bases['field_show_social_icons'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_show_social_icons',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_sidebar_position'
  $field_bases['field_sidebar_position'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sidebar_position',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'left' => 'Left',
        'right' => 'Right',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_view_mode'
  $field_bases['field_view_mode'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_view_mode',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'view_mode_selector',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'view_mode_selector',
  );

  // Exported field_base: 'field_view_ref'
  $field_bases['field_view_ref'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_view_ref',
    'indexes' => array(
      'view_id' => array(
        0 => 'view_id',
      ),
    ),
    'locked' => 0,
    'module' => 'viewreference',
    'settings' => array(
      'append_id' => 0,
      'arguments' => array(
        'delimiter' => '/',
        'dsv_arguments' => 0,
        'label' => '!field_label arguments',
        'php_arguments' => 0,
        'rows' => 1,
      ),
      'entity_translation_sync' => FALSE,
      'referenceable_tags' => array(
        'allow' => '',
        'deny' => '',
      ),
      'referenceable_views' => array(
        'Customers:block_1' => 0,
        'Customers:block_2' => 0,
        'Customers:default' => 0,
        'administration_embed:default' => 0,
        'administration_embed:page' => 0,
        'archive:block' => 0,
        'archive:default' => 0,
        'archive:page' => 0,
        'authors:block' => 0,
        'authors:default' => 0,
        'backlinks:block' => 0,
        'backlinks:default' => 0,
        'backlinks:page' => 0,
        'blogs:block_1' => 0,
        'blogs:default' => 0,
        'blogs:feed' => 0,
        'blogs:page_1' => 0,
        'employees:block_1' => 0,
        'employees:block_2' => 0,
        'employees:default' => 0,
        'events:block' => 0,
        'events:block_2' => 0,
        'events:default' => 0,
        'events:feed_1' => 0,
        'files:block' => 0,
        'files:default' => 0,
        'frontpage:default' => 0,
        'frontpage:feed' => 0,
        'frontpage:page' => 0,
        'global_rss:default' => 0,
        'global_rss:feed_1' => 0,
        'glossary:attachment' => 0,
        'glossary:default' => 0,
        'glossary:page' => 0,
        'industries:block' => 0,
        'industries:default' => 0,
        'job_postings:default' => 0,
        'job_postings:entity_view_1' => 0,
        'job_postings:feed_1' => 0,
        'job_postings:job_listing' => 0,
        'job_postings:sites' => 0,
        'media_default:default' => 0,
        'media_default:media_browser_1' => 0,
        'media_default:media_browser_my_files' => 0,
        'message:default' => 0,
        'message:page_1' => 0,
        'micro_verticals:block_1' => 0,
        'micro_verticals:default' => 0,
        'news:block' => 0,
        'news:block_1' => 0,
        'news:block_2' => 0,
        'news:default' => 0,
        'news:feed_1' => 0,
        'news_slideshow:block' => 0,
        'news_slideshow:default' => 0,
        'offices:attachment_1' => 0,
        'offices:block_1' => 'offices:block_1',
        'offices:default' => 0,
        'partner:attachment_1' => 0,
        'partner:block_1' => 0,
        'partner:block_2' => 0,
        'partner:default' => 0,
        'partner:offices' => 0,
        'partner:offices_all' => 0,
        'promo_slideshow:block' => 0,
        'promo_slideshow:default' => 0,
        'promo_slideshow:inner' => 0,
        'redirects:default' => 0,
        'redirects:page_admin' => 0,
        'redirects:page_user' => 0,
        'ref_customers:block_1' => 'ref_customers:block_1',
        'ref_customers:customers_block' => 'ref_customers:customers_block',
        'ref_customers:customers_page' => 'ref_customers:customers_page',
        'ref_customers:default' => 0,
        'ref_customers:they_trust_us' => 'ref_customers:they_trust_us',
        'ref_news:default' => 0,
        'ref_news:hot_news' => 'ref_news:hot_news',
        'ref_news:latest' => 'ref_news:latest',
        'ref_news:page_1' => 'ref_news:page_1',
        'ref_related:default' => 0,
        'ref_related:related' => 'ref_related:related',
        'research_erp:default' => 0,
        'research_erp:research_erp_block' => 'research_erp:research_erp_block',
        'success_stories:block' => 0,
        'success_stories:default' => 0,
        'tagadelic_content:default' => 0,
        'tagadelic_content:page' => 0,
        'tagadelic_terms:default' => 0,
        'tagadelic_terms:page' => 0,
        'tagadelic_users:default' => 0,
        'tagadelic_users:page' => 0,
        'tags_tagadelic:block' => 0,
        'tags_tagadelic:default' => 0,
        'taxonomy_term:default' => 0,
        'taxonomy_term:feed' => 0,
        'taxonomy_term:page' => 0,
        'videos:block' => 0,
        'videos:default' => 0,
        'webinars:block' => 0,
        'webinars:default' => 0,
      ),
      'skip_default' => 1,
      'skip_disabled' => 0,
      'skip_empty' => 0,
      'sort_views' => 1,
    ),
    'translatable' => 0,
    'type' => 'viewreference',
  );

  return $field_bases;
}
