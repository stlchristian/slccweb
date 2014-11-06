<?php
/**
 * @file
 * evergreen_search_box.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function evergreen_search_box_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Evergreen search box';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'catalog_search';
  $fe_block_boxes->body = '<p><em>This search box will open a new window with your search results.</em></p>

<form target="_blank" action="https://evergreen.stlchristian.edu/eg/opac/results" method="get">
    <input type="search" id="evergreen-search-box" alt="Catalog Search" maxlength="200" size="25" name="query" placeholder="Search for keywords..." />
    <input type="hidden" name="qtype" value="keyword" />
    <input type="hidden" name="locg" value="4" />
    <span class="button edit-submit">
        <input type="submit" name="op" id="edit-submit" value="Search" class="form-submit">
    </span>
</form>';

  $export['catalog_search'] = $fe_block_boxes;

  return $export;
}
