<?php


/**
 * @file
 */

/**
 * Class to handle saving Affiliate Membership line item data to CARE.
 */
class CyclingUkCommerceAffiliateMembership extends CyclingUkCommerceMembership {

  /**
   * Constructor.
   */
  public function __construct($order, $line_item) {
    $this->progress['affiliate_ComplimentaryRelationship'] = '';
    parent::__construct($order, $line_item);
  }

  /**
   * Save this line item's data to CARE.
   */
  public function saveToCare() {
    $this->log('CyclingUkCommerceAffiliateMembership saveToCare()...');
    parent::saveToCare();
    $this->saveAffiliateLink();
    $this->log('...CyclingUkCommerceAffiliateMembership saveToCare() done.');
  }

  /**
   * Save the link to the affiliate club.
   */
  protected function saveAffiliateLink() {
    $this->log('saveAffiliateLink()...');
    if ($this->progress['affiliate_ComplimentaryRelationship']) {
      $this->log('AffiliateLink %cr already saved.', [
        '%cr' => $this->progress['affiliate_ComplimentaryRelationship'],
      ]);
      return;
    }
    $affiliate_number = $this->lineItem->field_affiliate_club_code->value();
    $data = [
      'ContactNumber' => $this->memberContactNumber,
      'ContactNumber2' => $affiliate_number,
      'Relationship' => 'AFM',
      'ValidFrom' => date('d/m/Y'),
    ];
    $resultxml = care_call_method('AddLink', $data);
    if (isset($resultxml->ErrorMessage)) {
      // Log failure.
      watchdog('cyclinguk_commerce', 'CyclingUkCommerceAffiliateMembership failed to AddLink: %error.', [
        '%error' => (string) $resultxml->ErrorMessage,
      ], WATCHDOG_CRITICAL);
    }
    else {
      // Save progress.
      $this->progress['affiliate_ComplimentaryRelationship'] = (string) $resultxml->ComplimentaryRelationship;
      $this->saveProgress();
      // Log status.
      $this->log('AddLink: ComplimentaryRelationship = %s', [
        '%s' => (string) $resultxml->ComplimentaryRelationship,
      ]);
    }
    $this->log('...saveAffiliateLink() done.');
  }

  protected function isCompleted() {
    $parent_completed = parent::isCompleted();
    $link_completed = $this->progress['affiliate_ComplimentaryRelationship'];
    return ($parent_completed && $link_completed);
  }
}
