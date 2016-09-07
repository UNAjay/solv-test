<?php
/**
 * Shared Theme functions.
 * Specific theme functions (function specific etc.) is placed in modules.
 */

/*
 * Implementation of hook_html_head_alter()
 */
function jeeves_html_head_alter(&$head_elements) {
  // change the default meta content-type tag to the shorter HTML5 version.
//  $head_elements['system_meta_content_type']['#attributes'] = array(
//      'charset' => 'utf-8',
//  );
}

/*
 * Implementation of template_preprocess_html()
 */
function jeeves_preprocess_html(&$vars) {
  // viewport
  $meta_viewport = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' => 'width=device-width, initial-scale=1.0',
      'name' => 'viewport',
    )
  );
  drupal_add_html_head($meta_viewport, 'meta_viewport');

  // external css
  drupal_add_css(
    'http://fonts.googleapis.com/css?family=Open+Sans:300,300italic,600,600italic&subset=latin,latin-ext',
    array(
      'type' => 'external'
    )
  );

  $options = array(
    'type' => 'file',
    'weight' => '20',
    'scope' => 'footer',
    'preprocess' => FALSE
  );
  drupal_add_js(drupal_get_path('theme', 'jeeves'). '/scripts/vendemore_tracking.js', $options);

  // add class to taxonomy pages
  if (arg(0) == 'taxonomy' && arg(1) == 'term') {
    $term = taxonomy_term_load((int)arg(2));
    $vars['classes_array'][] = 'term-' . $term->vocabulary_machine_name;
  }

  $vars['html_attributes'] = FALSE;
}

/*
 * Implements hook_preprocess_page().
 */
function jeeves_preprocess_page(&$vars) {
  // Remove from display ugly text "There is currently no content classified with this term."
  if (isset($vars['page']['content']['system_main']['no_content'])) {
    unset($vars['page']['content']['system_main']['no_content']);
  }

  // EDITED Maris Abols: hide all basic page nodes linked to taxonomy
  if(arg(0) == "taxonomy" && arg(1) == "term") {
    $vars['page']['content']['system_main']['nodes'] = null;
  }

  // remove title and breadcrumb from fullscreen pages
  if (isset($vars['node']) && ($vars['node']->type == 'full_page' || $vars['node']->type == 'landing_page')) {
    $vars['breadcrumb'] = '';
    $vars['title'] = '';
  }

  // calculate sections for fullscreen pages
  $vars['full_page'] = FALSE;
  $vars['first_section'] = '';
  $vars['other_sections'] = '';

  if (isset($vars['node']) && ($vars['node']->type == 'full_page')) {

    $vars['full_page'] = TRUE;

    if (isset($vars['page']['content']['system_main']['nodes'])) {
      foreach ($vars['page']['content']['system_main']['nodes'] as $nid => $node_arr) {
        if (is_numeric($nid)) {
          if (isset($vars['page']['content']['system_main']['nodes'][$nid]['field_page_sections'])) {


            // get first section and render it
            foreach ($vars['page']['content']['system_main']['nodes'][$nid]['field_page_sections']['#items'] as $num => $item) {

              // remove titles from section nodes
              if (isset($vars['page']['content']['system_main']['nodes'][$nid]['field_page_sections'][$num]['node'])) {
                foreach ($vars['page']['content']['system_main']['nodes'][$nid]['field_page_sections'][$num]['node'] as $ref_nid => $ref_node) {
                  if (is_numeric($ref_nid)) {
                    // unset($vars['page']['content']['system_main']['nodes'][$nid]['field_page_sections'][$num]['node'][$ref_nid]['#node']->title);
                    $vars['page']['content']['system_main']['nodes'][$nid]['field_page_sections'][$num]['node'][$ref_nid]['#node']->title = '';
                  }
                }
              }

              if (empty($vars['first_section'])) $vars['first_section'] = render($vars['page']['content']['system_main']['nodes'][$nid]['field_page_sections'][$num]);
            }

            // render other sections
            $vars['other_sections'] = render($vars['page']['content']['system_main']['nodes'][$nid]['field_page_sections']);

          }
        }
      }
    }
  }

  $vars['logo_footer'] = FALSE;
  $active_contexts = array_keys(context_active_contexts());
  if (in_array('landing_page', $active_contexts)) {
    $vars['logo'] = base_path() . drupal_get_path('theme', 'jeeves') . '/images/logo_white.png';
    $vars['logo_footer'] = base_path() . drupal_get_path('theme', 'jeeves') . '/images/logo_white.png';
  }
}

/**
 * Modify the Panels default output to remove the panel separator.
 */
function jeeves_panels_default_style_render_region($vars) {
  $output = '';
  $output .= implode($vars['panes']);
  return $output;
}

/**
 * Implementation of theme_menu_link()
 */
function jeeves_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';
  $element['#attributes']['class'][] = 'depth-' . $element['#original_link']['depth'];

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Implements template_preprocess_field().
 */
//Unset the title of facts entity ref on articles
function jeeves_preprocess_field(&$vars) {
  // Only use the field class.
  unset($vars['classes_array']);
  $trans = array('_' => '-', ':' => '-');
  $vars['classes_array'] = array(
      strtr($vars['element']['#field_name'], $trans),
  );

  // Add a class based on the last word in the fieldname i.e. field_faq_lead will get class "lead"
  $class = explode('_', $vars['element']['#field_name']);
  $type_class = end($class);
  $vars['classes_array'][] = $type_class;

  // Add line breaks to plain text textareas.
  if (
    // Make sure this is a text_long field type.
    $vars['element']['#field_type'] == 'text_long'
    // Check that the field's format is set to null, which equates to plain_text.
    && $vars['element']['#items'][0]['format'] == null
  ) {
    $vars['items'][0]['#markup'] = nl2br($vars['items'][0]['#markup']);
  }

  // remove title for referenced nodes (field_page_sections)
  if ($vars['element']['#field_name'] == 'field_page_sections') {
    foreach($vars['items'] as $item) {
      foreach ($item['node'] as $node) {
        if (is_array($node) && isset($node['#node'])) {
          unset($node['#node']->title);
        }
      }
    }
  }

}

function jeeves_preprocess_node(&$vars, $hook) {

  // add class for page section node type
  if ($vars['node']->type == 'page_section') {

    $node = $vars['node'];

    $field_items = field_get_items('node', $node, 'field_section_bgcolor');
    $bgcolor = $field_items[0]['value'];

    if ($bgcolor) $vars['classes_array'][] = 'bgcolor-'.$bgcolor;

    $field_items = field_get_items('node', $node, 'field_section_list_layout');
    $layout = $field_items[0]['value'];

    if ($layout) $vars['classes_array'][] = 'layout-'.$layout;
  }
}

/**
 * Implements theme_breadcrumb().
 */
function jeeves_breadcrumb ($variables) {
  if (!empty($variables['breadcrumb'])) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    // remove the first one which is home
    array_shift($variables['breadcrumb']);

    // add current page to breadcrumbs
    $page_title = drupal_get_title();
    if ($page_title) {
      $variables['breadcrumb'][] = '<span class="current">' . $page_title . '&nbsp;<span></span></span>';
    }

    // EDITED Maris Abols: make all breadcrumb element with html covering
    if (!empty($variables['breadcrumb'])) {
      foreach($variables['breadcrumb'] as &$breadcrumb_title) {
        if(strlen($breadcrumb_title) == strlen(strip_tags($breadcrumb_title))) {
          // if no html, then add
          $breadcrumb_title = '<span class="current">' . $breadcrumb_title . '<span></span></span>';
        }
      }
    }

    // create a new home link with span inside
    $homeIcon = l('', '<front>', array('attributes'=>array('class'=>'home-icon')));
    $homeText = l(t('Home'), '<front>', array('attributes'=>array('class'=>'home-text')));

    $output .= '<div class="breadcrumb">' . $homeIcon . $homeText . implode(' ', $variables['breadcrumb']) . '</div>';
    return $output;
  }
}

/**
* Implements hook_css_alter().
*/
function jeeves_css_alter(&$css) {
   // system
   unset($css[drupal_get_path('module', 'system') . '/system.menus.css']);
   unset($css[drupal_get_path('module', 'system') . '/system.theme.css']);
   // views
   unset($css[drupal_get_path('module', 'views') . '/css/views.css']);
	 // remove Lingotek workbench-link.css
	 unset($css[drupal_get_path('module', 'lingotek') . '/style/workbench-link.css']);
}

function jeeves_preprocess_search_result(&$variables) {
    $variables['info'] = '';
    //$variables['info'] = $variables['result']['type'];
}

function jeeves_views_view_field__partner__block_1__title_field($variables) {
  $row = $variables['row'];

  $title = $row->field_partner_offices_node_title . ', ' . $row->node_title;
  $link = l($title, 'node/' . $row->field_partner_offices_node_nid, array('query' => array('location' => $row->nid)));
  return $link;
}
