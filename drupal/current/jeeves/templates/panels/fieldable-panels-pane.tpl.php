<?php
/**
 * @file
 * Edit link template.
 */
?>
<div class="fieldable-panels-pane">
  <?php print $fields; ?>
</div>
<?php
// Setting som variables.
$base_url = $GLOBALS['base_url'];
$destination = drupal_get_destination();
$user = $variables['user'];
$edit_link = $base_url . '/admin/structure/fieldable-panels-panes/view/' . $variables['elements']['#fieldable_panels_pane']->fpid . '/edit';

  // Print an edit link for administrators.
  if (in_array('administrator', $user->roles)){
    print (l(t('Edit'), $edit_link, array('query' => array('destination' => $destination['destination']), 'attributes' => array('class' => array('fpp-edit-link')))));
  }
?>
