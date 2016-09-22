<?php
/**
 * @file verify if a user is a driver.
 * prints drivers email address if the username belongs to a driver.
 */

// Set the standalone settings.
if (isset($_SERVER['PANTHEON_ENVIRONMENT']) && 
    $_SERVER['PANTHEON_ENVIRONMENT'] === 'dev') {
      $base_url = 'https://dev-rc.gotpantheon.com';
      $_SERVER['HTTP_HOST'] = 'dev.rc.gotpantheon.com';
      $_SERVER['REMOTE_ADDR'] = '127.0.0.1';
}
else if (isset($_SERVER['PANTHEON_ENVIRONMENT']) && 
    $_SERVER['PANTHEON_ENVIRONMENT'] === 'test') {
      $base_url = 'https://test-rc.gotpantheon.com';
      $_SERVER['HTTP_HOST'] = 'test-rc.gotpantheon.com';
      $_SERVER['REMOTE_ADDR'] = '127.0.0.1';
}
else if (isset($_SERVER['PANTHEON_ENVIRONMENT']) && 
    $_SERVER['PANTHEON_ENVIRONMENT'] === 'live') {
      $base_url = 'https://www.rideclever.com';
      $_SERVER['HTTP_HOST'] = 'www.rideclever.com';
      $_SERVER['REMOTE_ADDR'] = '127.0.0.1';
}
else {
      $base_url = 'https://dev-rc.gotpantheon.com';
      $_SERVER['HTTP_HOST'] = 'dev-rc.gotpantheon.com';
      $_SERVER['REMOTE_ADDR'] = '127.0.0.1';
}

chdir('../../../..');
$current_drupal_root = getcwd() ;

define('DRUPAL_ROOT', $current_drupal_root);
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_DATABASE);

$secret =  '1PnrS8DHhrYy0iI5hSidmTt05f5ahifS';
if (check_plain($_GET['key']) !== $secret) {
  die('error');
}

$driver = FALSE;
$name = $_GET['name'];

$query = db_select('users', 'u');
$query->fields('u',array('mail'));
$query->fields('ur',array('rid'));
$query->fields('r',array('name'));
$query->join('users_roles', 'ur', 'u.uid = ur.uid');
$query->join('role', 'r', 'ur.rid = r.rid');
$query->condition('u.name', $name);
$result = $query->execute();
while ( $record = $result->fetchAssoc()) {
  $email =  $record['mail'];
  if (strpos($record['name'], 'Taxi') !== FALSE) {
    $driver = TRUE;
  }
}
if ($driver === TRUE) {
  print $email;
}
else {
  die('bounce');
} 
