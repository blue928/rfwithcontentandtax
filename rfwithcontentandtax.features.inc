<?php
/**
 * @file
 * rfwithcontentandtax.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rfwithcontentandtax_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rfwithcontentandtax_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rfwithcontentandtax_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'snaped_resource_finder' => array(
      'name' => t('SNAPEd Resource Finder'),
      'base' => 'node_content',
      'description' => t('SNAP-Ed resource finder database'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('According to the Paperwork Reduction Act of 1995, an agency may not conduct or sponsor, and a person is not required to respond to, a collection of information unless it displays a valid OMB control number. The valid OMB control number for this information collection is 0518-0031.  The time required to complete this information collection is estimated to average 10 minutes per response, including the time for reviewing instructions, searching existing data sources, gathering and maintaining the data needed, and completing and reviewing the collection of information.'),
    ),
    'snaped_shared_content' => array(
      'name' => t('SNAPEd Shared Content'),
      'base' => 'node_content',
      'description' => t('This is the SNAP-Ed Connection Resource Sharing Form. This form is for both Anonymous users and Resource managers (admins). Different fields are shown based on role.'),
      'has_title' => '1',
      'title_label' => t('Resource Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
