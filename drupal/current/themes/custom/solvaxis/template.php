<?php



function solvaxis_language_switch_links_alter(array &$links, $type, $path) {
  foreach ($links as $langcode => $link) {
    if (!isset($link['href'])) {
      $links[$langcode]['href'] = '<front>';
    }
  }
}

/**
 * Return HTML for a view in a field.
 *
 * @see views_embed_view()
 */
function solvaxis_viewfield_formatter_default($variables) {
  $element = $variables['element'];

  $view_arguments = $element['#view_arguments'];
  // Manually push arguments into Related items view.
  // Snippet taken form views_plugin_argument_default_taxonomy_tid.inc
  if ($element['#view_name'] == 'ref_related') {
    // Load default argument from node.
    foreach (range(1, 3) as $i) {
      $node = menu_get_object('node', $i);
      if (!empty($node)) {
        break;
      }
    }
    // Just check, if a node could be detected.
    if ($node) {
      $taxonomy = array();
      $fields = field_info_instances('node', $node->type);
      foreach ($fields as $name => $info) {
        $field_info = field_info_field($name);
        if ($field_info['type'] == 'taxonomy_term_reference') {
          $items = field_get_items('node', $node, $name);
          if (is_array($items)) {
            foreach ($items as $item) {
              $taxonomy[$item['tid']] = $field_info['settings']['allowed_values'][0]['vocabulary'];
            }
          }
        }
      }
      $view_arguments[0] = implode('+', array_keys($taxonomy));
    }
  }

  return $element['#view']->preview($element['#view_display'], $view_arguments);
}

/*
 * Implements hook_preprocess_page().
 */
function solvaxis_preprocess_page(&$vars) {
  $active_contexts = array_keys(context_active_contexts());
  if (in_array('landing_page', $active_contexts)) {
    $vars['logo'] = base_path() . drupal_get_path('theme', 'solvaxis') . '/logo.png';
    $vars['logo_footer'] = '';
  }
  $view = views_embed_view('promo_slideshow', 'block');
  $vars['slideshow'] = $view;

  if (isset($vars['node']) && $vars['node']->type == 'page' && !empty($vars['node']->field_promo)) {
    $vars['classes_array'][] = 'with-promos';
  }

  $options = array(
    'type' => 'file',
    'weight' => '20',
    'scope' => 'footer',
    'preprocess' => FALSE
  );
  drupal_add_js(libraries_get_path('inview') . '/jquery.inview.min.js', $options);
  drupal_add_js(drupal_get_path('theme', 'solvaxis') . '/scripts/libraries/jquery.parallax-scroll.js', $options);
}

/**
 * Implements hook_page_alter() to insert JavaScript to the appropriate scope/region of the page.
 */
function solvaxis_page_alter(&$page) {

//   $tag = '
// <!-- Tracking code for www.solvaxis.se -->
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

/**
* Implements hook_css_alter().
*/
function solvaxis_css_alter(&$css) {
   // base theme styles
   unset($css[drupal_get_path('theme', 'jeeves') . '/css/jeeves.css']);
	 // remove flexslider default style
   unset($css[libraries_get_path('flexslider') . '/flexslider.css']);
}

/**
 * Implements hook_preprocess_search_result()
 */
function solvaxis_preprocess_search_result(&$variables) {
    $node = $variables['result']['node'];
    if (is_object($node) && $node->nid) { // if the result is a node we can load the teaser
        $variables['teaser'] = node_view($node, 'teaser');
    }
}

