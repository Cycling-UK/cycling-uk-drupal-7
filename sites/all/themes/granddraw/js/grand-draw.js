jQuery(document).ready(function($) {

	// sliders
	$('.cukr--slider').slick({
		slidesToShow: 1,
		slidesToScroll: 1,
		arrows: true,
		appendArrows: '.cukr--slider-controls',
		dots: true,
		prevArrow: '<div class="arrow-prev"><a><i class="arrow left"></i></a></div>',
		nextArrow: '<div class="arrow-next"><a><i class="arrow right"></i></a></div>',
		infinite: false,
		responsive: [
			{
				breakpoint: 991,
				settings: {
					dots: false
				}
			},
			{
				breakpoint: 767,
				settings: {
					adaptiveHeight: true,
					dots: false
				}
			}
		]
	});

	// play now
	$('#cukr-num-tickets-input').on('change', function() {
		var num = $(this).val();
		if (num > 100) {
			$(this).val(100);
		}
		if (num <= 0) {
			$(this).val(1);
		}
		$(this).closest('.ticket-select__option').data('num-tickets',num);
	});
	$('.ticket-select__option .cukr--radio').on('click', function() {
		var el = $(this).closest('.ticket-select__option');
		$('.ticket-select__option').removeClass('active');
		el.addClass('active');
		if (el.data('num-tickets') == '*') {
			$('#cukr-num-tickets-input').focus();
		}
	});
	$('#cukr-enter-now').on('click', function(e) {
		e.preventDefault();

		$('.cukr--errors').addClass('hidden');
		$('.cukr--error--no-value').addClass('hidden');
		$('.cukr--error--confirm').addClass('hidden');
		$('.cukr--error--no-amount').addClass('hidden');

		var selected = $('.ticket-select__option.active');
		var valid = true;
		if (!selected.length) {
			valid = false;
			$('.cukr--error--no-value').removeClass('hidden');
		}

		if (!$('#cukr-confirm-age').is(':checked')) {
			valid = false;
			$('.cukr--error--confirm').removeClass('hidden');
		}

		if ($(selected[0]).data('num-tickets') == "*") {
			valid = false;
			$('.cukr--error--no-amount').removeClass('hidden');
			$('#cukr-num-tickets-input').focus();
		}

		if (!valid) {
			$('.cukr--errors').removeClass('hidden');
			return;
		}

		var num_tickets = $(selected[0]).data('num-tickets');
		if (num_tickets > 100) { num_tickets = 100; }
		if (num_tickets < 0) { num_tickets = 1; }
		var form_url = 'https://shop.cyclinguk.org/summer-raffle?edit[quantity]='+num_tickets;
		window.location.href = form_url;
	});

	$('#toggle-prize-slider').on('click', function(e) {
		e.preventDefault();
		$('.cukr--slider').slick('unslick');
		$(this).remove();
	});

	// countdown timer

	if ($('#canvas-countdown').length) {
		var dStr = (window.countdownTo) ? window.countdownTo : "29 Sep, 2020 10:00:00";
		var cdTimer = new GDCountdownTimer(dStr);
		cdTimer.start();
	}

	// step 2
	if (jQuery('#cukr--ticket-num').length) {
		jQuery('#edit-quantity').on('change', cukgdUpdatePrice);
		cukgdUpdatePrice();
		setTimeout(cukgdUpdatePrice, 300);
	}
});

function cukgdUpdatePrice() {
	var qty = jQuery('#edit-quantity').val();
	qty = (isNaN(qty)) ? 0 : qty;
	var price = '£' + parseInt(qty).toFixed(2);
	jQuery('#cukr--ticket-num').empty().html(qty);
	jQuery('#cukr--ticket-total').empty().html(price);
}

var GDCountdownTimer = function(dStr) {

	var c = document.getElementById("canvas-countdown");
	var ctx = c.getContext("2d");
	c.width = 980;
	c.height = 208;
	c.style.width = "490px";
	c.style.height = "100px";
	var bfont = 75
	var sfont = 18
	var scale = 2;

	var v = new Date(dStr);
	var gdt = this;

	this.updateCountdown = function() {

		var now = new Date();
		var difference = v-now;

		if (difference > 0) {
			var days,
			hours,
			minutes,
			seconds = 0
			days_str = '',
			hours_str = ''
			minutes_str = '',
			seconds_str = '';
			days = Math.floor(difference / (24*60*60*1000));
			if (days > 0) { difference -= days * (24*60*60*1000); }
			if (difference > 0) { hours = Math.floor(difference / (60*60*1000));
				if (hours > 0) { difference -= hours * (60*60*1000); }
			}
			if(difference > 0) {
				minutes = Math.floor(difference / (60*1000));
				if(minutes > 0) { difference -= minutes * (60*1000); }
			}
			if(difference > 0) {
				seconds = Math.floor(difference / 1000);
			}
			days_str = (days > 9) ? '' + days : '0' + days;
			hours_str = (hours > 9) ? '' + hours : '0' + hours;
			minutes_str = (minutes > 9) ? '' + minutes : '0' + minutes;
			seconds_str = (seconds > 9) ? '' + seconds : '0' + seconds;

			ctx.clearRect(0, 0, c.width, c.height);
			ctx.fillStyle = "white";
			ctx.font = (bfont * scale) + "px ff-cocon-web-pro";
			ctx.textAlign="center";

			ctx.fillText(":",114 * scale,68 * scale);
			ctx.fillText(":",245 * scale,68 * scale);
			ctx.fillText(":",377 * scale,68 * scale);

			ctx.fillText(days_str,48 * scale,68 * scale);
			ctx.fillText(hours_str,180 * scale,68 * scale);
			ctx.fillText(minutes_str,314 * scale,68 * scale);
			ctx.fillText(seconds_str,440 * scale,68 * scale);

			ctx.font = (sfont * scale) + "px ff-cocon-web-pro";
			ctx.fillText((days == 1) ? 'Day' : 'Days',48 * scale,92 * scale);
			ctx.fillText((hours == 1) ? 'Hour' : 'Hours',180 * scale,92 * scale);
			ctx.fillText((minutes == 1) ? 'Minute' : 'Minutes',314 * scale,92 * scale);
			ctx.fillText((seconds == 1) ? 'Second' : 'Seconds',440 * scale,92 * scale);

		}
	}

	this.doResize = function() {
		var w = jQuery('#canvas-countdown-wrap').outerWidth();
		var h = jQuery('#canvas-countdown-wrap').outerHeight();

		c.width = w * 2;
		c.height = h * 2;
		c.style.width = w + "px";
		c.style.height = h + "px";
		scale = w / 490 * 2;
	}

	this.start = function() {

		this.updateCountdown();
		setInterval(this.updateCountdown, 200);

		jQuery(window).resize(function() {
			gdt.doResize();
		});
		gdt.doResize();
	}
}
