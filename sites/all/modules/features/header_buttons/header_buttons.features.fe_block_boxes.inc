<?php
/**
 * @file
 * header_buttons.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function header_buttons_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header Buttons';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'header_buttons';
  $fe_block_boxes->body = '<div class="request-apply clearfix"><a href="admissions/request-more-information" class="typo-btn btn-rounded-sm btn-orange typo-btn-sm btn-sm-orange"><span>Request Information <i class="fa fa-chevron-circle-right"></i></span></a> <a href="#" class="typo-btn btn-rounded-sm btn-orange typo-btn-sm btn-sm-orange"><span>Apply Now <i class="fa fa-chevron-circle-right"></i></span></a></div>
<div class="contact-us clearfix"><span><span class="fa fa-phone-square"></span> 314-837-6777</span> <a href="contact-us"><span class="fa fa-user"></span> Contact Us</a> <a href="#"><span class="fa fa-question-circle"></span> FAQs</a></div>';

  $export['header_buttons'] = $fe_block_boxes;

  return $export;
}
