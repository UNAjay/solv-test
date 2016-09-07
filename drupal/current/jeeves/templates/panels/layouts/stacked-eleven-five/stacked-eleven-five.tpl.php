<?php
/**
 * @file
 * This layout is intended to be used inside the page content pane. Thats why
 * there is not wrapper div by default.
 */
?>
<div class="eleven-five stacked">
  <div class="top-primary" role="banner">
  <?php print render($content['top_primary']); ?>
  </div>
  <div class="main-primary" role="main">
  <?php print render($content['main_primary']); ?>
  </div>
  <aside class="aside-primary" role="complementary">
  <?php print render($content['aside_primary']); ?>
  </aside>
</div>
