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
  $date_1 = format_date($created, 'custom', 'M');
  $date_2 = format_date($created, 'custom', 'd');
  ?>
  <div class='date-block blog'>
    <span class="top"><?php print $date_1; ?></span>
    <span class="bottom"><?php print $date_2; ?></span>
  </div>

  <?php print $ds_content; ?>
</<?php print $ds_content_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
