<?php
/**
 * @file
 * industries.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function industries_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Customers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Customers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Customers';
  $handler->display->display_options['css_class'] = 'customers-list';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'logo_listing_image',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_customer_website']['id'] = 'field_customer_website';
  $handler->display->display_options['fields']['field_customer_website']['table'] = 'field_data_field_customer_website';
  $handler->display->display_options['fields']['field_customer_website']['field'] = 'field_customer_website';
  $handler->display->display_options['fields']['field_customer_website']['label'] = '';
  $handler->display->display_options['fields']['field_customer_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_customer_website']['alter']['text'] = '[field_image]';
  $handler->display->display_options['fields']['field_customer_website']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_customer_website']['alter']['path'] = '[field_customer_website-url]';
  $handler->display->display_options['fields']['field_customer_website']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_customer_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_customer_website']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_customer_website']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_customer_website']['click_sort_column'] = 'url';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_success_story_format']['id'] = 'field_success_story_format';
  $handler->display->display_options['sorts']['field_success_story_format']['table'] = 'field_data_field_success_story';
  $handler->display->display_options['sorts']['field_success_story_format']['field'] = 'field_success_story_format';
  $handler->display->display_options['sorts']['field_success_story_format']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'customer' => 'customer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Type',
      'operator' => 'in',
      'value' => array(
        'all' => 'all',
        'page' => 'page',
        'customer' => 'customer',
      ),
    ),
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Industries';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'industries';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';
  /* Filter criterion: Countries: Name - list */
  $handler->display->display_options['filters']['name_list']['id'] = 'name_list';
  $handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
  $handler->display->display_options['filters']['name_list']['field'] = 'name_list';
  $handler->display->display_options['filters']['name_list']['relationship'] = 'field_country_iso2';
  $handler->display->display_options['filters']['name_list']['value'] = array(
    'AF' => 'AF',
    'AX' => 'AX',
    'AL' => 'AL',
    'DZ' => 'DZ',
    'AS' => 'AS',
    'AD' => 'AD',
    'AO' => 'AO',
    'AI' => 'AI',
    'AQ' => 'AQ',
    'AG' => 'AG',
    'AR' => 'AR',
    'AM' => 'AM',
    'AW' => 'AW',
    'AU' => 'AU',
    'AT' => 'AT',
    'AZ' => 'AZ',
    'BS' => 'BS',
    'BH' => 'BH',
    'BD' => 'BD',
    'BB' => 'BB',
    'BY' => 'BY',
    'BE' => 'BE',
    'BZ' => 'BZ',
    'BJ' => 'BJ',
    'BM' => 'BM',
    'BT' => 'BT',
    'BO' => 'BO',
    'BQ' => 'BQ',
    'BA' => 'BA',
    'BW' => 'BW',
    'BV' => 'BV',
    'BR' => 'BR',
    'IO' => 'IO',
    'VG' => 'VG',
    'BN' => 'BN',
    'BG' => 'BG',
    'BF' => 'BF',
    'BI' => 'BI',
    'KH' => 'KH',
    'CM' => 'CM',
    'CA' => 'CA',
    'CV' => 'CV',
    'KY' => 'KY',
    'CF' => 'CF',
    'TD' => 'TD',
    'CL' => 'CL',
    'CN' => 'CN',
    'CX' => 'CX',
    'CC' => 'CC',
    'CO' => 'CO',
    'KM' => 'KM',
    'CG' => 'CG',
    'CD' => 'CD',
    'CK' => 'CK',
    'CR' => 'CR',
    'HR' => 'HR',
    'CU' => 'CU',
    'CW' => 'CW',
    'CY' => 'CY',
    'CZ' => 'CZ',
    'DK' => 'DK',
    'DJ' => 'DJ',
    'DM' => 'DM',
    'DO' => 'DO',
    'EC' => 'EC',
    'EG' => 'EG',
    'SV' => 'SV',
    'GQ' => 'GQ',
    'ER' => 'ER',
    'EE' => 'EE',
    'ET' => 'ET',
    'FK' => 'FK',
    'FO' => 'FO',
    'FJ' => 'FJ',
    'FI' => 'FI',
    'FR' => 'FR',
    'GF' => 'GF',
    'PF' => 'PF',
    'TF' => 'TF',
    'GA' => 'GA',
    'GM' => 'GM',
    'GE' => 'GE',
    'DE' => 'DE',
    'GH' => 'GH',
    'GI' => 'GI',
    'GR' => 'GR',
    'GL' => 'GL',
    'GD' => 'GD',
    'GP' => 'GP',
    'GU' => 'GU',
    'GT' => 'GT',
    'GG' => 'GG',
    'GN' => 'GN',
    'GW' => 'GW',
    'GY' => 'GY',
    'HT' => 'HT',
    'HM' => 'HM',
    'HN' => 'HN',
    'HK' => 'HK',
    'HU' => 'HU',
    'IS' => 'IS',
    'IN' => 'IN',
    'ID' => 'ID',
    'IR' => 'IR',
    'IQ' => 'IQ',
    'IE' => 'IE',
    'IM' => 'IM',
    'IL' => 'IL',
    'IT' => 'IT',
    'CI' => 'CI',
    'JM' => 'JM',
    'JP' => 'JP',
    'JE' => 'JE',
    'JO' => 'JO',
    'KZ' => 'KZ',
    'KE' => 'KE',
    'KI' => 'KI',
    'KW' => 'KW',
    'KG' => 'KG',
    'LA' => 'LA',
    'LV' => 'LV',
    'LB' => 'LB',
    'LS' => 'LS',
    'LR' => 'LR',
    'LY' => 'LY',
    'LI' => 'LI',
    'LT' => 'LT',
    'LU' => 'LU',
    'MO' => 'MO',
    'MK' => 'MK',
    'MG' => 'MG',
    'MW' => 'MW',
    'MY' => 'MY',
    'MV' => 'MV',
    'ML' => 'ML',
    'MT' => 'MT',
    'MH' => 'MH',
    'MQ' => 'MQ',
    'MR' => 'MR',
    'MU' => 'MU',
    'YT' => 'YT',
    'MX' => 'MX',
    'FM' => 'FM',
    'MD' => 'MD',
    'MC' => 'MC',
    'MN' => 'MN',
    'ME' => 'ME',
    'MS' => 'MS',
    'MA' => 'MA',
    'MZ' => 'MZ',
    'MM' => 'MM',
    'NA' => 'NA',
    'NR' => 'NR',
    'NP' => 'NP',
    'NL' => 'NL',
    'AN' => 'AN',
    'NC' => 'NC',
    'NZ' => 'NZ',
    'NI' => 'NI',
    'NE' => 'NE',
    'NG' => 'NG',
    'NU' => 'NU',
    'NF' => 'NF',
    'MP' => 'MP',
    'KP' => 'KP',
    'NO' => 'NO',
    'OM' => 'OM',
    'PK' => 'PK',
    'PW' => 'PW',
    'PS' => 'PS',
    'PA' => 'PA',
    'PG' => 'PG',
    'PY' => 'PY',
    'PE' => 'PE',
    'PH' => 'PH',
    'PN' => 'PN',
    'PL' => 'PL',
    'PT' => 'PT',
    'PR' => 'PR',
    'QA' => 'QA',
    'RE' => 'RE',
    'RO' => 'RO',
    'RU' => 'RU',
    'RW' => 'RW',
    'BL' => 'BL',
    'SH' => 'SH',
    'KN' => 'KN',
    'LC' => 'LC',
    'MF' => 'MF',
    'PM' => 'PM',
    'VC' => 'VC',
    'WS' => 'WS',
    'SM' => 'SM',
    'ST' => 'ST',
    'SA' => 'SA',
    'SN' => 'SN',
    'RS' => 'RS',
    'SC' => 'SC',
    'SL' => 'SL',
    'SG' => 'SG',
    'SX' => 'SX',
    'SK' => 'SK',
    'SI' => 'SI',
    'SB' => 'SB',
    'SO' => 'SO',
    'ZA' => 'ZA',
    'GS' => 'GS',
    'KR' => 'KR',
    'SS' => 'SS',
    'ES' => 'ES',
    'LK' => 'LK',
    'SD' => 'SD',
    'SR' => 'SR',
    'SJ' => 'SJ',
    'SZ' => 'SZ',
    'SE' => 'SE',
    'CH' => 'CH',
    'SY' => 'SY',
    'TW' => 'TW',
    'TJ' => 'TJ',
    'TZ' => 'TZ',
    'TH' => 'TH',
    'TL' => 'TL',
    'TG' => 'TG',
    'TK' => 'TK',
    'TO' => 'TO',
    'TT' => 'TT',
    'TN' => 'TN',
    'TR' => 'TR',
    'TM' => 'TM',
    'TC' => 'TC',
    'TV' => 'TV',
    'VI' => 'VI',
    'UG' => 'UG',
    'UA' => 'UA',
    'AE' => 'AE',
    'GB' => 'GB',
    'US' => 'US',
    'UM' => 'UM',
    'UY' => 'UY',
    'UZ' => 'UZ',
    'VU' => 'VU',
    'VA' => 'VA',
    'VE' => 'VE',
    'VN' => 'VN',
    'WF' => 'WF',
    'EH' => 'EH',
    'YE' => 'YE',
    'ZM' => 'ZM',
    'ZW' => 'ZW',
  );
  $handler->display->display_options['filters']['name_list']['group'] = 1;
  $handler->display->display_options['filters']['name_list']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_list']['expose']['operator_id'] = 'name_list_op';
  $handler->display->display_options['filters']['name_list']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['name_list']['expose']['operator'] = 'name_list_op';
  $handler->display->display_options['filters']['name_list']['expose']['identifier'] = 'name_list';
  $handler->display->display_options['filters']['name_list']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['name_list']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['name_list']['configuration'] = '2';
  $handler->display->display_options['filters']['name_list']['filter'] = array(
    'enabled' => '1',
    'continents' => array(),
  );

  /* Display: Success stories */
  $handler = $view->new_display('block', 'Success stories', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Customer Success Stories';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'customers success-stories';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'logo_listing_image',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_success_story_title']['id'] = 'field_success_story_title';
  $handler->display->display_options['fields']['field_success_story_title']['table'] = 'field_data_field_success_story_title';
  $handler->display->display_options['fields']['field_success_story_title']['field'] = 'field_success_story_title';
  $handler->display->display_options['fields']['field_success_story_title']['label'] = '';
  $handler->display->display_options['fields']['field_success_story_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_success_story_title']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_success_story_title']['element_class'] = 'title success-story-title';
  $handler->display->display_options['fields']['field_success_story_title']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_success_story']['id'] = 'field_success_story';
  $handler->display->display_options['fields']['field_success_story']['table'] = 'field_data_field_success_story';
  $handler->display->display_options['fields']['field_success_story']['field'] = 'field_success_story';
  $handler->display->display_options['fields']['field_success_story']['label'] = '';
  $handler->display->display_options['fields']['field_success_story']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_success_story']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_success_story']['element_class'] = 'story';
  $handler->display->display_options['fields']['field_success_story']['element_label_colon'] = FALSE;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_industry']['id'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['table'] = 'field_data_field_industry';
  $handler->display->display_options['fields']['field_industry']['field'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['label'] = '';
  $handler->display->display_options['fields']['field_industry']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_industry']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_industry']['element_class'] = 'industry';
  $handler->display->display_options['fields']['field_industry']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_industry']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_industry']['delta_offset'] = '0';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = 'Read more';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'links';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Description container */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Description container';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="title success-story-title">[field_success_story_title]</p>
<p class="story">[field_success_story]</p>
<p class="industry">[field_industry]</p>
<div class="links">[view_node]</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'description-container';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'customer' => 'customer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Type',
      'operator' => 'in',
      'value' => array(
        'all' => 'all',
        'page' => 'page',
        'customer' => 'customer',
      ),
    ),
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Industry';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'industries';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_success_story_title_value']['id'] = 'field_success_story_title_value';
  $handler->display->display_options['filters']['field_success_story_title_value']['table'] = 'field_data_field_success_story_title';
  $handler->display->display_options['filters']['field_success_story_title_value']['field'] = 'field_success_story_title_value';
  $handler->display->display_options['filters']['field_success_story_title_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator_id'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['identifier'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_1']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['vocabulary'] = 'employee_region';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['depth'] = '0';

  /* Display: Customer list */
  $handler = $view->new_display('block', 'Customer list', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'partner_logo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_customer_website']['id'] = 'field_customer_website';
  $handler->display->display_options['fields']['field_customer_website']['table'] = 'field_data_field_customer_website';
  $handler->display->display_options['fields']['field_customer_website']['field'] = 'field_customer_website';
  $handler->display->display_options['fields']['field_customer_website']['label'] = '';
  $handler->display->display_options['fields']['field_customer_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_customer_website']['alter']['text'] = '<div class="wrapper">[field_image]</div>';
  $handler->display->display_options['fields']['field_customer_website']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_customer_website']['alter']['path'] = '[field_customer_website-url]';
  $handler->display->display_options['fields']['field_customer_website']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_customer_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_customer_website']['empty'] = '<div class="wrapper">[field_image]</div>';
  $handler->display->display_options['fields']['field_customer_website']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_customer_website']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'customer' => 'customer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Type',
      'operator' => 'in',
      'value' => array(
        'all' => 'all',
        'page' => 'page',
        'customer' => 'customer',
      ),
    ),
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Industry';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'industries';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';
  /* Filter criterion: Field: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator_id'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['identifier'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_1']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['vocabulary'] = 'employee_region';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['depth'] = '1';
  $export['Customers'] = $view;

  $view = new view();
  $view->name = 'industries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Industries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Industries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_class'] = 'title';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['description']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['more_link_text'] = 'Läs mer';
  $handler->display->display_options['fields']['description']['alter']['more_link_path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['description']['element_type'] = 'div';
  $handler->display->display_options['fields']['description']['element_class'] = 'description';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['value']['value'] = 'NULL';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    4 => '4',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_class'] = 'title';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['description']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['more_link_text'] = 'Läs mer';
  $handler->display->display_options['fields']['description']['alter']['more_link_path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['description']['element_type'] = 'div';
  $handler->display->display_options['fields']['description']['element_class'] = 'description';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Description container */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Description container';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="title">[name]</span>
<div class="description">[description]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'description-container';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $export['industries'] = $view;

  $view = new view();
  $view->name = 'success_stories';
  $view->description = '2 random success stories for industries page sidebar';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Success Stories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Success Stories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_success_story_title']['id'] = 'field_success_story_title';
  $handler->display->display_options['fields']['field_success_story_title']['table'] = 'field_data_field_success_story_title';
  $handler->display->display_options['fields']['field_success_story_title']['field'] = 'field_success_story_title';
  $handler->display->display_options['fields']['field_success_story_title']['label'] = '';
  $handler->display->display_options['fields']['field_success_story_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_success_story_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_success_story_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_success_story_title']['element_wrapper_type'] = 'h3';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_success_story']['id'] = 'field_success_story';
  $handler->display->display_options['fields']['field_success_story']['table'] = 'field_data_field_success_story';
  $handler->display->display_options['fields']['field_success_story']['field'] = 'field_success_story';
  $handler->display->display_options['fields']['field_success_story']['label'] = '';
  $handler->display->display_options['fields']['field_success_story']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_success_story']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_success_story']['alter']['more_link_text'] = 'Läs mer';
  $handler->display->display_options['fields']['field_success_story']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_success_story']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_success_story']['element_label_colon'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'customer' => 'customer',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'customer' => 'customer',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'en' => 'en',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'node';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'en' => 'en',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_success_story_title_value']['id'] = 'field_success_story_title_value';
  $handler->display->display_options['filters']['field_success_story_title_value']['table'] = 'field_data_field_success_story_title';
  $handler->display->display_options['filters']['field_success_story_title_value']['field'] = 'field_success_story_title_value';
  $handler->display->display_options['filters']['field_success_story_title_value']['operator'] = 'not empty';
  $export['success_stories'] = $view;

  return $export;
}
