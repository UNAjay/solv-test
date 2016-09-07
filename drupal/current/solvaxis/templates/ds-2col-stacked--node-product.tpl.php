<?php

/**
 * @file
 * Display Suite 2 column stacked template.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="ds-2col <?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <<?php print $header_wrapper ?> class="group-header<?php print $header_classes; ?>">
    <div class="region-holder">
      <?php print $header; ?>
    </div>
  </<?php print $header_wrapper ?>>

  <?php if ($preface) { ?>
    <<?php print $preface_wrapper ?> class="group-preface<?php print $preface_classes; ?>">
      <div class="region-holder">
        <?php print $preface; ?>
      </div>
    </<?php print $preface_wrapper ?>>
  <?php } ?>

<div class="region-holder">
  <?php if ($right) { ?>
    <<?php print $left_wrapper ?> class="group-left<?php print $left_classes; ?>">
  <?php } else { ?>
    <<?php print $left_wrapper ?> class="<?php print $left_classes; ?>">
  <?php } ?>
    <?php print $left; ?>
  </<?php print $left_wrapper ?>>


  <?php if ($right): ?>
  <<?php print $right_wrapper ?> class="group-right<?php print $right_classes; ?>">
    <?php print $right; ?>
  </<?php print $right_wrapper ?>>
  <?php endif; ?>

  <?php if ($banner): ?>
    <span class="clearfix"></span>
  <<?php print $banner_wrapper ?> class="group-banner<?php print $banner_classes; ?>">
    <?php print $banner; ?>
  </<?php print $banner_wrapper ?>>
  <?php endif; ?>

</div>

  <<?php print $footer_wrapper ?> class="group-footer<?php print $footer_classes; ?>">
    <?php print $footer; ?>
  </<?php print $footer_wrapper ?>>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
