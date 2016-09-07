<?php
/**
 * Change the order in which fields managed by Multiple-Value Field Weights are
 * displayed on the administrative form. This hook reeks of implementation
 * details, but see Field Weight Inherit for another implementation example.
 *
 * @param $weight_instances The current weight array for the fields to be
 * displayed. Keyed by field key; value is data array.
 * @param $form The $form variable from field_weight_display_overview_form.
 * @param $context An associative array containing the following:
 *   - 'highest weight': By-reference parameter to change the basis used for
 *   weight deltas.
 *   - 'original weights': The database-stored weight order. If you don't do
 *   anything, these are used.
 *   - 'revision weights': The database-stored weight order for the revision.
 *   This is often the same as $context['original weights'], but if the load
 *   function fell back to the published node due to the revision not having
 *   any weights set, this will be empty. That may happen if the user clicks
 *   the Reset button on the revision.
 *   - 'form reference':
 *   See the example below for how this is used. It's basically a reference
 *   to the form element containing the modified Field Weight definitions.
 *   It's uesful if you need to re-weight the fields after changing weights
 *   and have that change persist all the way through..
 *   - 'original instances': These is the unaltered Field Weight order.
 *   - 'field names': The names of multiple-value fields.
 *   - 'node': The node whose weights we are rearranging.
 */
function hook_field_weight_multiple_display_overview_weights_alter(&$weight_instances, &$form, &$context) {
  // See if any field weights have been set.
  if (empty($context['original weights'])) {
    // OK, then we want to swap in the parent node's weights and
    // resort the instances accordingly.
    if (!empty($context['node']->tnid)) {
      $parent = node_load($context['node']->tnid);
      $weights = field_weight_get_node_weight($parent->vid);

      if ($weights) {
        list($weight_instances, $context['highest weight']) = field_weight_sort_instances($context['original instances'], $weights, $context['revision weights']);

        // Go through the instances and add the 'new' key so that (unsaved)
        // still shows up.
        foreach ($weight_instances as &$weight_instance) {
          $weight_instance['new'] = TRUE;
        }
      }
    }
  }
}