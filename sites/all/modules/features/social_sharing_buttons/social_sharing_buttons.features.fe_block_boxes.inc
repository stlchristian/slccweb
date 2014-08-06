<?php
/**
 * @file
 * social_sharing_buttons.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function social_sharing_buttons_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Sharing Buttons';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_sharing_buttons';
  $fe_block_boxes->body = '<div id="social-sharing-buttons">
<div class="fb-like" data-href="https://stlchristian.edu" data-layout="button_count" data-action="like" data-show-faces="true" data-share="false"></div>
<a href="https://twitter.com/share" class="twitter-share-button" data-via="stlchristian" data-hashtags="slcclove">Tweet</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?\'http\':\'https\';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+\'://platform.twitter.com/widgets.js\';fjs.parentNode.insertBefore(js,fjs);}}(document, \'script\', \'twitter-wjs\');</script>
<a href="//www.pinterest.com/pin/create/button/" data-pin-do="buttonBookmark"  data-pin-color="white"><img src="//assets.pinterest.com/images/pidgets/pinit_fg_en_rect_white_20.png" /></a>
<!-- Please call pinit.js only once per page -->
<script type="text/javascript" async src="//assets.pinterest.com/js/pinit.js"></script>
<!-- Place this tag where you want the +1 button to render. -->
<div class="g-plusone" data-size="medium"></div>

<!-- Place this tag after the last +1 button tag. -->
<script type="text/javascript">
  (function() {
    var po = document.createElement(\'script\'); po.type = \'text/javascript\'; po.async = true;
    po.src = \'https://apis.google.com/js/platform.js\';
    var s = document.getElementsByTagName(\'script\')[0]; s.parentNode.insertBefore(po, s);
  })();
</script>
</div>';

  $export['social_sharing_buttons'] = $fe_block_boxes;

  return $export;
}
