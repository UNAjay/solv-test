<?php
/**
  * @file
  * Site template
  */
?>
<div id="page">
  <?php if (!empty($content['site_top_primary'])): ?>
    <header class="site-top-primary clearfix" role="banner">
      <div class="region-holder">
        <?php print render($content['site_top_primary']); ?>
      </div>
    </header>
  <?php endif; ?>
  <?php if (!empty($content['content'])): ?>
    <section id="content" class="content clearfix" role="main">
      <div class="region-holder">
        <?php print render($content['content']); ?>
      </div>
    </section>
  <?php endif; ?>
  <?php if (!empty($content['site_bottom_primary'])): ?>
    <footer class="site-bottom-primary clearfix" role="contentinfo">
      <div class="region-holder">
        <?php print render($content['site_bottom_primary']); ?>
      </div>
    </footer>
  <?php endif; ?>
</div>