<?php

/**
 * @file
 * leader_board_entry_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function leader_board_entry_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear british_cycle_quest feeds'.
  $permissions['clear british_cycle_quest feeds'] = array(
    'name' => 'clear british_cycle_quest feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'convert from leader_board_entry'.
  $permissions['convert from leader_board_entry'] = array(
    'name' => 'convert from leader_board_entry',
    'roles' => array(),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to leader_board_entry'.
  $permissions['convert to leader_board_entry'] = array(
    'name' => 'convert to leader_board_entry',
    'roles' => array(),
    'module' => 'node_convert',
  );

  // Exported permission: 'create leader_board_entry content'.
  $permissions['create leader_board_entry content'] = array(
    'name' => 'create leader_board_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any leader_board_entry content'.
  $permissions['delete any leader_board_entry content'] = array(
    'name' => 'delete any leader_board_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own leader_board_entry content'.
  $permissions['delete own leader_board_entry content'] = array(
    'name' => 'delete own leader_board_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any leader_board_entry content'.
  $permissions['edit any leader_board_entry content'] = array(
    'name' => 'edit any leader_board_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own leader_board_entry content'.
  $permissions['edit own leader_board_entry content'] = array(
    'name' => 'edit own leader_board_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'import british_cycle_quest feeds'.
  $permissions['import british_cycle_quest feeds'] = array(
    'name' => 'import british_cycle_quest feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock british_cycle_quest feeds'.
  $permissions['unlock british_cycle_quest feeds'] = array(
    'name' => 'unlock british_cycle_quest feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'view any unpublished leader_board_entry content'.
  $permissions['view any unpublished leader_board_entry content'] = array(
    'name' => 'view any unpublished leader_board_entry content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
