<?php
/**
 * @file
 * calendar_entry.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function calendar_entry_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'calendar_csv_feed';
  $feeds_importer->config = array(
    'name' => 'Calendar CSV Feed',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '20',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'start',
            'target' => 'field_date_with_end:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'end',
            'target' => 'field_date_with_end:end',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'school_year',
            'target' => 'field_school_year',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'semester',
            'target' => 'field_semester',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'calendar',
            'target' => 'field_calendar',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'calendar_entry',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['calendar_csv_feed'] = $feeds_importer;

  return $export;
}
