<?php

/**
 * @file
 * Override of preprocess functions.
 */

function slcc_subtheme_preprocess_page(&$vars) {
  /*
   * This function is stupid, and should not be uncommented
   * If a node is being rendered, which is not a page or webform,
   * this function figures out what the content type is and sets
   * the node's title to that.
   * I told you it was stupid.
   *if (isset($vars['node']) && !in_array($vars['node']->type, array('page', 'webform')) && !in_array('page__node__delete', $vars['theme_hook_suggestions'])) {
   *  $result = db_select('node_type', NULL, array('fetch' => PDO::FETCH_ASSOC))
   *  ->fields('node_type', array('name'))
   *  ->condition('type', $vars['node']->type)
   *  ->execute()->fetchField();
   *  $vars['title'] = t($result);
   *}
   */
  if ($vars['theme_hook_suggestions'][0] == 'page__comment') {
    if (in_array('page__comment__delete', $vars['theme_hook_suggestions'])) {
      $vars['title'] = t("Delete comment");
    }
    elseif (in_array('page__comment__edit', $vars['theme_hook_suggestions'])) {
      $vars['title'] = t('Edit comment');
    }
  }  
}

/**
 * Implementation of hook_form_alter().
 * Modify the node title for my "New Ministry Opportunity" form
 * that will be seen by anonymous users
 */
function slcc_subtheme_form_ministry_opportunity_node_form_alter(&$form, &$form_state) {
  /* Set the title */
  drupal_set_title('Submit a Ministry Opportunity');
  /* Remove the "Node Revision" Section */
  $form['revision_information']['#access'] = FALSE;
  /* Change the name of the "Save" button */
  $form['actions']['submit']['#value'] = t('Submit');
  /* Redirect the user back to the admissions (for now) page, after submitting the node */
  $form['actions']['submit']['#submit'][] = 'mysubmit_ministry_opportunity_node_submit';
}

function mysubmit_ministry_opportunity_node_submit($form, &$form_state) {
  drupal_get_messages();
  drupal_set_message("Your ministry opportunity has been successfully submitted. We'll have it posted as soon as we can.");
  $form_state['redirect'] = 'ministry-opportunities';
}

/**
 * Implementation of template_preprocess_field().
 */
function slcc_subtheme_preprocess_field(&$vars, $hook) {
  /* Add line breaks to plain text textareas. */
  if (
    /* Make sure this is a text_long or text_with_summary field type. */
    ($vars['element']['#field_type'] == 'text_with_summary' || $vars['element']['#field_type'] == 'text_long')
    /* Check that the field's format is set to null, which equates to plain_text. */
    && $vars['element']['#items'][0]['format'] == null
  ) {
    $vars['items'][0]['#markup'] = nl2br($vars['items'][0]['#markup']);
  }
}

/**
 * Implementation of theme_webform_mail_headers().
 */
function slcc_subtheme_webform_mail_headers($variables) {
  $headers = array(
    'Content-Type'  => 'text/html; charset=UTF-8; format=flowed; delsp=yes',
    'X-Mailer'      => 'Drupal Webform (PHP/' . phpversion() . ')',
  );
  return $headers;
}
