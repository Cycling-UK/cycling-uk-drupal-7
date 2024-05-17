<?php


/**
 * @file
 */

/**
 * Class to handle saving Group Membership line item data to CARE.
 */
class CyclingUkCommerceGroupMembership extends CyclingUkCommerceMembership {

  /**
   * Constructor.
   */
  public function __construct($order, $line_item) {
    $this->progress['organisation_email_CommunicationNumber'] = 0;
    $this->progress['organisation_ContactPositionNumber'] = 0;
    parent::__construct($order, $line_item);
  }

  /**
   * Save this line item's data to CARE.
   */
  public function saveToCare() {
    $this->log('CyclingUkCommerceGroupMembership saveToCare()...');
    parent::saveToCare();
    $this->saveOrganisation();
    $this->saveOrganisationEmail();
    $this->saveGroupPosition();
    $this->saveMembership();
    $this->savePayment();
    $this->log('...CyclingUkCommerceGroupMembership saveToCare() done.');
  }

  /**
   * Save Organisation details.
   */
  protected function saveOrganisation() {
    $this->log('saveOrganisation()...');
    if ($this->progress['member_ContactNumber'] && $this->progress['member_AddressNumber']) {
      $this->memberContactNumber = $this->progress['member_ContactNumber'];
      $this->memberAddressNumber = $this->progress['member_AddressNumber'];
      // Log status.
      $this->log('Already added organisation %cn', [
        '%cn' => $this->progress['member_ContactNumber'],
      ]);
      return;
    }
    $address = $this->lineItem->field_care_address;
    $address_one_two = trim($address->address_line_1->value());
    if (trim($address->address_line_2->value())) {
      $address_one_two .= ', ' . trim($address->address_line_2->value());
    }
    $data = [
      'Name' => $this->lineItem->field_group_name->value(),
      'Address' => $address_one_two,
      'Town' => $address->town->value(),
      'County' => $address->county->value(),
      'Postcode' => $address->postcode->value(),
      'Country' => $address->country_code->value(),
      'Source' => 'OI',
    ];
    $resultxml = care_call_method('AddOrganisation', $data);
    if (isset($resultxml->ErrorMessage)) {
      // Log failure.
      watchdog('organisation_membership', 'CyclingUkCommerceGroupMembership failed to AddOrganisation: %error.', [
        '%error' => (string) $resultxml->ErrorMessage,
      ], WATCHDOG_CRITICAL);
    }
    else {
      // Save organisation CARE numbers.
      $this->memberContactNumber = (string) $resultxml->ContactNumber;
      $this->memberAddressNumber = (string) $resultxml->AddressNumber;
      $this->progress['member_ContactNumber'] = $this->memberContactNumber;
      $this->progress['member_AddressNumber'] = $this->memberAddressNumber;
      $this->saveProgress();
      // Log status.
      $this->log('AddOrganisation: ContactNumber = %c, AddressNumber = %a', [
        '%c' => $this->memberContactNumber,
        '%a' => $this->memberAddressNumber,
      ]);
    }
    $this->log('...saveOrganisation() done.');
  }

  /**
   * Save organisation email address to CARE.
   */
  protected function saveOrganisationEmail() {
    $this->log('CyclingUkCommerceMembership saveEmail()...');
    if ($this->progress['organisation_email_CommunicationNumber']) {
      $this->log('Email %cn already saved.', [
        '%cn' => $this->progress['organisation_email_CommunicationNumber'],
      ]);
      return;
    }
    $data = [
      'ContactNumber' => $this->memberContactNumber,
      'OldContactNumber' => $this->memberContactNumber,
      'Number' => $this->lineItem->field_care_email->email->value(),
      'Device' => $this->lineItem->field_care_email->device_code->value(),
      'DeviceDefault' => 'Y',
    ];
    $resultxml = care_call_method('AddCommunicationsNumber', $data);
    if (isset($resultxml->ErrorMessage)) {
      // Log failure.
      watchdog('cyclinguk_commerce', 'CyclingUkCommerceMembership failed to AddCommunicationsNumber: %error.', [
        '%error' => (string) $resultxml->ErrorMessage,
      ], WATCHDOG_CRITICAL);
    }
    else {
      // Save progress.
      $this->progress['organisation_email_CommunicationNumber'] = (string) $resultxml->CommunicationNumber;
      $this->saveProgress();
      // Log status.
      $this->log('AddCommunicationsNumber: CommunicationNumber = %c', [
        '%c' => (string) $resultxml->CommunicationNumber,
      ]);
    }
    $this->log('...CyclingUkCommerceMembership saveEmail() done.');
  }

  /**
   * Save the link to the Group club.
   */
  protected function saveGroupPosition() {
    $this->log('saveGroupPosition()...');
    if ($this->progress['organisation_ContactPositionNumber']) {
      $this->log('Position %p already saved.', [
        '%p' => $this->progress['organisation_ContactPositionNumber'],
      ]);
      return;
    }
    $data = [
      'ContactNumber' => $this->billingContactNumber,
      'OrganisationNumber' => $this->memberContactNumber,
      'AddressNumber' => $this->memberAddressNumber,
      'Position' => 'Main Club Contact',
      'ValidFrom' => date('d/m/Y'),
    ];
    $resultxml = care_call_method('AddPosition', $data);
    if (isset($resultxml->ErrorMessage)) {
      // Log failure.
      watchdog('organisation_membership', 'CyclingUkCommerceGroupMembership failed to AddPosition: %error.', [
        '%error' => (string) $resultxml->ErrorMessage,
      ], WATCHDOG_CRITICAL);
    }
    else {
      // Save progress.
      $this->progress['organisation_ContactPositionNumber'] = (string) $resultxml->ContactPositionNumber;
      $this->saveProgress();
      // Log status.
      $this->log('AddPosition: ContactPositionNumber = %s', [
        '%s' => (string) $resultxml->ContactPositionNumber,
      ]);
    }
    $this->log('...saveGroupPosition() done.');
  }

  protected function isCompleted() {
    $parent_completed = parent::isCompleted();
    $organisation_completed = ($this->progress['member_ContactNumber'] && $this->progress['member_AddressNumber']);
    $email_completed = $this->progress['organisation_email_CommunicationNumber'];
    $position_completed = $this->progress['organisation_ContactPositionNumber'];
    return ($parent_completed && $organisation_completed && $email_completed && $position_completed);
  }

}
