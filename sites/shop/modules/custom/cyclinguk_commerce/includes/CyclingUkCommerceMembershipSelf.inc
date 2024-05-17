<?php


/**
 * @file
 */

/**
 * Class to handle saving Membership line item data to CARE.
 */
class CyclingUkCommerceMembershipSelf extends CyclingUkCommerceMembership {

  /**
   * Save this line item's data to CARE.
   */
  public function saveToCare() {
    $this->log('CyclingUkCommerceMembershipSelf saveToCare()...');
    parent::saveToCare();
    $this->log('...CyclingUkCommerceMembershipSelf saveToCare() done.');
  }

}
