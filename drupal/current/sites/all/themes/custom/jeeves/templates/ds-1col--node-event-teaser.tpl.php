<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="ds-1col <?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php
  if (isset($field_event_date[LANGUAGE_NONE])) {
    $event_date = strtotime($field_event_date[LANGUAGE_NONE][0]['value']);
  }
  else {
    $event_date = $created;
  }
  $date_1 = format_date($event_date, 'custom', 'M');
  $date_2 = format_date($event_date, 'custom', 'd');
  ?>
  <div class='date-block event'>
    <span class="top"><?php print $date_1; ?></span>
    <span class="bottom"><?php print $date_2; ?></span>
  </div>

  <?php print $ds_content; ?>
</<?php print $ds_content_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
