<?php

/**
 * @file
 * Insert blocks into the body of a node
 *
 * Sidebar blocks contain all sorts of nifty stuff, but sometimes you
 * want to stick that stuff into the body of your node. Instead of using
 * PHP snippets (a possible security hole on public sites), you can use
 * this module. When it's activated...
 *
 * [block:name of module=delta of block]
 *
 * ...will insert the contents of a rendered sidebar block into the body
 * of your node. If no delta is specified, the default block for that
 * module will be displayed.
 */


/**
 * Implementation of hook_filter_info().
 */
function monster_page_filter_info() {
  $filters['embed_entity'] = array(
    'title' => t('Embed entity'),
    'description' => t('Inserts the contents of a entity using [embed:entity=eid] tags.'),
    'process callback' => '_embed_entity',
    'tips callback' => '_embed_entity_tips',
    'cache' => FALSE,
  );
  return $filters;
}

function _embed_entity($text, $filter, $format) {
  if (preg_match_all("/\[embed:([^=\]]+)=?([^=\]]+)?=?([^\]]*)?\]/i", $text, $match)) {
    foreach ($match[0] as $key => $value) {
      $bundle = 'embed_' . $match[1][$key];
      $entity_id = $match[2][$key];

      $entity_type = 'ee';
      $entity = entity_load_single($entity_type, $entity_id);
      if ($entity && is_object($entity)) {
        $entity = clone $entity;
        $build = entity_view($entity_type, array($entity), 'embed');

        $output = drupal_render($build);
      }
      $search[] = $value;
      $replace[] = !empty($output) ? $output : '';
    }
    return str_replace($search, $replace, $text);
  }

  return $text;
}


function _embed_entity_tips($filter, $format, $long = FALSE) {

  $output = '';

  // Get all entity instances of this type.
  $query = new EntityFieldQuery();
  $query
  ->entityCondition('entity_type', 'ee', '=');
  $results = $query->execute();
  if (!empty($results)) {
    $entities = entity_load('ee', array_keys($results['ee']));

    foreach ($entities as $entity) {

        $title = entity_label('ee', $entity);
        $key = '[embed:' . str_replace('embed_', '', $entity->type) . '='. $entity->id . ']';
        $rows[] = array($title, $key);

    }
    // $data['#attributes'] = array('class' => array('block-list'));
    // $data['items'] = $block_list;

    $table_data = array(
      'header'     => array('Title', 'Key'),
      'rows'       => $rows,
      'sticky'     => FALSE,
      'empty'      => 'No results found',
      'attributes' => array(),
      'colgroups'  => array(),
      'caption'    => NULL
    );


    $output .= t('You may use [entity:<em>type</em>=<em>ID</em>] tags to display the contents of entity.');

    // $output .= theme('item_list', $data);
    $output .= theme_table($table_data);
  }

  return $output;
}


