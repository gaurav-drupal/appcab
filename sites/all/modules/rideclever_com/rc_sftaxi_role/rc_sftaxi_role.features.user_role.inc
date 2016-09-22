<?php
/**
 * @file
 * rc_sftaxi_role.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rc_sftaxi_role_user_default_roles() {
  $roles = array();

  // Exported role: SF Taxi.
  $roles['SF Taxi'] = array(
    'name' => 'SF Taxi',
    'weight' => '10',
  );

  return $roles;
}
