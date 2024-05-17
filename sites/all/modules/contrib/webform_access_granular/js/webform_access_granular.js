/**
 * @file
 * Granular webform access node form interface enhancements.
 */

(function ($) {
  'use strict';
  Drupal.behaviors.granularWebformAccess = {};
  Drupal.behaviors.granularWebformAccess.attach = function (context) {
    // On change of allowing users only, show/hide list of users.
    $('#edit-results-access #edit-webform-results-access-users-only').change(function () {
      if ($(this).is(':checked')) {
        $('#edit-results-access .form-item-webform-results-access-users-list').show();
        $('#edit-results-access .form-item-webform-results-access-unpublished-results-users-list').show();
      }
      else {
        $('#edit-results-access .form-item-webform-results-access-users-list').hide();
        $('#edit-results-access .form-item-webform-results-access-unpublished-results-users-list').hide();
      }
    });

    // On change of allowing normal access with additional users, show/hide list of users.
    $('#edit-results-access #edit-webform-results-access-normal-access-with-users').change(function () {
      if ($(this).is(':checked')) {
        $('#edit-results-access .form-item-webform-results-access-users-list').show();
        $('#edit-results-access .form-item-webform-results-access-unpublished-results-users-list').show();
      }
      else {
        $('#edit-results-access .form-item-webform-results-access-users-list').hide();
        $('#edit-results-access .form-item-webform-results-access-unpublished-results-users-list').hide();
      }
    });

    // On change of allowing normal access, show/hide list of users.
    $('#edit-results-access #edit-webform-results-access-normal-access').change(function () {
      if ($(this).is(':checked')) {
        $('#edit-results-access .form-item-webform-results-access-users-list').hide();
        $('#edit-results-access .form-item-webform-results-access-unpublished-results-users-list').hide();
      }
      else {
        $('#edit-results-access .form-item-webform-results-access-users-list').show();
        $('#edit-results-access .form-item-webform-results-access-unpublished-results-users-list').show();
      }
    });

    // On first load, show/hide list of users based on users checkbox.
    if ($('#edit-results-access #edit-webform-results-access-normal-access-with-users').is(':checked') || $('#edit-results-access #edit-webform-results-access-users-only').is(':checked')) {

      $('#edit-results-access .form-item-webform-results-access-users-list').show();
      $('#edit-results-access .form-item-webform-results-access-unpublished-results-users-list').show();
    }
    else {

      $('#edit-results-access .form-item-webform-results-access-users-list').hide();
      $('#edit-results-access .form-item-webform-results-access-unpublished-results-users-list').hide();
    }
  };
})(jQuery);
