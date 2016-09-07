<?php
/**
 * @file
 * jeeveserp_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function jeeveserp_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access direct download file'.
  $permissions['access direct download file'] = array(
    'name' => 'access direct download file',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'download_file',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'add terms in attachment_type'.
  $permissions['add terms in attachment_type'] = array(
    'name' => 'add terms in attachment_type',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in employee_region'.
  $permissions['add terms in employee_region'] = array(
    'name' => 'add terms in employee_region',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in event_locations'.
  $permissions['add terms in event_locations'] = array(
    'name' => 'add terms in event_locations',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in industries'.
  $permissions['add terms in industries'] = array(
    'name' => 'add terms in industries',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in offices'.
  $permissions['add terms in offices'] = array(
    'name' => 'add terms in offices',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in partner_location'.
  $permissions['add terms in partner_location'] = array(
    'name' => 'add terms in partner_location',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in partner_type'.
  $permissions['add terms in partner_type'] = array(
    'name' => 'add terms in partner_type',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in product'.
  $permissions['add terms in product'] = array(
    'name' => 'add terms in product',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in roles'.
  $permissions['add terms in roles'] = array(
    'name' => 'add terms in roles',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in tags'.
  $permissions['add terms in tags'] = array(
    'name' => 'add terms in tags',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer menu block'.
  $permissions['administer menu block'] = array(
    'name' => 'administer menu block',
    'roles' => array(),
    'module' => 'config_perms',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(),
    'module' => 'redirect',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(),
    'module' => 'search',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer site information'.
  $permissions['administer site information'] = array(
    'name' => 'administer site information',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: 'administer site maintenance'.
  $permissions['administer site maintenance'] = array(
    'name' => 'administer site maintenance',
    'roles' => array(),
    'module' => 'config_perms',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer tracking code'.
  $permissions['administer tracking code'] = array(
    'name' => 'administer tracking code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tracking_code',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create attachments content'.
  $permissions['create attachments content'] = array(
    'name' => 'create attachments content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create diverse content'.
  $permissions['create diverse content'] = array(
    'name' => 'create diverse content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create product content'.
  $permissions['create product content'] = array(
    'name' => 'create product content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create product_news content'.
  $permissions['create product_news content'] = array(
    'name' => 'create product_news content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create step content'.
  $permissions['create step content'] = array(
    'name' => 'create step content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create video content'.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any attachments content'.
  $permissions['delete any attachments content'] = array(
    'name' => 'delete any attachments content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any diverse content'.
  $permissions['delete any diverse content'] = array(
    'name' => 'delete any diverse content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any product content'.
  $permissions['delete any product content'] = array(
    'name' => 'delete any product content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any product_news content'.
  $permissions['delete any product_news content'] = array(
    'name' => 'delete any product_news content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any step content'.
  $permissions['delete any step content'] = array(
    'name' => 'delete any step content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video content'.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own attachments content'.
  $permissions['delete own attachments content'] = array(
    'name' => 'delete own attachments content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own diverse content'.
  $permissions['delete own diverse content'] = array(
    'name' => 'delete own diverse content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own product content'.
  $permissions['delete own product content'] = array(
    'name' => 'delete own product content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own product_news content'.
  $permissions['delete own product_news content'] = array(
    'name' => 'delete own product_news content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own step content'.
  $permissions['delete own step content'] = array(
    'name' => 'delete own step content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own video content'.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in attachment_type'.
  $permissions['delete terms in attachment_type'] = array(
    'name' => 'delete terms in attachment_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in employee_region'.
  $permissions['delete terms in employee_region'] = array(
    'name' => 'delete terms in employee_region',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in event_locations'.
  $permissions['delete terms in event_locations'] = array(
    'name' => 'delete terms in event_locations',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in industries'.
  $permissions['delete terms in industries'] = array(
    'name' => 'delete terms in industries',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in offices'.
  $permissions['delete terms in offices'] = array(
    'name' => 'delete terms in offices',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in partner_location'.
  $permissions['delete terms in partner_location'] = array(
    'name' => 'delete terms in partner_location',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in partner_type'.
  $permissions['delete terms in partner_type'] = array(
    'name' => 'delete terms in partner_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in product'.
  $permissions['delete terms in product'] = array(
    'name' => 'delete terms in product',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in roles'.
  $permissions['delete terms in roles'] = array(
    'name' => 'delete terms in roles',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display block admin page'.
  $permissions['display block admin page'] = array(
    'name' => 'display block admin page',
    'roles' => array(),
    'module' => 'config_perms',
  );

  // Exported permission: 'display site configuration menu'.
  $permissions['display site configuration menu'] = array(
    'name' => 'display site configuration menu',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: 'display site structure menu'.
  $permissions['display site structure menu'] = array(
    'name' => 'display site structure menu',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: 'edit any attachments content'.
  $permissions['edit any attachments content'] = array(
    'name' => 'edit any attachments content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any diverse content'.
  $permissions['edit any diverse content'] = array(
    'name' => 'edit any diverse content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any product content'.
  $permissions['edit any product content'] = array(
    'name' => 'edit any product content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any product_news content'.
  $permissions['edit any product_news content'] = array(
    'name' => 'edit any product_news content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any step content'.
  $permissions['edit any step content'] = array(
    'name' => 'edit any step content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video content'.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own attachments content'.
  $permissions['edit own attachments content'] = array(
    'name' => 'edit own attachments content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own customer content'.
  $permissions['edit own customer content'] = array(
    'name' => 'edit own customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own diverse content'.
  $permissions['edit own diverse content'] = array(
    'name' => 'edit own diverse content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own partner content'.
  $permissions['edit own partner content'] = array(
    'name' => 'edit own partner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own product content'.
  $permissions['edit own product content'] = array(
    'name' => 'edit own product content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own product_news content'.
  $permissions['edit own product_news content'] = array(
    'name' => 'edit own product_news content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own step content'.
  $permissions['edit own step content'] = array(
    'name' => 'edit own step content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own video content'.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in attachment_type'.
  $permissions['edit terms in attachment_type'] = array(
    'name' => 'edit terms in attachment_type',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in employee_region'.
  $permissions['edit terms in employee_region'] = array(
    'name' => 'edit terms in employee_region',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in event_locations'.
  $permissions['edit terms in event_locations'] = array(
    'name' => 'edit terms in event_locations',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in industries'.
  $permissions['edit terms in industries'] = array(
    'name' => 'edit terms in industries',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in offices'.
  $permissions['edit terms in offices'] = array(
    'name' => 'edit terms in offices',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in partner_location'.
  $permissions['edit terms in partner_location'] = array(
    'name' => 'edit terms in partner_location',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in partner_type'.
  $permissions['edit terms in partner_type'] = array(
    'name' => 'edit terms in partner_type',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in product'.
  $permissions['edit terms in product'] = array(
    'name' => 'edit terms in product',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in roles'.
  $permissions['edit terms in roles'] = array(
    'name' => 'edit terms in roles',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'enter attachments revision log entry'.
  $permissions['enter attachments revision log entry'] = array(
    'name' => 'enter attachments revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter blog_post revision log entry'.
  $permissions['enter blog_post revision log entry'] = array(
    'name' => 'enter blog_post revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter customer revision log entry'.
  $permissions['enter customer revision log entry'] = array(
    'name' => 'enter customer revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter diverse revision log entry'.
  $permissions['enter diverse revision log entry'] = array(
    'name' => 'enter diverse revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter event revision log entry'.
  $permissions['enter event revision log entry'] = array(
    'name' => 'enter event revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter job_posting revision log entry'.
  $permissions['enter job_posting revision log entry'] = array(
    'name' => 'enter job_posting revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter news revision log entry'.
  $permissions['enter news revision log entry'] = array(
    'name' => 'enter news revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter office revision log entry'.
  $permissions['enter office revision log entry'] = array(
    'name' => 'enter office revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter page revision log entry'.
  $permissions['enter page revision log entry'] = array(
    'name' => 'enter page revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter partner revision log entry'.
  $permissions['enter partner revision log entry'] = array(
    'name' => 'enter partner revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter product revision log entry'.
  $permissions['enter product revision log entry'] = array(
    'name' => 'enter product revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter product_news revision log entry'.
  $permissions['enter product_news revision log entry'] = array(
    'name' => 'enter product_news revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter promo revision log entry'.
  $permissions['enter promo revision log entry'] = array(
    'name' => 'enter promo revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter step revision log entry'.
  $permissions['enter step revision log entry'] = array(
    'name' => 'enter step revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter video revision log entry'.
  $permissions['enter video revision log entry'] = array(
    'name' => 'enter video revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override attachments authored by option'.
  $permissions['override attachments authored by option'] = array(
    'name' => 'override attachments authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override attachments authored on option'.
  $permissions['override attachments authored on option'] = array(
    'name' => 'override attachments authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override attachments promote to front page option'.
  $permissions['override attachments promote to front page option'] = array(
    'name' => 'override attachments promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override attachments published option'.
  $permissions['override attachments published option'] = array(
    'name' => 'override attachments published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override attachments revision option'.
  $permissions['override attachments revision option'] = array(
    'name' => 'override attachments revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override attachments sticky option'.
  $permissions['override attachments sticky option'] = array(
    'name' => 'override attachments sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog_post authored by option'.
  $permissions['override blog_post authored by option'] = array(
    'name' => 'override blog_post authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog_post authored on option'.
  $permissions['override blog_post authored on option'] = array(
    'name' => 'override blog_post authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog_post promote to front page option'.
  $permissions['override blog_post promote to front page option'] = array(
    'name' => 'override blog_post promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog_post published option'.
  $permissions['override blog_post published option'] = array(
    'name' => 'override blog_post published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog_post revision option'.
  $permissions['override blog_post revision option'] = array(
    'name' => 'override blog_post revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog_post sticky option'.
  $permissions['override blog_post sticky option'] = array(
    'name' => 'override blog_post sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override customer authored by option'.
  $permissions['override customer authored by option'] = array(
    'name' => 'override customer authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override customer authored on option'.
  $permissions['override customer authored on option'] = array(
    'name' => 'override customer authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override customer promote to front page option'.
  $permissions['override customer promote to front page option'] = array(
    'name' => 'override customer promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override customer published option'.
  $permissions['override customer published option'] = array(
    'name' => 'override customer published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override customer revision option'.
  $permissions['override customer revision option'] = array(
    'name' => 'override customer revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override customer sticky option'.
  $permissions['override customer sticky option'] = array(
    'name' => 'override customer sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override diverse authored by option'.
  $permissions['override diverse authored by option'] = array(
    'name' => 'override diverse authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override diverse authored on option'.
  $permissions['override diverse authored on option'] = array(
    'name' => 'override diverse authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override diverse promote to front page option'.
  $permissions['override diverse promote to front page option'] = array(
    'name' => 'override diverse promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override diverse published option'.
  $permissions['override diverse published option'] = array(
    'name' => 'override diverse published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override diverse revision option'.
  $permissions['override diverse revision option'] = array(
    'name' => 'override diverse revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override diverse sticky option'.
  $permissions['override diverse sticky option'] = array(
    'name' => 'override diverse sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event authored by option'.
  $permissions['override event authored by option'] = array(
    'name' => 'override event authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event authored on option'.
  $permissions['override event authored on option'] = array(
    'name' => 'override event authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event promote to front page option'.
  $permissions['override event promote to front page option'] = array(
    'name' => 'override event promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event published option'.
  $permissions['override event published option'] = array(
    'name' => 'override event published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event revision option'.
  $permissions['override event revision option'] = array(
    'name' => 'override event revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event sticky option'.
  $permissions['override event sticky option'] = array(
    'name' => 'override event sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override job_posting authored by option'.
  $permissions['override job_posting authored by option'] = array(
    'name' => 'override job_posting authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override job_posting authored on option'.
  $permissions['override job_posting authored on option'] = array(
    'name' => 'override job_posting authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override job_posting promote to front page option'.
  $permissions['override job_posting promote to front page option'] = array(
    'name' => 'override job_posting promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override job_posting published option'.
  $permissions['override job_posting published option'] = array(
    'name' => 'override job_posting published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override job_posting revision option'.
  $permissions['override job_posting revision option'] = array(
    'name' => 'override job_posting revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override job_posting sticky option'.
  $permissions['override job_posting sticky option'] = array(
    'name' => 'override job_posting sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news authored by option'.
  $permissions['override news authored by option'] = array(
    'name' => 'override news authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news authored on option'.
  $permissions['override news authored on option'] = array(
    'name' => 'override news authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news promote to front page option'.
  $permissions['override news promote to front page option'] = array(
    'name' => 'override news promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news published option'.
  $permissions['override news published option'] = array(
    'name' => 'override news published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news revision option'.
  $permissions['override news revision option'] = array(
    'name' => 'override news revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news sticky option'.
  $permissions['override news sticky option'] = array(
    'name' => 'override news sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override office authored by option'.
  $permissions['override office authored by option'] = array(
    'name' => 'override office authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override office authored on option'.
  $permissions['override office authored on option'] = array(
    'name' => 'override office authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override office promote to front page option'.
  $permissions['override office promote to front page option'] = array(
    'name' => 'override office promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override office published option'.
  $permissions['override office published option'] = array(
    'name' => 'override office published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override office revision option'.
  $permissions['override office revision option'] = array(
    'name' => 'override office revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override office sticky option'.
  $permissions['override office sticky option'] = array(
    'name' => 'override office sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page authored by option'.
  $permissions['override page authored by option'] = array(
    'name' => 'override page authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page authored on option'.
  $permissions['override page authored on option'] = array(
    'name' => 'override page authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page promote to front page option'.
  $permissions['override page promote to front page option'] = array(
    'name' => 'override page promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page published option'.
  $permissions['override page published option'] = array(
    'name' => 'override page published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page revision option'.
  $permissions['override page revision option'] = array(
    'name' => 'override page revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page sticky option'.
  $permissions['override page sticky option'] = array(
    'name' => 'override page sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override partner authored by option'.
  $permissions['override partner authored by option'] = array(
    'name' => 'override partner authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override partner authored on option'.
  $permissions['override partner authored on option'] = array(
    'name' => 'override partner authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override partner promote to front page option'.
  $permissions['override partner promote to front page option'] = array(
    'name' => 'override partner promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override partner published option'.
  $permissions['override partner published option'] = array(
    'name' => 'override partner published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override partner revision option'.
  $permissions['override partner revision option'] = array(
    'name' => 'override partner revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override partner sticky option'.
  $permissions['override partner sticky option'] = array(
    'name' => 'override partner sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override product authored by option'.
  $permissions['override product authored by option'] = array(
    'name' => 'override product authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override product authored on option'.
  $permissions['override product authored on option'] = array(
    'name' => 'override product authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override product promote to front page option'.
  $permissions['override product promote to front page option'] = array(
    'name' => 'override product promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override product published option'.
  $permissions['override product published option'] = array(
    'name' => 'override product published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override product revision option'.
  $permissions['override product revision option'] = array(
    'name' => 'override product revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override product sticky option'.
  $permissions['override product sticky option'] = array(
    'name' => 'override product sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override product_news authored by option'.
  $permissions['override product_news authored by option'] = array(
    'name' => 'override product_news authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override product_news authored on option'.
  $permissions['override product_news authored on option'] = array(
    'name' => 'override product_news authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override product_news promote to front page option'.
  $permissions['override product_news promote to front page option'] = array(
    'name' => 'override product_news promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override product_news published option'.
  $permissions['override product_news published option'] = array(
    'name' => 'override product_news published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override product_news revision option'.
  $permissions['override product_news revision option'] = array(
    'name' => 'override product_news revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override product_news sticky option'.
  $permissions['override product_news sticky option'] = array(
    'name' => 'override product_news sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override promo authored by option'.
  $permissions['override promo authored by option'] = array(
    'name' => 'override promo authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override promo authored on option'.
  $permissions['override promo authored on option'] = array(
    'name' => 'override promo authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override promo promote to front page option'.
  $permissions['override promo promote to front page option'] = array(
    'name' => 'override promo promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override promo published option'.
  $permissions['override promo published option'] = array(
    'name' => 'override promo published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override promo revision option'.
  $permissions['override promo revision option'] = array(
    'name' => 'override promo revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override promo sticky option'.
  $permissions['override promo sticky option'] = array(
    'name' => 'override promo sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override step authored by option'.
  $permissions['override step authored by option'] = array(
    'name' => 'override step authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override step authored on option'.
  $permissions['override step authored on option'] = array(
    'name' => 'override step authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override step promote to front page option'.
  $permissions['override step promote to front page option'] = array(
    'name' => 'override step promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override step published option'.
  $permissions['override step published option'] = array(
    'name' => 'override step published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override step revision option'.
  $permissions['override step revision option'] = array(
    'name' => 'override step revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override step sticky option'.
  $permissions['override step sticky option'] = array(
    'name' => 'override step sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video authored by option'.
  $permissions['override video authored by option'] = array(
    'name' => 'override video authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video authored on option'.
  $permissions['override video authored on option'] = array(
    'name' => 'override video authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video promote to front page option'.
  $permissions['override video promote to front page option'] = array(
    'name' => 'override video promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video published option'.
  $permissions['override video published option'] = array(
    'name' => 'override video published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video revision option'.
  $permissions['override video revision option'] = array(
    'name' => 'override video revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video sticky option'.
  $permissions['override video sticky option'] = array(
    'name' => 'override video sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(),
    'module' => 'translation',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate taxonomy_term entities'.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
