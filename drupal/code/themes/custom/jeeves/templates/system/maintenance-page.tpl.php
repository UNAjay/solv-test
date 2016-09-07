<!DOCTYPE html>
<!--[if lte IE 7 ]><html lang="<?php print $language->language; ?>" class="ie lt-ie8 lt-ie9"><![endif]-->
<!--[if IE 8 ]><html lang="<?php print $language->language; ?>" class="ie ie8 lt-ie9"><![endif]-->
<!--[if IE 9 ]><html lang="<?php print $language->language; ?>" class="ie ie9"><![endif]-->
<!--[if (gt IE 9)|!(IE)]><!--><html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>" <?php print $html_attributes; ?>><!--<![endif]-->
  <head>
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>
    <?php print $styles; ?>
    <?php print $scripts; ?>
    <!--[if lt IE 9]>
      <script src="/<?php echo path_to_theme(); ?>/js/html5shiv-printshiv.js"></script>
      <script src="/<?php echo path_to_theme(); ?>/js/respond.min.js"></script>
    <![endif]-->
  </head>
  <body class="html not-front no-sidebars maintenance-page">
    <div id="page">
      <div id="content" class="content clearfix">
        <div class="region-holder">
          <div class="sixteen">
            <div class="main-primary">
             </div>
            </div>
        </div>
      </div>
    </div>
  </body>

</html>