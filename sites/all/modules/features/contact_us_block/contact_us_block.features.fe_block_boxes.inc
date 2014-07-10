<?php
/**
 * @file
 * contact_us_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function contact_us_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact us';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'contact_us_block';
  $fe_block_boxes->body = '<div class="contact-us">
<p>Do you have a question about SLCC, or do you want some more information?</p>
<ul class="contact-list fa-ul">
<li><span class="fa-li fa fa-phone-square"></span><strong>Phone: </strong><span class="phone">314-837-6777</span></li>
<li><span class="fa-li fa fa-envelope"></span><strong>Email: </strong> <a href="mailto:questions@slcconline.edu">questions@slcconline.edu</a>
</ul>
</div>';

  $export['contact_us_block'] = $fe_block_boxes;

  return $export;
}
