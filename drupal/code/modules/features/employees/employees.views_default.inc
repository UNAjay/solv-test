<?php
/**
 * @file
 * employees.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function employees_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'employees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Employees';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Employees';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_acc_office',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Photo */
  $handler->display->display_options['fields']['field_acc_photo']['id'] = 'field_acc_photo';
  $handler->display->display_options['fields']['field_acc_photo']['table'] = 'field_data_field_acc_photo';
  $handler->display->display_options['fields']['field_acc_photo']['field'] = 'field_acc_photo';
  $handler->display->display_options['fields']['field_acc_photo']['label'] = '';
  $handler->display->display_options['fields']['field_acc_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_acc_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_acc_photo']['settings'] = array(
    'image_style' => 'account_picture_thumb',
    'image_link' => 'content',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_acc_office']['id'] = 'field_acc_office';
  $handler->display->display_options['fields']['field_acc_office']['table'] = 'field_data_field_acc_office';
  $handler->display->display_options['fields']['field_acc_office']['field'] = 'field_acc_office';
  $handler->display->display_options['fields']['field_acc_office']['label'] = '';
  $handler->display->display_options['fields']['field_acc_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_acc_office']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_acc_office']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_acc_office']['delta_offset'] = '0';
  /* Field: User: Role */
  $handler->display->display_options['fields']['field_acc_role']['id'] = 'field_acc_role';
  $handler->display->display_options['fields']['field_acc_role']['table'] = 'field_data_field_acc_role';
  $handler->display->display_options['fields']['field_acc_role']['field'] = 'field_acc_role';
  $handler->display->display_options['fields']['field_acc_role']['label'] = '';
  $handler->display->display_options['fields']['field_acc_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_acc_role']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_acc_role']['delta_offset'] = '0';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Sort criterion: User: Office (field_acc_office) */
  $handler->display->display_options['sorts']['field_acc_office_tid']['id'] = 'field_acc_office_tid';
  $handler->display->display_options['sorts']['field_acc_office_tid']['table'] = 'field_data_field_acc_office';
  $handler->display->display_options['sorts']['field_acc_office_tid']['field'] = 'field_acc_office_tid';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  /* Filter criterion: Field: Region (field_acc_region) */
  $handler->display->display_options['filters']['field_acc_region_tid']['id'] = 'field_acc_region_tid';
  $handler->display->display_options['filters']['field_acc_region_tid']['table'] = 'field_data_field_acc_region';
  $handler->display->display_options['filters']['field_acc_region_tid']['field'] = 'field_acc_region_tid';
  $handler->display->display_options['filters']['field_acc_region_tid']['value'] = '';
  $handler->display->display_options['filters']['field_acc_region_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_acc_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_acc_region_tid']['expose']['operator_id'] = 'field_acc_region_tid_op';
  $handler->display->display_options['filters']['field_acc_region_tid']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_acc_region_tid']['expose']['operator'] = 'field_acc_region_tid_op';
  $handler->display->display_options['filters']['field_acc_region_tid']['expose']['identifier'] = 'field_acc_region_tid';
  $handler->display->display_options['filters']['field_acc_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_acc_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_acc_region_tid']['vocabulary'] = 'employee_region';
  /* Filter criterion: User: Office (field_acc_office) */
  $handler->display->display_options['filters']['field_acc_office_tid']['id'] = 'field_acc_office_tid';
  $handler->display->display_options['filters']['field_acc_office_tid']['table'] = 'field_data_field_acc_office';
  $handler->display->display_options['filters']['field_acc_office_tid']['field'] = 'field_acc_office_tid';
  $handler->display->display_options['filters']['field_acc_office_tid']['value'] = '';
  $handler->display->display_options['filters']['field_acc_office_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_acc_office_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_acc_office_tid']['expose']['operator_id'] = 'field_acc_office_tid_op';
  $handler->display->display_options['filters']['field_acc_office_tid']['expose']['label'] = 'Office';
  $handler->display->display_options['filters']['field_acc_office_tid']['expose']['operator'] = 'field_acc_office_tid_op';
  $handler->display->display_options['filters']['field_acc_office_tid']['expose']['identifier'] = 'field_acc_office_tid';
  $handler->display->display_options['filters']['field_acc_office_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_acc_office_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_acc_office_tid']['vocabulary'] = 'offices';
  /* Filter criterion: User: Role (field_acc_role) */
  $handler->display->display_options['filters']['field_acc_role_tid']['id'] = 'field_acc_role_tid';
  $handler->display->display_options['filters']['field_acc_role_tid']['table'] = 'field_data_field_acc_role';
  $handler->display->display_options['filters']['field_acc_role_tid']['field'] = 'field_acc_role_tid';
  $handler->display->display_options['filters']['field_acc_role_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_acc_role_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_acc_role_tid']['expose']['operator_id'] = 'field_acc_role_tid_op';
  $handler->display->display_options['filters']['field_acc_role_tid']['expose']['label'] = 'Position';
  $handler->display->display_options['filters']['field_acc_role_tid']['expose']['operator'] = 'field_acc_role_tid_op';
  $handler->display->display_options['filters']['field_acc_role_tid']['expose']['identifier'] = 'field_acc_role_tid';
  $handler->display->display_options['filters']['field_acc_role_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_acc_role_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_acc_role_tid']['vocabulary'] = 'roles';

  /* Display: Grid - Grouped by office (Block) */
  $handler = $view->new_display('block', 'Grid - Grouped by office (Block)', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_acc_office',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Office (field_acc_office) */
  $handler->display->display_options['relationships']['field_acc_office_tid']['id'] = 'field_acc_office_tid';
  $handler->display->display_options['relationships']['field_acc_office_tid']['table'] = 'field_data_field_acc_office';
  $handler->display->display_options['relationships']['field_acc_office_tid']['field'] = 'field_acc_office_tid';
  $handler->display->display_options['relationships']['field_acc_office_tid']['label'] = 'field_acc_office_det';
  $handler->display->display_options['relationships']['field_acc_office_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
  $handler->display->display_options['sorts']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name_1']['field'] = 'name';
  $handler->display->display_options['sorts']['name_1']['relationship'] = 'field_acc_office_tid';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';

  /* Display: More people in this office */
  $handler = $view->new_display('block', 'More people in this office', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Office (field_acc_office) */
  $handler->display->display_options['arguments']['field_acc_office_tid']['id'] = 'field_acc_office_tid';
  $handler->display->display_options['arguments']['field_acc_office_tid']['table'] = 'field_data_field_acc_office';
  $handler->display->display_options['arguments']['field_acc_office_tid']['field'] = 'field_acc_office_tid';
  $handler->display->display_options['arguments']['field_acc_office_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_acc_office_tid']['exception']['title'] = 'Alla';
  $handler->display->display_options['arguments']['field_acc_office_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_acc_office_tid']['title'] = 'More in %1';
  $handler->display->display_options['arguments']['field_acc_office_tid']['default_argument_type'] = 'field';
  $handler->display->display_options['arguments']['field_acc_office_tid']['default_argument_options']['field'] = 'content_taxonomy::field_acc_office';
  $handler->display->display_options['arguments']['field_acc_office_tid']['default_argument_options']['settings'] = array(
    'content_taxonomy_format' => 'tid',
  );
  $handler->display->display_options['arguments']['field_acc_office_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_acc_office_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_acc_office_tid']['summary_options']['items_per_page'] = '25';
  $export['employees'] = $view;

  return $export;
}
