(function($){Drupal.toggleFieldset=function(fieldset){var $fieldset=$(fieldset);if($fieldset.is(".collapsed")){var $content=$("> .fieldset-wrapper",fieldset).hide();$fieldset.removeClass("collapsed").trigger({type:"collapsed",value:false}).find("> legend span.fieldset-legend-prefix").html(Drupal.t("Hide"));$content.slideDown({duration:"fast",easing:"linear",complete:function(){Drupal.collapseScrollIntoView(fieldset);fieldset.animating=false},step:function(){Drupal.collapseScrollIntoView(fieldset)}})}else{$fieldset.trigger({type:"collapsed",value:true});$("> .fieldset-wrapper",fieldset).slideUp("fast",function(){$fieldset.addClass("collapsed").find("> legend span.fieldset-legend-prefix").html(Drupal.t("Show"));fieldset.animating=false})}};Drupal.collapseScrollIntoView=function(node){var h=document.documentElement.clientHeight||document.body.clientHeight||0;var offset=document.documentElement.scrollTop||document.body.scrollTop||0;var posY=$(node).offset().top;var fudge=55;if(posY+node.offsetHeight+fudge>h+offset){if(node.offsetHeight>h){window.scrollTo(0,posY)}else{window.scrollTo(0,posY+node.offsetHeight-h+fudge)}}};Drupal.behaviors.collapse={attach:function(context,settings){$("fieldset.collapsible",context).once("collapse",function(){var $fieldset=$(this);var anchor=location.hash&&location.hash!="#"?", "+location.hash:"";if($fieldset.find(".error"+anchor).length){$fieldset.removeClass("collapsed")}var summary=$('<span class="summary"></span>');$fieldset.bind("summaryUpdated",function(){var text=$.trim($fieldset.drupalGetSummary());summary.html(text?" ("+text+")":"")}).trigger("summaryUpdated");var $legend=$("> legend .fieldset-legend",this);$('<span class="fieldset-legend-prefix element-invisible"></span>').append($fieldset.hasClass("collapsed")?Drupal.t("Show"):Drupal.t("Hide")).prependTo($legend).after(" ");var $link=$('<a class="fieldset-title" href="#"></a>').prepend($legend.contents()).appendTo($legend).click(function(){var fieldset=$fieldset.get(0);if(!fieldset.animating){fieldset.animating=true;Drupal.toggleFieldset(fieldset)}return false});$legend.append(summary)})}}})(jQuery);
