<?php

/**
 * @file
 * Generate HTML for table of renewals due.
 */

/**
 * Generate HTML for table of renewals due.
 */
function cyclinguk_commerce_renewals($surname) {

  if (drupal_strlen($surname) < 3) {
    return "<p>Please enter at least three characters for the surname to start with.";
  }

  $html = '<table><tr>';
  $html .= '<th>Membership Number</th>';
  $html .= '<th>Forenames</th>';
  $html .= '<th>Initials</th>';

  $data = [
    'Surname' => $surname . '*',
  ];
  $result_xml = care_call_method('FindMembers', $data);

  foreach ($result_xml as $member) {
    $cancellation_reason = (string) $member->CancellationReason;
    $balance = (int) $member->Balance;
    if ($cancellation_reason == '' and $balance > 0) {

      $data = [
        'PaymentPlanNumber' => (int) $member->PaymentPlanNumber,
      ];
      $result_xml2 = care_call_method('FindPaymentPlans', $data);
      if (!$result_xml2->ErrorMessage) {
        $plan = $result_xml2->DataRow;
        $payment_method = (string) $plan->PaymentMethod;
      }
      else {
        $plan = '?';
        $payment_method = '?';
      }
      $rows[] = [
        $member->ContactNumber,
        $member->Forenames,
        $member->Initials,
        $member->Surname,
        $member->Postcode,
        $member->MembershipType,
        $member->Joined,
        $member->LastPaymentDate,
        $member->Balance,
        $member->RenewalDate,
        $payment_method,
      ];
    }
  }

  $header = [
    'Membership Number',
    'Forenames',
    'Initials',
    'Surname',
    'Postcode',
    'Membership Type',
    'Joined',
    'Last Payment',
    'Balance',
    'Renewal Date',
    'Payment Method',
  ];
  $table = theme('table', [
    'header' => $header,
    'rows' => $rows,
  ]);

  return '<p>' . count($rows) . ' rows</p>' . $table;
}
