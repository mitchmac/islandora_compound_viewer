<?php

function islandora_compound_viewer_admin() {
  $form = array();
  
  $form['islandora_compound_viewer_relationship'] = array(
    '#type' => 'textfield',
    '#title' => t('Compound Object Relationship Identifier'),
    '#required' => TRUE,
    '#default_value' => variable_get('islandora_compound_viewer_relationship', ''),
  );
  
  return system_settings_form($form);
}