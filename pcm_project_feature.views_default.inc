<?php
/**
 * @file
 * pcm_project_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pcm_project_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = '_project_airings_scheduled';
  $view->description = 'Airings - approved and scheduled';
  $view->tag = 'default';
  $view->base_table = 'cm_airing';
  $view->human_name = ' Project: Airings Scheduled';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'airing_id' => 'airing_id',
    'field_airing_date' => 'field_airing_date',
    'field_airing_project_ref' => 'field_airing_project_ref',
    'field_airing_title' => 'field_airing_title',
    'field_airing_channel' => 'field_airing_channel',
    'field_series_request' => 'field_series_request',
    'field_is_show_premiere_date' => 'field_is_show_premiere_date',
    'field_subsequent_airings' => 'field_subsequent_airings',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'airing_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_project_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_channel' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_series_request' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_is_show_premiere_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subsequent_airings' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['label'] = 'Air Date and Time';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Airing: Project */
  $handler->display->display_options['fields']['field_airing_project_ref']['id'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['field'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['type'] = 'text_plain';
  /* Field: Field: Channel */
  $handler->display->display_options['fields']['field_airing_channel']['id'] = 'field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['table'] = 'field_data_field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['field'] = 'field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Airing: Series Request */
  $handler->display->display_options['fields']['field_series_request']['id'] = 'field_series_request';
  $handler->display->display_options['fields']['field_series_request']['table'] = 'field_data_field_series_request';
  $handler->display->display_options['fields']['field_series_request']['field'] = 'field_series_request';
  $handler->display->display_options['fields']['field_series_request']['settings'] = array(
    'link' => 0,
  );
  /* Field: Airing: Is Show Premiere Date? */
  $handler->display->display_options['fields']['field_is_show_premiere_date']['id'] = 'field_is_show_premiere_date';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['table'] = 'field_data_field_is_show_premiere_date';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['field'] = 'field_is_show_premiere_date';
  /* Field: Airing: Subsequent Airings */
  $handler->display->display_options['fields']['field_subsequent_airings']['id'] = 'field_subsequent_airings';
  $handler->display->display_options['fields']['field_subsequent_airings']['table'] = 'field_data_field_subsequent_airings';
  $handler->display->display_options['fields']['field_subsequent_airings']['field'] = 'field_subsequent_airings';
  $handler->display->display_options['fields']['field_subsequent_airings']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_subsequent_airings']['delta_offset'] = '0';
  /* Sort criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['sorts']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['sorts']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['order'] = 'DESC';
  /* Contextual filter: Airing: Project (field_airing_project_ref) */
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['id'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['field'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['validate_options']['types'] = array(
    'cm_project' => 'cm_project',
  );
  /* Filter criterion: Airing: Airing ID */
  $handler->display->display_options['filters']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['filters']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['filters']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['filters']['airing_id']['operator'] = '>';
  $handler->display->display_options['filters']['airing_id']['value']['value'] = '0';
  $export['_project_airings_scheduled'] = $view;

  $view = new view();
  $view->name = 'pcm_project_shows';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project: PCM Shows';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_season',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_season' => 'field_season',
    'created' => 'created',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_season' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="messages warning">There are currently no Shows associated with this Project.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Received Filename */
  $handler->display->display_options['fields']['field_expected_filename']['id'] = 'field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['table'] = 'field_data_field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['field'] = 'field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['label'] = 'Uploaded';
  $handler->display->display_options['fields']['field_expected_filename']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_expected_filename']['alter']['text'] = '<img src="/misc/watchdog-ok.png" width="25px">';
  $handler->display->display_options['fields']['field_expected_filename']['empty'] = '<a style="margin-left:auto; margin-right:auto; display:block" href="/node/[nid]/upload"><img src="/sites/default/files/15107_wpm_lowres.png" width="25px" alt="Upload now" title="Upload now"/></a>';
  $handler->display->display_options['fields']['field_expected_filename']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_expected_filename']['settings'] = array(
    'trim_length' => '12',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Premiere Date */
  $handler->display->display_options['fields']['field_premier_date']['id'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['table'] = 'field_data_field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['field'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Received Filename (field_expected_filename) */
  $handler->display->display_options['sorts']['field_expected_filename_value']['id'] = 'field_expected_filename_value';
  $handler->display->display_options['sorts']['field_expected_filename_value']['table'] = 'field_data_field_expected_filename';
  $handler->display->display_options['sorts']['field_expected_filename_value']['field'] = 'field_expected_filename_value';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Episode Number (field_episode_number) */
  $handler->display->display_options['arguments']['field_episode_number_value']['id'] = 'field_episode_number_value';
  $handler->display->display_options['arguments']['field_episode_number_value']['table'] = 'field_data_field_episode_number';
  $handler->display->display_options['arguments']['field_episode_number_value']['field'] = 'field_episode_number_value';
  $handler->display->display_options['arguments']['field_episode_number_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_episode_number_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_episode_number_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_episode_number_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Is Placeholder? (field_is_placeholder) */
  $handler->display->display_options['filters']['field_is_placeholder_value']['id'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['table'] = 'field_data_field_is_placeholder';
  $handler->display->display_options['filters']['field_is_placeholder_value']['field'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_placeholder_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_is_placeholder_value']['reduce_duplicates'] = TRUE;

  /* Display: Airing Form Dropdown Values */
  $handler = $view->new_display('block', 'Airing Form Dropdown Values', 'dropdown_values');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    16 => '16',
    7 => '7',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Cablecast Show ID */
  $handler->display->display_options['fields']['field_cablecast_show_id']['id'] = 'field_cablecast_show_id';
  $handler->display->display_options['fields']['field_cablecast_show_id']['table'] = 'field_data_field_cablecast_show_id';
  $handler->display->display_options['fields']['field_cablecast_show_id']['field'] = 'field_cablecast_show_id';
  $handler->display->display_options['fields']['field_cablecast_show_id']['label'] = 'Cablecast ID';
  $handler->display->display_options['fields']['field_cablecast_show_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cablecast_show_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Premiere Date */
  $handler->display->display_options['fields']['field_premier_date']['id'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['table'] = 'field_data_field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['field'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Submit Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Cablecast Show ID (field_cablecast_show_id) */
  $handler->display->display_options['sorts']['field_cablecast_show_id_value']['id'] = 'field_cablecast_show_id_value';
  $handler->display->display_options['sorts']['field_cablecast_show_id_value']['table'] = 'field_data_field_cablecast_show_id';
  $handler->display->display_options['sorts']['field_cablecast_show_id_value']['field'] = 'field_cablecast_show_id_value';
  $handler->display->display_options['sorts']['field_cablecast_show_id_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Is Placeholder? (field_is_placeholder) */
  $handler->display->display_options['filters']['field_is_placeholder_value']['id'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['table'] = 'field_data_field_is_placeholder';
  $handler->display->display_options['filters']['field_is_placeholder_value']['field'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_placeholder_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_is_placeholder_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/project-shows';
  $handler->display->display_options['menu']['title'] = 'Shows';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Show Nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Cablecast Show ID */
  $handler->display->display_options['fields']['field_cablecast_show_id']['id'] = 'field_cablecast_show_id';
  $handler->display->display_options['fields']['field_cablecast_show_id']['table'] = 'field_data_field_cablecast_show_id';
  $handler->display->display_options['fields']['field_cablecast_show_id']['field'] = 'field_cablecast_show_id';
  $handler->display->display_options['fields']['field_cablecast_show_id']['label'] = 'Cablecast ID';
  $handler->display->display_options['fields']['field_cablecast_show_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: TV Guide Title */
  $handler->display->display_options['fields']['field_tv_guide_title']['id'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['table'] = 'field_data_field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['field'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['text'] = '<a href="/node/[nid]">[field_tv_guide_title]</a>';
  $handler->display->display_options['fields']['field_tv_guide_title']['empty'] = '<a href="/node/[nid_1]/edit?destination=dashboard">[field_tv_guide_title]</a>';
  /* Field: Content: Premiere Date */
  $handler->display->display_options['fields']['field_premier_date']['id'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['table'] = 'field_data_field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['field'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Submit date';
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Cablecast Show ID (field_cablecast_show_id) */
  $handler->display->display_options['sorts']['field_cablecast_show_id_value']['id'] = 'field_cablecast_show_id_value';
  $handler->display->display_options['sorts']['field_cablecast_show_id_value']['table'] = 'field_data_field_cablecast_show_id';
  $handler->display->display_options['sorts']['field_cablecast_show_id_value']['field'] = 'field_cablecast_show_id_value';
  $handler->display->display_options['sorts']['field_cablecast_show_id_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'ineededtogiveitapath2';
  $handler->display->display_options['menu']['title'] = 'Shows';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Shows Without Files */
  $handler = $view->new_display('block', 'Shows Without Files', 'shows_without_files');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Received Filename (field_expected_filename) */
  $handler->display->display_options['filters']['field_expected_filename_value']['id'] = 'field_expected_filename_value';
  $handler->display->display_options['filters']['field_expected_filename_value']['table'] = 'field_data_field_expected_filename';
  $handler->display->display_options['filters']['field_expected_filename_value']['field'] = 'field_expected_filename_value';
  $handler->display->display_options['filters']['field_expected_filename_value']['operator'] = 'not empty';
  $export['pcm_project_shows'] = $view;

  $view = new view();
  $view->name = 'project_airings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'cm_airing';
  $view->human_name = 'Project: Airings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Airings for Project';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    16 => '16',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="messages warning">This Project has no Airings.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['id'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['field'] = 'field_airing_show_ref_target_id';
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['text'] = '[field_airing_title]';
  $handler->display->display_options['fields']['field_airing_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['path'] = 'airing/[airing_id]';
  $handler->display->display_options['fields']['field_airing_title']['type'] = 'text_plain';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_airing_date']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'airing/[airing_id]/edit';
  /* Field: Airing: Project */
  $handler->display->display_options['fields']['field_airing_project_ref']['id'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['field'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'Show Nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: TV Guide Title */
  $handler->display->display_options['fields']['field_tv_guide_title']['id'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['table'] = 'field_data_field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['field'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['relationship'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['text'] = '<a href="/node/[nid]">[field_tv_guide_title]</a>';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Media Status*';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print pcm_show_airing_block_filename_view_field($row);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Airing: Airing Grid Link */
  $handler->display->display_options['fields']['field_airing_grid_link']['id'] = 'field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['table'] = 'field_data_field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['field'] = 'field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['type'] = 'computed_field_unsanitized';
  /* Sort criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['sorts']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['sorts']['field_airing_date_value']['field'] = 'field_airing_date_value';
  /* Contextual filter: Airing: Project (field_airing_project_ref) */
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['id'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['field'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['validate_options']['types'] = array(
    'cm_project' => 'cm_project',
  );
  /* Filter criterion: Airing: Airing ID */
  $handler->display->display_options['filters']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['filters']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['filters']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['filters']['airing_id']['operator'] = '>';
  $handler->display->display_options['filters']['airing_id']['value']['value'] = '0';

  /* Display: Airings for Project */
  $handler = $view->new_display('page', 'Airings for Project', 'project_airings_menu_tab');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['sorts']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['sorts']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Airing: Project (field_airing_project_ref) */
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['id'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['field'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['validate_options']['types'] = array(
    'cm_project' => 'cm_project',
  );
  $handler->display->display_options['path'] = 'node/%/project-airings';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Airings';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: View Field */
  $handler = $view->new_display('block', 'View Field', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Airing: Airing ID */
  $handler->display->display_options['filters']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['filters']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['filters']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['filters']['airing_id']['operator'] = '>';
  $handler->display->display_options['filters']['airing_id']['value']['value'] = '0';
  /* Filter criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['filters']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['filters']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_airing_date_value']['default_date'] = 'now';
  $export['project_airings'] = $view;

  $view = new view();
  $view->name = 'project_cancel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'cm_airing';
  $view->human_name = 'Project Cancel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project Cancel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    16 => '16',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="messages warning">This Project has no future Airings.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['id'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['field'] = 'field_airing_project_ref_target_id';
  /* Field: Bulk operations: Airing */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['text'] = '[field_airing_title]';
  $handler->display->display_options['fields']['field_airing_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['path'] = 'airing/[airing_id]';
  $handler->display->display_options['fields']['field_airing_title']['type'] = 'text_plain';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['label'] = 'Time';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_airing_date']['delta_offset'] = '0';
  /* Field: Airing: Project */
  $handler->display->display_options['fields']['field_airing_project_ref']['id'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['field'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Airing: Show */
  $handler->display->display_options['fields']['field_airing_show_ref']['id'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['field'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['settings'] = array(
    'link' => 1,
  );
  /* Sort criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['sorts']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['sorts']['field_airing_date_value']['field'] = 'field_airing_date_value';
  /* Contextual filter: Airing: Project (field_airing_project_ref) */
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['id'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['field'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['validate_options']['types'] = array(
    'cm_project' => 'cm_project',
  );
  /* Filter criterion: Airing: Airing ID */
  $handler->display->display_options['filters']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['filters']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['filters']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['filters']['airing_id']['operator'] = '>';
  $handler->display->display_options['filters']['airing_id']['value']['value'] = '0';
  /* Filter criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['filters']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['filters']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['operator_id'] = 'field_airing_date_value_op';
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['label'] = 'Start -  start date (field_airing_date)';
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['operator'] = 'field_airing_date_value_op';
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['identifier'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    6 => 0,
    11 => 0,
    4 => 0,
    8 => 0,
    14 => 0,
    10 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    32 => 0,
  );
  $handler->display->display_options['filters']['field_airing_date_value']['default_date'] = 'now';

  /* Display: Airings for Project */
  $handler = $view->new_display('page', 'Airings for Project', 'airings_for_cancelling');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>To Cancel a project uncheck the Active checkbox below and click save. Then select the future  airings below you wish to cancel. Once you\'ve selected the airings, select "Delete Item" from the dropdown and click "Execute". </h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Airing */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['text'] = '[field_airing_title]';
  $handler->display->display_options['fields']['field_airing_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['path'] = 'airing/[airing_id]';
  $handler->display->display_options['fields']['field_airing_title']['type'] = 'text_plain';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['label'] = 'Time';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_airing_date']['delta_offset'] = '0';
  /* Field: Airing: Project */
  $handler->display->display_options['fields']['field_airing_project_ref']['id'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['field'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Airing: Show */
  $handler->display->display_options['fields']['field_airing_show_ref']['id'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['field'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Airing: Project (field_airing_project_ref) */
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['id'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['field'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_airing_project_ref_target_id']['validate_options']['types'] = array(
    'cm_project' => 'cm_project',
  );
  $handler->display->display_options['path'] = 'admin/projects/cancel/%';
  $handler->display->display_options['menu']['title'] = 'Airings';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Project Status Switcher */
  $handler = $view->new_display('attachment', 'Project Status Switcher', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'cm-box';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['id'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['relationships']['field_airing_project_ref_target_id']['field'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Airing: Project */
  $handler->display->display_options['fields']['field_airing_project_ref']['id'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['field'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Group */
  $handler->display->display_options['fields']['group_group']['id'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['table'] = 'field_data_group_group';
  $handler->display->display_options['fields']['group_group']['field'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['relationship'] = 'field_airing_project_ref_target_id';
  $handler->display->display_options['fields']['group_group']['type'] = 'editable';
  $handler->display->display_options['fields']['group_group']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'airings_for_cancelling' => 'airings_for_cancelling',
    'default' => 0,
  );
  $export['project_cancel'] = $view;

  $view = new view();
  $view->name = 'project_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project Export';
  $handler->display->display_options['css_class'] = 'project export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Approximate Duration */
  $handler->display->display_options['fields']['field_runtime']['id'] = 'field_runtime';
  $handler->display->display_options['fields']['field_runtime']['table'] = 'field_data_field_runtime';
  $handler->display->display_options['fields']['field_runtime']['field'] = 'field_runtime';
  $handler->display->display_options['fields']['field_runtime']['settings'] = array(
    'format' => 'h:mm',
    'leading_zero' => 1,
  );
  /* Field: Content: Auto-create Shows */
  $handler->display->display_options['fields']['field_auto_create_shows']['id'] = 'field_auto_create_shows';
  $handler->display->display_options['fields']['field_auto_create_shows']['table'] = 'field_data_field_auto_create_shows';
  $handler->display->display_options['fields']['field_auto_create_shows']['field'] = 'field_auto_create_shows';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Cablecast Project ID */
  $handler->display->display_options['fields']['field_cablecast_project_id']['id'] = 'field_cablecast_project_id';
  $handler->display->display_options['fields']['field_cablecast_project_id']['table'] = 'field_data_field_cablecast_project_id';
  $handler->display->display_options['fields']['field_cablecast_project_id']['field'] = 'field_cablecast_project_id';
  /* Field: Content: Camera Checkout */
  $handler->display->display_options['fields']['field_camera_checkout_q']['id'] = 'field_camera_checkout_q';
  $handler->display->display_options['fields']['field_camera_checkout_q']['table'] = 'field_data_field_camera_checkout_q';
  $handler->display->display_options['fields']['field_camera_checkout_q']['field'] = 'field_camera_checkout_q';
  /* Field: Content: Camera Request */
  $handler->display->display_options['fields']['field_camera_request']['id'] = 'field_camera_request';
  $handler->display->display_options['fields']['field_camera_request']['table'] = 'field_data_field_camera_request';
  $handler->display->display_options['fields']['field_camera_request']['field'] = 'field_camera_request';
  $handler->display->display_options['fields']['field_camera_request']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  /* Field: Content: Closed Captions */
  $handler->display->display_options['fields']['field_closed_captions']['id'] = 'field_closed_captions';
  $handler->display->display_options['fields']['field_closed_captions']['table'] = 'field_data_field_closed_captions';
  $handler->display->display_options['fields']['field_closed_captions']['field'] = 'field_closed_captions';
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_pub_contact_phone']['id'] = 'field_pub_contact_phone';
  $handler->display->display_options['fields']['field_pub_contact_phone']['table'] = 'field_data_field_pub_contact_phone';
  $handler->display->display_options['fields']['field_pub_contact_phone']['field'] = 'field_pub_contact_phone';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  /* Field: Content: Editing Request */
  $handler->display->display_options['fields']['field_editing_request']['id'] = 'field_editing_request';
  $handler->display->display_options['fields']['field_editing_request']['table'] = 'field_data_field_editing_request';
  $handler->display->display_options['fields']['field_editing_request']['field'] = 'field_editing_request';
  $handler->display->display_options['fields']['field_editing_request']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  /* Field: Content: Editing Session */
  $handler->display->display_options['fields']['field_editing_session_q']['id'] = 'field_editing_session_q';
  $handler->display->display_options['fields']['field_editing_session_q']['table'] = 'field_data_field_editing_session_q';
  $handler->display->display_options['fields']['field_editing_session_q']['field'] = 'field_editing_session_q';
  $handler->display->display_options['fields']['field_editing_session_q']['delta_offset'] = '0';
  /* Field: Content: Editing Session (field_editing_session_q:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_editing_session_q';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_pub_contact_email']['id'] = 'field_pub_contact_email';
  $handler->display->display_options['fields']['field_pub_contact_email']['table'] = 'field_data_field_pub_contact_email';
  $handler->display->display_options['fields']['field_pub_contact_email']['field'] = 'field_pub_contact_email';
  /* Field: Content: Estimated Completion Date */
  $handler->display->display_options['fields']['field_estimated_completion_date']['id'] = 'field_estimated_completion_date';
  $handler->display->display_options['fields']['field_estimated_completion_date']['table'] = 'field_data_field_estimated_completion_date';
  $handler->display->display_options['fields']['field_estimated_completion_date']['field'] = 'field_estimated_completion_date';
  $handler->display->display_options['fields']['field_estimated_completion_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Filler */
  $handler->display->display_options['fields']['field_filler']['id'] = 'field_filler';
  $handler->display->display_options['fields']['field_filler']['table'] = 'field_data_field_filler';
  $handler->display->display_options['fields']['field_filler']['field'] = 'field_filler';
  /* Field: Content: Filler End Date */
  $handler->display->display_options['fields']['field_filler_end_date']['id'] = 'field_filler_end_date';
  $handler->display->display_options['fields']['field_filler_end_date']['table'] = 'field_data_field_filler_end_date';
  $handler->display->display_options['fields']['field_filler_end_date']['field'] = 'field_filler_end_date';
  $handler->display->display_options['fields']['field_filler_end_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Genres */
  $handler->display->display_options['fields']['field_pbcore_genres']['id'] = 'field_pbcore_genres';
  $handler->display->display_options['fields']['field_pbcore_genres']['table'] = 'field_data_field_pbcore_genres';
  $handler->display->display_options['fields']['field_pbcore_genres']['field'] = 'field_pbcore_genres';
  $handler->display->display_options['fields']['field_pbcore_genres']['delta_offset'] = '0';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['fields']['delta_1']['table'] = 'field_data_field_pbcore_genres';
  $handler->display->display_options['fields']['delta_1']['field'] = 'delta';
  $handler->display->display_options['fields']['delta_1']['label'] = 'Genres (field_pbcore_genres:delta)';
  /* Field: Content: Group */
  $handler->display->display_options['fields']['group_group']['id'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['table'] = 'field_data_group_group';
  $handler->display->display_options['fields']['group_group']['field'] = 'group_group';
  /* Field: Content: Keep Current Programming Schedule? */
  $handler->display->display_options['fields']['field_series_keep_schedule']['id'] = 'field_series_keep_schedule';
  $handler->display->display_options['fields']['field_series_keep_schedule']['table'] = 'field_data_field_series_keep_schedule';
  $handler->display->display_options['fields']['field_series_keep_schedule']['field'] = 'field_series_keep_schedule';
  /* Field: Content: Languages */
  $handler->display->display_options['fields']['field_pbcore_languages']['id'] = 'field_pbcore_languages';
  $handler->display->display_options['fields']['field_pbcore_languages']['table'] = 'field_data_field_pbcore_languages';
  $handler->display->display_options['fields']['field_pbcore_languages']['field'] = 'field_pbcore_languages';
  $handler->display->display_options['fields']['field_pbcore_languages']['delta_offset'] = '0';
  /* Field: Content: Languages (field_pbcore_languages:delta) */
  $handler->display->display_options['fields']['delta_2']['id'] = 'delta_2';
  $handler->display->display_options['fields']['delta_2']['table'] = 'field_data_field_pbcore_languages';
  $handler->display->display_options['fields']['delta_2']['field'] = 'delta';
  /* Field: Content: Legacy Status */
  $handler->display->display_options['fields']['field_legacy_status']['id'] = 'field_legacy_status';
  $handler->display->display_options['fields']['field_legacy_status']['table'] = 'field_data_field_legacy_status';
  $handler->display->display_options['fields']['field_legacy_status']['field'] = 'field_legacy_status';
  /* Field: Content: Live */
  $handler->display->display_options['fields']['field_live']['id'] = 'field_live';
  $handler->display->display_options['fields']['field_live']['table'] = 'field_data_field_live';
  $handler->display->display_options['fields']['field_live']['field'] = 'field_live';
  /* Field: Field: Live Source */
  $handler->display->display_options['fields']['field_live_source']['id'] = 'field_live_source';
  $handler->display->display_options['fields']['field_live_source']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['fields']['field_live_source']['field'] = 'field_live_source';
  /* Field: Content: Playback Preferences */
  $handler->display->display_options['fields']['field_playback_preferences']['id'] = 'field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['table'] = 'field_data_field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['field'] = 'field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_playback_preferences']['delta_offset'] = '0';
  /* Field: Content: Playback Preferences (field_playback_preferences:delta) */
  $handler->display->display_options['fields']['delta_3']['id'] = 'delta_3';
  $handler->display->display_options['fields']['delta_3']['table'] = 'field_data_field_playback_preferences';
  $handler->display->display_options['fields']['delta_3']['field'] = 'delta';
  /* Field: Content: Producer Name */
  $handler->display->display_options['fields']['field_pub_producer_name']['id'] = 'field_pub_producer_name';
  $handler->display->display_options['fields']['field_pub_producer_name']['table'] = 'field_data_field_pub_producer_name';
  $handler->display->display_options['fields']['field_pub_producer_name']['field'] = 'field_pub_producer_name';
  /* Field: Content: Production Notes */
  $handler->display->display_options['fields']['field_production_notes']['id'] = 'field_production_notes';
  $handler->display->display_options['fields']['field_production_notes']['table'] = 'field_data_field_production_notes';
  $handler->display->display_options['fields']['field_production_notes']['field'] = 'field_production_notes';
  /* Field: Content: Production Type */
  $handler->display->display_options['fields']['field_format']['id'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['table'] = 'field_data_field_format';
  $handler->display->display_options['fields']['field_format']['field'] = 'field_format';
  /* Field: Content: Project */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Project */
  $handler->display->display_options['fields']['og_group_ref_1']['id'] = 'og_group_ref_1';
  $handler->display->display_options['fields']['og_group_ref_1']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref_1']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Project ID */
  $handler->display->display_options['fields']['field_project_id']['id'] = 'field_project_id';
  $handler->display->display_options['fields']['field_project_id']['table'] = 'field_data_field_project_id';
  $handler->display->display_options['fields']['field_project_id']['field'] = 'field_project_id';
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_cm_project_types']['id'] = 'field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['table'] = 'field_data_field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['field'] = 'field_cm_project_types';
  /* Field: Content: Quarter */
  $handler->display->display_options['fields']['field_quarter']['id'] = 'field_quarter';
  $handler->display->display_options['fields']['field_quarter']['table'] = 'field_data_field_quarter';
  $handler->display->display_options['fields']['field_quarter']['field'] = 'field_quarter';
  $handler->display->display_options['fields']['field_quarter']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: PBCore FCC Ratings */
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['id'] = 'field_pbcore_fcc_ratings';
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['table'] = 'field_data_field_pbcore_fcc_ratings';
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['field'] = 'field_pbcore_fcc_ratings';
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['label'] = 'Rating';
  /* Field: Content: Reason Project Not Active */
  $handler->display->display_options['fields']['field_reason_not_active']['id'] = 'field_reason_not_active';
  $handler->display->display_options['fields']['field_reason_not_active']['table'] = 'field_data_field_reason_not_active';
  $handler->display->display_options['fields']['field_reason_not_active']['field'] = 'field_reason_not_active';
  /* Field: Content: Series Duration */
  $handler->display->display_options['fields']['field_series_duration']['id'] = 'field_series_duration';
  $handler->display->display_options['fields']['field_series_duration']['table'] = 'field_data_field_series_duration';
  $handler->display->display_options['fields']['field_series_duration']['field'] = 'field_series_duration';
  /* Field: Content: Series Frequency */
  $handler->display->display_options['fields']['field_series_frequency']['id'] = 'field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['table'] = 'field_data_field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['field'] = 'field_series_frequency';
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  /* Field: Content: Staff Notes */
  $handler->display->display_options['fields']['field_staff_notes']['id'] = 'field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes']['field'] = 'field_staff_notes';
  /* Field: Content: Studio Requests */
  $handler->display->display_options['fields']['field_studio_request']['id'] = 'field_studio_request';
  $handler->display->display_options['fields']['field_studio_request']['table'] = 'field_data_field_studio_request';
  $handler->display->display_options['fields']['field_studio_request']['field'] = 'field_studio_request';
  $handler->display->display_options['fields']['field_studio_request']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_studio_request']['delta_offset'] = '0';
  /* Field: Content: Studio Requests (field_studio_request:delta) */
  $handler->display->display_options['fields']['delta_4']['id'] = 'delta_4';
  $handler->display->display_options['fields']['delta_4']['table'] = 'field_data_field_studio_request';
  $handler->display->display_options['fields']['delta_4']['field'] = 'delta';
  /* Field: Content: Studio Session */
  $handler->display->display_options['fields']['field_studio_session_q']['id'] = 'field_studio_session_q';
  $handler->display->display_options['fields']['field_studio_session_q']['table'] = 'field_data_field_studio_session_q';
  $handler->display->display_options['fields']['field_studio_session_q']['field'] = 'field_studio_session_q';
  $handler->display->display_options['fields']['field_studio_session_q']['delta_offset'] = '0';
  /* Field: Content: Studio Session (field_studio_session_q:delta) */
  $handler->display->display_options['fields']['delta_5']['id'] = 'delta_5';
  $handler->display->display_options['fields']['delta_5']['table'] = 'field_data_field_studio_session_q';
  $handler->display->display_options['fields']['delta_5']['field'] = 'delta';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_pub_website']['id'] = 'field_pub_website';
  $handler->display->display_options['fields']['field_pub_website']['table'] = 'field_data_field_pub_website';
  $handler->display->display_options['fields']['field_pub_website']['field'] = 'field_pub_website';
  $handler->display->display_options['fields']['field_pub_website']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_project' => 'cm_project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/project-export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'project-export/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['project_export'] = $view;

  $view = new view();
  $view->name = 'project_legacy_renewals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project: Legacy Renewals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project: Legacy Renewals';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Quarter */
  $handler->display->display_options['fields']['field_quarter']['id'] = 'field_quarter';
  $handler->display->display_options['fields']['field_quarter']['table'] = 'field_data_field_quarter';
  $handler->display->display_options['fields']['field_quarter']['field'] = 'field_quarter';
  $handler->display->display_options['fields']['field_quarter']['label'] = '';
  $handler->display->display_options['fields']['field_quarter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_quarter']['alter']['text'] = '[title]  ([field_quarter])';
  $handler->display->display_options['fields']['field_quarter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quarter']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project_renewal_season_' => 'project_renewal_season_',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['project_legacy_renewals'] = $view;

  $view = new view();
  $view->name = 'project_members';
  $view->description = 'Members of cm_project\'s';
  $view->tag = 'og, mnn, projects';
  $view->base_table = 'users';
  $view->human_name = 'Project: Members';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<?php 
$view_args = $view->args;
$project_id = $view_args[0];
print (l("Add Producer", "group/node/".$project_id."/admin/people/add-user")."</br>");
print (l("Manage Producers", "group/node/".$project_id."/admin/people"));
?>
';
  /* Relationship: OG membership: OG membership from User */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: OG membership: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'og_membership';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_rel';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = '%1 members';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'numeric';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );

  /* Display: Details */
  $handler = $view->new_display('block', 'Details', 'project_members_detail');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Producer';
  /* Field: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['created']['label'] = 'Joined';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';

  /* Display: Simple List */
  $handler = $view->new_display('block', 'Simple List', 'project_members_simple');
  $export['project_members'] = $view;

  $view = new view();
  $view->name = 'project_producer_dashboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'og_membership';
  $view->human_name = 'Project: Producer Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
    16 => '16',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'My Projects';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>My Projects</h2>
<p><a href="/node/add/cm-project?destination=dashboard">Add Project</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<i>
Use this section to add a project, add a show or to apply/renew a series. You must create a series project to apply for a series. Please note producers are limited to two projects at PCM. Only one of these projects can be a series project. Please review the OPR&P for additional information.

<strong>Add Project</strong>
<i>Select "Add Project" to create an individual project or a series project. An individual project can either be a general project to contain various types of show submissions, or it can be a project that contains shows that are similar. Individual programs are scheduled on a first come, first served basis. A series project contains content that is similar in structure and format. Series shows are scheduled in advance, and in three month increments. Please review the OPR&P for requirements and additional information.

<strong>Add Show</strong>
<i>--Select "Add Individual" if you would like to submit a show from your individual project. 
--If you would like to submit a special program from your series project please contact the programming department directly at x134 or email programming@pcmtv.org.
--Select "Submit Request for..." to apply for a series in the upcoming programming season. 
--Once a series has been scheduled a notification in the Series Request column will be updated with "Scheduled for..." and the programming season.
--See the Series Production Calendar for open application periods and important series dates.
--If you are having difficulties with your Series Request contact the Programming department directly at x131 or email playback@pcmtv.org.
</i>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No projects found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = 'Project';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Add Show*';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
 print pcm_project_user_dashboard_add_show_link($row);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_cm_project_types']['id'] = 'field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['table'] = 'field_data_field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['field'] = 'field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_cm_project_types']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Series Request**';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print cm_series_request_my_projects_view_field($row);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Contextual filter:  We pass the user ID as the Entity ID.  */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['ui_name'] = ' We pass the user ID as the Entity ID. ';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['project_producer_dashboard'] = $view;

  $view = new view();
  $view->name = 'projects_active_completion_date_past';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects: Active Completion Date Past';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects: Active Completion Date Past';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any cm_project content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'title' => 'title',
    'field_cm_project_types' => 'field_cm_project_types',
    'name' => 'name',
    'group_group' => 'group_group',
    'created' => 'created',
    'nothing' => 'nothing',
    'php' => 'php',
    'field_series_requests_current' => 'field_series_requests_current',
    'php_1' => 'php_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cm_project_types' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'group_group' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_series_requests_current' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="messages status">There are currently no Active Projects with Completion Dates that have past.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: OG membership: OG membership from Node group */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_cm_project_types']['id'] = 'field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['table'] = 'field_data_field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['field'] = 'field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Producer';
  /* Field: Content: Group */
  $handler->display->display_options['fields']['group_group']['id'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['table'] = 'field_data_group_group';
  $handler->display->display_options['fields']['group_group']['field'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['label'] = 'Active';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Project Creation Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Estimated Completion Date */
  $handler->display->display_options['fields']['field_estimated_completion_date']['id'] = 'field_estimated_completion_date';
  $handler->display->display_options['fields']['field_estimated_completion_date']['table'] = 'field_data_field_estimated_completion_date';
  $handler->display->display_options['fields']['field_estimated_completion_date']['field'] = 'field_estimated_completion_date';
  $handler->display->display_options['fields']['field_estimated_completion_date']['label'] = 'Est Completion Date';
  $handler->display->display_options['fields']['field_estimated_completion_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: OG membership: Group ID */
  $handler->display->display_options['fields']['gid']['id'] = 'gid';
  $handler->display->display_options['fields']['gid']['table'] = 'og_membership';
  $handler->display->display_options['fields']['gid']['field'] = 'gid';
  $handler->display->display_options['fields']['gid']['relationship'] = 'og_membership_rel_group';
  $handler->display->display_options['fields']['gid']['label'] = '';
  $handler->display->display_options['fields']['gid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['gid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['gid']['separator'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_project' => 'cm_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project Status (field_project_status) */
  $handler->display->display_options['filters']['field_project_status_value']['id'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['filters']['field_project_status_value']['field'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['value'] = array(
    'Active' => 'Active',
  );
  $handler->display->display_options['filters']['field_project_status_value']['group'] = 1;
  /* Filter criterion: Content: Estimated Completion Date (field_estimated_completion_date) */
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['id'] = 'field_estimated_completion_date_value';
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['table'] = 'field_data_field_estimated_completion_date';
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['field'] = 'field_estimated_completion_date_value';
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['year_range'] = '-10:+0';
  /* Filter criterion: PHP: remove_row (if group has shows) */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['ui_name'] = 'PHP: remove_row (if group has shows)';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'return pcm_project_view_projects_date_past_remove_row($row->gid);';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Series Frequency (field_series_frequency) */
  $handler->display->display_options['filters']['field_series_frequency_tid']['id'] = 'field_series_frequency_tid';
  $handler->display->display_options['filters']['field_series_frequency_tid']['table'] = 'field_data_field_series_frequency';
  $handler->display->display_options['filters']['field_series_frequency_tid']['field'] = 'field_series_frequency_tid';
  $handler->display->display_options['filters']['field_series_frequency_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_series_frequency_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['operator_id'] = 'field_series_frequency_tid_op';
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['label'] = 'Series Frequency';
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['operator'] = 'field_series_frequency_tid_op';
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['identifier'] = 'field_series_frequency_tid';
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_series_frequency_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_series_frequency_tid']['vocabulary'] = 'frequency';
  /* Filter criterion: Content: Live (field_live) */
  $handler->display->display_options['filters']['field_live_value']['id'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['table'] = 'field_data_field_live';
  $handler->display->display_options['filters']['field_live_value']['field'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['group'] = 1;
  $handler->display->display_options['filters']['field_live_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_live_value']['expose']['operator_id'] = 'field_live_value_op';
  $handler->display->display_options['filters']['field_live_value']['expose']['label'] = 'Live';
  $handler->display->display_options['filters']['field_live_value']['expose']['operator'] = 'field_live_value_op';
  $handler->display->display_options['filters']['field_live_value']['expose']['identifier'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Production Type (field_format) */
  $handler->display->display_options['filters']['field_format_tid']['id'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['table'] = 'field_data_field_format';
  $handler->display->display_options['filters']['field_format_tid']['field'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_format_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_format_tid']['expose']['operator_id'] = 'field_format_tid_op';
  $handler->display->display_options['filters']['field_format_tid']['expose']['label'] = 'Production Type';
  $handler->display->display_options['filters']['field_format_tid']['expose']['operator'] = 'field_format_tid_op';
  $handler->display->display_options['filters']['field_format_tid']['expose']['identifier'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_format_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_format_tid']['vocabulary'] = 'production_type';
  /* Filter criterion: Content: Project Type (field_cm_project_types) */
  $handler->display->display_options['filters']['field_cm_project_types_tid']['id'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['table'] = 'field_data_field_cm_project_types';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['field'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_cm_project_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['operator_id'] = 'field_cm_project_types_tid_op';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['label'] = 'Project Type';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['operator'] = 'field_cm_project_types_tid_op';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['identifier'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_cm_project_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['vocabulary'] = 'cm_project_types';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/programming/projects/active-completion-date-past';
  $handler->display->display_options['menu']['title'] = 'Projects: Active Completion Date Past';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Project: Active Completion Date Past */
  $handler = $view->new_display('block', 'Project: Active Completion Date Past', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/admin/programming/projects/active-completion-date-past">See All</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_project' => 'cm_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project Status (field_project_status) */
  $handler->display->display_options['filters']['field_project_status_value']['id'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['filters']['field_project_status_value']['field'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['value'] = array(
    'Active' => 'Active',
  );
  $handler->display->display_options['filters']['field_project_status_value']['group'] = 1;
  /* Filter criterion: Content: Estimated Completion Date (field_estimated_completion_date) */
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['id'] = 'field_estimated_completion_date_value';
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['table'] = 'field_data_field_estimated_completion_date';
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['field'] = 'field_estimated_completion_date_value';
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_estimated_completion_date_value']['year_range'] = '-10:+0';
  /* Filter criterion: PHP: remove_row (if group has shows) */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['ui_name'] = 'PHP: remove_row (if group has shows)';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'return pcm_project_view_projects_date_past_remove_row($row->gid);';
  $export['projects_active_completion_date_past'] = $view;

  $view = new view();
  $view->name = 'projects_staff_dashboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects: Staff Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project: List Projects';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any cm_project content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = '<div class="messages status">There are currently no Projects that need review</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::workflow_vbo_given_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_cm_project_types']['id'] = 'field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['table'] = 'field_data_field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['field'] = 'field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Producer';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['group_group']['id'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['table'] = 'field_data_group_group';
  $handler->display->display_options['fields']['group_group']['field'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['label'] = 'Active';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Add Show';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/node/add/cm-show?og_group_ref=[nid]">Add Show</a>';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Add Series Request';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return cm_series_request_my_projects_view_field($row);';
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
print cm_series_request_my_projects_view_field($row);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Series Request */
  $handler->display->display_options['fields']['field_series_requests_current']['id'] = 'field_series_requests_current';
  $handler->display->display_options['fields']['field_series_requests_current']['table'] = 'field_data_field_series_requests_current';
  $handler->display->display_options['fields']['field_series_requests_current']['field'] = 'field_series_requests_current';
  $handler->display->display_options['fields']['field_series_requests_current']['label'] = 'Recent Series Request';
  $handler->display->display_options['fields']['field_series_requests_current']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_series_requests_current']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_series_requests_current']['click_sort_column'] = 'vname';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Number of Seasons';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return pcm_project_get_season_number_view_field($row);';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_project' => 'cm_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
  );
  /* Filter criterion: Content: Series Frequency (field_series_frequency) */
  $handler->display->display_options['filters']['field_series_frequency_tid']['id'] = 'field_series_frequency_tid';
  $handler->display->display_options['filters']['field_series_frequency_tid']['table'] = 'field_data_field_series_frequency';
  $handler->display->display_options['filters']['field_series_frequency_tid']['field'] = 'field_series_frequency_tid';
  $handler->display->display_options['filters']['field_series_frequency_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_series_frequency_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['operator_id'] = 'field_series_frequency_tid_op';
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['label'] = 'Series Frequency';
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['operator'] = 'field_series_frequency_tid_op';
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['identifier'] = 'field_series_frequency_tid';
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_series_frequency_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_series_frequency_tid']['vocabulary'] = 'frequency';
  /* Filter criterion: Content: Live (field_live) */
  $handler->display->display_options['filters']['field_live_value']['id'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['table'] = 'field_data_field_live';
  $handler->display->display_options['filters']['field_live_value']['field'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['group'] = 1;
  $handler->display->display_options['filters']['field_live_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_live_value']['expose']['operator_id'] = 'field_live_value_op';
  $handler->display->display_options['filters']['field_live_value']['expose']['label'] = 'Live';
  $handler->display->display_options['filters']['field_live_value']['expose']['operator'] = 'field_live_value_op';
  $handler->display->display_options['filters']['field_live_value']['expose']['identifier'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Production Type (field_format) */
  $handler->display->display_options['filters']['field_format_tid']['id'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['table'] = 'field_data_field_format';
  $handler->display->display_options['filters']['field_format_tid']['field'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_format_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_format_tid']['expose']['operator_id'] = 'field_format_tid_op';
  $handler->display->display_options['filters']['field_format_tid']['expose']['label'] = 'Production Type';
  $handler->display->display_options['filters']['field_format_tid']['expose']['operator'] = 'field_format_tid_op';
  $handler->display->display_options['filters']['field_format_tid']['expose']['identifier'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_format_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_format_tid']['vocabulary'] = 'production_type';
  /* Filter criterion: Content: Project Type (field_cm_project_types) */
  $handler->display->display_options['filters']['field_cm_project_types_tid']['id'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['table'] = 'field_data_field_cm_project_types';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['field'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_cm_project_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['operator_id'] = 'field_cm_project_types_tid_op';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['label'] = 'Project Type';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['operator'] = 'field_cm_project_types_tid_op';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['identifier'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_cm_project_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['vocabulary'] = 'cm_project_types';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Group (group_group) */
  $handler->display->display_options['filters']['group_group_value']['id'] = 'group_group_value';
  $handler->display->display_options['filters']['group_group_value']['table'] = 'field_data_group_group';
  $handler->display->display_options['filters']['group_group_value']['field'] = 'group_group_value';
  $handler->display->display_options['filters']['group_group_value']['group'] = 1;
  $handler->display->display_options['filters']['group_group_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['group_group_value']['expose']['operator_id'] = 'group_group_value_op';
  $handler->display->display_options['filters']['group_group_value']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['group_group_value']['expose']['operator'] = 'group_group_value_op';
  $handler->display->display_options['filters']['group_group_value']['expose']['identifier'] = 'group_group_value';
  $handler->display->display_options['filters']['group_group_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/projects/search';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '-18';
  $handler->display->display_options['menu']['name'] = 'management';

  /* Display: Project: Admin Block */
  $handler = $view->new_display('block', 'Project: Admin Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Projects';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/admin/projects/search">See All</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Project ID';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_cm_project_types']['id'] = 'field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['table'] = 'field_data_field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['field'] = 'field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Producer';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['group_group']['id'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['table'] = 'field_data_group_group';
  $handler->display->display_options['fields']['group_group']['field'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['label'] = 'Active';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Add Show';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/add/cm-show?og_group_ref=[nid]">Add Show</a>';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Number of Seasons';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return pcm_project_get_season_number_view_field($row);';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Add Series Request';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return cm_series_request_my_projects_view_field($row);';
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
print cm_series_request_my_projects_view_field($row);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_project' => 'cm_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['projects_staff_dashboard'] = $view;

  return $export;
}
