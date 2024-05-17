INTRODUCTION
------------

This module provides a Drupal Commerce payment method using the Mastercard Hosted Checkout
payment service.

A hook is defined that allows other custom modules to alter the data from the order that
is to be sent to Mastercard, for example to add in the customer's billing address details.

REQUIREMENTS
------------

Drupal Commerce

INSTALLATION & CONFIGURATION
----------------------------

1) Install module and enable it.
2) Configure the payment method with your Mastercard API details at
    admin/commerce/config/payment-methods


USAGE
-----

The payment method can run in test or live mode, with credentials configured for both.

Once configured, the payment method works like any other Commerce payment method.

Optionally, create a custom module to implement hook_commerce_mastercard_post_data_alter(&$data, $order),
to allow the data being sent to Mastercard to be modified with other order information, such as the customer's
billing address.

CREDITS
-------

Development of this module was sponsored by Cycling UK (formerly known as CTC,
the UK's national cycling charity).


CONTACT
-------

This module was written by, and is maintained by,
Anthony Cartmell <ajcartmell@fonant.com>
