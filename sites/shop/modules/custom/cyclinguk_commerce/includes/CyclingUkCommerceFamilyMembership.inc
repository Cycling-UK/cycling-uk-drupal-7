<?php


/**
 * @file
 */

/**
 * Class to handle saving Family Membership line item data to CARE.
 */
class CyclingUkCommerceFamilyMembership extends CyclingUkCommerceMembership {

  /**
   * Constructor.
   */
  public function __construct($order, $line_item) {
    // Load any existing progress data.
    $result = db_select('cyclinguk_commerce_line_item_family', 'f')
      ->fields('f')
      ->condition('line_item_id', $line_item->getIdentifier())
      ->orderBy('delta')
      ->execute();
    $family_progress = $result->fetchAllAssoc('delta', PDO::FETCH_ASSOC);
    $this->progress['family_members'] = $family_progress;
    parent::__construct($order, $line_item);
  }

  /**
   * Save this line item's data to CARE.
   */
  public function saveToCare() {
    $this->log('CyclingUkCommerceFamilyMembership saveToCare()...');
    parent::saveToCare();
    $this->saveFamilyMembers();
    $this->log('...CyclingUkCommerceFamilyMembership saveToCare() done.');
  }

  /**
   * Save family members to CARE.
   */
  protected function saveFamilyMembers() {
    $this->log('saveFamilyMembers()...');
    $family_members = $this->lineItem->field_family_members->value();
    foreach ($family_members as $delta => $family_member) {
      $wrapped_member = entity_metadata_wrapper('field_collection_item', $family_member);
      $name_array = $wrapped_member->field_member_name->value();
      $dob_array = $wrapped_member->field_care_dob->value();
      $email_array = $wrapped_member->field_care_email->value();
      if (isset($this->progress['family_members'][$delta])) {
        $member_progress = $this->progress['family_members'][$delta];
      }
      else {
        $member_progress = [
          'ContactNumber' => 0,
          'AddressNumber' => 0,
          'ComplimentaryRelationship' => '',
          'MembershipNumber' => 0,
        ];
      }
      // AddContact.
      if ($member_progress['ContactNumber'] && $member_progress['AddressNumber']) {
        $this->log('Already added ContactNumber %cn', [
          '%cn' => $member_progress['ContactNumber'],
        ]);
        $contact_number = $member_progress['ContactNumber'];
      }
      else {
        $data = [
          'Title' => $name_array['title'],
          'Forenames' => $name_array['forenames'],
          'Surname' => $name_array['surname'],
          'AddressNumber' => $this->memberAddressNumber,
          'DateOfBirth' => $dob_array['day'] . '/' . $dob_array['month'] . '/' . $dob_array['year'],
          'EmailAddress' => $email_array['email'],
          'DOBEstimated' => 'N',
          'Source' => 'OI',
        ];
        $resultxml = care_call_method('AddContact', $data);
        if (isset($resultxml->ErrorMessage)) {
          // Log failure.
          watchdog('cyclinguk_commerce', 'CyclingUkCommerceMembership failed to AddContact: %error.', [
            '%error' => (string) $resultxml->ErrorMessage,
          ], WATCHDOG_CRITICAL);
          //break;
        }
        else {
          // Save progress.
          $this->progress['family_members'][$delta]['ContactNumber'] = (string) $resultxml->ContactNumber;
          $this->progress['family_members'][$delta]['AddressNumber'] = (string) $resultxml->AddressNumber;
          $this->saveProgress();
          $contact_number = (string) $resultxml->ContactNumber;
          // Log status.
          $this->log('AddContact: ContactNumber = %c, AddressNumber = %a', [
            '%c' => (string) $resultxml->ContactNumber,
            '%a' => (string) $resultxml->AddressNumber,
          ]);
        }
      }
      // AddLink.
      if ($member_progress['ComplimentaryRelationship']) {
        $this->log('Already added ComplimentaryRelationship %r', [
          '%r' => $member_progress['ComplimentaryRelationship'],
        ]);
      }
      else {
        $data = [
          'ContactNumber' => $this->memberContactNumber,
          'UserID' => $this->memberContactNumber,
          'ContactNumber2' => $contact_number,
          'Relationship' => 'FAML',
          'ValidFrom' => date('d/m/Y'),
        ];
        $resultxml = care_call_method('AddLink', $data);
        if (isset($resultxml->ErrorMessage)) {
          // Log failure.
          watchdog('cyclinguk_commerce', 'CyclingUkCommerceFamilyMembership failed to AddLink: %error.', [
            '%error' => (string) $resultxml->ErrorMessage,
          ], WATCHDOG_CRITICAL);
          //break;
        }
        else {
          // Save progress.
          $this->progress['family_members'][$delta]['ComplimentaryRelationship'] = (string) $resultxml->ComplimentaryRelationship;
          $this->saveProgress();
          // Log status.
          $this->log('AddLink: ComplimentaryRelationship = %s', [
            '%s' => (string) $resultxml->ComplimentaryRelationship,
          ]);
        }
      }
      // AddPaymentPlanMember.
      if ($member_progress['MembershipNumber']) {
        $this->log('Already added MembershipNumber %r', [
          '%r' => $member_progress['MembershipNumber'],
        ]);
      }
      else {
        $data = [
          'PaymentPlanNumber' => $this->paymentPlanNumber,
          'ContactNumber' => $contact_number,
          //'OrderNumber' => $this->order->order_number->value(),
          'Branch' => $this->branch,
          'Joined' => date('d/m/Y'),
          'MembershipType' => 'Q',
          'Source' => 'FR',
        ];
        $resultxml = care_call_method('AddPaymentPlanMember', $data);
        if (isset($resultxml->ErrorMessage)) {
          // Log failure.
          watchdog('cyclinguk_commerce', 'CyclingUkCommerceFamilyMembership failed to AddPaymentPlanMember: %error.', [
            '%error' => (string) $resultxml->ErrorMessage,
          ], WATCHDOG_CRITICAL);
          //break;
        }
        else {
          // Save progress.
          $this->progress['family_members'][$delta]['MembershipNumber'] = (string) $resultxml->MembershipNumber;
          $this->saveProgress();
          // Log status.
          $this->log('AddPaymentPlanMember: MembershipNumber = %s', [
            '%s' => (string) $resultxml->MembershipNumber,
          ]);
        }
      }
      if ($member_progress['ContactNumber'] && $member_progress['AddressNumber'] && $member_progress['ComplimentaryRelationship'] /* && $member_progress['MembershipNumber'] */) {
        $this->progress['family_members'][$delta]['completed'] = 1;
        $this->saveProgress();
      }
    }
    $this->log('...saveFamilyMembers() done.');
  }

  protected function saveProgress() {
    parent::saveProgress();
    $line_item_id = $this->lineItem->getIdentifier();
    foreach ($this->progress['family_members'] as $delta => $data) {
      $primary_keys = isset($data['line_item_id']) ? [
        'line_item_id',
        'delta',
      ] : [];
      $data['line_item_id'] = $line_item_id;
      $data['delta'] = $delta;
      drupal_write_record('cyclinguk_commerce_line_item_family', $data, $primary_keys);
      $this->progress['family_members'][$delta]['line_item_id'] = $line_item_id;
    }
  }

  protected function isCompleted() {
    $parent_completed = parent::isCompleted();
    $family_members = $this->lineItem->field_family_members->value();
    $members_done = TRUE;
    foreach ($family_members as $delta => $family_member) {
      if ($this->progress['family_members'][$delta]['completed'] != 1) {
        $members_done = FALSE;
        break;
      }
    }
    return ($parent_completed && $members_done);
  }

}
