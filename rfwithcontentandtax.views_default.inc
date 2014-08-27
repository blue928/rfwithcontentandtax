<?php
/**
 * @file
 * rfwithcontentandtax.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rfwithcontentandtax_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'basic_search';
  $view->description = 'Custom search form for the Resource Finder project';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Basic Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Basic Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Alternate Title */
  $handler->display->display_options['fields']['field_rf_admin_alternate_title']['id'] = 'field_rf_admin_alternate_title';
  $handler->display->display_options['fields']['field_rf_admin_alternate_title']['table'] = 'field_data_field_rf_admin_alternate_title';
  $handler->display->display_options['fields']['field_rf_admin_alternate_title']['field'] = 'field_rf_admin_alternate_title';
  $handler->display->display_options['fields']['field_rf_admin_alternate_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rf_admin_alternate_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rf_admin_alternate_title']['hide_empty'] = TRUE;
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_rf_publication_date']['id'] = 'field_rf_publication_date';
  $handler->display->display_options['fields']['field_rf_publication_date']['table'] = 'field_data_field_rf_publication_date';
  $handler->display->display_options['fields']['field_rf_publication_date']['field'] = 'field_rf_publication_date';
  $handler->display->display_options['fields']['field_rf_publication_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_rf_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Format */
  $handler->display->display_options['fields']['field_rf_em_format']['id'] = 'field_rf_em_format';
  $handler->display->display_options['fields']['field_rf_em_format']['table'] = 'field_data_field_rf_em_format';
  $handler->display->display_options['fields']['field_rf_em_format']['field'] = 'field_rf_em_format';
  $handler->display->display_options['fields']['field_rf_em_format']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_rf_em_format']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_rf_em_format']['group_column'] = 'value';
  $handler->display->display_options['fields']['field_rf_em_format']['delta_offset'] = '0';
  /* Field: Content: Target Audience */
  $handler->display->display_options['fields']['field_ield_rf_em_target_audience']['id'] = 'field_ield_rf_em_target_audience';
  $handler->display->display_options['fields']['field_ield_rf_em_target_audience']['table'] = 'field_data_field_ield_rf_em_target_audience';
  $handler->display->display_options['fields']['field_ield_rf_em_target_audience']['field'] = 'field_ield_rf_em_target_audience';
  $handler->display->display_options['fields']['field_ield_rf_em_target_audience']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ield_rf_em_target_audience']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ield_rf_em_target_audience']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_rf_resource_description']['id'] = 'field_rf_resource_description';
  $handler->display->display_options['fields']['field_rf_resource_description']['table'] = 'field_data_field_rf_resource_description';
  $handler->display->display_options['fields']['field_rf_resource_description']['field'] = 'field_rf_resource_description';
  $handler->display->display_options['fields']['field_rf_resource_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rf_resource_description']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_rf_resource_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rf_resource_description']['alter']['trim'] = TRUE;
  /* Field: Content: Available Languages */
  $handler->display->display_options['fields']['field_rf_em_languages_available']['id'] = 'field_rf_em_languages_available';
  $handler->display->display_options['fields']['field_rf_em_languages_available']['table'] = 'field_data_field_rf_em_languages_available';
  $handler->display->display_options['fields']['field_rf_em_languages_available']['field'] = 'field_rf_em_languages_available';
  $handler->display->display_options['fields']['field_rf_em_languages_available']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_rf_em_languages_available']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_rf_em_languages_available']['delta_offset'] = '0';
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
    'snaped_resource_finder' => 'snaped_resource_finder',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['operator'] = 'required';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Basic Search Page */
  $handler = $view->new_display('page', 'Basic Search Page', 'page');
  $handler->display->display_options['path'] = 'basic-search';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Basic Search';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['basic_search'] = $view;

  $view = new view();
  $view->name = 'search2';
  $view->description = 'Custom search form for the Resource Finder project';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'search2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Advanced Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Alternate Title */
  $handler->display->display_options['fields']['field_rf_admin_alternate_title']['id'] = 'field_rf_admin_alternate_title';
  $handler->display->display_options['fields']['field_rf_admin_alternate_title']['table'] = 'field_data_field_rf_admin_alternate_title';
  $handler->display->display_options['fields']['field_rf_admin_alternate_title']['field'] = 'field_rf_admin_alternate_title';
  $handler->display->display_options['fields']['field_rf_admin_alternate_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rf_admin_alternate_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rf_admin_alternate_title']['hide_empty'] = TRUE;
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_rf_publication_date']['id'] = 'field_rf_publication_date';
  $handler->display->display_options['fields']['field_rf_publication_date']['table'] = 'field_data_field_rf_publication_date';
  $handler->display->display_options['fields']['field_rf_publication_date']['field'] = 'field_rf_publication_date';
  $handler->display->display_options['fields']['field_rf_publication_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_rf_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Format */
  $handler->display->display_options['fields']['field_rf_em_format']['id'] = 'field_rf_em_format';
  $handler->display->display_options['fields']['field_rf_em_format']['table'] = 'field_data_field_rf_em_format';
  $handler->display->display_options['fields']['field_rf_em_format']['field'] = 'field_rf_em_format';
  $handler->display->display_options['fields']['field_rf_em_format']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_rf_em_format']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_rf_em_format']['group_column'] = 'value';
  $handler->display->display_options['fields']['field_rf_em_format']['delta_offset'] = '0';
  /* Field: Content: Target Audience */
  $handler->display->display_options['fields']['field_ield_rf_em_target_audience']['id'] = 'field_ield_rf_em_target_audience';
  $handler->display->display_options['fields']['field_ield_rf_em_target_audience']['table'] = 'field_data_field_ield_rf_em_target_audience';
  $handler->display->display_options['fields']['field_ield_rf_em_target_audience']['field'] = 'field_ield_rf_em_target_audience';
  $handler->display->display_options['fields']['field_ield_rf_em_target_audience']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ield_rf_em_target_audience']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ield_rf_em_target_audience']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_rf_resource_description']['id'] = 'field_rf_resource_description';
  $handler->display->display_options['fields']['field_rf_resource_description']['table'] = 'field_data_field_rf_resource_description';
  $handler->display->display_options['fields']['field_rf_resource_description']['field'] = 'field_rf_resource_description';
  $handler->display->display_options['fields']['field_rf_resource_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rf_resource_description']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_rf_resource_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rf_resource_description']['alter']['trim'] = TRUE;
  /* Field: Content: Available Languages */
  $handler->display->display_options['fields']['field_rf_em_languages_available']['id'] = 'field_rf_em_languages_available';
  $handler->display->display_options['fields']['field_rf_em_languages_available']['table'] = 'field_data_field_rf_em_languages_available';
  $handler->display->display_options['fields']['field_rf_em_languages_available']['field'] = 'field_rf_em_languages_available';
  $handler->display->display_options['fields']['field_rf_em_languages_available']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_rf_em_languages_available']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_rf_em_languages_available']['delta_offset'] = '0';
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
    'snaped_resource_finder' => 'snaped_resource_finder',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['operator'] = 'required';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Is this material free? (field_is_material_free) */
  $handler->display->display_options['filters']['field_is_material_free_value']['id'] = 'field_is_material_free_value';
  $handler->display->display_options['filters']['field_is_material_free_value']['table'] = 'field_data_field_is_material_free';
  $handler->display->display_options['filters']['field_is_material_free_value']['field'] = 'field_is_material_free_value';
  $handler->display->display_options['filters']['field_is_material_free_value']['value'] = array(
    'Yes' => 'Yes',
    'No' => 'No',
  );
  $handler->display->display_options['filters']['field_is_material_free_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_is_material_free_value']['expose']['operator_id'] = 'field_is_material_free_value_op';
  $handler->display->display_options['filters']['field_is_material_free_value']['expose']['label'] = 'Show only free materials?';
  $handler->display->display_options['filters']['field_is_material_free_value']['expose']['operator'] = 'field_is_material_free_value_op';
  $handler->display->display_options['filters']['field_is_material_free_value']['expose']['identifier'] = 'field_is_material_free_value';
  $handler->display->display_options['filters']['field_is_material_free_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_is_material_free_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_is_material_free_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Which Region (field_rf_which_region) */
  $handler->display->display_options['filters']['field_rf_which_region_value']['id'] = 'field_rf_which_region_value';
  $handler->display->display_options['filters']['field_rf_which_region_value']['table'] = 'field_data_field_rf_which_region';
  $handler->display->display_options['filters']['field_rf_which_region_value']['field'] = 'field_rf_which_region_value';
  $handler->display->display_options['filters']['field_rf_which_region_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rf_which_region_value']['expose']['operator_id'] = 'field_rf_which_region_value_op';
  $handler->display->display_options['filters']['field_rf_which_region_value']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_rf_which_region_value']['expose']['operator'] = 'field_rf_which_region_value_op';
  $handler->display->display_options['filters']['field_rf_which_region_value']['expose']['identifier'] = 'field_rf_which_region_value';
  $handler->display->display_options['filters']['field_rf_which_region_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_rf_which_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
  );
  /* Filter criterion: Content: Available Languages (field_rf_em_languages_available) */
  $handler->display->display_options['filters']['field_rf_em_languages_available_tid']['id'] = 'field_rf_em_languages_available_tid';
  $handler->display->display_options['filters']['field_rf_em_languages_available_tid']['table'] = 'field_data_field_rf_em_languages_available';
  $handler->display->display_options['filters']['field_rf_em_languages_available_tid']['field'] = 'field_rf_em_languages_available_tid';
  $handler->display->display_options['filters']['field_rf_em_languages_available_tid']['value'] = array(
    42 => '42',
    43 => '43',
    40 => '40',
    44 => '44',
    1 => '1',
    50 => '50',
  );
  $handler->display->display_options['filters']['field_rf_em_languages_available_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rf_em_languages_available_tid']['expose']['operator_id'] = 'field_rf_em_languages_available_tid_op';
  $handler->display->display_options['filters']['field_rf_em_languages_available_tid']['expose']['label'] = 'Available Languages';
  $handler->display->display_options['filters']['field_rf_em_languages_available_tid']['expose']['operator'] = 'field_rf_em_languages_available_tid_op';
  $handler->display->display_options['filters']['field_rf_em_languages_available_tid']['expose']['identifier'] = 'field_rf_em_languages_available_tid';
  $handler->display->display_options['filters']['field_rf_em_languages_available_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_rf_em_languages_available_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_rf_em_languages_available_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_rf_em_languages_available_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_rf_em_languages_available_tid']['vocabulary'] = 'available_languages';
  /* Filter criterion: Content: Format (field_rf_em_format) */
  $handler->display->display_options['filters']['field_rf_em_format_tid_1']['id'] = 'field_rf_em_format_tid_1';
  $handler->display->display_options['filters']['field_rf_em_format_tid_1']['table'] = 'field_data_field_rf_em_format';
  $handler->display->display_options['filters']['field_rf_em_format_tid_1']['field'] = 'field_rf_em_format_tid';
  $handler->display->display_options['filters']['field_rf_em_format_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rf_em_format_tid_1']['expose']['operator_id'] = 'field_rf_em_format_tid_1_op';
  $handler->display->display_options['filters']['field_rf_em_format_tid_1']['expose']['label'] = 'Format';
  $handler->display->display_options['filters']['field_rf_em_format_tid_1']['expose']['operator'] = 'field_rf_em_format_tid_1_op';
  $handler->display->display_options['filters']['field_rf_em_format_tid_1']['expose']['identifier'] = 'field_rf_em_format_tid_1';
  $handler->display->display_options['filters']['field_rf_em_format_tid_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_rf_em_format_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_rf_em_format_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_rf_em_format_tid_1']['vocabulary'] = 'resource_finder_format';
  /* Filter criterion: Content: Target Audience (field_ield_rf_em_target_audience) */
  $handler->display->display_options['filters']['field_ield_rf_em_target_audience_tid']['id'] = 'field_ield_rf_em_target_audience_tid';
  $handler->display->display_options['filters']['field_ield_rf_em_target_audience_tid']['table'] = 'field_data_field_ield_rf_em_target_audience';
  $handler->display->display_options['filters']['field_ield_rf_em_target_audience_tid']['field'] = 'field_ield_rf_em_target_audience_tid';
  $handler->display->display_options['filters']['field_ield_rf_em_target_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ield_rf_em_target_audience_tid']['expose']['operator_id'] = 'field_ield_rf_em_target_audience_tid_op';
  $handler->display->display_options['filters']['field_ield_rf_em_target_audience_tid']['expose']['label'] = 'Target Audience';
  $handler->display->display_options['filters']['field_ield_rf_em_target_audience_tid']['expose']['operator'] = 'field_ield_rf_em_target_audience_tid_op';
  $handler->display->display_options['filters']['field_ield_rf_em_target_audience_tid']['expose']['identifier'] = 'field_ield_rf_em_target_audience_tid';
  $handler->display->display_options['filters']['field_ield_rf_em_target_audience_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_ield_rf_em_target_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_ield_rf_em_target_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ield_rf_em_target_audience_tid']['vocabulary'] = 'resource_finder_target_audience';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search2';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Search';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['search2'] = $view;

  return $export;
}
