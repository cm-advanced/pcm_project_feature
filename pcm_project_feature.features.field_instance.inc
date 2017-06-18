<?php
/**
 * @file
 * pcm_project_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function pcm_project_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-cm_project-body'
  $field_instances['node-cm_project-body'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Long description for website page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_auto_create_shows'
  $field_instances['node-cm_project-field_auto_create_shows'] = array(
    'bundle' => 'cm_project',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'WARNING: This will create Shows based on Series Frequency. Make sure you know what you are doing. If you are not sure, leave this option un-checked.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_auto_create_shows',
    'label' => 'Auto-create Shows',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_cablecast_project_id'
  $field_instances['node-cm_project-field_cablecast_project_id'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cablecast_project_id',
    'label' => 'Cablecast Project ID',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_closed_captions'
  $field_instances['node-cm_project-field_closed_captions'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_closed_captions',
    'label' => 'Closed Captions',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 4,
        5 => 0,
        7 => 0,
        14 => 0,
        15 => 15,
        16 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_cm_project_types'
  $field_instances['node-cm_project-field_cm_project_types'] = array(
    'bundle' => 'cm_project',
    'default_value' => array(
      0 => array(
        'tid' => 759,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cm_project_types',
    'label' => 'Project Type',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_department'
  $field_instances['node-cm_project-field_department'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_department',
    'label' => 'Department',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_estimated_completion_date'
  $field_instances['node-cm_project-field_estimated_completion_date'] = array(
    'bundle' => 'cm_project',
    'deleted' => 0,
    'description' => '<i title="When will your program be completely edited and ready to turn in to Playback?"><img src=\'/misc/help.png\'></i>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_estimated_completion_date',
    'label' => 'Estimated Completion Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '+6 months',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_filler'
  $field_instances['node-cm_project-field_filler'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'May we use your program to fill gaps in our daily schedule?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_filler',
    'label' => 'Filler',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 4,
        5 => 0,
        7 => 0,
        14 => 0,
        15 => 15,
        16 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_filler_end_date'
  $field_instances['node-cm_project-field_filler_end_date'] = array(
    'bundle' => 'cm_project',
    'deleted' => 0,
    'description' => 'Date to stop using your program as filler.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_filler_end_date',
    'label' => 'Filler End Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '+6 months',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_format'
  $field_instances['node-cm_project-field_format'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_format',
    'label' => 'Production Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_legacy_series_renewals'
  $field_instances['node-cm_project-field_legacy_series_renewals'] = array(
    'bundle' => 'cm_project',
    'default_value' => array(
      0 => array(
        'vname' => 'project_legacy_renewals|block',
        'vargs' => '[node:nid]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_legacy_series_renewals',
    'label' => 'Legacy Series Renewals',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        'airing_conflict_block' => 0,
        'airing_detail_for_grid' => 0,
        'airing_devices_for_show' => 0,
        'airing_grid_jump_menus' => 0,
        'airing_master_list' => 0,
        'airings' => 0,
        'airings_missing_show_content' => 0,
        'airings_producer_dashboard' => 0,
        'aspera_show_rss_lookup' => 0,
        'cable_schedule' => 0,
        'civicrm_multiday_event_cal' => 0,
        'civicrm_multiday_event_event_type_legend' => 0,
        'civicrm_multiday_event_list' => 0,
        'civicrm_multiday_event_list_by_type' => 0,
        'civicrm_multiday_event_public_calendar' => 0,
        'civicrm_multiday_event_upcoming_events' => 0,
        'cm_cm_show_airings' => 0,
        'cm_project_shows' => 0,
        'cm_project_unapproved_projects' => 0,
        'content_manage' => 0,
        'field_collection_values' => 0,
        'forms' => 0,
        'legal_terms' => 0,
        'legal_users' => 0,
        'media_default' => 0,
        'my_shows' => 0,
        'og_all_user_group_content' => 0,
        'og_extras_groups' => 0,
        'og_extras_members' => 0,
        'og_extras_nodes' => 0,
        'og_members' => 0,
        'og_members_admin' => 0,
        'og_nodes' => 0,
        'og_user_groups' => 0,
        'om_crew_connect_find' => 0,
        'om_crew_connect_my_skills' => 0,
        'pbcore_search_terms' => 0,
        'producer_search' => 0,
        'producer_tools' => 0,
        'project_airings' => 0,
        'project_cancel' => 0,
        'project_export' => 0,
        'project_legacy_renewals' => 0,
        'project_members' => 0,
        'project_picker' => 0,
        'series_request_airings' => 0,
        'series_request_pending' => 0,
        'series_request_project_settings' => 0,
        'series_request_scheduled_slots' => 0,
        'series_request_scheduling_information' => 0,
        'series_request_search' => 0,
        'series_request_viewfields' => 0,
        'series_requests_approved' => 0,
        'show_admin_displays' => 0,
        'show_report_export' => 0,
        'show_request_daily_airings' => 0,
        'show_request_scheduling_information' => 0,
        'shows' => 0,
        'simple_show_search' => 0,
        'summer_camps' => 0,
        'taxonomy_term' => 0,
        'upcoming_workshops' => 0,
      ),
      'force_default' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_legacy_status'
  $field_instances['node-cm_project-field_legacy_status'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_legacy_status',
    'label' => 'Legacy Status',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_live'
  $field_instances['node-cm_project-field_live'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_live',
    'label' => 'Live',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_pbcore_genres'
  $field_instances['node-cm_project-field_pbcore_genres'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pbcore_genres',
    'label' => 'Genres',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_pbcore_languages'
  $field_instances['node-cm_project-field_pbcore_languages'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'SCROLL DOWN FOR MORE OPTIONS
If you do not see your program’s language, please contact the front desk to have it added to our list!',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pbcore_languages',
    'label' => 'Languages',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_production_notes'
  $field_instances['node-cm_project-field_production_notes'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Specify any additional post production details.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_production_notes',
    'label' => 'Production Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_project_airings'
  $field_instances['node-cm_project-field_project_airings'] = array(
    'bundle' => 'cm_project',
    'default_value' => array(
      0 => array(
        'vname' => 'project_airings|project_airings_menu_tab',
        'vargs' => '[node:nid]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_project_airings',
    'label' => 'Airings',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        '_project_airings_scheduled' => 0,
        'airing_conflict_block' => 0,
        'airing_detail_for_grid' => 0,
        'airing_devices_for_show' => 0,
        'airing_grid_jump_menus' => 0,
        'airing_master_list' => 0,
        'airings' => 0,
        'airings_airing_group' => 0,
        'airings_airings_scheduled' => 0,
        'airings_for_project' => 0,
        'airings_missing_show_content' => 0,
        'airings_producer_dashboard' => 0,
        'aspera_show_rss_lookup' => 0,
        'cable_schedule' => 0,
        'civicrm_multiday_event_cal' => 0,
        'civicrm_multiday_event_event_type_legend' => 0,
        'civicrm_multiday_event_list' => 0,
        'civicrm_multiday_event_list_by_type' => 0,
        'civicrm_multiday_event_public_calendar' => 0,
        'civicrm_multiday_event_upcoming_events' => 0,
        'clone_of_show_airings' => 0,
        'cm_cm_show_airings' => 0,
        'cm_project_unapproved_projects' => 0,
        'content_manage' => 0,
        'equipment_sale' => 0,
        'feeds_log' => 0,
        'forms' => 0,
        'help_wanted' => 0,
        'legal_terms' => 0,
        'legal_users' => 0,
        'media_default' => 0,
        'new_user_report' => 0,
        'og_all_user_group_content' => 0,
        'og_extras_groups' => 0,
        'og_extras_members' => 0,
        'og_extras_nodes' => 0,
        'og_members' => 0,
        'og_members_admin' => 0,
        'og_nodes' => 0,
        'og_user_groups' => 0,
        'om_crew_connect_my_skills' => 0,
        'pbcore_search_terms' => 0,
        'pcm_project_shows' => 0,
        'pcm_show_airings' => 0,
        'people' => 0,
        'project_airings' => 0,
        'project_cancel' => 0,
        'project_export' => 0,
        'project_legacy_renewals' => 0,
        'project_members' => 0,
        'project_picker' => 0,
        'project_producer_dashboard' => 0,
        'project_renewals_studios' => 0,
        'projects_active_completion_date_past' => 0,
        'projects_staff_dashboard' => 0,
        'series_renewal_overview' => 0,
        'series_renewals' => 0,
        'series_request_airings' => 0,
        'series_request_airings_scheduled' => 0,
        'series_request_pending' => 0,
        'series_request_project_settings' => 0,
        'series_request_scheduled_slots' => 0,
        'series_request_scheduling_information' => 0,
        'series_request_search' => 0,
        'series_request_viewfields' => 0,
        'series_requests_approved' => 0,
        'show_admin_displays' => 0,
        'show_bulk_update_required_fields' => 0,
        'show_report_export' => 0,
        'show_request_daily_airings' => 0,
        'show_request_scheduling_information' => 0,
        'shows' => 0,
        'shows_producer_dashboard' => 0,
        'simple_show_search' => 0,
        'summer_camps' => 0,
        'taxonomy_term' => 0,
        'upcoming_workshops' => 0,
        'workflow_pending' => 0,
        'workflow_summary' => 0,
      ),
      'force_default' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_project_id'
  $field_instances['node-cm_project-field_project_id'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_project_id',
    'label' => 'Project ID',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_project_shows'
  $field_instances['node-cm_project-field_project_shows'] = array(
    'bundle' => 'cm_project',
    'default_value' => array(
      0 => array(
        'vname' => 'pcm_project_shows|page_2',
        'vargs' => '[node:nid]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_project_shows',
    'label' => 'Shows',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        '_project_airings_scheduled' => 0,
        'airing_conflict_block' => 0,
        'airing_detail_for_grid' => 0,
        'airing_devices_for_show' => 0,
        'airing_grid_jump_menus' => 0,
        'airing_master_list' => 0,
        'airings' => 0,
        'airings_airing_group' => 0,
        'airings_airings_scheduled' => 0,
        'airings_for_project' => 0,
        'airings_missing_show_content' => 0,
        'airings_producer_dashboard' => 0,
        'aspera_show_rss_lookup' => 0,
        'cable_schedule' => 0,
        'civicrm_multiday_event_cal' => 0,
        'civicrm_multiday_event_event_type_legend' => 0,
        'civicrm_multiday_event_list' => 0,
        'civicrm_multiday_event_list_by_type' => 0,
        'civicrm_multiday_event_public_calendar' => 0,
        'civicrm_multiday_event_upcoming_events' => 0,
        'clone_of_show_airings' => 0,
        'cm_cm_show_airings' => 0,
        'cm_project_unapproved_projects' => 0,
        'content_manage' => 0,
        'equipment_sale' => 0,
        'feeds_log' => 0,
        'forms' => 0,
        'help_wanted' => 0,
        'legal_terms' => 0,
        'legal_users' => 0,
        'media_default' => 0,
        'new_user_report' => 0,
        'og_all_user_group_content' => 0,
        'og_extras_groups' => 0,
        'og_extras_members' => 0,
        'og_extras_nodes' => 0,
        'og_members' => 0,
        'og_members_admin' => 0,
        'og_nodes' => 0,
        'og_user_groups' => 0,
        'om_crew_connect_my_skills' => 0,
        'pbcore_search_terms' => 0,
        'pcm_project_shows' => 'pcm_project_shows',
        'pcm_show_airings' => 0,
        'people' => 0,
        'project_airings' => 0,
        'project_cancel' => 0,
        'project_export' => 0,
        'project_legacy_renewals' => 0,
        'project_members' => 0,
        'project_picker' => 0,
        'project_producer_dashboard' => 0,
        'project_renewals_studios' => 0,
        'projects_active_completion_date_past' => 0,
        'projects_staff_dashboard' => 0,
        'series_renewal_overview' => 0,
        'series_renewals' => 0,
        'series_request_airings' => 0,
        'series_request_airings_scheduled' => 0,
        'series_request_pending' => 0,
        'series_request_project_settings' => 0,
        'series_request_scheduled_slots' => 0,
        'series_request_scheduling_information' => 0,
        'series_request_search' => 0,
        'series_request_viewfields' => 0,
        'series_requests_approved' => 0,
        'show_admin_displays' => 0,
        'show_bulk_update_required_fields' => 0,
        'show_report_export' => 0,
        'show_request_daily_airings' => 0,
        'show_request_scheduling_information' => 0,
        'shows' => 0,
        'shows_producer_dashboard' => 0,
        'simple_show_search' => 0,
        'summer_camps' => 0,
        'taxonomy_term' => 0,
        'upcoming_workshops' => 0,
        'workflow_pending' => 0,
        'workflow_summary' => 0,
      ),
      'force_default' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_project_status'
  $field_instances['node-cm_project-field_project_status'] = array(
    'bundle' => 'cm_project',
    'default_value' => array(
      0 => array(
        'value' => 'Active',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_project_status',
    'label' => 'Project Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_pub_contact_email'
  $field_instances['node-cm_project-field_pub_contact_email'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'eg: jdoe@example.com',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pub_contact_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_pub_contact_phone'
  $field_instances['node-cm_project-field_pub_contact_phone'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'eg: 503-555-1212',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pub_contact_phone',
    'label' => 'Contact Phone',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_pub_producer_name'
  $field_instances['node-cm_project-field_pub_producer_name'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'eg: John Doe',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pub_producer_name',
    'label' => 'Producer Name',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_pub_website'
  $field_instances['node-cm_project-field_pub_website'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'www.example.com',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pub_website',
    'label' => 'Website',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'required_by_role' => array(),
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_reason_not_active'
  $field_instances['node-cm_project-field_reason_not_active'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_reason_not_active',
    'label' => 'Reason Project Not Active',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_runtime_default'
  $field_instances['node-cm_project-field_runtime_default'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_runtime_default',
    'label' => 'Runtime Default',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_series_duration'
  $field_instances['node-cm_project-field_series_duration'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_series_duration',
    'label' => 'Series Duration',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_series_frequency'
  $field_instances['node-cm_project-field_series_frequency'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<i class="beautytips" title="How many shows will you submit in one quarter?"> <img src=\'/misc/help.png\'>Hover over for help</i>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_series_frequency',
    'label' => 'Series Frequency',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_series_requests_all'
  $field_instances['node-cm_project-field_series_requests_all'] = array(
    'bundle' => 'cm_project',
    'default_value' => array(
      0 => array(
        'vname' => 'series_request_viewfields|block',
        'vargs' => '[node:nid]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_series_requests_all',
    'label' => 'Series Requests',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        'airing_master_list' => 0,
        'airings' => 0,
        'airings_missing_show_content' => 0,
        'cable_schedule' => 0,
        'civicrm_multiday_event_cal' => 0,
        'civicrm_multiday_event_event_type_legend' => 0,
        'civicrm_multiday_event_list' => 0,
        'civicrm_multiday_event_list_by_type' => 0,
        'civicrm_multiday_event_public_calendar' => 0,
        'civicrm_multiday_event_upcoming_events' => 0,
        'cm_cm_show_airings' => 0,
        'cm_project_shows' => 0,
        'cm_project_unapproved_projects' => 0,
        'field_collection_values' => 0,
        'forms' => 0,
        'legal_terms' => 0,
        'legal_users' => 0,
        'media_default' => 0,
        'my_shows' => 0,
        'og_all_user_group_content' => 0,
        'og_extras_groups' => 0,
        'og_extras_members' => 0,
        'og_extras_nodes' => 0,
        'og_members' => 0,
        'og_members_admin' => 0,
        'og_nodes' => 0,
        'og_user_groups' => 0,
        'om_crew_connect_find' => 0,
        'om_crew_connect_my_skills' => 0,
        'pbcore_search_terms' => 0,
        'producer_search' => 0,
        'producer_tools' => 0,
        'project_export' => 0,
        'series_request_pending' => 0,
        'series_request_project_settings' => 0,
        'series_request_scheduled_slots' => 0,
        'series_request_scheduling_information' => 0,
        'series_request_search' => 0,
        'series_request_viewfields' => 'series_request_viewfields',
        'series_requests_approved' => 0,
        'show_admin_displays' => 0,
        'show_report_export' => 0,
        'show_request_daily_airings' => 0,
        'show_request_scheduling_information' => 0,
        'shows' => 0,
        'summer_camps' => 0,
        'taxonomy_term' => 0,
        'upcoming_workshops' => 0,
      ),
      'force_default' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_series_requests_current'
  $field_instances['node-cm_project-field_series_requests_current'] = array(
    'bundle' => 'cm_project',
    'default_value' => array(
      0 => array(
        'vname' => 'series_request_viewfields|block_1',
        'vargs' => '[node:nid]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_series_requests_current',
    'label' => 'Series Request',
    'required' => 1,
    'settings' => array(
      'allowed_views' => array(
        'airing_master_list' => 0,
        'airings' => 0,
        'airings_missing_show_content' => 0,
        'cable_schedule' => 0,
        'civicrm_multiday_event_cal' => 0,
        'civicrm_multiday_event_event_type_legend' => 0,
        'civicrm_multiday_event_list' => 0,
        'civicrm_multiday_event_list_by_type' => 0,
        'civicrm_multiday_event_public_calendar' => 0,
        'civicrm_multiday_event_upcoming_events' => 0,
        'cm_cm_show_airings' => 0,
        'cm_project_shows' => 0,
        'cm_project_unapproved_projects' => 0,
        'field_collection_values' => 0,
        'forms' => 0,
        'legal_terms' => 0,
        'legal_users' => 0,
        'media_default' => 0,
        'my_shows' => 0,
        'og_all_user_group_content' => 0,
        'og_extras_groups' => 0,
        'og_extras_members' => 0,
        'og_extras_nodes' => 0,
        'og_members' => 0,
        'og_members_admin' => 0,
        'og_nodes' => 0,
        'og_user_groups' => 0,
        'om_crew_connect_find' => 0,
        'om_crew_connect_my_skills' => 0,
        'pbcore_search_terms' => 0,
        'producer_search' => 0,
        'producer_tools' => 0,
        'project_export' => 0,
        'series_request_pending' => 0,
        'series_request_project_settings' => 0,
        'series_request_scheduled_slots' => 0,
        'series_request_scheduling_information' => 0,
        'series_request_search' => 0,
        'series_request_viewfields' => 'series_request_viewfields',
        'series_requests_approved' => 0,
        'show_admin_displays' => 0,
        'show_report_export' => 0,
        'show_request_daily_airings' => 0,
        'show_request_scheduling_information' => 0,
        'shows' => 0,
        'summer_camps' => 0,
        'taxonomy_term' => 0,
        'upcoming_workshops' => 0,
      ),
      'force_default' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_short_description'
  $field_instances['node-cm_project-field_short_description'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field will be used for the TV Guide listing of this program, and is limited to 256 characters.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_short_description',
    'label' => 'Short Description',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 4,
        5 => 0,
        7 => 0,
        14 => 0,
        15 => 15,
        16 => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-cm_project-field_staff_notes'
  $field_instances['node-cm_project-field_staff_notes'] = array(
    'bundle' => 'cm_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_staff_notes',
    'label' => 'Staff Notes',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-cm_project-group_group'
  $field_instances['node-cm_project-group_group'] = array(
    'bundle' => 'cm_project',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Determine if this is an OG group.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 1,
    'entity_type' => 'node',
    'field_name' => 'group_group',
    'label' => 'Group',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_group_subscribe',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_group_subscribe',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
        'og_hide' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'taxonomy_term-pbcore_languages-field_pbcore_custom_name'
  $field_instances['taxonomy_term-pbcore_languages-field_pbcore_custom_name'] = array(
    'bundle' => 'pbcore_languages',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_pbcore_custom_name',
    'label' => 'Custom Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-pbcore_languages-field_term_enable'
  $field_instances['taxonomy_term-pbcore_languages-field_term_enable'] = array(
    'bundle' => 'pbcore_languages',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_term_enable',
    'label' => 'Enable',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'user-user-field_cablecast_producer_id'
  $field_instances['user-user-field_cablecast_producer_id'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_cablecast_producer_id',
    'label' => 'Cablecast Producer ID',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<i class="beautytips" title="How many shows will you submit in one quarter?"> <img src=\'/misc/help.png\'>Hover over for help</i>');
  t('<i title="When will your program be completely edited and ready to turn in to Playback?"><img src=\'/misc/help.png\'></i>');
  t('Airings');
  t('Auto-create Shows');
  t('Cablecast Producer ID');
  t('Cablecast Project ID');
  t('Closed Captions');
  t('Contact Phone');
  t('Custom Name');
  t('Date to stop using your program as filler.');
  t('Department');
  t('Description');
  t('Determine if this is an OG group.');
  t('Email');
  t('Enable');
  t('Estimated Completion Date');
  t('Filler');
  t('Filler End Date');
  t('Genres');
  t('Group');
  t('Languages');
  t('Legacy Series Renewals');
  t('Legacy Status');
  t('Live');
  t('Long description for website page.');
  t('May we use your program to fill gaps in our daily schedule?');
  t('Producer Name');
  t('Production Notes');
  t('Production Type');
  t('Project ID');
  t('Project Status');
  t('Project Type');
  t('Reason Project Not Active');
  t('Runtime Default');
  t('SCROLL DOWN FOR MORE OPTIONS
If you do not see your program’s language, please contact the front desk to have it added to our list!');
  t('Series Duration');
  t('Series Frequency');
  t('Series Request');
  t('Series Requests');
  t('Short Description');
  t('Shows');
  t('Specify any additional post production details.');
  t('Staff Notes');
  t('This field will be used for the TV Guide listing of this program, and is limited to 256 characters.');
  t('WARNING: This will create Shows based on Series Frequency. Make sure you know what you are doing. If you are not sure, leave this option un-checked.');
  t('Website');
  t('eg: 503-555-1212');
  t('eg: John Doe');
  t('eg: jdoe@example.com');
  t('www.example.com');

  return $field_instances;
}
