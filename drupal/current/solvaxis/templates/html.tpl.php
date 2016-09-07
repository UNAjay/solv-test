<!DOCTYPE html>
<!--[if lte IE 7 ]><html lang="<?php print $language->language; ?>" class="ie lt-ie8 lt-ie9"><![endif]-->
<!--[if IE 8 ]><html lang="<?php print $language->language; ?>" class="ie ie8 lt-ie9"><![endif]-->
<!--[if IE 9 ]><html lang="<?php print $language->language; ?>" class="ie ie9 lt-ie10"><![endif]-->
<!--[if (gt IE 9)|!(IE)]><!--><html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>" <?php if (isset($html_attributes)) print $html_attributes; ?>><!--<![endif]-->

  <head>
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>
    <?php print $styles; ?>
    <?php print $scripts; ?>
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <!--[if IE 7]>
			<script src="/<?php echo path_to_theme(); ?>/scripts/boxsizing.htc"></script>
		<![endif]-->
    <!--[if lt IE 9]>
      <script src="/<?php echo path_to_theme(); ?>/scripts/html5shiv-printshiv.js"></script>
      <script src="/<?php echo path_to_theme(); ?>/scripts/respond.min.js"></script>
    <![endif]-->
  </head>
  <body class="<?php print $classes; ?>" <?php print $attributes; ?>>
    <?php print l(t('Skip to main content'), '', array('attributes'=>array('class'=> array('skip-link')), 'fragment'=>'content', 'external'=>TRUE)); ?>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>

<!-- Tracking code for www.garp.se -->
<script type="text/javascript">var psSite = "4b00539a68";var peJsHost = (("https:" == document.location.protocol) ? "https://" : "http://");
document.write(unescape("%3Cscript src='" + peJsHost + "tr.prospecteye.com/track.js' type='text/javascript'%3E%3C/script%3E"));
</script>
<noscript><img src="http://tr.prospecteye.com/?id=4b00539a68" style="border:0;display:none;"></noscript>
<!-- End Tracking code -->

  </body>
</html>
