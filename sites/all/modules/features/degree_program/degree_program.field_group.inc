<?php
/**
 * @file
 * degree_program.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function degree_program_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_degree_details|node|degree_program|default';
  $field_group->group_name = 'group_degree_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'degree_program';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Degree Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_course_image',
      1 => 'field_how_to_apply',
      2 => 'field_contact_for_further_inform',
      3 => 'field_degrees_offered',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Degree Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-degree-details field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_degree_details|node|degree_program|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_degree_information|node|degree_program|default';
  $field_group->group_name = 'group_degree_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'degree_program';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Degree Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_description',
      1 => 'field_what_you_study',
      2 => 'field_career_opportunities',
      3 => 'field_objectives_for_graduates',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Degree Information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-degree-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_degree_information|node|degree_program|default'] = $field_group;

  return $export;
}
