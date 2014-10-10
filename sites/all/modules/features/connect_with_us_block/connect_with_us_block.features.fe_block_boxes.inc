<?php
/**
 * @file
 * connect_with_us_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function connect_with_us_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Connect with us';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'connect_with_us_block';
  $fe_block_boxes->body = '<div class="social-icons">
<p>We\'re available anywhere you\'d like to learn more. Follow us and get in touch.</p>
<a target="_blank" title="Twitter" href="http://twitter.com/stlchristian"><i class="fa fa-fw fa-3x fa-twitter-square"></i></a>
<a target="_blank" title="Facebook" href="http://facebook.com/stlchristian"><i class="fa fa-fw fa-3x fa-facebook-square"></i></a>
<a target="_blank" title="Google+" href="https://plus.google.com/107642261577376969754" rel="publisher"><i class="fa fa-fw fa-3x fa-google-plus-square"></i></a>
<a target="_blank" title="YouTube" href="http://youtube.com/stlouischristian"><i class="fa fa-fw fa-3x fa-youtube-play"></i></a>
<a target="_blank" title="Pinterest" href="http://pinterest.com/stlchristian"><i class="fa fa-fw fa-3x fa-pinterest-square"></i></a>
</div>';

  $export['connect_with_us_block'] = $fe_block_boxes;

  return $export;
}
