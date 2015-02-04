<?php
/**
 * @file
 * ministry_opportunity.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ministry_opportunity_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ministry_opportunity content'.
  $permissions['create ministry_opportunity content'] = array(
    'name' => 'create ministry_opportunity content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ministry_opportunity content'.
  $permissions['delete any ministry_opportunity content'] = array(
    'name' => 'delete any ministry_opportunity content',
    'roles' => array(
      'administrator' => 'administrator',
      'development editor' => 'development editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ministry_opportunity content'.
  $permissions['delete own ministry_opportunity content'] = array(
    'name' => 'delete own ministry_opportunity content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ministry_opportunity content'.
  $permissions['edit any ministry_opportunity content'] = array(
    'name' => 'edit any ministry_opportunity content',
    'roles' => array(
      'administrator' => 'administrator',
      'development contributor' => 'development contributor',
      'development editor' => 'development editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ministry_opportunity content'.
  $permissions['edit own ministry_opportunity content'] = array(
    'name' => 'edit own ministry_opportunity content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish any ministry_opportunity content'.
  $permissions['publish any ministry_opportunity content'] = array(
    'name' => 'publish any ministry_opportunity content',
    'roles' => array(
      'development contributor' => 'development contributor',
      'development editor' => 'development editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable ministry_opportunity content'.
  $permissions['publish editable ministry_opportunity content'] = array(
    'name' => 'publish editable ministry_opportunity content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own ministry_opportunity content'.
  $permissions['publish own ministry_opportunity content'] = array(
    'name' => 'publish own ministry_opportunity content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any ministry_opportunity content'.
  $permissions['unpublish any ministry_opportunity content'] = array(
    'name' => 'unpublish any ministry_opportunity content',
    'roles' => array(
      'development contributor' => 'development contributor',
      'development editor' => 'development editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable ministry_opportunity content'.
  $permissions['unpublish editable ministry_opportunity content'] = array(
    'name' => 'unpublish editable ministry_opportunity content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own ministry_opportunity content'.
  $permissions['unpublish own ministry_opportunity content'] = array(
    'name' => 'unpublish own ministry_opportunity content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  return $permissions;
}
