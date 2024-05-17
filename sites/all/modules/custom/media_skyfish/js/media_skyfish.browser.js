(function ($) {
  'use strict';

  Drupal.behaviors.media_skyfish = {
    attach: function (context, settings) {
      var active_class = 'media-skyfish-active';



      //add dynamic image selector
      $('fieldset div.fieldset-wrapper').on('click', 'img', function (event) {

        var image = $(this).attr('data-image');
        var checkbox = 'input[name=' + image + ']';

        if ($(checkbox).is(':checked')) {
          $(this).removeClass(active_class);
          $(checkbox).prop('checked', false);
          $('input[name=selectedfile]').val('');
        }
        else {
          //flush (future proof: comment it out, if we want to handle multiple)
          $('fieldset div.fieldset-wrapper img').removeClass(active_class);
          $('input.media-skyfish-checkbox').prop('checked', false);

          $(this).addClass(active_class);
          $(checkbox).prop('checked', true);
          $('input[name=selectedfile]').val(image);
        }

      });

      //add dynamic pager
      $('fieldset').on('click', 'ul.pager a', function (event) {
        event.preventDefault();
        $('input[name=selectedfile]').val('');
        var page = $(this).attr('href');
        var fieldset = $(this).closest('fieldset');
        $.get(page, function (data) {
          fieldset.children('div.fieldset-wrapper').html(data);
        });
      });

      //core vertical tabs functionality is insufficient, therefore we override
      //we fetch existing folder ids from existing DOM <fieldset>
      //and pair it with vertical tabs, then override click on tabs.
      var folders = [];
      $('div.vertical-tabs-panes fieldset').each(function () {
        folders.push(($(this).attr('folder'))); //ident
      });
      var n = 0;
      $('form#media-skyfish-form ul.vertical-tabs-list a').each(function () {
        $(this).attr('folder', folders[n]);
        n++;
      });
      $('form#media-skyfish-form ul.vertical-tabs-list li a').unbind();
      $('form#media-skyfish-form ul.vertical-tabs-list li').on('click', 'a', function (event) {
        $('input[name=selectedfile]').val('');
        $('form#media-skyfish-form ul.vertical-tabs-list li').removeClass('selected');
        $(this).parent('li').addClass('selected');
        var target_id = $(this).attr('folder');
        $('div.vertical-tabs-panes fieldset').hide();
        $('div.vertical-tabs-panes fieldset').each(function () {
          if ($(this).attr('folder') == target_id) {

            //if search just show fieldset
            if (target_id == 'skyfishsearch') {
              $(this).show();
              return;
            }

            $(this).show();
            $(this).children('div.fieldset-wrapper').html('loading images, please wait...<img src="/misc/throbber-active.gif" />');
            $.ajax({
              url: '/skyfish/browsebydir/' + target_id,
              context: this
            }).done(function (data) {
              $(this).children('div.fieldset-wrapper').html(data);
            });
            return false;
          }
        });

      });

      //search

      $(document).ready(function() {
        $(window).keydown(function(event){
          if( (event.keyCode == 13)) {
            var query = $('fieldset.skyfishfieldset input#edit-query').val().trim();
            if (query !== "") {
              event.preventDefault();
              return false;
            }
          }
        });
      });
      $('fieldset.skyfishfieldset input#edit-query').keyup(function(event) {
        if (event.keyCode === 13) {
            $('fieldset.skyfishfieldset input#edit-skyfishsearch').click();
            return false;
        }
      });
      $('fieldset.skyfishfieldset input#edit-skyfishsearch').on('click', function (event) {
        event.preventDefault();

        var query = $('fieldset.skyfishfieldset input#edit-query').val().trim();
        if (query === "") {
          return;
        }

        $('input[name=selectedfile]').val('');
        $('fieldset.skyfishfieldset div.skyfish_search_results').html('searching...<img src="/misc/throbber-active.gif" />');

        $.ajax({
          url: '/skyfish/search/' + encodeURIComponent(query)
        }).done(function (data) {
          $('div.skyfish_search_results').html(data);
        });

      });

    }

  };

}(jQuery));
