<?php
/**
 * @file
 * weather_alert_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function weather_alert_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Weather alert block';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'wather_alert_block';
  $fe_block_boxes->body = '<p class="typo-box box-warning"><strong>All Day and AIM classes are cancelled</strong>. Due to inclement weather, all Day and AIM class will be cancelled today, 29 May 2014.</p>';

  $export['wather_alert_block'] = $fe_block_boxes;

  return $export;
}
