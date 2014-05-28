<?php
/**
 * @file
 * events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function events_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|events|default';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'events';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '2',
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
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_details|node|events|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|events|teaser';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'events';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '2',
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
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_details|node|events|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_time|node|events|default';
  $field_group->group_name = 'group_event_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'events';
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
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_time|node|events|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_time|node|events|teaser';
  $field_group->group_name = 'group_event_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'events';
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
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_time|node|events|teaser'] = $field_group;

  return $export;
}
