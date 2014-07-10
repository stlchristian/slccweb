<?php
/**
 * @file
 * sample_banner_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function sample_banner_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Sample Banner';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'sample_banner_block';
  $fe_block_boxes->body = '<a href="#" title="Sample Banner"><img src="<?php print base_path(); ?>sites/default/files/field/image/banner.jpg" alt="University"/></a>';

  $export['sample_banner_block'] = $fe_block_boxes;

  return $export;
}
