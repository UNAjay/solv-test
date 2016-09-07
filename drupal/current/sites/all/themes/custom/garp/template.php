<?php



function garp_language_switch_links_alter(array &$links, $type, $path) {
  foreach ($links as $langcode => $link) {
    if (!isset($link['href'])) {
      $links[$langcode]['href'] = '<front>';
    }
  }
}


/*
 * Implements hook_preprocess_page().
 */
function garp_preprocess_page(&$vars) {
  $active_contexts = array_keys(context_active_contexts());
  if (in_array('landing_page', $active_contexts)) {
    $vars['logo'] = base_path() . drupal_get_path('theme', 'garp') . '/images/logo_white.png';
    $vars['logo_footer'] = base_path() . drupal_get_path('theme', 'garp') . '/images/logo_white.png';
  }
}

/**
 * Implements hook_page_alter() to insert JavaScript to the appropriate scope/region of the page.
 */
function garp_page_alter(&$page) {

//   $tag = '
// <!-- Tracking code for www.garp.se -->
// <script type="text/javascript">var psSite = "4b00539a68";var peJsHost = (("https:" == document.location.protocol) ? "https://" : "http://");
// document.write(unescape("%3Cscript src="' + peJsHost + 'tr.prospecteye.com/track.js" type="text/javascript"%3E%3C/script%3E"));
// </script>
// <noscript><img src="http://tr.prospecteye.com/?id=4b00539a68" style="border:0;display:none;"></noscript>
// <!-- End Tracking code -->';

//   $page['page_bottom']['prospect_eye'] = array(
//     'weight' => 30,
//     '#markup' => $tag,
//   );

}
