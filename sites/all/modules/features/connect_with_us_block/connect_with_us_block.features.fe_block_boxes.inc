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
  $fe_block_boxes->body = '<div class="custom">
<p>We\'re available anywhere you'd like to learn more. Follow us and get in touch.</p>
<ul class="social-list">
<li class="twitter"><a target="_blank" title="Twitter" href="http://twitter.com/stlchristian">Twitter</a></li>
<li class="facebook"><a target="_blank" title="Facebook" href="http://facebook.com/slcconline">Facebook</a></li>
<li class="google-plus"><a target="_blank" title="Google plus" href="http://plus.google.com/103438173161121000417">Google plus</a></li>
<!--<li class="feed"><a target="_blank" title="Feed" href="#">Feed</a></li>
<li class="vimeo"><a target="_blank" title="Vimeo" href="#">Vimeo</a></li>-->
</ul></div>';

  $export['connect_with_us_block'] = $fe_block_boxes;

  return $export;
}
