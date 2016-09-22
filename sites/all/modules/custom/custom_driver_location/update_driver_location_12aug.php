<?php 
/**
 * @file
 * Updates the driver location.
 *
 */

// get lat and lon and die if not valid.
$error_message = 'Invalid value.';

if (!isset($_POST['lat'])) {
  die($error_message);
}
if (!isset($_POST['lon'])) {
  die($error_message);
}
$lat = floatval($_POST['lat']);
$lon = floatval($_POST['lon']);

if ($lat > 90 ) {
  die($error_message);
}
if ($lat < -90 ) {
  die($error_message);
}
if ($lon < -180 ) {
  die($error_message);
}
if ($lon > 180 ) {
  die($error_message);
}

// Set the working directory to your Drupal root.
chdir('../../../../..'); 

$_SERVER['HTTP_HOST'] = 'localhost'; // or the hostname of the drupal site you want to acces
$_SERVER['REMOTE_ADDR'] = '127.0.0.1';
define('DRUPAL_ROOT', getcwd());

//require the bootstrap include 
require_once DRUPAL_ROOT . '/includes/bootstrap.inc'; 

drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL); 

global $user; 

$profile = profile2_load_by_user($user);
//print_r($user);
//echo "<pre>"; print_r($profile); die;
$pid = $profile['driver']->pid;
$driver = profile2_load($pid);
$driver->field_car_location['und'][0]['lon'] = $lon;
$driver->field_car_location['und'][0]['lat'] = $lat;
profile2_save($driver);die;
print $driver->field_car_location['und'][0]['lat'];
print ":";
print $driver->field_car_location['und'][0]['lon'];
