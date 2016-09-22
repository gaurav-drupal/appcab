<?php
/**
 * @file log debug info.
 */

$path = $_SERVER['HTTP_REFERER'];
$geo_data = $_POST['geolocation'];
$json = $_POST['json'];
// Set the standalone settings.
if (isset($_SERVER['PANTHEON_ENVIRONMENT']) &&
  $_SERVER['PANTHEON_ENVIRONMENT'] === 'dev'
) {
  $base_url = 'https://dev-rc.gotpantheon.com';
  $_SERVER['HTTP_HOST'] = 'dev.rc.gotpantheon.com';
  $_SERVER['REMOTE_ADDR'] = '127.0.0.1';
}
else {
  if (isset($_SERVER['PANTHEON_ENVIRONMENT']) &&
    $_SERVER['PANTHEON_ENVIRONMENT'] === 'test'
  ) {
    $base_url = 'https://test-rc.gotpantheon.com';
    $_SERVER['HTTP_HOST'] = 'test-rc.gotpantheon.com';
    $_SERVER['REMOTE_ADDR'] = '127.0.0.1';
  }
  else {
    if (isset($_SERVER['PANTHEON_ENVIRONMENT']) &&
      $_SERVER['PANTHEON_ENVIRONMENT'] === 'live'
    ) {
      $base_url = 'https://www.rideclever.com';
      $_SERVER['HTTP_HOST'] = 'www.rideclever.com';
      $_SERVER['REMOTE_ADDR'] = '127.0.0.1';
    }
    else {
      $base_url = 'https://dev-rc.gotpantheon.com';
      $_SERVER['HTTP_HOST'] = 'dev-rc.gotpantheon.com';
      $_SERVER['REMOTE_ADDR'] = '127.0.0.1';
    }
  }
}

chdir('../../../..');
$current_drupal_root = getcwd();

define('DRUPAL_ROOT', $current_drupal_root);
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

//global $user;
$uid = $user->uid;
if($uid == 0) {
  die('UID 0 given.');
}
$path = check_plain($path);

$geo_data = htmlspecialchars($geo_data, ENT_NOQUOTES);
$index_data = json_decode($geo_data);
$geo_timestamp = $index_data->timestamp;
$speed = $index_data->coords->speed;
$accuracy = $index_data->coords->accuracy;
$lat = $index_data->coords->latitude;
$lon = $index_data->coords->longitude;
$alt_accuracy = $index_data->coords->alitudeAccuracy;
$altitude = $index_data->coords->alitude;

$json = htmlspecialchars($json, ENT_NOQUOTES);
$index_data = json_decode($json);
$address = $index_data->ResultSet->Results[0]->name;
$city = $index_data->ResultSet->Results[0]->city;
$zipcode = $index_data->ResultSet->Results[0]->postal;

/* Debug info
print $uid . "\n";
print $path . "\n";
print $geo_timestamp . "\n";
print $speed . "\n";
print $accuracy . "\n";
print $lat . "\n";
print $lon . "\n";
print $alt_accuracy . "\n";
print $altitude . "\n";
print $address . "\n";
print $city . "\n";
print $zipcode . "\n";
print $geo_data . "\n";
print $json . "\n";
//*/
print 'success';
//*
db_insert('geo_location_debug')->fields(array(
  'uid' => $uid,
  // 'timestamp' let the database server set it.
  'path' => $path,
  'geotimestamp' => $geo_timestamp,
  'geounixtimestamp' => $geo_timestamp / 1000,
  'unixtimestamp' => time(),
  'accuracy' => $accuracy,
  'speed' => $speed,
  'altitude' => $altitude,
  'altaccuracy' => $alt_accuracy,
  'city' => $city,
  'zipcode' => $zipcode,
  'lat' => $lat,
  'lon' => $lon,
  'address' => $address,
  'geodata' => $geo_data,
  'json' => $json,
    ))->execute();
 //*/
