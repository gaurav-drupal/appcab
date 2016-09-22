<?php
/**
 * @file Test file to get address from yahoo.
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

$lat = 0;
$lon = 0;
//$appid = 'weBDjp6s'; // Yahoo app id
$appid = 'Fmjtd%7Cluub2q6blu%2C8w%3Do5-961lh6';
$clientid = '109290';

$lat = ymap_format_degree($_GET['lat']);
$lon = ymap_format_degree($_GET['lon']);

/**
 * @param $number
 * @return string
 */
function ymap_format_degree($number) {
  $number = floatval($number);
  $number = number_format($number, 5);
  return $number;
}
/**
 * Test if address is out of area.
 *
 * @param float $lat
 *   Latitude of point being tested.
 *
 * @param float $lon
 *   Longitude of point being tested.
 *
 * @return bool
 *   Returns True if out of area.
 */
function openlayers_proxy_outofarea($lat=0, $lon=0) {
  $max_lat = 38.02868;
  $min_lat = 37.17529;
  $max_lon = -121.69055;
  $min_lon = -122.60097;
  $max_lat = 90; //temporarily allow from everywhere TODO come up with sane bounds.
  $min_lat = -90;
  $max_lon = 180;
  $min_lon = -180;
  return FALSE;

  if ($lat > $max_lat) {
    return TRUE;
  }
  if ($lat < $min_lat) {
    return TRUE;
  }
  if ($lon > $max_lon) {
    return TRUE;
  }
  if ($lon < $min_lon) {
    return TRUE;
  }
  return FALSE;
}

if (openlayers_proxy_outofarea($lat, $lon) === TRUE) {
  $json = '{"@lang":"en-US",';
  $json .= '"ResultSet":{';
  $json .= '"@version":"2.0",';
  $json .= '"@lang":"en-US",';
  $json .= '"Error":"0",';
  $json .= '"ErrorMessage":"No error",';
  $json .= '"Locale":"en-US",';
  $json .= '"Found":"0",';
  $json .= '"Quality":"99",';
  $json .= '"Results":[{"quality":"99",';
  $json .= '"latitude":"' . $lat . '",';
  $json .= '"longitude":"' . $lon . '",';
  $json .= '"offsetlat":"' . $lat . '",';
  $json .= '"offsetlon":"' . $lon . '",';
  $json .= '"radius":"1",';
  $json .= '"name":"' . t('Out of service area') . '",';
  $json .= '"line1":"' . t('Out of service area') . '",';
  $json .= '"line2":"",';
  $json .= '"line3":"",';
  $json .= '"line4":"",';
  $json .= '"house":"",';
  $json .= '"street":"",';
  $json .= '"xstreet":"",';
  $json .= '"unittype":"",';
  $json .= '"unit":"",';
  $json .= '"postal":"",';
  $json .= '"neighborhood":"",';
  $json .= '"city":"",';
  $json .= '"county":"",';
  $json .= '"state":"",';
  $json .= '"country":"",';
  $json .= '"countrycode":"",';
  $json .= '"statecode":"",';
  $json .= '"countycode":"",';
  $json .= '"uzip":"",';
  $json .= '"hash":"",';
  $json .= '"woeid":"",';
  $json .= '"woetype":""}';
  $json .= ']}}';
}
else {
  $query = db_query('
    SELECT
      json 
    FROM
      openlayers_proxy_geocode
    WHERE
      lat = :lat
    AND 
      lon = :lon',
    array(
      ':lat' => $lat,
      ':lon' => $lon,
    ))->fetchAll();
  if (count($query) > 0) {
    $json = $query[0]->json;
    header('Ymap: hit');
  } 
  else {
  
    $url = 'http://www.mapquestapi.com/geocoding/v1/reverse?key=' . $appid . '&callback=renderReverse&location=' . $lat . ',' . $lon . '&clientid=' . $clientid ;
    $json = get_data($url);
    db_insert('openlayers_proxy_geocode')->fields(array(
      'lat' => $lat,
      'lon' => $lon,
      'json' => $json,
      ))->execute();
    header('Ymap: miss');
  }
}
 $url = 'http://www.mapquestapi.com/geocoding/v1/reverse?key=' . $appid . '&location=' . $lat . ',' . $lon . '&clientid=' . $clientid;
    $json = get_data($url);
   
print $json;

/**
 * Gets data from a URL.
 *
 * @param string $url
 *   The URL to fetch.
 *
 * @return string
 *   The data that was sent by the server.
 */
function get_data($url) {
  $ch = curl_init();
  $timeout = 5;
  curl_setopt($ch, CURLOPT_URL, $url);
  curl_setopt($ch, CURLOPT_HTTPHEADER, array('Accept: application/json')); // Accept JSON response
  curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
  curl_setopt($ch, CURLOPT_CONNECTTIMEOUT, $timeout);
  $data = curl_exec($ch);
  curl_close($ch);
  $data = mapquest_to_yahoo_api(json_decode($data), $lat, $lon);
  return $data;
}

/**
 * Convert mapquest data to old yahooapi format.
 * @param $data string from mapquest v1.
 * @param $lat
 * @param $lon
 * @return string compliant with the discontinued yahoo maps v1.
 */
function mapquest_to_yahoo_api($data, $lat, $lon) {
 
  //$data = substr($data, 14, -2);
  $location = $data;
  $location=$location->results[0]->locations[0];
 
  $street = $location->street;
  $postal_code = $location->postalCode;
  $city = $location->adminArea5;
  $county = $location->adminArea4;
  $state = $location->adminArea3;
  $country = $location->adminArea1;
  
  $json = '{"@lang":"en-US",';
  $json .= '"ResultSet":{';
  $json .= '"@version":"2.0",';
  $json .= '"@lang":"en-US",';
  $json .= '"Error":"0",';
  $json .= '"ErrorMessage":"No error",';
  $json .= '"Locale":"en-US",';
  $json .= '"Found":"0",';
  $json .= '"Quality":"99",';
  $json .= '"Results":[{"quality":"99",';
  $json .= '"latitude":"' . $lat . '",';
  $json .= '"longitude":"' . $lon . '",';
  $json .= '"offsetlat":"' . $lat . '",';
  $json .= '"offsetlon":"' . $lon . '",';
  $json .= '"radius":"1",';
  $json .= '"name":"' . $street . '",';
  $json .= '"line1":"' . $street . '",';
  $json .= '"line2":"",';
  $json .= '"line3":"",';
  $json .= '"line4":"",';
  $json .= '"house":"",';
  $json .= '"street":"",';
  $json .= '"xstreet":"",';
  $json .= '"unittype":"",';
  $json .= '"unit":"",';
  $json .= '"postal":"' . $postal_code . '",';
  $json .= '"neighborhood":"",';
  $json .= '"city":"' . $city . '",';
  $json .= '"county":"' . $county . '",';
  $json .= '"state":"' . $state . '",';
  $json .= '"country":"' . $country . '",';
  $json .= '"countrycode":"",';
  $json .= '"statecode":"",';
  $json .= '"countycode":"",';
  $json .= '"uzip":"",';
  $json .= '"hash":"",';
  $json .= '"woeid":"",';
  $json .= '"woetype":""}';
  $json .= ']}}';
  return $json;
}