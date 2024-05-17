<?php


/**
 * @file
 */

/**
 * Class to handle saving Affiliate Membership line item data to CARE.
 */
class CyclingUkCommerceAffiliateMembershipSelf extends CyclingUkCommerceAffiliateMembership {

  /**
   * Save this line item's data to CARE.
   */
  public function saveToCare() {
    $this->log('CyclingUkCommerceAffiliateMembershipSelf saveToCare()...');
    parent::saveToCare();
    $this->log('...CyclingUkCommerceAffiliateMembershipSelf saveToCare() done.');
  }

}
