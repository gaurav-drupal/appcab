<?php
/**
 * @file
 * rideclever_alert_tone.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function rideclever_alert_tone_field_default_fields() {
  $fields = array();

  // Exported field: 'bean-audio-field_audio'.
  $fields['bean-audio-field_audio'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_audio',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'profile2_private' => FALSE,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'jplayer',
          'settings' => array(
            'autoplay' => '1',
            'backgroundColor' => '000000',
            'mode' => 'single',
            'muted' => '0',
            'preload' => 'auto',
            'repeat' => 'none',
            'solution' => 'html, flash',
            'volume' => '80',
          ),
          'type' => 'jplayer_player',
          'weight' => '0',
        ),
      ),
      'ds_extras_field_template' => '',
      'enterprise_edit_form_display' => '',
      'entity_type' => 'bean',
      'field_name' => 'field_audio',
      'label' => 'audio',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'mp3',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '-4',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('audio');

  return $fields;
}
