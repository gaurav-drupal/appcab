<?php

/**
 * @file
 * Views 3 support for Location Extras.
 */

/**
 * Implements hook_views_data().
 */
function location_extras_views_data() {
  // Basic table information for location_add_phone table.

  // Define the base group of this table. Fields that don't
  // have a group defined will go into this field by default.

  $data['location_extras']['table']['group'] = t('Location');

  // Join location_extras to all the tables that would be useful
  $data['location_extras']['table']['join'] = array(
    // location_add_phone links to location via lid.
    'location' => array(
      'left_field' => 'lid',
      'field' => 'lid',
    ),
    // location_extras links to node through location_instance via lid.
    'node' => array(
      'left_table' => 'location_instance',
      'left_field' => 'lid',
      'field' => 'lid',
    ),
    // location_extras links to node_revisions through location_instance via lid.
    'node_revisions' => array(
      'left_table' => 'location_instance',
      'left_field' => 'lid',
      'field' => 'lid',
    ),
    // location_extras links to users through location_instance via lid.
    'users' => array(
      'left_table' => 'location_instance',
      'left_field' => 'lid',
      'field' => 'lid',
    ),
  );

  // Fields for location_extras table.

  $data['location_extras']['first_name'] = array(
    'title' => t('Contact first name'),
    'help' => t('The contact first name for the selected location.'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
      'empty field name' => t('None'),
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
  );

  $data['location_extras']['last_name'] = array(
    'title' => t('Contact last name'),
    'help' => t('The contact last name for the selected location.'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
      'empty field name' => t('None'),
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
  );

  $data['location_extras']['email'] = array(
    'title' => t('Contact email'),
    'help' => t('The contact email address of the selected location.'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
      'empty field name' => t('None'),
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
  );

  $data['location_extras']['website'] = array(
    'title' => t('Website URL'),
    'help' => t('The website url of the selected location.'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
      'empty field name' => t('None'),
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
  );

  $data['location_extras']['phone'] = array(
    'title' => t('Phone'),
    'help' => t('The phone number of the selected location.'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
      'empty field name' => t('None'),
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
  );

  $data['location_extras']['cell_phone'] = array(
    'title' => t('Cell Phone'),
    'help' => t('The cell phone number of the selected location.'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
      'empty field name' => t('None'),
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
  );

  $data['location_extras']['alt_phone'] = array(
    'title' => t('Additional Phone'),
    'help' => t('The alternate phone number of the selected location.'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
      'empty field name' => t('None'),
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
  );

  $data['location_extras']['fax'] = array(
    'title' => t('Fax'),
    'help' => t('The fax number of the selected location.'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
      'empty field name' => t('None'),
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
  );

  $data['location_extras']['title'] = array(
    'title' => t('Contact title'),
    'help' => t('The job title, functional position or function of the individual associated with the organization.'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
      'empty field name' => t('None'),
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
  );

  $data['location_extras']['unit'] = array(
    'title' => t('Organization unit'),
    'help' => t('The unit of the organization.'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
      'empty field name' => t('None'),
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
  );

  $data['location_extras']['company'] = array(
    'title' => t('Company'),
    'help' => t('Whether or not the location address is that of a business.'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
      'label' => t('Company'),
      'type' => 'yes-no',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  return $data;
}
