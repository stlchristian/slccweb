<?php

/**
 * Implements hook_form_system_theme_settings_alter().
 */
function slcc_subtheme_form_system_theme_settings_alter(&$form, $form_state) {

  $form['nucleus']['global_settings']['favicon']['settings']['favicon_path']['#default_value'] = '';
  $form['nucleus']['global_settings']['favicon']['default_favicon']['#default_value'] = 0;
}
