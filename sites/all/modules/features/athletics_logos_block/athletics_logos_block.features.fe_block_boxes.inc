<?php
/**
 * @file
 * athletics_logos_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function athletics_logos_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Athletics logos';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'athletics_logos';
  $fe_block_boxes->body = '<div class="athletics-logo">
<a target="_blank" href="http://www.accasports.org">
<img src="/sites/default/files/acca-logo.jpg" />
</a>
</div>
<div class="athletics-logo">
<center>
<img src="/sites/default/files/soldier-head.gif" />
</center>
</div>
<div class="athletics-logo">
<img src="/sites/default/files/mccc-logo.jpg" />
</div>';

  $export['athletics_logos'] = $fe_block_boxes;

  return $export;
}
