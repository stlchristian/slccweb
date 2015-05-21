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
  $field_group->identifier = 'group_church_information|node|ministry_opportunity|default';
  $field_group->group_name = 'group_church_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ministry_opportunity';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Church Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_address',
      1 => 'field_church_name',
      2 => 'field_church_website',
      3 => 'field_city',
      4 => 'field_pay_type',
      5 => 'field_state',
      6 => 'field_zip_code',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Church Information',
      'instance_settings' => array(
        'classes' => 'group-church-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_ministry_opportunity_full_group_church_information',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_church_information|node|ministry_opportunity|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_information|node|ministry_opportunity|default';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ministry_opportunity';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_contact',
      1 => 'field_contact_email',
      2 => 'field_contact_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'classes' => 'group-contact-information field-group-div',
        'description' => 'Contact Information',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_ministry_opportunity_full_group_contact_information',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact_information|node|ministry_opportunity|default'] = $field_group;

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
      1 => 'field_contact_email',
      2 => 'field_contact_phone',
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
        'id' => 'node_ministry_opportunity_form_group_contact_information',
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
    'label' => 'Ministry Opportunity Details',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_address',
      2 => 'field_church_name',
      3 => 'field_church_website',
      4 => 'field_city',
      5 => 'field_pay_type',
      6 => 'field_state',
      7 => 'field_zip_code',
      8 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Ministry Opportunity Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'node_ministry_opportunity_form_group_minopp_information',
        'classes' => 'group-minopp-information field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_minopp_information|node|ministry_opportunity|form'] = $field_group;

  return $export;
}
