<?php
/**
 * @file
 * pnw_announcements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnw_announcements_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pnw_announcements_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pnw_announcements_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Handbook Announcement'),
      'base' => 'node_content',
      'description' => t('Use for adding announcements to the homepage and/or individual articles and pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
