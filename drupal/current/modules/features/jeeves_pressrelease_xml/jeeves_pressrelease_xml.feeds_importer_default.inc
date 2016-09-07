<?php
/**
 * @file
 * jeeves_pressrelease_xml.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function jeeves_pressrelease_xml_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pressreleasexml_fi';
  $feeds_importer->config = array(
    'name' => 'PressReleaseXML FI',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'field[@name="id"]',
          'xpathparser:2' => 'field[@name="text"]',
          'xpathparser:3' => 'dc:title',
          'xpathparser:4' => 'xmp:createdate',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '///metadata',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Blank source 1',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Blank source 2',
            'target' => 'field_product',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          5 => array(
            'source' => 'Blank source 3',
            'target' => 'field_news_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:4',
            'target' => 'created',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Blank source 4',
            'target' => 'sticky',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Blank source 5',
            'target' => 'promote',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'news',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['pressreleasexml_fi'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pressreleasexml_fr';
  $feeds_importer->config = array(
    'name' => 'PressReleaseXML FR',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'field[@name="id"]',
          'xpathparser:2' => 'field[@name="text"]',
          'xpathparser:3' => 'dc:title',
          'xpathparser:4' => 'xmp:createdate',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '///metadata',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Blank source 1',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Blank source 2',
            'target' => 'field_product',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          5 => array(
            'source' => 'Blank source 3',
            'target' => 'field_news_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:4',
            'target' => 'created',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Blank source 4',
            'target' => 'sticky',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Blank source 5',
            'target' => 'promote',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'news',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['pressreleasexml_fr'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pressreleasexml_nl';
  $feeds_importer->config = array(
    'name' => 'PressReleaseXML NL',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'field[@name="id"]',
          'xpathparser:2' => 'field[@name="text"]',
          'xpathparser:3' => 'dc:title',
          'xpathparser:4' => 'xmp:createdate',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '///metadata',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Blank source 1',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Blank source 2',
            'target' => 'field_product',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          5 => array(
            'source' => 'Blank source 3',
            'target' => 'field_news_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:4',
            'target' => 'created',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Blank source 4',
            'target' => 'sticky',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Blank source 5',
            'target' => 'promote',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'news',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['pressreleasexml_nl'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pressreleasexml_no';
  $feeds_importer->config = array(
    'name' => 'PressReleaseXML NO',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'field[@name="id"]',
          'xpathparser:2' => 'field[@name="text"]',
          'xpathparser:3' => 'dc:title',
          'xpathparser:4' => 'xmp:createdate',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '///metadata',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Blank source 1',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Blank source 2',
            'target' => 'field_product',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          5 => array(
            'source' => 'Blank source 3',
            'target' => 'field_news_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:4',
            'target' => 'created',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Blank source 4',
            'target' => 'sticky',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Blank source 5',
            'target' => 'promote',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'news',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['pressreleasexml_no'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pressreleasexml_pl';
  $feeds_importer->config = array(
    'name' => 'PressReleaseXML PL',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'field[@name="id"]',
          'xpathparser:2' => 'field[@name="text"]',
          'xpathparser:3' => 'dc:title',
          'xpathparser:4' => 'xmp:createdate',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '///metadata',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Blank source 1',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Blank source 2',
            'target' => 'field_product',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          5 => array(
            'source' => 'Blank source 3',
            'target' => 'field_news_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:4',
            'target' => 'created',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Blank source 4',
            'target' => 'sticky',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Blank source 5',
            'target' => 'promote',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'news',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['pressreleasexml_pl'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pressreleasexml_sk';
  $feeds_importer->config = array(
    'name' => 'PressReleaseXML SK',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'field[@name="id"]',
          'xpathparser:2' => 'field[@name="text"]',
          'xpathparser:3' => 'dc:title',
          'xpathparser:4' => 'xmp:createdate',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '///metadata',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Blank source 1',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Blank source 2',
            'target' => 'field_product',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          5 => array(
            'source' => 'Blank source 3',
            'target' => 'field_news_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:4',
            'target' => 'created',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Blank source 4',
            'target' => 'sticky',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Blank source 5',
            'target' => 'promote',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'news',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['pressreleasexml_sk'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pressreleasexml_sv';
  $feeds_importer->config = array(
    'name' => 'PressReleaseXML SV',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'field[@name="id"]',
          'xpathparser:2' => 'field[@name="text"]',
          'xpathparser:3' => 'dc:title',
          'xpathparser:4' => 'xmp:createdate',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '///metadata',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Blank source 1',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Blank source 2',
            'target' => 'field_product',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          5 => array(
            'source' => 'Blank source 3',
            'target' => 'field_news_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:4',
            'target' => 'created',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Blank source 4',
            'target' => 'sticky',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Blank source 5',
            'target' => 'promote',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'news',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['pressreleasexml_sv'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pressreleasexml_uk';
  $feeds_importer->config = array(
    'name' => 'PressReleaseXML UK',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'field[@name="id"]',
          'xpathparser:2' => 'field[@name="text"]',
          'xpathparser:3' => 'dc:title',
          'xpathparser:4' => 'xmp:createdate',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '///metadata',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Blank source 1',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Blank source 2',
            'target' => 'field_product',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          5 => array(
            'source' => 'Blank source 3',
            'target' => 'field_news_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:4',
            'target' => 'created',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Blank source 4',
            'target' => 'sticky',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Blank source 5',
            'target' => 'promote',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'news',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['pressreleasexml_uk'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pressreleasexml_us';
  $feeds_importer->config = array(
    'name' => 'PressReleaseXML US',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'field[@name="id"]',
          'xpathparser:2' => 'field[@name="text"]',
          'xpathparser:3' => 'dc:title',
          'xpathparser:4' => 'xmp:createdate',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '///metadata',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Blank source 1',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Blank source 2',
            'target' => 'field_product',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          5 => array(
            'source' => 'Blank source 3',
            'target' => 'field_news_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:4',
            'target' => 'created',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Blank source 4',
            'target' => 'sticky',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Blank source 5',
            'target' => 'promote',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'news',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['pressreleasexml_us'] = $feeds_importer;

  return $export;
}
