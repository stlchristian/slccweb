<?php
/**
 * @file
 * student_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function student_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_profile_bio|node|student_profile|default';
  $field_group->group_name = 'group_student_profile_bio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'bio',
    'weight' => '0',
    'children' => array(
      0 => 'field_dept',
      1 => 'field_student_image',
      2 => 'field_social',
      3 => 'field_gender',
      4 => 'field_academic_class',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'bio',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-student-profile-bio field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_student_profile_bio|node|student_profile|default'] = $field_group;

  return $export;
}
