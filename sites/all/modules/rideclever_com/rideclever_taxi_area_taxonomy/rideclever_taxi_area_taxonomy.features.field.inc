<?php
/**
 * @file
 * rideclever_taxi_area_taxonomy.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function rideclever_taxi_area_taxonomy_field_default_fields() {
  $fields = array();

  // Exported field: 'taxonomy_term-taxi_area-field_coverage_area'.
  $fields['taxonomy_term-taxi_area-field_coverage_area'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_coverage_area',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'geofield',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'geofield',
    ),
    'field_instance' => array(
      'bundle' => 'taxi_area',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'geofield',
          'settings' => array(
            'data' => 'full',
          ),
          'type' => 'geofield_wkt',
          'weight' => '0',
        ),
      ),
      'ds_extras_field_template' => '',
      'enterprise_edit_form_display' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_coverage_area',
      'label' => 'Coverage Area',
      'required' => 0,
      'settings' => array(
        'local_solr' => array(
          'enabled' => FALSE,
          'lat_field' => 'lat',
          'lng_field' => 'lng',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'geofield',
        'settings' => array(),
        'type' => 'geofield_bounds',
        'weight' => '31',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Coverage Area');

  return $fields;
}
