<?php
/**
 * @file
 * wim_block_management.features.felix_region.inc
 */

/**
 * Implements hook_felix_default_regions().
 */
function wim_block_management_felix_default_regions() {
  $regions = array();
  $regions['content'] = array(
    'name' => 'content',
    'title' => 'Content',
    'region' => 'content',
    'weight' => 0,
    'context' => 'sidewide',
    'block_set' => 'default',
    'data' => array(
      'hash' => array(
        0 => 'path',
      ),
    ),
  );
  $regions['content-bottom'] = array(
    'name' => 'content-bottom',
    'title' => 'Content Bottom',
    'region' => 'content_bottom',
    'weight' => 0,
    'context' => 'sidewide',
    'block_set' => 'default',
    'data' => array(
      'hash' => array(
        0 => 'path',
      ),
    ),
  );
  $regions['footer'] = array(
    'name' => 'footer',
    'title' => 'Footer',
    'region' => 'footer',
    'weight' => 0,
    'context' => 'sidewide',
    'block_set' => 'default',
    'data' => array(
      'hash' => array(),
    ),
  );
  $regions['highlighted'] = array(
    'name' => 'highlighted',
    'title' => 'Highlighted',
    'region' => 'highlighted',
    'weight' => 0,
    'context' => 'sidewide',
    'block_set' => 'default',
    'data' => array(
      'hash' => array(
        0 => 'path',
      ),
    ),
  );
  $regions['primary'] = array(
    'name' => 'primary',
    'title' => 'Sidebar First',
    'region' => 'sidebar_first',
    'weight' => 0,
    'context' => 'sidewide',
    'block_set' => 'default',
    'data' => array(
      'hash' => array(
        0 => 'path',
      ),
    ),
  );
  $regions['secondary'] = array(
    'name' => 'secondary',
    'title' => 'Sidebar Second',
    'region' => 'sidebar_second',
    'weight' => 0,
    'context' => 'sidewide',
    'block_set' => 'default',
    'data' => array(
      'hash' => array(
        0 => 'path',
      ),
    ),
  );
  $regions['sidebar-first-search'] = array(
    'name' => 'sidebar-first-search',
    'title' => 'Sidebar First Search',
    'region' => 'sidebar_first',
    'weight' => 1,
    'context' => 'search',
    'block_set' => 'default',
    'data' => array(
      'hash' => array(),
    ),
  );
  return $regions;
}
