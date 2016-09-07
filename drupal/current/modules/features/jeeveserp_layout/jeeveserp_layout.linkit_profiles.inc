<?php
/**
 * @file
 * jeeveserp_layout.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function jeeveserp_layout_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'editor';
  $linkit_profile->admin_title = 'Editor';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'full_html' => 'full_html',
      'basic_html' => 0,
      'plain_text' => 0,
    ),
    'search_plugins' => array(
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:slide' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'attachments' => 0,
        'page' => 0,
        'blog_post' => 0,
        'customer' => 0,
        'diverse' => 0,
        'event' => 0,
        'full_page' => 0,
        'partner' => 0,
        'partner_office' => 0,
        'landing_page' => 0,
        'office' => 0,
        'page_section' => 0,
        'news' => 0,
        'product_news' => 0,
        'promo' => 0,
        'video' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'employee_region' => 0,
        'industries' => 0,
        'product' => 0,
        'offices' => 0,
        'roles' => 0,
        'partner_location' => 0,
        'partner_type' => 0,
        'tags' => 0,
        'attachment_type' => 0,
        'event_locations' => 0,
        'video_type' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:slide' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'entity',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'url_method' => '2',
    ),
    'attribute_plugins' => array(
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'imce' => 0,
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['editor'] = $linkit_profile;

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'field';
  $linkit_profile->admin_title = 'Field';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:slide' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'attachments' => 0,
        'page' => 0,
        'blog_post' => 0,
        'customer' => 0,
        'diverse' => 0,
        'event' => 0,
        'full_page' => 0,
        'partner' => 0,
        'job_posting' => 0,
        'landing_page' => 0,
        'office' => 0,
        'page_section' => 0,
        'news' => 0,
        'product_news' => 0,
        'promo' => 0,
        'section' => 0,
        'video' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'employee_region' => 0,
        'industries' => 0,
        'product' => 0,
        'offices' => 0,
        'roles' => 0,
        'partner_location' => 0,
        'partner_type' => 0,
        'tags' => 0,
        'attachment_type' => 0,
        'market' => 0,
        'event_locations' => 0,
        'video_type' => 0,
        'job_posting_sites' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:slide' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'entity',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'plugin' => 'raw_url',
      'url_method' => '2',
    ),
    'attribute_plugins' => array(
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'imce' => 0,
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['field'] = $linkit_profile;

  return $export;
}
