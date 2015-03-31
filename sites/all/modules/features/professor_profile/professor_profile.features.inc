<?php
/**
 * @file
 * professor_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function professor_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function professor_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function professor_profile_image_default_styles() {
  $styles = array();

  // Exported image style: professor.
  $styles['professor'] = array(
    'label' => 'professor',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 53,
          'height' => 53,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: professor_thumb.
  $styles['professor_thumb'] = array(
    'label' => 'professor_thumb',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 130,
          'height' => 130,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function professor_profile_node_info() {
  $items = array(
    'professor_profile' => array(
      'name' => t('Professor Profile'),
      'base' => 'node_content',
      'description' => t('Information about a professor\'s bio, contact info, education, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
