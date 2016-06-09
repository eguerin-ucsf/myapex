//	SLIDER	
(function ($) {
	$('#content-middle').css('display','none');
	$('.find').css('color','#999');
	$('.find').attr('value','Search UCSF Profiles');


	$('.find').each(function() {
		var default_value = this.value;
		$(this).focus(function() {
			if(this.value == default_value) {
				this.value = '';
				$(this).css('color','#000');
			}
		});
		$(this).blur(function() {
			if(this.value == '') {
				$(this).css('color','#999');
				this.value = default_value;
			}
		});
	});

})(jQuery);