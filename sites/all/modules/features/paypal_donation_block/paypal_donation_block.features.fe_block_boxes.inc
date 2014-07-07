<?php
/**
 * @file
 * paypal_donation_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function paypal_donation_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Paypal donation button';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'paypal_button';
  $fe_block_boxes->body = '<p><a class="typo-btn btn-rounded-big btn-orange typo-btn-big btn-big-orange vt-p" href="https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&amp;hosted_button_id=6VDDHR74CUSQU"><span>Donate<i class="fa fa-chevron-right fa-fw"></i></span></a></p>';

  $export['paypal_button'] = $fe_block_boxes;

  return $export;
}
