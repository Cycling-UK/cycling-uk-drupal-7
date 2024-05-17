<?php
/**
 * @file
 *
 * Template for Direct Debit mandate form.
 *
 * Output the form fields with "echo drupal_render_children($form)".
 */

?>

<?php echo drupal_render_children($form); ?>

<fieldset class="panel panel-default form-wrapper">
  <legend class="panel-heading">
    <span class="panel-title fieldset-legend">Service User</span>
  </legend>

  <div class="panel-body">
    <p>Service User's ID, address and reference number (below) are for
      office use only.</p>

    <p>Service User's name and address:</p>

    <p>The Cyclists' Touring Club, Parklands, Railton Road, Guildford,
      Surrey, GU2 9JX.</p>

    <p>Service User number: 914498</p>

    <p>Reference number: ______DIRECTDEBIT</p>
  </div>

</fieldset>

<fieldset class="panel panel-default form-wrapper">
  <legend class="panel-heading">
    <span class="panel-title fieldset-legend">Instructions</span>
  </legend>

  <div class="panel-body">

    <p>The company name which will appear on your bank statement against
      the Direct Debit will be &quot;Cyclists' Touring Club&quot;.</p>

    <p>If there are any changes to the amount, date or frequency of your
      Direct Debit Cyclists' Touring Club will notify you 10 working
      days in advance of your account being debited or otherwise agreed.
      If you request Cyclists' Touring Club to collect a payment,
      confirmation of the amount and date will be given to you at the
      time of your request.</p>

    <p>
      <strong>Instruction to your Bank or Building Society</strong>
    </p>

    <p>
      Please pay The Cyclists' Touring Club Direct Debits from the
      account detailed in this instruction subject to the safeguards
      assured by the <a href="/directdebit-guarantee">Direct Debit
        Guarantee</a>. I understand that this instruction may remain
      with The Cyclists' Touring Club and, if so, details will be passed
      electronically to my Bank/Building Society.
    </p>

    <p>
      <strong>Direct Debit and email confirmation.</strong> You will
      receive a Direct Debit Confirmation letter either by email within
      3 working days or if we do not have your email address by post
      within 5 working days.
    </p>

    <p>
      <strong>Telephone contact.</strong> If you have a query please
      call the Membership Department on 01483 238301/0844 736 8451
    </p>
  </div>
</fieldset>
