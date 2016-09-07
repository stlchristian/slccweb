<?php
/**
 * @file
 * contact_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function contact_form_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function contact_form_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function contact_form_node_info() {
  $items = array(
    'enquiry' => array(
      'name' => t('Enquiry'),
      'base' => 'node_content',
      'description' => t('This content type allows users to submit an enquiry through the website'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
