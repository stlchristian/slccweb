<?php
/**
 * @file
 * professor_profile.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function professor_profile_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'faculty_directory_importer';
  $feeds_importer->config = array(
    'name' => 'Faculty Directory Importer',
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
            'source' => 'Employee',
            'target' => 'field_employee_type',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Salutation',
            'target' => 'field_title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'First',
            'target' => 'field_first_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Last',
            'target' => 'field_last_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Job',
            'target' => 'field_job_title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Email',
            'target' => 'field_contact_email',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Phone',
            'target' => 'field_contact_phone',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'professor_profile',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['faculty_directory_importer'] = $feeds_importer;

  return $export;
}
