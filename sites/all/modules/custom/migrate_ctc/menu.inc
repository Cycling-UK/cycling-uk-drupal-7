<?php


/**
 * Extend the default DrupalNode6Migration class to add field migrations.
 */
class MigrateDrupalMenu6Migration extends DrupalMenu6Migration {

  protected $all_node_migrations = array(
    'node_info');
  /**
   * Extend parent constructor to add additional field mappings.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    return FALSE;
  }



}
