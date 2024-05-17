CYCLING UK STRIPE MODIFICATIONS
-------------------------------

Module to adjust the payment amount requested from Commerce Stripe PI (commerce_stripe_pi, a fork of commerce_stripe)
to only include non-Direct-Debit line item amounts in the total to pay.


METHODOLOGY
-----------

1. Implements hook_form_FORM_ID_alter() for the commerce_checkout_form_stripe_payment form. Uses the order to
   calculate the total amount payable by Card, and adds that as a read-only element to the top of the form.

2. Implements hook_commerce_stripe_pi_payment_intent_data_alter() to adjust the payment intent amount to only include
   the total of line items that are not payable by Direct Debit.


LOGGING
-------

A watchdog notice is logged every time the Stripe payment intent amount is adjusted by this module.


CONFIGURATION
-------------

There is no configuration for this module.


CREDITS
-------

Custom module created by

Anthony Cartmell <ajcartmell@fonant.com> https://www.drupal.org/u/fonant
