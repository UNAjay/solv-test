<?php
/**
 * @param $weight_instances The database-stored Field Weight configurations.
 *   Change these if you want the fields to display in a different order.
 * @param $context An associative array containing the following:
 *   - 'highest weight': By-reference parameter to change the basis used for
 *   weight deltas.
 *   - 'original instances': The field instances from the content type.
 *   - 'original weights': The database-stored weight order for the node.
 *   - 'revision weights': The database-stored weight order for the revision.
 *   This is often the same as $context['original weights'], but if the load
 *   function fell back to the published node due to the revision not having
 *   any weights set, this will be empty. That may happen if the user clicks
 *   the Reset button on the revision.
 *   - 'node': The node whose weights we are rearranging.
 */
function hook_field_weight_display_overview_weights_alter(&$weight_instances, &$context) {
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

/**
 * @param $popups The array to be passed to beautytips_add_beautytips().
 *   See the BeautyTips documentation for all available options.
 *   Fields are indexed as "field_weight_(field name)".
 * @param $variables The $variables array from the invoking process function.
 * You should normally write your own preprocess or process function to change
 * these. However, if there is no other way to accomplish what you need, you
 * can change them here. It does not affect the popups directly.
 * @param $hook The name of the function from which this hook was invoked.
 */
function hook_field_weight_preview_popups_alter(&$popups, &$variables, $hook) {
  // Change the popup background color on a particular field to pink.
  $popups["field_weight_field_some_field"]["fill"] = "pink";
}
