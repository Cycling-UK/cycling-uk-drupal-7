// using admin body tag checks type of user and adds cookie link or not

(function ($) {
  Drupal.behaviors.eu_cookie_compliance = {
    attach: function (context, settings) {
      if ($("body").hasClass("adminimal-menu")) {
        // if a drupal admin hide the cookies link
        $('.galleta-comp').hide();
      }
      else {
        // if any other user, logged in or out cookies link displays and works
        $(".galleta-comp", context).once("galletaComp", function () {
          // Apply the galletaComp effect to the elements only once.
          $(".galleta-comp").click(Drupal.eu_cookie_compliance.withdrawAction);
        });
      }
    }
  };
})(jQuery);
