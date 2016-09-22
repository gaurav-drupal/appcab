<?php
/**
 * @file
 * rideclever_alert_tone.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function rideclever_alert_tone_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'audio';
  $bean_type->label = 'audio';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['audio'] = $bean_type;

  return $export;
}
