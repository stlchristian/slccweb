<?php
/**
 * @file
 * paypal_donation_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function paypal_donation_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-paypal_button'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'paypal_button',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'giving
giving/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'slcc_subtheme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'slcc_subtheme',
        'weight' => -29,
      ),
    ),
    'title' => 'Donate with Paypal',
    'visibility' => 1,
  );

  return $export;
}
