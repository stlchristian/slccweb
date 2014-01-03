<?php
/**
 * @file
 * contact_form.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function contact_form_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_enquiry';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_enquiry';
  $strongarm->value = 0;
  $export['comment_anonymous_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_enquiry';
  $strongarm->value = 1;
  $export['comment_default_mode_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_enquiry';
  $strongarm->value = '50';
  $export['comment_default_per_page_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_enquiry';
  $strongarm->value = '1';
  $export['comment_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_enquiry';
  $strongarm->value = 1;
  $export['comment_form_location_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_enquiry';
  $strongarm->value = '0';
  $export['comment_preview_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_enquiry';
  $strongarm->value = 1;
  $export['comment_subject_field_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_form_content';
  $strongarm->value = 'You have received a new contact form submission from [contact:name] ([contact:email])

They selected the option: [contact:option]

[contact:message]

Telephone: [contact:telephone]';
  $export['contact_form_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_form_emails';
  $strongarm->value = 'support@nudgedigital.co.uk';
  $export['contact_form_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_form_subject';
  $strongarm->value = 'You have recieved a new submission';
  $export['contact_form_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_enquiry';
  $strongarm->value = array();
  $export['menu_options_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_enquiry';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_enquiry';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_enquiry';
  $strongarm->value = '0';
  $export['node_preview_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_save_redirect_enquiry';
  $strongarm->value = '3';
  $export['node_save_redirect_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_enquiry';
  $strongarm->value = 0;
  $export['node_submitted_enquiry'] = $strongarm;

  return $export;
}
