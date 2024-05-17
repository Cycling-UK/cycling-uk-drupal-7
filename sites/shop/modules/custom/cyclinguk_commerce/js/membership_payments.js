/**
 * Select "monthly direct debit" payment option if "Supporter" membership type is selected.
 */
jQuery(document).ready(function ($) {
  $('input[type=radio][name*="line_item_fields\\[field_new_membership_type\\]\\[und\\]"]').change(function () {
    if ($(this.parentNode).text().includes('Supporter')) {
      $('#edit-line-item-fields-field-payment-option-und-ddm').prop("checked", true);
    }
  });
});
