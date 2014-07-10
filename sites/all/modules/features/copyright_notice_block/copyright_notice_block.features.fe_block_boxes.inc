<?php
/**
 * @file
 * copyright_notice_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function copyright_notice_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright Notice Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'copyright_notice';
  $fe_block_boxes->body = '<div class="tb-copyright">
Copyright © 2014 St. Louis Christian College. All Rights Reserved.
</div>';

  $export['copyright_notice'] = $fe_block_boxes;

  return $export;
}
