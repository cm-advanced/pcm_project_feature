<?php
/**
 * @file
 * pcm_project_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pcm_project_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_legacy|node|cm_project|default';
  $field_group->group_name = 'group_legacy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_project';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_playback';
  $field_group->data = array(
    'label' => 'Legacy',
    'weight' => '15',
    'children' => array(
      0 => 'field_legacy_status',
      1 => 'field_project_id',
      2 => 'field_production_type_legacy',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Legacy',
      'instance_settings' => array(
        'classes' => ' group-legacy field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_legacy|node|cm_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_legacy|node|cm_project|form';
  $field_group->group_name = 'group_legacy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Legacy',
    'weight' => '5',
    'children' => array(
      0 => 'field_format',
      1 => 'field_legacy_status',
      2 => 'field_project_id',
      3 => 'field_production_notes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-legacy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_legacy|node|cm_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_playback|node|cm_project|default';
  $field_group->group_name = 'group_playback';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Playback',
    'weight' => '3',
    'children' => array(
      0 => 'field_cm_project_types',
      1 => 'field_department',
      2 => 'field_series_frequency',
      3 => 'field_estimated_completion_date',
      4 => 'field_filler',
      5 => 'field_filler_end_date',
      6 => 'field_staff_notes',
      7 => 'field_series_duration',
      8 => 'field_live',
      9 => 'field_cablecast_project_id',
      10 => 'field_format',
      11 => 'field_runtime_default',
      12 => 'field_project_status',
      13 => 'field_series_requests_all',
      14 => 'field_legacy_series_renewals',
      15 => 'group_legacy',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-playback field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_playback|node|cm_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_production_planning|node|cm_project|default';
  $field_group->group_name = 'group_production_planning';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Production / Post-Production Planning',
    'weight' => '2',
    'children' => array(
      0 => 'field_production_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-production-planning field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_production_planning|node|cm_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_programming|node|cm_project|form';
  $field_group->group_name = 'group_programming';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Programming',
    'weight' => '4',
    'children' => array(
      0 => 'field_project_airings',
      1 => 'field_project_shows',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-programming field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_programming|node|cm_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_airings|node|cm_project|default';
  $field_group->group_name = 'group_project_airings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Airings',
    'weight' => '5',
    'children' => array(
      0 => 'field_project_airings',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-airings field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_project_airings|node|cm_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_settings|node|cm_project|default';
  $field_group->group_name = 'group_project_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_pbcore_genres',
      1 => 'field_pbcore_languages',
      2 => 'field_short_description',
      3 => 'field_closed_captions',
      4 => 'body',
      5 => 'field_pbcore_fcc_ratings',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'General Information',
      'instance_settings' => array(
        'classes' => ' group-project-settings field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_project_settings|node|cm_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_shows|node|cm_project|default';
  $field_group->group_name = 'group_project_shows';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shows',
    'weight' => '4',
    'children' => array(
      0 => 'field_project_shows',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-shows field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_project_shows|node|cm_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_type|node|cm_project|form';
  $field_group->group_name = 'group_project_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Settings',
    'weight' => '0',
    'children' => array(
      0 => 'field_cm_project_types',
      1 => 'field_series_frequency',
      2 => 'field_estimated_completion_date',
      3 => 'field_project_status',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-project-type field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_project_type|node|cm_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_info|node|cm_project|default';
  $field_group->group_name = 'group_public_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Public Contact Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_pub_producer_name',
      1 => 'field_pub_contact_phone',
      2 => 'field_pub_contact_email',
      3 => 'field_pub_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-public-info field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_public_info|node|cm_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_info|node|cm_project|form';
  $field_group->group_name = 'group_public_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Public Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_pub_producer_name',
      1 => 'field_pub_contact_phone',
      2 => 'field_pub_contact_email',
      3 => 'field_pub_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Public Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-public-info field-group-fieldset',
        'description' => 'Public information may be displayed to the public on our website, in TV guides and other schedules, etc. Please make sure you are comfortable sharing any information you enter in the fields in this section.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_public_info|node|cm_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_defaults|node|cm_project|form';
  $field_group->group_name = 'group_show_defaults';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show Defaults',
    'weight' => '1',
    'children' => array(
      0 => 'field_pbcore_genres',
      1 => 'field_pbcore_languages',
      2 => 'field_short_description',
      3 => 'field_closed_captions',
      4 => 'field_filler',
      5 => 'field_filler_end_date',
      6 => 'field_series_duration',
      7 => 'body',
      8 => 'field_live',
      9 => 'field_live_source',
      10 => 'field_runtime_default',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Show Defaults',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-show-defaults field-group-fieldset',
        'description' => 'Default values will be auto populated in any new content you create, including shows. You can modify the value of auto populated fields when you are creating new content.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_show_defaults|node|cm_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staff_only|node|cm_project|form';
  $field_group->group_name = 'group_staff_only';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff Only',
    'weight' => '3',
    'children' => array(
      0 => 'field_department',
      1 => 'field_reason_not_active',
      2 => 'field_staff_notes',
      3 => 'field_cablecast_project_id',
      4 => 'field_auto_create_shows',
      5 => 'group_group',
      6 => 'field_legacy_series_renewals',
      7 => 'field_series_requests_all',
      8 => 'field_series_requests_current',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-staff-only field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_staff_only|node|cm_project|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Airings');
  t('General Information');
  t('Legacy');
  t('Playback');
  t('Production / Post-Production Planning');
  t('Programming');
  t('Project Settings');
  t('Public Contact Information');
  t('Public Information');
  t('Show Defaults');
  t('Shows');
  t('Staff Only');

  return $field_groups;
}
