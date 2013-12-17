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
<p>We\'re on Social Networks. Follow us and get in touch.</p>
<ul class="social-list">
<li class="twitter"><a title="Twitter" href="http://twitter.com/ElliotFriend">Twitter</a></li>
<li class="facebook"><a title="Facebook" href="http://facebook.com/ElliotFriend">Facebook</a></li>
<li class="google-plus"><a title="Google plus" href="http://go.voris.me/g">Google plus</a></li>
<li class="feed"><a title="Feed" href="http://elliot.voris.me/feed/">Feed</a></li>
<li class="vimeo"><a title="Vimeo" href="http://vimeo.com/elliotfriend">Vimeo</a></li>
</ul></div>';

  $export['connect_with_us_block'] = $fe_block_boxes;

  return $export;
}
