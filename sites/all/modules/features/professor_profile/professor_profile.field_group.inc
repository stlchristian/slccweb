<?php
/**
 * @file
 * professor_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function professor_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_professor_profile_bio|node|professor_profile|default';
  $field_group->group_name = 'group_professor_profile_bio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'professor_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'bio',
    'weight' => '0',
    'children' => array(
      0 => 'field_job_title',
      1 => 'field_professor_image',
      2 => 'field_contact_email',
      3 => 'field_contact_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'bio',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-professor-profile-bio field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_professor_profile_bio|node|professor_profile|default'] = $field_group;

  return $export;
}
