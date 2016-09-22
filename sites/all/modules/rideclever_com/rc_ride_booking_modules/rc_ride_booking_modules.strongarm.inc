<?php
/**
 * @file
 * rc_ride_booking_modules.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rc_ride_booking_modules_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ride_booker';
  $strongarm->value = 0;
  $export['comment_anonymous_ride_booker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_taxi_ride';
  $strongarm->value = 0;
  $export['comment_anonymous_taxi_ride'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ride_booker';
  $strongarm->value = 1;
  $export['comment_default_mode_ride_booker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_taxi_ride';
  $strongarm->value = 1;
  $export['comment_default_mode_taxi_ride'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ride_booker';
  $strongarm->value = '50';
  $export['comment_default_per_page_ride_booker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_taxi_ride';
  $strongarm->value = '50';
  $export['comment_default_per_page_taxi_ride'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ride_booker';
  $strongarm->value = 1;
  $export['comment_form_location_ride_booker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_taxi_ride';
  $strongarm->value = 1;
  $export['comment_form_location_taxi_ride'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ride_booker';
  $strongarm->value = '1';
  $export['comment_preview_ride_booker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_taxi_ride';
  $strongarm->value = '1';
  $export['comment_preview_taxi_ride'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ride_booker';
  $strongarm->value = '1';
  $export['comment_ride_booker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ride_booker';
  $strongarm->value = 1;
  $export['comment_subject_field_ride_booker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_taxi_ride';
  $strongarm->value = 1;
  $export['comment_subject_field_taxi_ride'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_taxi_ride';
  $strongarm->value = '1';
  $export['comment_taxi_ride'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ride_booker';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'available_rides' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'registration_link' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'available_rides' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'registration_form' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'available_rides' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'signup' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'available_rides' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'rules_links_start_ride' => array(
          'full' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'available_rides' => NULL,
        ),
        'rules_links_accept_ride' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'available_rides' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'rules_links_cancel_ride' => array(
          'full' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__ride_booker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__taxi_ride';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'available_rides' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'registration_link' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'available_rides' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'registration_form' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'available_rides' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'signup' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'available_rides' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'rules_links_start_ride' => array(
          'full' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'available_rides' => NULL,
        ),
        'rules_links_accept_ride' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'available_rides' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'rules_links_cancel_ride' => array(
          'full' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__taxi_ride'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ride_booker';
  $strongarm->value = '0';
  $export['language_content_type_ride_booker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_taxi_ride';
  $strongarm->value = '0';
  $export['language_content_type_taxi_ride'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ride_booker';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ride_booker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_taxi_ride';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_taxi_ride'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ride_booker';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ride_booker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_taxi_ride';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_taxi_ride'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ride_booker';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ride_booker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_taxi_ride';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_taxi_ride'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ride_booker';
  $strongarm->value = '0';
  $export['node_preview_ride_booker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_taxi_ride';
  $strongarm->value = '0';
  $export['node_preview_taxi_ride'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ride_booker';
  $strongarm->value = 0;
  $export['node_submitted_ride_booker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_taxi_ride';
  $strongarm->value = 0;
  $export['node_submitted_taxi_ride'] = $strongarm;

  return $export;
}
