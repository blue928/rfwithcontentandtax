<?php
/**
 * @file
 * rfwithcontentandtax.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rfwithcontentandtax_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_custom_field_group|node|article|form';
  $field_group->group_name = 'group_custom_field_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'custom field group',
    'weight' => '4',
    'children' => array(
      0 => 'field_test_custom_text_field',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-custom-field-group field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_custom_field_group|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_developer_information|node|snaped_shared_content|form';
  $field_group->group_name = 'group_developer_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'snaped_shared_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Part III',
    'weight' => '13',
    'children' => array(
      0 => 'field_target_audience',
      1 => 'field_readability_formula_name',
      2 => 'field_readability_formula_score',
      3 => 'field_pilot_studies',
      4 => 'field_validation_tool',
      5 => 'field_funding_source',
      6 => 'field_developer_comments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-developer-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_developer_information|node|snaped_shared_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_distributor_contact|node|snaped_shared_content|form';
  $field_group->group_name = 'group_distributor_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'snaped_shared_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publisher / Distributor contact',
    'weight' => '4',
    'children' => array(
      0 => 'field_publisher_name',
      1 => 'field_publisher_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-distributor-contact field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_distributor_contact|node|snaped_shared_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_distributor_information|node|snaped_shared_content|form';
  $field_group->group_name = 'group_distributor_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'snaped_shared_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Part IV: Publisher / Distributor Information',
    'weight' => '20',
    'children' => array(
      0 => 'field_isbn_number_if_applicable_',
      1 => 'field_material_usage',
      2 => 'field_ordering_information',
      3 => 'field_quantity_orders',
      4 => 'field_bulk_discounts',
      5 => 'field_distributor_comments',
      6 => 'field_free',
      7 => 'field_cost',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-distributor-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_distributor_information|node|snaped_shared_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_document_upload|node|snaped_resource_finder|form';
  $field_group->group_name = 'group_document_upload';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'snaped_resource_finder';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Document Upload',
    'weight' => '3',
    'children' => array(
      0 => 'field_rf_upload_documents',
      1 => 'field_rf_upload_screenshot',
      2 => 'field_rf_resource_online_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Document Upload',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-document-upload field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_document_upload|node|snaped_resource_finder|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_part_1_about_you|node|snaped_shared_content|form';
  $field_group->group_name = 'group_part_1_about_you';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'snaped_shared_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Part I: About You',
    'weight' => '2',
    'children' => array(
      0 => 'field_your_name',
      1 => 'field_your_email_address',
      2 => 'field_relationship_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Part I: About You',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-part-1-about-you field-group-fieldset',
        'description' => 'Please provide your contact inforamation in case we have questions about this resource. View our Privacy Policy.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_part_1_about_you|node|snaped_shared_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_part_2_res_info|node|snaped_shared_content|form';
  $field_group->group_name = 'group_part_2_res_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'snaped_shared_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Part II. Resource Information',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_developer_author',
      2 => 'field_primary_author_s_affiliati',
      3 => 'field_publication_revision_date',
      4 => 'field_edition',
      5 => 'field_purpose_used',
      6 => 'field_available_languages',
      7 => 'field_resource_url',
      8 => 'field_resource_description',
      9 => 'field_alternate_title',
      10 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-part-2-res-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_part_2_res_info|node|snaped_shared_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rf_administrative|node|snaped_shared_content|form';
  $field_group->group_name = 'group_rf_administrative';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'snaped_shared_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administrative',
    'weight' => '28',
    'children' => array(
      0 => 'field_rf_admin_categories',
      1 => 'field_rf_admin_tags',
      2 => 'field_rf_admin_follows_dga_',
      3 => 'field_rf_admin_dga_notes',
      4 => 'field_rf_reviewer_comments',
      5 => 'field_rf_admin_internal_notes',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-rf-administrative field-group-htabs',
      ),
    ),
  );
  $export['group_rf_administrative|node|snaped_shared_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rf_admin|node|snaped_resource_finder|form';
  $field_group->group_name = 'group_rf_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'snaped_resource_finder';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administrative',
    'weight' => '6',
    'children' => array(
      0 => 'field_rf_admin_categories',
      1 => 'field_rf_admin_tags',
      2 => 'field_rf_admin_follows_dga_',
      3 => 'field_rf_admin_dga_notes',
      4 => 'field_rf_reviewer_comments',
      5 => 'field_rf_admin_internal_notes',
      6 => 'field_rf_admin_alternate_title',
      7 => 'field_rf_admin_nal_call_number',
      8 => 'field_rf_admin_historical_resour',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Administrative',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-administrative',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_rf_admin|node|snaped_resource_finder|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rf_em|node|snaped_resource_finder|form';
  $field_group->group_name = 'group_rf_em';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'snaped_resource_finder';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Educational Material Information',
    'weight' => '5',
    'children' => array(
      0 => 'field_rf_em_how_submitted',
      1 => 'field_rf_em_area_specific_res',
      2 => 'field_rf_em_are_recipes_provided',
      3 => 'field_rf_em_nut_facts_panels',
      4 => 'field_rf_em_edu_materials_note',
      5 => 'field_rf_field_format_other',
      6 => 'field_rf_target_audience_other',
      7 => 'field_rf_eval_activ_other',
      8 => 'field_rf_language_other',
      9 => 'field_rf_em_languages_available',
      10 => 'field_rf_em_which_guidelines',
      11 => 'field_rf_em_eval_activities',
      12 => 'field_rf_em_format',
      13 => 'field_ield_rf_em_target_audience',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Educational Material Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-rf-em field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_rf_em|node|snaped_resource_finder|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rf_ordering_information|node|snaped_resource_finder|form';
  $field_group->group_name = 'group_rf_ordering_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'snaped_resource_finder';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ordering Information',
    'weight' => '4',
    'children' => array(
      0 => 'field_is_material_free',
      1 => 'field_rf_material_cost',
      2 => 'field_rf_or_publisher',
      3 => 'field_rf_or_contact_name',
      4 => 'field_rf_or_address',
      5 => 'field_rf_or_email',
      6 => 'field_rf_or_phone',
      7 => 'field_rf_or_ordering_web_link',
      8 => 'field_rf_or_publication_number',
      9 => 'field_rf_or_ordering_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Ordering Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-rf-ordering-information field-group-fieldset',
        'description' => 'Please complete the following ordering information.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_rf_ordering_information|node|snaped_resource_finder|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rf_resource_information|node|snaped_resource_finder|form';
  $field_group->group_name = 'group_rf_resource_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'snaped_resource_finder';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information about the material you are submitting',
    'weight' => '2',
    'children' => array(
      0 => 'field_rf_resource_description',
      1 => 'field_rf_author',
      2 => 'field_rf_organization',
      3 => 'field_rf_contact_person_name',
      4 => 'field_rf_contact_person_email',
      5 => 'field_rf_funding_source',
      6 => 'field_rf_snaped_associated',
      7 => 'field_rf_which_state_territory',
      8 => 'field_rf_which_region',
      9 => 'field_rf_get_material',
      10 => 'field_is_em',
      11 => 'field_rf_publication_date',
      12 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Information about the material you are submitting',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-rf-resource-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_rf_resource_information|node|snaped_resource_finder|form'] = $field_group;

  return $export;
}
