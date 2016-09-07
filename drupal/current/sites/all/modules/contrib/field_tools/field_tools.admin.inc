<?php
/**
 * @file
 * Contains admin callbacks for the Field tools module.
 */

/**
 * Page callback for the field overview list.
 */
function field_tools_field_overview() {
  $output = '';

  $entity_info = entity_get_info();
  $field_types = field_info_field_types();
  $fields = field_info_fields();

  $rows = array();
  foreach ($fields as $field_name => $field) {
    $row = array();
    // Column: field name.
    $row[] = l($field_name, 'admin/reports/fields/field/' . $field_name);
    // Column: field type.
    $row[] = $field_types[$field['type']]['label'];
    // Column: field instances.
    $row[] = field_tools_field_instances_list($field);

    // Column : operations.
    $items_ops = array();
    $items_ops[] = l('edit instances', "admin/reports/fields/field/$field_name/edit");
    $items_ops[] = l('delete instances', "admin/reports/fields/field/$field_name/delete");
    $row[] = theme('item_list', array(
      'items' => $items_ops,
    ));

    $rows[] = $row;
  }

  $header = array(
    t('Field name'),
    t('Type'),
    t('Instances'),
    t('Operations'),
  );

  $output .= theme('table', array(
    'rows' => $rows,
    'header' => $header,
  ));

  drupal_add_css(drupal_get_path('module', 'field_tools') . '/field_tools.css');

  return $output;
}

/**
 * Page callback for the field references overview list.
 *
 * @todo Make this all singing and dancing with some sort of visual
 * representation of the relationships.
 */
function field_tools_field_references_overview() {
  $output = '';

  $entity_info = entity_get_info();
  $field_types = field_info_field_types();
  $fields = field_info_fields();

  $rows = array();
  foreach ($fields as $field_name => $field) {
    // TODO: also deal with taxonomy term ref, product ref.
    if (!in_array($field['type'], array('entityreference'))) {
      continue;
    }

    $row = array();
    // Column: field name.
    $row[] = l($field_name, 'admin/reports/fields/field/' . $field_name);
    // Column: field type.
    $row[] = $field_types[$field['type']]['label'];
    // Column: field instances.
    $row[] = field_tools_field_instances_list($field);
    // Column: targets.
    switch ($field['type']) {
      case 'entityreference':
        $target_type = $field['settings']['target_type'];
    }
    // TODO: target bundles.
    $row[] = $entity_info[$target_type]['label'];

    $rows[] = $row;
  }

  $header = array(
    t('Field name'),
    t('Type'),
    t('Instances'),
    t('Target'),
  );

  $output .= theme('table', array(
    'rows' => $rows,
    'header' => $header,
  ));

  return $output;
}

/**
 * Form to edit all instances of a field.
 *
 * @param $field
 *  A field definition array.
 *
 * @see field_tools_field_edit_form_validate()
 * @see field_tools_field_edit_form_submit()
 */
function field_tools_field_edit_form($form, &$form_state, $field) {
  // Take the first instance in the list as the one to populate the form with.
  $bundles = array_keys($field['bundles']);
  $entity_type = array_shift($bundles);
  $bundle = $field['bundles'][$entity_type][0];

  $form['warning'] = array(
    '#markup' => t('WARNING: Editing these values will change ALL INSTANCES of this field:')
      . '<br />'
      . field_tools_field_instances_list($field),
  );

  $instance = field_info_instance($entity_type, $field['field_name'], $bundle);

  form_load_include($form_state, 'inc', 'field_ui', 'field_ui.admin');

  // Remainder cribbed from field_ui_field_edit_form().
  $form['#field'] = $field;
  $form['#instance'] = $instance;

  if (!empty($field['locked'])) {
    $form['locked'] = array(
      '#markup' => t('The field %field is locked and cannot be edited.', array('%field' => $instance['label'])),
    );
    return $form;
  }

  $field_type = field_info_field_types($field['type']);
  $widget_type = field_info_widget_types($instance['widget']['type']);
  $bundles = field_info_bundles();

  // Create a form structure for the instance values.
  $form['instance'] = array(
    '#tree' => TRUE,
    '#type' => 'fieldset',
    '#title' => t('%type settings', array('%type' => $bundles[$entity_type][$bundle]['label'])),
    '#description' => t('These settings will be applied the ALL INSTANCES OF THE %field field.', array(
      '%field' => $instance['label'],
      '%type' => $bundles[$entity_type][$bundle]['label'],
    )),
    // Ensure field_ui_field_edit_instance_pre_render() gets called in addition
    // to, not instead of, the #pre_render function(s) needed by all fieldsets.
    '#pre_render' => array_merge(array('field_ui_field_edit_instance_pre_render'), element_info_property('fieldset', '#pre_render', array())),
  );

  // Build the non-configurable instance values.
  $form['instance']['field_name'] = array(
    '#type' => 'value',
    '#value' => $instance['field_name'],
  );
  $form['instance']['entity_type'] = array(
    '#type' => 'value',
    '#value' => $entity_type,
  );
  $form['instance']['bundle'] = array(
    '#type' => 'value',
    '#value' => $bundle,
  );
  $form['instance']['widget']['weight'] = array(
    '#type' => 'value',
    '#value' => !empty($instance['widget']['weight']) ? $instance['widget']['weight'] : 0,
  );

  // Build the configurable instance values.
  $form['instance']['label'] = array(
    '#type' => 'textfield',
    '#title' => t('Label'),
    '#default_value' => !empty($instance['label']) ? $instance['label'] : $field['field_name'],
    '#required' => TRUE,
    '#weight' => -20,
  );
  $form['instance']['required'] = array(
    '#type' => 'checkbox',
    '#title' => t('Required field'),
    '#default_value' => !empty($instance['required']),
    '#weight' => -10,
  );

  $form['instance']['description'] = array(
    '#type' => 'textarea',
    '#title' => t('Help text'),
    '#default_value' => !empty($instance['description']) ? $instance['description'] : '',
    '#rows' => 5,
    '#description' => t('Instructions to present to the user below this field on the editing form.<br />Allowed HTML tags: @tags', array('@tags' => _field_filter_xss_display_allowed_tags())),
    '#weight' => -5,
  );

  // Build the widget component of the instance.
  $form['instance']['widget']['type'] = array(
    '#type' => 'value',
    '#value' => $instance['widget']['type'],
  );
  $form['instance']['widget']['module'] = array(
    '#type' => 'value',
    '#value' => $widget_type['module'],
  );
  $form['instance']['widget']['active'] = array(
    '#type' => 'value',
    '#value' => !empty($field['instance']['widget']['active']) ? 1 : 0,
  );

  // Add additional field instance settings from the field module.
  $additions = module_invoke($field['module'], 'field_instance_settings_form', $field, $instance);
  if (is_array($additions)) {
    $form['instance']['settings'] = $additions;
  }

  // Add additional widget settings from the widget module.
  $additions = module_invoke($widget_type['module'], 'field_widget_settings_form', $field, $instance);
  if (is_array($additions)) {
    $form['instance']['widget']['settings'] = $additions;
    $form['instance']['widget']['active']['#value'] = 1;
  }

  // Add handling for default value if not provided by any other module.
  if (field_behaviors_widget('default value', $instance) == FIELD_BEHAVIOR_DEFAULT && empty($instance['default_value_function'])) {
    $form['instance']['default_value_widget'] = field_ui_default_value_widget($field, $instance, $form, $form_state);
  }

  // End crib.

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array('#type' => 'submit', '#value' => t('Save settings'));

  return $form;
}

/**
 * Validate handler for the form for all instances of a field.
 *
 * @see field_tools_field_edit_form()
 * @see field_tools_field_edit_form_submit()
 * @see field_ui_field_edit_form_validate()
 */
function field_tools_field_edit_form_validate($form, &$form_state) {
  field_ui_field_edit_form_validate($form, $form_state);
}

/**
 * Submit handler for the form for all instances of a field.
 *
 * @see field_tools_field_edit_form()
 * @see field_tools_field_edit_form_validate()
 * @see field_ui_field_edit_form_submit()
 */
function field_tools_field_edit_form_submit($form, &$form_state) {
  $instance = $form_state['values']['instance'];
  $field = $form['#field'];

  // Handle the default value.
  if (isset($form['instance']['default_value_widget'])) {
    $element = $form['instance']['default_value_widget'];

    // Extract field values.
    $items = array();
    field_default_extract_form_values(NULL, NULL, $field, $instance, LANGUAGE_NONE, $items, $element, $form_state);
    field_default_submit(NULL, NULL, $field, $instance, LANGUAGE_NONE, $items, $element, $form_state);

    $instance['default_value'] = $items ? $items : NULL;
  }

  foreach ($field['bundles'] as $entity_type => $bundles) {
    foreach ($bundles as $bundle) {
      // Fake the entity type and bundle into the instance data to save.
      $instance['entity_type'] = $entity_type;
      $instance['bundle'] = $bundle;

      $instance_source = field_read_instance($entity_type, $field['field_name'], $bundle);
      $instance = array_merge($instance_source, $instance);
      field_update_instance($instance);
      drupal_set_message(t('Saved %label instance on entity %entity, bundle %bundle', array(
        '%label' => $instance['label'],
        // TODO: labels.
        '%entity' => $entity_type,
        '%bundle' => $bundle,
      )));
    }
  }

  // Redirect the user to the overview page.
  $form_state['redirect'] = 'admin/reports/fields/tools';
}

/**
 * Form for deleting multiple instances of a field.
 */
function field_tools_field_delete_form($form, &$form_state, $field) {
  drupal_set_title(t('Delete instances from field %fieldname', array(
    '%fieldname' => $field['field_name'],
  )), PASS_THROUGH);

  $form['info'] = array(
    '#markup' => $field['field_name'],
  );

  $entity_info = entity_get_info();

  $options = array();
  foreach ($field['bundles'] as $entity_type => $bundles) {
    foreach ($bundles as $bundle) {
      $options["$entity_type:$bundle"] = $entity_info[$entity_type]['label'] . ': ' . $entity_info[$entity_type]['bundles'][$bundle]['label'];
    }
  }

  $form['instances'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Instances to delete'),
    '#description' => t("WARNING: deleting an instance will delete ALL THE DATA in that instance."),
    '#options' => $options,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Delete field instances'),
  );

  // @todo: use confirm_form()!
  return $form;
}

/**
 * Submit handler for deleting multiple instances.
 */
function field_tools_field_delete_form_submit($form, &$form_state) {
  $field = $form_state['build_info']['args'][0];
  foreach (array_filter($form_state['values']['instances']) as $instance_key) {
    list($entity_type, $bundle_name) = explode(':', $instance_key);
    $instance = field_info_instance($entity_type, $field['field_name'], $bundle_name);
    field_delete_instance($instance);
    drupal_set_message(t('Deleted instance of %fieldname from %entity bundle %bundle', array(
      '%fieldname' => $field['field_name'],
      '%entity' => $entity_type,
      '%bundle' => $bundle_name,
    )));
  }
}

/**
 * Form builder for the cloning multiple fields from a bundle.
 *
 * @param $entity_type
 *  The machine name of the entity.
 * @param $bundle_name
 *  The machine name of the bundle, or a bundle object if the particular
 *  entity type has a menu loader for bundles.
 */
function field_tools_bundle_fields_clone_from_form($form, &$form_state, $entity_type, $bundle_name) {
  // Get the bundle name if the bundle name is really a bundle object.
  $bundle_name = field_extract_bundle($entity_type, $bundle_name);

  $field_instances = field_info_instances($entity_type, $bundle_name);

  $options_fields = array();
  foreach ($field_instances as $field_name => $field) {
    $options_fields[$field_name] = $field['label'];
  }

  $form['fields'] = array(
    '#title' => t('Fields to clone'),
    '#type' => 'checkboxes',
    '#options' => $options_fields,
    '#description' => t("Select fields to clone onto one or more bundles."),
  );

  if (module_exists('field_group')) {
    $groups = field_group_info_groups($entity_type, $bundle_name, 'form');
    $options_groups = array();
    foreach ($groups as $group_name => $group) {
      $options_groups[$group_name] = $group->label;
    }
    $form['groups'] = array(
      '#title' => t('Groups to clone'),
      '#type' => 'checkboxes',
      '#options' => $options_groups,
      '#description' => t("Select groups that you want to clone."),
    );
  }

  $form['bundles'] = array(
    '#title' => t('Bundle(s) to clone onto'),
    '#type' => 'checkboxes',
    '#options' => field_tools_options_entity_bundle($entity_type, $bundle_name),
    //'#default_value' => $default_bundles,
    '#description' => t("Select bundles on which to apply the selected fields."),
  );
  // Disable the checkbox for the current bundle.
  $form['bundles']["$entity_type:$bundle_name"] = array(
    '#disabled' => TRUE,
  );

  $form['update'] = array(
    '#title' => t('Update existing instances'),
    '#type' => 'checkbox',
    '#description' => t("Check to update target bundle fields and field groups."),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add field instances'),
  );

  return $form;
}

/**
 * Submit handler for the mass clone form.
 */
function field_tools_bundle_fields_clone_from_form_submit($form, &$form_state) {
  // Get details from the original form builder parameters.
  list($source_entity_type, $source_bundle_name) = $form_state['build_info']['args'];
  // Get the bundle name if the bundle name is really a bundle object.
  $source_bundle_name = field_extract_bundle($source_entity_type, $source_bundle_name);

  $new_instances = array();
  foreach (array_filter($form_state['values']['bundles']) as $option_key) {
    list($entity_type, $bundle_type) = explode(':', $option_key);
    $new_instances[$entity_type][] = $bundle_type;
  }

  // Get names of fields to clone.
  $field_names = array_filter($form_state['values']['fields']);

  foreach ($field_names as $field_name) {
    $field = field_info_field($field_name);
    $instance = field_info_instance($source_entity_type, $field_name, $source_bundle_name);

    if ($form_state['values']['update'] == 1) {
      _field_tools_update_instance_to_bundles($instance, $new_instances);
    }
    elseif (!empty($new_instances)) {
      _field_tools_add_instance_to_bundles($instance, $new_instances);
    }
  }

  if (module_exists('field_group')) {
    $export_groups = array_filter($form_state['values']['groups']);
    $groups = field_group_info_groups($source_entity_type, $source_bundle_name, 'form');

    $existing_groups = field_group_read_groups(array('name' => $entity_type, 'bundle' => $bundle_type));

    foreach ($export_groups as $group_name) {
      $group = $groups[$group_name];
      if (isset($existing_groups[$entity_type][$bundle_type][$group->mode][$group_name])) {
        $existing_group = $existing_groups[$entity_type][$bundle_type][$group->mode][$group_name];

        if ($form_state['values']['update'] == 1) {
          $existing_group->children = $group->children;
          $existing_group->parent = $group->parent;
          $existing_group->weight = $group->weight;
          field_group_group_save($existing_group);
          // ctools_export_crud_delete('field_group', $existing_group);
          drupal_set_message(t('Group %group in bundle %bundle has been updated.', array(
            '%group' => $group_name,
            '%bundle' => $bundle_type,
          )));
        }
        else {
          drupal_set_message(t('Group %group has not been added to bundle %bundle because the bundle already contains this group.', array(
            '%group' => $group_name,
            '%bundle' => $bundle_type,
          )), 'error');
        }
        continue;
      }

      $group->identifier = $group->group_name . '|' . $entity_type . '|' . $bundle_type . '|' . $group->mode;
      $group->bundle = $bundle_type;
      $group->entity_type = $entity_type;

      if (isset($group->id)) {
        unset($group->id);
      }
      if (isset($group->export_type)) {
        unset($group->export_type);
      }
      // $group->disabled = FALSE;
      ctools_export_crud_save('field_group', $group);
      ctools_export_crud_enable('field_group', $group->identifier);
      // dpm($group);

      drupal_set_message(t('Group %group has been added to bundle %bundle.', array(
        '%group' => $group_name,
        '%bundle' => $bundle_type,
      )));
    }
  }
}

/**
 * Form builder for the field clone page.
 *
 * @param $instance
 *  A FieldAPI field instance definition array.
 */
function field_tools_field_clone_form($form, &$form_state, $instance) {
  //dsm($instance);
  $form['#instance'] = $instance;

  $field_name = $instance['field_name'];

  // TODO: is there a way to turn most of what follows into a form element?
  $field = field_info_field($field_name);
  $field_exists = isset($field);
  $field_type = field_info_field_types('taxonomy_term_reference');

  // Field settings fieldset.
  // @todo restore this when we add a field apply-type UI.
  /*
  $form['settings'] = array(
    '#type' => 'fieldset',
  );
  $form['settings']['multiple'] = array('#type' => 'checkbox',
    '#title' => t('Multiple select'),
    '#description' => t('Allows reference fields to hold more than one term from this vocabulary.'),
  );
  // Lock this if the field exists.
  if ($field_exists) {
    $form['settings']['multiple'] += array(
      '#disabled' => TRUE,
      '#default_value' => ($field['cardinality'] == 1 ? FALSE : TRUE),
    );
    $form['settings']['multiple']['#description'] .= ' ' . t('This setting may not be changed here because this field already has instances.');
  }

  $form['settings']['required'] = array('#type' => 'checkbox',
    '#title' => t('Required'),
    '#description' => t('At least one term in this vocabulary must be selected when submitting data with this field.'),
  );

  form_load_include($form_state, 'inc', 'field_ui', 'field_ui.admin');
  $widget_options = field_ui_widget_type_options($field['type']);
  $form['settings']['widget_type'] = array(
    '#type' => 'select',
    '#title' => t('Widget type'),
    '#required' => TRUE,
    '#options' => $widget_options,
    '#default_value' => $field_type['default_widget'],
    '#description' => t('The type of form element you would like to present to the user when creating this field in the types below.'),
  );
  */

  $options = field_tools_options_entity_bundle($instance['entity_type'], $instance['bundle'], FALSE);

  //dsm($options);
  $default_bundles = array();
  if ($field_exists) {
    foreach ($field['bundles'] as $entity_type => $bundles) {
      foreach ($bundles as $bundle_type) {
        $default_bundles[] = $entity_type . ':' . $bundle_type;
      }
    }
  }
  $form['bundles'] = array(
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => $default_bundles,
    '#description' => t("Select bundles on which to apply this field."),
  );
  // Very neat but undocumented trick: see http://drupal.org/node/1349432
  foreach ($default_bundles as $option_key) {
    $form['bundles'][$option_key] = array(
      '#disabled' => TRUE,
    );
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add field instances'),
  );

  return $form;
}

/**
 * Submit handler for the field clone form.
 */
function field_tools_field_clone_form_submit($form, &$form_state) {
  $instance = $form['#instance'];
  $field_name = $instance['field_name'];
  $field = field_info_field($field_name);

  $new_instances = array();
  foreach (array_filter($form_state['values']['bundles']) as $option_key) {
    list($entity_type, $bundle_type) = explode(':', $option_key);
    $new_instances[$entity_type][] = $bundle_type;
  }
  if (!empty($new_instances)) {
    _field_tools_add_instance_to_bundles($instance, $new_instances);
  }
}

/**
 * Form to export all fields of a bundle.
 *
 * @param $entity_type
 *  The machine name of the entity.
 * @param $bundle
 *  The machine name of the bundle, or a bundle object if the particular
 *  entity type has a menu loader for bundles.
 */
function field_tools_bundle_export_form($form, $form_state, $entity_type, $bundle) {
  // Get the bundle name if the bundle name is really a bundle object.
  $bundle_name = field_extract_bundle($entity_type, $bundle);

  $instances = field_info_instances($entity_type, $bundle_name);

  $options_fields = array();
  foreach ($instances as $field_name => $field) {
    $options_fields[$field_name] = $field['label'];
  }

  $form['fields'] = array(
    '#title' => t('Fields to export'),
    '#type' => 'checkboxes',
    '#options' => $options_fields,
    '#description' => t("Select fields that you want to export."),
  );

  if (module_exists('field_group')) {
    $groups = field_group_info_groups($entity_type, $bundle_name, 'form');
    $options_groups = array();
    foreach ($groups as $group_name => $group) {
      $options_groups[$group_name] = $group->label;
    }
    $form['groups'] = array(
      '#title' => t('Groups to export'),
      '#type' => 'checkboxes',
      '#options' => $options_groups,
      '#description' => t("Select groups that you want to export."),
    );
  }

  // Check if the form has already been submitted, if so, storage will be
  // filled and the export code can be built and put into a textarea.
  if (isset($form_state['storage']['fields'])) {
    $export_fields = array_filter($form_state['storage']['fields']);
    $export = array();
    foreach ($export_fields as $field_name) {
      $instance = $instances[$field_name];
      $export[] = field_tools_get_field_code($instance);
    }

    if (module_exists('field_group')) {
      $export_groups = array_filter($form_state['storage']['groups']);
      $groups = field_group_info_groups($entity_type, $bundle_name, 'form');
      foreach ($export_groups as $group_name) {
        $group = $groups[$group_name];
        $export[] = field_tools_get_group_code($group);
      }
    }

    $code = implode("\n", $export);
    $form['code'] = field_tools_textarea(t('Export code'), $code);
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Get export code'),
  );

  return $form;
}

/**
 * Submit handler for field exports.
 */
function field_tools_bundle_export_form_submit($form, &$form_state) {
  $form_state['rebuild'] = TRUE;
  $form_state['storage']['fields'] = $form_state['values']['fields'];
  if (module_exists('field_group')) {
    $form_state['storage']['groups'] = $form_state['values']['groups'];
  }
}

/**
 * Import fields into a bundle.
 *
 * @param $entity_type
 *  The machine name of the entity.
 * @param $bundle
 *  The machine name of the bundle, or a bundle object if the particular
 *  entity type has a menu loader for bundles.
 */
function field_tools_bundle_import_form($form, $form_state, $entity_type, $bundle) {
  $form = array();
  $form['#entity_type'] = $entity_type;
  $form['#bundle'] = field_extract_bundle($entity_type, $bundle);
  $form['code'] = field_tools_textarea(t('Field code'));
  $form['code']['#required'] = TRUE;
  $form['code']['#description'] = t('Paste the code of one or more previously exported fields.');
  $form['actions']['import'] = array(
    '#type' => 'submit',
    '#value' => t('Import'),
  );
  // Add an action to skip the validation, this means that whatever possible
  // will be imported, if any of the fields exist on the target bundle already,
  // they will be skipped.
  $form['actions']['import_force'] = array(
    '#type' => 'submit',
    '#value' => t('Import (skip validation)'),
  );
  return $form;
}

/**
 * Validation callback for the import form.
 */
function field_tools_bundle_import_form_validate($form, &$form_state) {
  if ($form_state['values']['op'] == $form_state['values']['import_force']) {
    // Import without validation has been requested, so we can return here.
    return;
  }

  eval($form_state['values']['code']);
  $entity_type = $form['#entity_type'];
  $bundle = $form['#bundle'];
  $errors = array();

  if (isset($fields) && count($fields)) {
    foreach ($fields as $field_name => $item) {
      $field_type = field_info_field_types($item['field']['type']);
      if (!$field_type) {
        $errors[] = t('Unknown field type %field_type. Field %field_name will not be created.', array(
          '%field_type' => $item['field']['type'],
          '%field_name' => $field_name,
        ));
        continue;
      }

      $instance = field_info_instance($entity_type, $field_name, $bundle);
      if ($instance) {
        $errors[] = t('Bundle %bundle already contains the field %field.', array(
          '%field' => $field_name,
          '%bundle' => $bundle,
        ));
      }
    }
  }

  if (isset($groups) && count($groups)) {
    foreach ($groups as $group_name => $group) {
      $existing_groups = field_group_read_groups(array('name' => $entity_type, 'bundle' => $bundle));

      if (isset($existing_groups[$entity_type][$bundle][$group->mode][$group_name])) {
        $errors[] = t('Bundle %bundle already contains the group %group.', array(
          '%group' => $group_name,
          '%bundle' => $bundle,
        ));
        continue;
      }
    }
  }

  if (count($errors) > 0) {
    form_set_error('code', t('Validation failed for the following reasons:'));
    foreach ($errors as $error) {
      drupal_set_message($error, 'error');
    }
    $form_state['rebuild'] = TRUE;
  }
}

/**
 * Submit handler for the import form.
 */
function field_tools_bundle_import_form_submit($form, &$form_state) {
  eval($form_state['values']['code']);
  $entity_type = $form['#entity_type'];
  $bundle = $form['#bundle'];

  if (isset($fields)) {
    field_tools_import_fields($entity_type, $bundle, $fields);
  }

  if (isset($groups) && count($groups)) {
    field_tools_import_groups($entity_type, $bundle, $groups);
  }

}

/**
 * Form to export a single field instance.
 */
function field_tools_field_export_form($form, $form_state, $instance) {
  $form = array();
  $form['code'] = field_tools_textarea(t('Field code'), field_tools_get_field_code($instance));
  return $form;
}

/**
 * Form to export a single group.
 */
function field_tools_group_export_form($form, $form_state, $group) {
  $form = array();
  $form['code'] = field_tools_textarea(t('Group code'), field_tools_get_group_code($group));
  return $form;
}

/**
 * Retrieve a code representation of the given field instance.
 *
 * @param array $instance
 *  A field instance array.
 *
 * @return string
 *  The code representation of the field instance.
 */
function field_tools_get_field_code($instance) {
  $data = array();
  $entity_name = $instance['entity_type'];
  $bundle_name = $instance['bundle'];
  $field_name = $instance['field_name'];
  $data[$field_name] = array(
    'field' => field_info_field($field_name),
    'instance' => field_info_instance($entity_name, $field_name, $bundle_name),
  );
  ctools_include('export');
  return '$fields[\'' . $field_name . '\'] = ' . ctools_var_export($data[$field_name]) . ';';
}

/**
 * Retrieve a code representation of the given field group.
 *
 * @param object $group
 *  A group object
 * @return string
 *  The code representation of the group
 */
function field_tools_get_group_code($group) {
  // Unset group properties that are related to the current instance and should
  // not be exported.
  unset($group->id, $group->identifier, $group->bundle, $group->entity_type);
  $group_name = $group->group_name;
  ctools_include('export');
  return '$groups[\'' . $group_name . '\'] = ' . ctools_var_export($group) . ';';
}

/**
 * Import fields to a bundle.
 *
 * @param string $entity_type
 *  The entity type of the target bundle
 * @param string $bundle_name
 *  The name of the target bundle
 * @param array $fields
 *  An array of fields to be imported, as obtained from
 *  field_tools_get_field_code().
 */
function field_tools_import_fields($entity_type, $bundle_name, $fields) {
  if (count($fields)) {
    foreach ($fields as $field_name => $item) {
      $field_type = field_info_field_types($item['field']['type']);
      if (!$field_type) {
        drupal_set_message(t('Unknown field type %field_type. Field %field_name has not been created.', array(
          '%field_type' => $item['field']['type'],
          '%field_name' => $field_name,
        )), 'error');
        continue;
      }

      $field = field_info_field($field_name);
      if (!$field) {
        field_create_field($item['field']);
        drupal_set_message(t('Field %field has been created.', array('%field' => $field_name)));
      }

      $instance = field_info_instance($entity_type, $field_name, $bundle_name);
      if (!$instance) {
        $item['instance']['bundle'] = $bundle_name;
        $item['instance']['entity_type'] = $entity_type;
        $item['field_id'] = $field['id'];
        field_create_instance($item['instance']);
        drupal_set_message(t('Field %field has been added to bundle %bundle.', array(
          '%field' => $field_name,
          '%bundle' => $bundle_name,
        )));
      }
      else {
        drupal_set_message(t('Field %field has not been added to bundle %bundle because the bundle already contains this field.', array(
          '%field' => $field_name,
          '%bundle' => $bundle_name,
        )), 'error');
      }
    }
  }
}

/**
 * Import groups to a bundle.
 *
 * @param string $entity_type
 *  The entity type of the target bundle
 * @param string $bundle_name
 *  The name of the target bundle
 * @param array $groups
 *  An array of groups to be imported to the target bundle, as obtained from
 *  field_tools_get_group_code().
 */
function field_tools_import_groups($entity_type, $bundle_name, $groups) {
  if (count($groups)) {
    if (!module_exists('field_group')) {
      drupal_set_message(t('Groups could not be imported because the field_group module is not installed.'));
      return;
    }

    foreach ($groups as $group_name => $group) {
      $existing_groups = field_group_read_groups(array('name' => $entity_type, 'bundle' => $bundle_name));

      if (isset($existing_groups[$entity_type][$bundle_name][$group->mode][$group_name])) {
        drupal_set_message(t('Group %group has not been added to bundle %bundle because the bundle already contains this group.', array(
          '%group' => $group_name,
          '%bundle' => $bundle_name,
        )), 'error');
        continue;
      }

      $group->identifier = $group->group_name . '|' . $entity_type . '|' . $bundle_name . '|' . $group->mode;
      $group->bundle = $bundle_name;
      $group->entity_type = $entity_type;

      if (isset($group->id)) {
        unset($group->id);
      }
      if (isset($group->export_type)) {
        unset($group->export_type);
      }
      ctools_export_crud_save('field_group', $group);

      drupal_set_message(t('Group %group has been added to bundle %bundle.', array(
        '%group' => $group_name,
        '%bundle' => $bundle_name,
      )));
    }
  }
}

/**
 * Helper to get FormAPI options for entity bundles.
 *
 * @param string $current_entity_type
 *   The current entity type that these options will be used with.
 * @param string $current_bundle
 *   The current bundle name that these options will be used with.
 * @param boolean $filter
 *  Whether to filter out the current bundle.
 *
 * @return
 *  An array for FormAPI '#options' properties, with:
 *    - keys of the form ENTITY:BUNDLE, using machine names.
 *    - values of the form ENTITY: BUNDLE, using labels.
 */
function field_tools_options_entity_bundle($current_entity_type, $current_bundle, $filter = TRUE) {
  $options = array();
  foreach (entity_get_info() as $entity_type => $entity_info) {
    // Skip entities that don't take fields.
    if (empty($entity_info['fieldable'])) {
      continue;
    }

    foreach ($entity_info['bundles'] as $bundle_type => $bundle_info) {
      // Don't show the current bundle in the options, unless not filtering.
      if (!$filter || !($current_entity_type == $entity_type && $bundle_type == $current_bundle)) {
        $options[$entity_type . ':' . $bundle_type] = $entity_info['label'] . ': ' . $bundle_info['label'];
      }
    }
  }
  return $options;
}

/**
 * Form builder for the cloning multiple fields to a bundle.
 *
 * @param $current_entity_type
 *  The machine name of the entity.
 * @param $current_bundle_name
 *  The machine name of the bundle, or a bundle object if the particular
 *  entity type has a menu loader for bundles.
 */
function field_tools_bundle_fields_clone_to_form($form, &$form_state, $current_entity_type, $current_bundle_name) {
  $current_bundle_name = field_extract_bundle($current_entity_type, $current_bundle_name);
  $all_instances = field_info_instances();

  $entity_types = entity_get_info();
  $form['entity_type'] = array(
    '#value' => $current_entity_type,
    '#type'  => 'value',
  );
  $form['bundle'] = array(
    '#value' => $current_bundle_name,
    '#type'  => 'value',
  );
  foreach ($entity_types as $entity_key => $entity_type) {
    if ($entity_type['fieldable'] == TRUE) {
      if (!empty($entity_type['bundles'])) {
        // This entity_type has bundles.
        $form['fields'][$entity_key] = array(
          '#type' => 'fieldset',
          '#title' => $entity_type['label'],
          '#description' => '',
          '#tree' => TRUE,
          '#collapsible' => TRUE,
          '#collapsed' => TRUE,
        );
        foreach ($entity_type['bundles'] as $bundle_name => $bundle) {
          if ($current_entity_type == $entity_key && $bundle_name == $current_bundle_name) {
            continue;
          }
          if (empty($all_instances[$entity_key][$bundle_name])) {
            // No fields on this bundle.
            continue;
          }
          $form['fields'][$entity_key][$bundle_name . '_set'] = array(
            '#type' => 'fieldset',
            '#title' => $bundle['label'],
            '#description' => '',
            '#collapsible' => TRUE,
            '#collapsed' => TRUE,
          );
          $form['fields'][$entity_key][$bundle_name . '_set'][$bundle_name] = array(
            '#type' => 'checkboxes',
            '#title' => $bundle['label'],
            '#description' => '',
            '#options' => array(),
          );

          foreach ($all_instances[$entity_key][$bundle_name] as $field_name => $field_info) {
            // Make sure this field doesn't already exist on the current bundle.
            $on_current_bundle = is_array($all_instances[$current_entity_type][$current_bundle_name]) && array_key_exists($field_name, $all_instances[$current_entity_type][$current_bundle_name]);
            if (!$on_current_bundle && _field_tools_entity_can_attach_field($current_entity_type, field_info_field($field_name))) {
              $form['fields'][$entity_key][$bundle_name . '_set'][$bundle_name]['#options'][$field_name] = $field_info['label'] . " ({$field_name})";
            }
          }
          if (empty($form['fields'][$entity_key][$bundle_name . '_set'][$bundle_name]['#options'])) {
            // @todo should we not show a bundle if no fields can be attached??
            $form['fields'][$entity_key][$bundle_name . '_set'][$bundle_name]['#description'] = t('Contains no fields that can be attached to this bundle.');
          }
        }
        // Set #parents to skip sets in form values.
        foreach (element_children($form['fields'][$entity_key]) as $key) {
          if (strrpos($key, '_set') === drupal_strlen($key) - drupal_strlen('_set')) {
            foreach (element_children($form['fields'][$entity_key][$key]) as $sub_key ) {
              $form['fields'][$entity_key][$key][$sub_key]['#parents'] = array('fields', $entity_key, $sub_key);
            }
          }
        }
        $bundle_names = element_children($form['fields'][$entity_key]);
        if (empty($bundle_names)) {
          // Don't show entities that have no bundle with fields.
          unset($form['fields'][$entity_key]);
        }
      }
    }
  }
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Add field instances',
  );
  return $form;
}

/**
 * Validation for cloning multiple fields into one bundle.
 *
 * Make sure no field was selected more than once.
 */
function field_tools_bundle_fields_clone_to_form_validate($form, &$form_state) {
  $selected_fields = array();
  $fields = $form_state['values']['fields'];
  foreach ($fields as $entity_type => $bundles) {
    foreach ($bundles as $bundle_name => $bundle_fields) {
      $bundle_fields = array_filter($bundle_fields);
      $matching_fields = array_intersect_key($selected_fields, $bundle_fields);
      if (!empty($matching_fields)) {
        $match_key = array_shift($matching_fields);
        form_error($form['fields'][$entity_type][$bundle_name . '_set'], t("You have selected the field %field more that once.", array(
          '%field' => $match_key,
        )));
        return;
      }
      $selected_fields += $bundle_fields;
    }
  }
}

/**
 * Submit handler for the mass clone to bundle form.
 */
function field_tools_bundle_fields_clone_to_form_submit($form, &$form_state) {
  $fields = $form_state['values']['fields'];
  $current_entity_type = $form_state['values']['entity_type'];
  $current_bundle_name = $form_state['values']['bundle'];

  foreach ($fields as $entity_type => $bundles) {
    foreach ($bundles as $bundle_name => $bundle_fields) {
      $bundle_fields = array_filter($bundle_fields);
      foreach ($bundle_fields as $field_name) {
        $field_info = field_info_instance($entity_type, $field_name, $bundle_name);
        _field_tools_add_instance_to_bundles($field_info, array($current_entity_type => array($current_bundle_name)));
      }
    }
  }
}

/**
 * Helper function to clone a single field instance into multiple bundles.
 *
 * @param array $instance
 *   The field instance to be added to the bundles.
 * @param array $new_instances
 *   An array describing entity bundles on which to create field instances.
 *   Each key is an entity type machine name, each value is an array of bundle
 *   machine names of that entity.
 */
function _field_tools_add_instance_to_bundles($instance, $new_instances) {
  $original_display = $instance['display'];
  $field_info = field_info_field($instance['field_name']);
  $entity_types = entity_get_info();
  foreach ($new_instances as $entity_type => $bundles) {
    $bundles = array_filter($bundles);
    if (!empty($bundles)) {
      if (!_field_tools_entity_can_attach_field($entity_type, $field_info)) {
        drupal_set_message(t('Field %field_label cannot be attached to entity type %entity_type', array(
          '%field_label' => $instance['label'],
          '%entity_type' => $entity_types[$entity_type]['label'],
        )));
        continue;
      }

      $instance = array_diff_key($instance, array_flip(array('id', 'field_id', 'bundle', 'entity_type', 'deleted')));
      // Only bring back displays that have matching "view mode" in this entity type.
      $instance['display'] = array_intersect_key($original_display, $entity_types[$entity_type]['view modes']);
      if (empty($instance['display'])) {
        //@todo should there be logic to handle to no matching 'view modes'
      }
      $instance['entity_type'] = $entity_type;
      foreach ($bundles as $bundle) {
        if (_field_tools_field_already_attached($entity_type, $bundle, $field_info)) {
          drupal_set_message(t('Field %field_label is already attached to %entity_type - %bundle', array(
            '%field_label' => $instance['label'],
            '%entity_type' => $entity_types[$entity_type]['label'],
            '%bundle' => $entity_types[$entity_type]['bundles'][$bundle]['label'],
          )));
          continue;
        }
        $instance['bundle'] = $bundle;
        field_create_instance($instance);
        drupal_set_message(t('Attached field %field_label to %entity_type - %bundle', array(
          '%field_label' => $instance['label'],
          '%entity_type' => $entity_types[$entity_type]['label'],
          '%bundle' => $entity_types[$entity_type]['bundles'][$bundle]['label'],
        )));
      }
    }
  }
}


/**
 * Helper function to update a single field instance on multiple bundles.
 *
 * @param array $instance
 *   The field instance to be updated to the bundles.
 * @param array $target_instances
 *   An array describing entity bundles on which to update field instances.
 *   Each key is an entity type machine name, each value is an array of bundle
 *   machine names of that entity.
 */
function _field_tools_update_instance_to_bundles($instance, $target_instances) {
  $original_display = $instance['display'];
  $field_info = field_info_field($instance['field_name']);
  $entity_types = entity_get_info();
  foreach ($target_instances as $entity_type => $bundles) {
    $bundles = array_filter($bundles);
    if (!empty($bundles)) {
      if (!_field_tools_entity_can_attach_field($entity_type, $field_info)) {
        drupal_set_message(t('Field %field_label cannot be attached to entity type %entity_type', array(
          '%field_label' => $instance['label'],
          '%entity_type' => $entity_types[$entity_type]['label'],
        )));
        continue;
      }

      $instance = array_diff_key($instance, array_flip(array('id', 'field_id', 'bundle', 'entity_type', 'deleted')));
      // Only bring back displays that have matching "view mode" in this entity type.
      $instance['display'] = array_intersect_key($original_display, $entity_types[$entity_type]['view modes']);
      if (empty($instance['display'])) {
        //@todo should there be logic to handle to no matching 'view modes'
      }
      $instance['entity_type'] = $entity_type;
      foreach ($bundles as $bundle) {
        if (_field_tools_field_already_attached($entity_type, $bundle, $field_info)) {
          $target_instance = field_info_instance($entity_type, $instance['field_name'], $bundle);
          $instance['id'] = $target_instance['id'];
          $instance['field_id'] = $target_instance['field_id'];
          $instance['bundle'] = $bundle;
          field_update_instance($instance);

          drupal_set_message(t('Field %field_label in %entity_type - %bundle has been updated.', array(
            '%field_label' => $instance['label'],
            '%entity_type' => $entity_types[$entity_type]['label'],
            '%bundle' => $entity_types[$entity_type]['bundles'][$bundle]['label'],
          )));
          continue;
        }
        $instance['bundle'] = $bundle;
        field_create_instance($instance);
        drupal_set_message(t('Attached field %field_label to %entity_type - %bundle', array(
          '%field_label' => $instance['label'],
          '%entity_type' => $entity_types[$entity_type]['label'],
          '%bundle' => $entity_types[$entity_type]['bundles'][$bundle]['label'],
        )));
      }
    }
  }
}


/**
 * Page callback to list all instances of a field with links to edit them.
 */
function field_tools_field_page($field_name) {
  $field = field_info_field($field_name);
  if (!$field) {
    return t('No field found.');
  }
  //dsm($field);
  $field_instance_list = field_tools_info_instances($field_name);
  $bundles = field_info_bundles();

  $items = array();
  foreach ($field_instance_list as $entity_type => $bundle_list) {
    foreach ($bundle_list as $bundle) {
      $admin_path = _field_ui_bundle_admin_path($entity_type, $bundle);

      $items[] = l($bundles[$entity_type][$bundle]['label'], $admin_path . '/fields/' . $field_name);
    }
  }


  return theme('item_list', array('items' => $items));
}

/**
 * Helper to format a nested list of field instances, grouped by entity type.
 *
 * @todo: make this a theme function?
 *
 * @param $field
 *  A field definition array.
 *
 * @return
 *  A nested list of entities and bundles that this field has instances on.
 */
function field_tools_field_instances_list($field) {
  $entity_info = entity_get_info();
  $items_entities = array();
  foreach ($field['bundles'] as $entity_type => $field_bundle_names) {
    // Fields may exist for entities that no longer do.
    if (!isset($entity_info[$entity_type])) {
      continue;
    }

    $items_bundles = array();
    foreach ($field_bundle_names as $bundle) {
      if (!isset($entity_info[$entity_type]['bundles'][$bundle])) {
        continue;
      }

      // @todo: sort these.
      $admin_path = _field_ui_bundle_admin_path($entity_type, $bundle);
      $label = $entity_info[$entity_type]['bundles'][$bundle]['label'];
      $items_bundles[] = $admin_path ? l($label, $admin_path . '/fields/' . $field['field_name']) : $label;
    }

    $items_entities[] = $entity_info[$entity_type]['label'] . theme('item_list', array(
      'items' => $items_bundles,
    ));
  }
  return theme('item_list', array(
    'items' => $items_entities,
  ));
}

/**
 * Build a Form API textarea element to use for import/export.
 *
 * @param string $label
 *  The translated label for the textarea element.
 * @param string $value
 *  (optional) The code to show in the text area.
 *
 * @return array
 *  A Form API textarea element.
 */
function field_tools_textarea($label, $value = NULL) {
  $textarea = array(
    '#type' => 'textarea',
    '#title' => $label,
    '#rows' => 40,
  );
  if ($value === NULL) {
    $textarea['#default_value'] = '';
  }
  else {
    $textarea['#value'] = $value;
  }
  return $textarea;
}

/**
 * Retrieve all bundles and their displays.
 * Internal use only.
 *
 * @param string $source_entity_type
 *   The source entity type.
 * @param string $source_bundle_name
 *   The source bundle name.
 * @param string $source_view_mode
 *   The source view mode.
 *
 * @return array
 *   An array of entity type bundles display modes. Keys are
 *   bundles, values are arrays of display names and display labels.
 */
function _field_tools_get_all_bundles_displays($source_entity_type, $source_bundle_name, $source_view_mode) {
  $bundles_displays = &drupal_static(__FUNCTION__, array());

  if (!empty($bundles_displays)) {
    return $bundles_displays;
  }

  foreach (entity_get_info() as $entity_type => $entity_info) {

    foreach ($entity_info['bundles'] as $bundle_type => $bundle_info) {

      // Don't show the current bundle in the options, unless not filtering.
      if (!($source_entity_type === $entity_type && $bundle_type === $source_bundle_name)) {
        $bundles_displays[$entity_type . ':' . $bundle_type]['label'] = $bundle_info['label'];
        $bundles_displays[$entity_type . ':' . $bundle_type]['relation'] = $source_entity_type === $entity_type ? 1 : 0;

        $view_modes = array('default' => array('label' => t('Default'))) + $entity_info['view modes'];
        foreach ($view_modes as $view_mode => $view_mode_info) {

          // UI text "recommended" to help in the chosen display selection.
          $recommended = $source_view_mode === $view_mode ? ' <em><strong>' . t('recommended') . '</strong></em>' : '';

          $bundles_displays[$entity_type . ':' . $bundle_type]['displays'][$view_mode] = $view_mode_info['label'] . $recommended;
        }
      }
    }
  }

  return $bundles_displays;
}

/**
 * Clone or add a single display instance into multiple bundles.
 * Internal use only.
 *
 * @param array $source_instances
 *   The source entity field instances.
 * @param object $source_entity_type
 *   The entity source to base the cloning setting.
 * @param string $source_bundle_name
 *   The bundle base name.
 * @param object $entity_type
 *   The final entity to save the display settings.
 * @param string $bundle_name
 *   The bundle name who will recive the configuration.
 * @param string $display
 *   The display name
 */
function _field_tools_clone_add_display_to_bundles($source_instances, $source_entity_type, $source_bundle_name, $source_display, $entity_type, $bundle_name, $display) {
  if (!is_array($source_instances)) {
    drupal_set_message(t('There is a problem with the information you send.'), 'status');
    return;
  }

  // Before start cloning we have to make sure the custom display is enable.
  $entity_info = entity_get_info($entity_type);

  // We get all the fields information.
  $source_extra_fields = field_info_extra_fields($source_entity_type, $source_bundle_name, 'display');
  $source_view_mode_settings = field_view_mode_settings($source_entity_type, $source_bundle_name);
  $source_bundle_settings = field_bundle_settings($source_entity_type, $source_bundle_name);

  $bundle_settings = field_bundle_settings($entity_type, $bundle_name);
  $bundle_settings['view_modes'][$display] = $source_bundle_settings['view_modes'][$source_display];

  // Adding support for ds and field_group.
  if (module_exists('ds') || module_exists('field_group')) {
    // Prepare storage with ctools.
    ctools_include('export');
  }

  // Adding support field_group module.
  if (module_exists('field_group')) {

    // Delete all the field groups before add the new one.
    $current_groups = field_group_info_groups($entity_type, $bundle_name, $display, TRUE);
    if (is_array($current_groups) && !empty($current_groups)) {
      foreach ($current_groups as $current_group) {
        field_group_group_export_delete($current_group, FALSE);
      }
    }

    // With all the field group clear we start the cloning process.
    $params_group = field_group_info_groups($source_entity_type, $source_bundle_name, $source_display, TRUE);

    if (is_array($params_group) && !empty($params_group)) {
      foreach ($params_group as $group) {

        $place_holder = '@\|' . $source_bundle_name . '\|@';
        $replacement = '|' . $bundle_name . '|';

        // Recreate the identifier and reset the id.
        $group->id = NULL;
        $group->identifier = preg_replace($place_holder, $replacement, $group->identifier);
        $group->bundle = $bundle_name;
        $group->disabled = FALSE;
        unset($group->export_type, $group->type, $group->table);

        ctools_export_crud_save('field_group', $group);
        ctools_export_crud_enable('field_group', $group->identifier);
      }
    }
  }

  // Adding support ds module.
  if (module_exists('ds')) {

    $clone = $source_entity_type . '|' . $source_bundle_name . '|' . $source_display;
    $export_id = $entity_type .'|' . $bundle_name . '|' . $display;

    $source_layout_settings = ctools_export_crud_load('ds_layout_settings', $clone);
    $source_field_settings= ctools_export_crud_load('ds_field_settings', $clone);

    // Delete previous field configuration configuration.
    db_delete('ds_field_settings')
      ->condition('entity_type', $entity_type)
      ->condition('bundle', $bundle_name)
      ->condition('view_mode', $display)
      ->execute();

    // Delete previous layout settings configuration.
    db_delete('ds_layout_settings')
      ->condition('entity_type', $entity_type)
      ->condition('bundle', $bundle_name)
      ->condition('view_mode', $display)
      ->execute();

    // Save the fields setting.
    if ($source_field_settings) {
      $record = new stdClass;
      $record->id = $export_id;
      $record->entity_type = $entity_type;
      $record->bundle = $bundle_name;
      $record->view_mode = $display;
      $record->settings = $source_field_settings->settings;

      drupal_write_record('ds_field_settings', $record);
    }

    // Save new layout record for ds.
    if ($source_layout_settings) {
      $record = new stdClass();
      $record->id = $export_id;
      $record->entity_type = $entity_type;
      $record->bundle = $bundle_name;
      $record->view_mode = $display;
      $record->layout = $source_layout_settings->layout;
      $record->settings = $source_layout_settings->settings;

      // Save layout record.
      drupal_write_record('ds_layout_settings', $record);
    }
  }

  // This it is.
  $instances_to_updates = field_info_instances($entity_type, $bundle_name);

  foreach ($source_instances as $source_instance) {

    if ($instances_to_updates[$source_instance['field_name']]) {
      $instances_to_updates[$source_instance['field_name']]['display'][$display] = $source_instance['display'][$source_display];

      field_update_instance($instances_to_updates[$source_instance['field_name']]);
    }
    else {
      // This means the field isn't there in the bundle receiver a drupal
      // message could be a solution for this case.
    }
  }

  // Update display settings for 'extra fields'.
  foreach (array_keys($bundle_settings['extra_fields']['display']) as $name) {
    if (isset($source_bundle_settings['extra_fields']['display'][$name][$source_display])) {
      $bundle_settings['extra_fields']['display'][$name][$display] = $source_bundle_settings['extra_fields']['display'][$name][$source_display];
    }
  }

  // Save updated bundle settings.
  field_bundle_settings($entity_type, $bundle_name, $bundle_settings);
}

/**
 * Admin form UI to select which display and bundle do you want to work.
 *
 * @ingroup form.
 */
function field_tools_bundle_display_clone_from_form($form, &$form_state, $entity_type, $bundle_name, $view_mode) {

  $form['info'] = array(
    '#markup' => '<h2>' . t("Select display bundles on which to apply the current display.") . '</h2>',
  );

  $bundle = field_extract_bundle($entity_type, $bundle_name);

  $bundles_displays = _field_tools_get_all_bundles_displays($entity_type, $bundle, $view_mode);

  $form['source_display'] = array(
    '#type' => 'hidden',
    '#value' => $view_mode,
  );

  // Tweak UIX.
  $form['bundles']['related'] = array(
    '#type' => 'fieldset',
    '#title' => t('Related bundles and entities.'),
    '#tree' => TRUE,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['bundles']['show-non-related'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show non releated bundles and entities.'),
  );

  $form['bundles']['non-related'] = array(
    '#type' => 'fieldset',
    '#title' => t('Related bundles and entities.'),
    '#tree' => TRUE,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#states' => array(
      'visible' => array(
        ':input[name="show-non-related"]' => array('checked' => TRUE),
      ),
    ),
  );

  foreach ($bundles_displays as $bundle => $bundle_extra) {

    $family = $bundle_extra['relation'] ? 'related' : 'non-related';

    $form['bundles'][$family][$bundle] = array(
      '#type' => 'fieldset',
      '#title' => $bundle_extra['label'] . " [{$bundle}]",
      '#tree' => TRUE,
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );

    $form['bundles'][$family][$bundle]['displays'] = array(
      '#type' => 'radios',
      '#title' => t('Displays'),
      '#options' => $bundle_extra['displays'],
    );

  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Clone display instance'),
  );

  return $form;
}

/**
 * Submit handler for the mass clone display form.
 *
 * @see field_tools_bundle_display_clone_from_form().
 */
function field_tools_bundle_display_clone_from_form_submit($form, &$form_state) {
  // Get details from the original form builder parameters.
  list($source_entity_type, $source_bundle_name) = $form_state['build_info']['args'];

  // Get the bundle name if the bundle name is really a bundle object.
  $source_bundle_name = field_extract_bundle($source_entity_type, $source_bundle_name);

  $instances = field_info_instances($source_entity_type, $source_bundle_name);

  $source_display = $form_state['values']['source_display'];

  // Get names of fields to clone.
  $bundles_names = array_filter($form_state['values']['related']) + array_filter($form_state['values']['non-related']);

  // Avoid any notification in case none selection was selected.
  if (!empty($bundles_names)) {
    foreach ($bundles_names as $bundle => $bundle_display) {

      if (!empty($bundle_display['displays'])) {

        list($entity_type, $bundle_type) = explode(':', $bundle);

        _field_tools_clone_add_display_to_bundles($instances, $source_entity_type, $source_bundle_name, $source_display, $entity_type, $bundle_type, $bundle_display['displays']);
        drupal_set_message(t('the display mode "@source_view_mode" from @bundle has been cloned into @bundle_dolly display mode "@view_mode".', array('@source_view_mode' => $source_display, '@bundle' => $source_bundle_name, '@bundle_dolly' => $bundle_type, '@view_mode' => $bundle_display['displays'])));

        cache_clear_all('field_groups', 'cache_field');
        cache_clear_all('ds_fields:', 'cache', TRUE);
        cache_clear_all('ds_field_settings', 'cache');
        cache_clear_all('entity_info', 'cache', TRUE);
      }
    }
  }
}
