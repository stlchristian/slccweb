<?php
/**
 * @file
 * campus_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function campus_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|campus_event|default';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campus_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_contact',
      1 => 'field_contact_email',
      2 => 'field_contact_phone',
      3 => 'field_registration_deadline',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Event Details',
      'instance_settings' => array(
        'classes' => 'group-event-details field-group-div field-name-field-details',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_campus_event_full_group_event_details',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_details|node|campus_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|campus_event|teaser';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campus_event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_contact',
      1 => 'field_contact_email',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Event Details',
      'instance_settings' => array(
        'classes' => 'group-event-details field-group-div field-name-field-details',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_campus_event_teaser_group_event_details',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_details|node|campus_event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_registration|node|campus_event|default';
  $field_group->group_name = 'group_event_registration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campus_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Click Here to Sign Up',
    'weight' => '3',
    'children' => array(
      0 => 'webform',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Click Here to Sign Up',
      'instance_settings' => array(
        'classes' => 'group-event-registration',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_event_registration|node|campus_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_time|node|campus_event|default';
  $field_group->group_name = 'group_event_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campus_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Time',
    'weight' => '0',
    'children' => array(
      0 => 'field_location',
      1 => 'field_time',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Event Time',
      'instance_settings' => array(
        'classes' => 'group-label group-event-time field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_campus_event_full_group_event_time',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_time|node|campus_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_time|node|campus_event|teaser';
  $field_group->group_name = 'group_event_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campus_event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Time',
    'weight' => '0',
    'children' => array(
      0 => 'field_location',
      1 => 'field_time',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Event Time',
      'instance_settings' => array(
        'classes' => 'group-label group-event-time field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_campus_event_teaser_group_event_time',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_time|node|campus_event|teaser'] = $field_group;

  return $export;
}
