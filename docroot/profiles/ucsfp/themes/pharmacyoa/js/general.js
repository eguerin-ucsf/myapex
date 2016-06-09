jQuery(document).ready(function($) {

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

