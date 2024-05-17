# Description

This module adds the ability for a specific user to restrict permissions on the
webform, specifically the webform results.

# Requirements

* Drupal 7.x
* autocomplete_deluxe
* webform

# Installation

1. Copy the entire webform_access_granular directory the Drupal
   sites/all/modules directory.
2. Login as an administrator. Enable the module in the "Administer" -> "Modules"
3. Create a webform node at node/add/webform.
4. Edit the webform and click on Form settings.
5. Under Results access choose the following:
    (a) Normal access: this will perform webforms default behavior around form
        results access.
    (b) Normal access with additional specific user access:  This will perform
        webforms default behavior plus give permission to specific users
    (c) Specific user access only: This will only give results form access to
        the specfied users.

# Support

Please use the issue queue for filing bugs with this module.
