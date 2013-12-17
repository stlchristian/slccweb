<?php
/**
 * @file
 * contact_form.features.inc
 */

/**
 * Implements hook_node_info().
 */
function contact_form_node_info() {
  $items = array(
    'contact_form' => array(
      'name' => t('Contact Form'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
