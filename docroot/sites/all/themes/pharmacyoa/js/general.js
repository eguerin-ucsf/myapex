jQuery(document).ready(function($) {

	// 2013.0607 frankfarm
	// http://alistapart.com/article/improvingprint
	// but we're using the newer jquery version at
	// https://github.com/dompuiu/jquery-footnote-links
	//var pagelinks = $('#page').not('#navigation');
	//$('page').footnoteLinks();
	$('#navigation a, #block-domain-menu-block-main-menu a').addClass('footnote-ignore');
	$('#page').footnoteLinks();

	// Temp grid code, remove for production.
	// There is a catch just in case to make sure
	// that in production this doesn't actually work.
	jQuery(document).bind('keydown', 'ctrl+g', function() {
		if (window.location.hostname !== "pharmacy.ucsf.edu") {
			var p = $('#page');
			if (p.hasClass('showgrid')) {
				p.removeClass('showgrid');
				$('[id]').removeClass('showgrid-hover');
			} else {
				p.addClass('showgrid');
				$('[id]').addClass('showgrid-hover');
			}
		}
	});

	// code to make Nice Menus margin-based arrow area click for touch even more friendly!
  $('.sf-js-enabled li.menuparent').hover(
    function () {
      //var timer = Date.now();
      setTimeout(function (){
        $('.sf-js-enabled li.menuparent').click(function(){
          //alert(Date.now() - timer);
          if ($(this).hasClass('over')) {
            $(this).hideSuperfishUl();
          } else {
              $(this).showSuperfishUl().siblings().hideSuperfishUl();
          }
        });
      }, 750);
    },
    function () {
      /*$('.sf-js-enabled li.menuparent').unbind('click');*/
    }
  );

  // 2014.0421 frankfarm
  // on elements with class showhidetoggle, show or hide the following element upon click
  $(".showhidetoggle").click(function(){
    $(this).next().slideToggle("slow");
    return false;
  }).next().hide();

});

(function ($) {
	/**
	 * Form behavior for Spotlight override:
	 * this is a fix for now till we upgrade panopoly
	 */
	Drupal.behaviors.panopolySpotlight = {
		attach: function (context, settings) {
			if ($('.field-name-field-basic-spotlight-items').length) {
				var rotation_time;

				// Check to see if the settings are defined first.
				if (typeof Drupal.settings.spotlight_settings === "undefined") {
					rotation_time = 5;
				} else {
					rotation_time = Drupal.settings.spotlight_settings.rotation_time;
				}
				$('.field-name-field-basic-spotlight-items').tabs().tabs("rotate", rotation_time, true);
			}
		}
	};

})(jQuery);

