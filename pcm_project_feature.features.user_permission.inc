<?php
/**
 * @file
 * pcm_project_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pcm_project_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create cm_project content'.
  $permissions['create cm_project content'] = array(
    'name' => 'create cm_project content',
    'roles' => array(
      'Series Renewed' => 'Series Renewed',
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'producer' => 'producer',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_auto_create_shows'.
  $permissions['create field_auto_create_shows'] = array(
    'name' => 'create field_auto_create_shows',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_cablecast_producer_id'.
  $permissions['create field_cablecast_producer_id'] = array(
    'name' => 'create field_cablecast_producer_id',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_cablecast_project_id'.
  $permissions['create field_cablecast_project_id'] = array(
    'name' => 'create field_cablecast_project_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_closed_captions'.
  $permissions['create field_closed_captions'] = array(
    'name' => 'create field_closed_captions',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_department'.
  $permissions['create field_department'] = array(
    'name' => 'create field_department',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_estimated_completion_date'.
  $permissions['create field_estimated_completion_date'] = array(
    'name' => 'create field_estimated_completion_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_format'.
  $permissions['create field_format'] = array(
    'name' => 'create field_format',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_legacy_series_renewals'.
  $permissions['create field_legacy_series_renewals'] = array(
    'name' => 'create field_legacy_series_renewals',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_legacy_status'.
  $permissions['create field_legacy_status'] = array(
    'name' => 'create field_legacy_status',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_production_notes'.
  $permissions['create field_production_notes'] = array(
    'name' => 'create field_production_notes',
    'roles' => array(
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_project_airings'.
  $permissions['create field_project_airings'] = array(
    'name' => 'create field_project_airings',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_project_id'.
  $permissions['create field_project_id'] = array(
    'name' => 'create field_project_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_project_shows'.
  $permissions['create field_project_shows'] = array(
    'name' => 'create field_project_shows',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_project_status'.
  $permissions['create field_project_status'] = array(
    'name' => 'create field_project_status',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_reason_not_active'.
  $permissions['create field_reason_not_active'] = array(
    'name' => 'create field_reason_not_active',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_series_duration'.
  $permissions['create field_series_duration'] = array(
    'name' => 'create field_series_duration',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_series_requests_all'.
  $permissions['create field_series_requests_all'] = array(
    'name' => 'create field_series_requests_all',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_series_requests_current'.
  $permissions['create field_series_requests_current'] = array(
    'name' => 'create field_series_requests_current',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_staff_notes'.
  $permissions['create field_staff_notes'] = array(
    'name' => 'create field_staff_notes',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create group_group'.
  $permissions['create group_group'] = array(
    'name' => 'create group_group',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any cm_project content'.
  $permissions['delete any cm_project content'] = array(
    'name' => 'delete any cm_project content',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cm_project content'.
  $permissions['delete own cm_project content'] = array(
    'name' => 'delete own cm_project content',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cm_project content'.
  $permissions['edit any cm_project content'] = array(
    'name' => 'edit any cm_project content',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_auto_create_shows'.
  $permissions['edit field_auto_create_shows'] = array(
    'name' => 'edit field_auto_create_shows',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_cablecast_producer_id'.
  $permissions['edit field_cablecast_producer_id'] = array(
    'name' => 'edit field_cablecast_producer_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_cablecast_project_id'.
  $permissions['edit field_cablecast_project_id'] = array(
    'name' => 'edit field_cablecast_project_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_closed_captions'.
  $permissions['edit field_closed_captions'] = array(
    'name' => 'edit field_closed_captions',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_department'.
  $permissions['edit field_department'] = array(
    'name' => 'edit field_department',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_estimated_completion_date'.
  $permissions['edit field_estimated_completion_date'] = array(
    'name' => 'edit field_estimated_completion_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_format'.
  $permissions['edit field_format'] = array(
    'name' => 'edit field_format',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_legacy_series_renewals'.
  $permissions['edit field_legacy_series_renewals'] = array(
    'name' => 'edit field_legacy_series_renewals',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_legacy_status'.
  $permissions['edit field_legacy_status'] = array(
    'name' => 'edit field_legacy_status',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_production_notes'.
  $permissions['edit field_production_notes'] = array(
    'name' => 'edit field_production_notes',
    'roles' => array(
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_project_airings'.
  $permissions['edit field_project_airings'] = array(
    'name' => 'edit field_project_airings',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_project_id'.
  $permissions['edit field_project_id'] = array(
    'name' => 'edit field_project_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_project_shows'.
  $permissions['edit field_project_shows'] = array(
    'name' => 'edit field_project_shows',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_project_status'.
  $permissions['edit field_project_status'] = array(
    'name' => 'edit field_project_status',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_reason_not_active'.
  $permissions['edit field_reason_not_active'] = array(
    'name' => 'edit field_reason_not_active',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_series_duration'.
  $permissions['edit field_series_duration'] = array(
    'name' => 'edit field_series_duration',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_series_requests_all'.
  $permissions['edit field_series_requests_all'] = array(
    'name' => 'edit field_series_requests_all',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_series_requests_current'.
  $permissions['edit field_series_requests_current'] = array(
    'name' => 'edit field_series_requests_current',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_staff_notes'.
  $permissions['edit field_staff_notes'] = array(
    'name' => 'edit field_staff_notes',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit group_group'.
  $permissions['edit group_group'] = array(
    'name' => 'edit group_group',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own cm_project content'.
  $permissions['edit own cm_project content'] = array(
    'name' => 'edit own cm_project content',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'producer' => 'producer',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_auto_create_shows'.
  $permissions['edit own field_auto_create_shows'] = array(
    'name' => 'edit own field_auto_create_shows',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_cablecast_producer_id'.
  $permissions['edit own field_cablecast_producer_id'] = array(
    'name' => 'edit own field_cablecast_producer_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_cablecast_project_id'.
  $permissions['edit own field_cablecast_project_id'] = array(
    'name' => 'edit own field_cablecast_project_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_closed_captions'.
  $permissions['edit own field_closed_captions'] = array(
    'name' => 'edit own field_closed_captions',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_department'.
  $permissions['edit own field_department'] = array(
    'name' => 'edit own field_department',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_estimated_completion_date'.
  $permissions['edit own field_estimated_completion_date'] = array(
    'name' => 'edit own field_estimated_completion_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_format'.
  $permissions['edit own field_format'] = array(
    'name' => 'edit own field_format',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_legacy_series_renewals'.
  $permissions['edit own field_legacy_series_renewals'] = array(
    'name' => 'edit own field_legacy_series_renewals',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_legacy_status'.
  $permissions['edit own field_legacy_status'] = array(
    'name' => 'edit own field_legacy_status',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_production_notes'.
  $permissions['edit own field_production_notes'] = array(
    'name' => 'edit own field_production_notes',
    'roles' => array(
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_project_airings'.
  $permissions['edit own field_project_airings'] = array(
    'name' => 'edit own field_project_airings',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_project_id'.
  $permissions['edit own field_project_id'] = array(
    'name' => 'edit own field_project_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_project_shows'.
  $permissions['edit own field_project_shows'] = array(
    'name' => 'edit own field_project_shows',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_project_status'.
  $permissions['edit own field_project_status'] = array(
    'name' => 'edit own field_project_status',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_reason_not_active'.
  $permissions['edit own field_reason_not_active'] = array(
    'name' => 'edit own field_reason_not_active',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_series_duration'.
  $permissions['edit own field_series_duration'] = array(
    'name' => 'edit own field_series_duration',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_series_requests_all'.
  $permissions['edit own field_series_requests_all'] = array(
    'name' => 'edit own field_series_requests_all',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_series_requests_current'.
  $permissions['edit own field_series_requests_current'] = array(
    'name' => 'edit own field_series_requests_current',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_staff_notes'.
  $permissions['edit own field_staff_notes'] = array(
    'name' => 'edit own field_staff_notes',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own group_group'.
  $permissions['edit own group_group'] = array(
    'name' => 'edit own group_group',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'manage pcm_project'.
  $permissions['manage pcm_project'] = array(
    'name' => 'manage pcm_project',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'pcm_project',
  );

  // Exported permission: 'view field_auto_create_shows'.
  $permissions['view field_auto_create_shows'] = array(
    'name' => 'view field_auto_create_shows',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_cablecast_producer_id'.
  $permissions['view field_cablecast_producer_id'] = array(
    'name' => 'view field_cablecast_producer_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_cablecast_project_id'.
  $permissions['view field_cablecast_project_id'] = array(
    'name' => 'view field_cablecast_project_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_closed_captions'.
  $permissions['view field_closed_captions'] = array(
    'name' => 'view field_closed_captions',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_department'.
  $permissions['view field_department'] = array(
    'name' => 'view field_department',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_estimated_completion_date'.
  $permissions['view field_estimated_completion_date'] = array(
    'name' => 'view field_estimated_completion_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_format'.
  $permissions['view field_format'] = array(
    'name' => 'view field_format',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_legacy_series_renewals'.
  $permissions['view field_legacy_series_renewals'] = array(
    'name' => 'view field_legacy_series_renewals',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_legacy_status'.
  $permissions['view field_legacy_status'] = array(
    'name' => 'view field_legacy_status',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_production_notes'.
  $permissions['view field_production_notes'] = array(
    'name' => 'view field_production_notes',
    'roles' => array(
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_project_airings'.
  $permissions['view field_project_airings'] = array(
    'name' => 'view field_project_airings',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_project_id'.
  $permissions['view field_project_id'] = array(
    'name' => 'view field_project_id',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_project_shows'.
  $permissions['view field_project_shows'] = array(
    'name' => 'view field_project_shows',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_project_status'.
  $permissions['view field_project_status'] = array(
    'name' => 'view field_project_status',
    'roles' => array(
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'producer' => 'producer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_reason_not_active'.
  $permissions['view field_reason_not_active'] = array(
    'name' => 'view field_reason_not_active',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_series_duration'.
  $permissions['view field_series_duration'] = array(
    'name' => 'view field_series_duration',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_series_requests_all'.
  $permissions['view field_series_requests_all'] = array(
    'name' => 'view field_series_requests_all',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_series_requests_current'.
  $permissions['view field_series_requests_current'] = array(
    'name' => 'view field_series_requests_current',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_staff_notes'.
  $permissions['view field_staff_notes'] = array(
    'name' => 'view field_staff_notes',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view group_group'.
  $permissions['view group_group'] = array(
    'name' => 'view group_group',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_auto_create_shows'.
  $permissions['view own field_auto_create_shows'] = array(
    'name' => 'view own field_auto_create_shows',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_cablecast_producer_id'.
  $permissions['view own field_cablecast_producer_id'] = array(
    'name' => 'view own field_cablecast_producer_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_cablecast_project_id'.
  $permissions['view own field_cablecast_project_id'] = array(
    'name' => 'view own field_cablecast_project_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_closed_captions'.
  $permissions['view own field_closed_captions'] = array(
    'name' => 'view own field_closed_captions',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_department'.
  $permissions['view own field_department'] = array(
    'name' => 'view own field_department',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_estimated_completion_date'.
  $permissions['view own field_estimated_completion_date'] = array(
    'name' => 'view own field_estimated_completion_date',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'producer' => 'producer',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_format'.
  $permissions['view own field_format'] = array(
    'name' => 'view own field_format',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_legacy_series_renewals'.
  $permissions['view own field_legacy_series_renewals'] = array(
    'name' => 'view own field_legacy_series_renewals',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_legacy_status'.
  $permissions['view own field_legacy_status'] = array(
    'name' => 'view own field_legacy_status',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_production_notes'.
  $permissions['view own field_production_notes'] = array(
    'name' => 'view own field_production_notes',
    'roles' => array(
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_project_airings'.
  $permissions['view own field_project_airings'] = array(
    'name' => 'view own field_project_airings',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_project_id'.
  $permissions['view own field_project_id'] = array(
    'name' => 'view own field_project_id',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_project_shows'.
  $permissions['view own field_project_shows'] = array(
    'name' => 'view own field_project_shows',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_project_status'.
  $permissions['view own field_project_status'] = array(
    'name' => 'view own field_project_status',
    'roles' => array(
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'producer' => 'producer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_reason_not_active'.
  $permissions['view own field_reason_not_active'] = array(
    'name' => 'view own field_reason_not_active',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_series_duration'.
  $permissions['view own field_series_duration'] = array(
    'name' => 'view own field_series_duration',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_series_requests_all'.
  $permissions['view own field_series_requests_all'] = array(
    'name' => 'view own field_series_requests_all',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_series_requests_current'.
  $permissions['view own field_series_requests_current'] = array(
    'name' => 'view own field_series_requests_current',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_staff_notes'.
  $permissions['view own field_staff_notes'] = array(
    'name' => 'view own field_staff_notes',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own group_group'.
  $permissions['view own group_group'] = array(
    'name' => 'view own group_group',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
