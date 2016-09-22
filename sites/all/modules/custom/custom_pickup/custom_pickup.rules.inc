<?php

/**
 * @file
 */

/**
 * Implements hook_rules_action_info().
 */
function custom_pickup_rules_action_info() {
  return array(
    'custom_pickup_send_driver_alerts' => array(
      'label' => 'Send driver alerts',
      'parameter' => array(
        'node' => array('type' => 'node', 'label' => t('Node')),
      ),
      'group' => t('System'),
    ),
    'custom_pickup_remove_driver' => array(
      'label' => 'Remove driver',
      'parameter' => array(
        'node' => array('type' => 'node', 'label' => t('Node')),
      ),
      'group' => t('System'),
    ),
  );
}

/**
 * Rules action callback to login the user provided in the function parameter
 * @param $node
 * @internal param int $uid
 * @return null
 */
function custom_pickup_remove_driver($node) {
  $nid = $node->nid;
  if (isset($node->field_car_driver)) {
    unset($node->field_car_driver);
    node_save($node);
  //* Temporary debug statement.
    watchdog(
      'notifications',
      '<pre>' . t('Node ') . $nid . t(' saved, driver removed.') . '</pre>',
      array(),
      WATCHDOG_INFO,
      NULL
    ); //*/

  }
  else {
    //* Temporary debug statement.
    watchdog(
      'warning',
      '<pre>' . t('NID ') . $nid . t(' did not have a driver') . '</pre>',
      array(),
      WATCHDOG_INFO,
      NULL
    ); //*/
    return NULL;
  }
  return NULL;
}

/**
 * Rules action callback to login the user provided in the function parameter
 * @param $node
 * @param int $uid
 * @return null
 */
function custom_pickup_send_driver_alerts($node, $uid = 1) {
  $nid = $node->nid;
  if ($node->type == 'taxi_ride') {
    $wrapper = entity_metadata_wrapper('node', $nid);
    foreach ($wrapper->field_taxi_region->getIterator() as $term_wrapper) {
      $tid = $term_wrapper->tid->value();
    }

    if (!isset($tid)) {
      watchdog(
        'notifications',
        //'<pre>' . htmlentities(print_r($wrapper, TRUE)) . '</pre>' .
        '<pre>' . htmlentities(print_r($wrapper->field_taxi_region, TRUE)) . '</pre>',
        array(),
        WATCHDOG_ERROR,
        NULL
      );
    }

    $roles = db_query("SELECT DISTINCT rid FROM related_roles_role WHERE tid = :tid ",
      array(
        ':tid' => $tid,
      ))->fetchAll();
    $x = count($roles);
    $i = 0;
    foreach ($roles as $role){
      $rid[$i] = $role->rid;
      $i++;
    }
      /* Temporary debug statement.
      watchdog(
        'notifications',
        '<pre>' . htmlentities(print_r($node, TRUE)) . '</pre>',
        array(),
        WATCHDOG_INFO,
        NULL
      ); /*/
  }
  else {
    return NULL;
  }
  custom_pickup_driver_alert($nid, $uid, $rid);
  return NULL;
}

/**
 * Implements hook_default_rules_configuration_alter()
 */
function custom_pickup_default_rules_configuration_alter(&$configs) {
  if (!empty($configs['custom_pickup'])) {
    $configs['custom_pickup']->action(rules_action('custom_pickup_send_driver_alerts', array('node:select' => 'node-fetched:0')));
    $configs['custom_pickup']->action(rules_action('custom_pickup_remove_driver', array('node:select' => 'node-fetched:0')));
  }
}
