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
    'name' => 'professor',
    'label' => 'professor',
    'effects' => array(
      9 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'professor_thumb',
    'label' => 'professor_thumb',
    'effects' => array(
      17 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
  return $items;
}
