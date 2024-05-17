<?php


/**
 * @file
 */

/**
 * Class to handle saving Family Membership line item data to CARE.
 */
class CyclingUkCommerceFamilyMembershipSelf extends CyclingUkCommerceFamilyMembership {

  /**
   * Save this line item's data to CARE.
   */
  public function saveToCare() {
    $this->log('CyclingUkCommerceFamilyMembershipSelf saveToCare()...');
    parent::saveToCare();
    $this->log('...CyclingUkCommerceFamilyMembershipSelf saveToCare() done.');
  }

}
