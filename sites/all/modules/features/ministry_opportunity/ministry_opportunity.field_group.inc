<?php
/**
 * @file
 * ministry_opportunity.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ministry_opportunity_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_information|node|ministry_opportunity|form';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ministry_opportunity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_contact',
      1 => 'field_contact_phone',
      2 => 'field_contact_email',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-contact-information field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_contact_information|node|ministry_opportunity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_minopp_information|node|ministry_opportunity|form';
  $field_group->group_name = 'group_minopp_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ministry_opportunity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ministry Opportunity Information',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_pay_type',
      2 => 'field_church_website',
      3 => 'field_church_name',
      4 => 'field_address',
      5 => 'field_city',
      6 => 'field_state',
      7 => 'field_zip_code',
      8 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-minopp-information field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_minopp_information|node|ministry_opportunity|form'] = $field_group;

  return $export;
}