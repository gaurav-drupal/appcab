<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 * 
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "adaptivetheme_subtheme" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "adaptivetheme_subtheme".
 * 2. Uncomment the required function to use.
 */


function rideclever_form_alter(&$form, $form_state, $form_id) {
	if ($form_id === 'ride_booker_node_form' || $form_id === 'taxi_ride_node_form') {
		$form['field_geoloc']['#attributes']['class'][] = 'element-invisible';
		$form['field_cars_needed']['#attributes']['class'][] = 'element-invisible';
		$form['field_datageo']['#attributes']['class'][] = 'element-invisible';
		$form['field_start_time']['#attributes']['class'][] = 'reveal-modal [expand, xlarge, large, medium, small]';
		/*$form['field_start_time']['#attributes']['id'][] = 'muModal3';*/
		$form['field_rider_address']['#weight'] = -71;
		$form['field_loc']['#weight'] = 70;
		$form['actions']['#weight'] = -69;
		$form['actions']['submit']['#value'] = t('Get me now');
		unset($form['actions']['submit']['#attributes']['class']);
		$form['actions']['submit']['#attributes']['class'][] = 'button';
		$form['actions']['submit']['#attributes']['class'][] = 'medium';
		$form['actions']['submit']['#attributes']['class'][] = 'success';
		$form['actions']['submit']['#attributes']['class'][] = 'radius';
		unset($form['field_loc']['und'][0]['description']['#markup']);
		unset($form['field_rider_address']['und'][0]['value']['#title']);

		//drupal_set_message('<pre>' . print_r($form, true) . '</pre>'); // debug statement
		// New comment that should make git do something.
	}
}

/**
 * implements theme_form_element().
 */
function rideclever_form_element($variables) {
	
  $element = &$variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += array(
    '#title_display' => 'before',
  );

  // Add element #id for #type 'item'.
  if (isset($element['#markup']) && !empty($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  // Add element's #type and #name as class to aid with JS/CSS selectors.
  $attributes['class'] = array('form-item');
  if (!empty($element['#type'])) {
    $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
  }
  if (!empty($element['#name'])) {
    $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));
  }
  // Add a class for disabled elements to facilitate cross-browser styling.
  if (!empty($element['#attributes']['disabled'])) {
    $attributes['class'][] = 'form-disabled';
  }
  $output = '<div' . drupal_attributes($attributes) . '>' . "\n";

  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';

  switch ($element['#title_display']) {
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('form_element_label', $variables);
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;

    case 'after':
      $output .= ' ' . $prefix . $element['#children'] . $suffix;
      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;

    case 'none':
    case 'attribute':
      // Output no label and no required marker, only the children.
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;
  }

  if (!empty($element['#description'])) {
    $output .= '<div class="description">' . $element['#description'] . "</div>\n";
  }
  if (isset($element['#name']) && $element['#name'] === 'field_start_time[und][0][value]') {
		$output .= '
		<div class="ride-popup">
		<input type="text" id="field-start-time-address" class="twelve" placeholder="Pick me up here"></input>
		<div class="close-reveal-modal button tiny alert">' . t('Cancel') . '</div>
		<div class="small button success" id="save-later-ride">' . t('Schedule pickup') . '</div>
		</div>
		 ';
	}
  $output .= "</div>\n";

  return $output;
}
function rideclever_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'), 
    'error' => t('Error message'), 
    'warning' => t('Warning message'),
  );
  
  foreach (drupal_get_messages($display) as $type => $messages) {
  if($type != 'error'){
    $output .= "<div class=\"messages $type\">\n";
    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
    }
    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= $messages[0];
    }
    $output .= "</div>\n";
  }}
   if ($output != '') {
    drupal_add_js("jQuery(document).ready(function() { jQuery('#status-messages').reveal(); });", 
      array('type' => 'inline', 'scope' => 'footer'));
    $output = '<div id="status-messages" class="reveal-modal expand" >'. $output;
    $output .= '<a class="close-reveal-modal">&#215;</a>';
    $output .= "</div>\n";
  }
  return $output;
}
function rideclever_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<dl class="tabs pill usertabs">';
    $variables['primary']['#suffix'] = '</dl>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<dl class="tabs pill">';
    $variables['secondary']['#suffix'] = '</dl>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}
function rideclever_theme($existing, $type, $theme, $path){
 return array(
  'user_register' => array(
    'render element' => 'form',
    'template' =>  'templates/user-register',
  ),
  'user_login' => array(
  'render element' => 'form',
  'template' => 'templates/user-login',
  ),
  );
}

function rideclever_preprocess_user_register(&$variables) {
  $variables['rendered'] = drupal_render_children($variables['form']);
}
function rideclever_preprocess_user_login(&$variables) {
  $variables['rendered'] = drupal_render_children($variables['form']);
}
