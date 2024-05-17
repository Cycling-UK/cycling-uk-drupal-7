<?php
/**
 * @file
 * features_context.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function features_context_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Advert hero temp';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'advert_hero_temp';
  $fe_block_boxes->body = '<div><img alt="" height="auto" src="/sites/default/files/images/blocks/advert-hero-2-tmp.jpg" width="100%" /></div>';

  $export['advert_hero_temp'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Website footer';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'footer';
  $fe_block_boxes->body = '<p><span class="yellow-text">Patron:</span> Her Majesty The Queen</p>

<p><span class="yellow-text">President:</span> Jon Snow</p>

<p><span class="yellow-text">Chief Executive:</span> Paul Tuohy</p>

<p>&nbsp;</p>

<p class="small-print">Cycling UK is a trading name of Cyclists’ Touring Club (CTC) a company limited by guarantee, registered in England no: 25185. Registered as a charity in England and Wales charity no: 1147607 and in Scotland charity no: SC042541. Registered office: Parklands, Railton Road, Guildford, Surrey GU2 9JX.</p>

<p>&nbsp;</p>

<p><strong>Copyright © CTC 2016</strong></p>

<ul class="footer-links">
	<li><a href="/terms-and-conditions">Terms and Conditions</a></li>
	<li><a href="/cookie-policy">Cookie Policy</a></li>
	<li><a href="/privacy-policy">Privacy Policy</a></li>
	<li><a href="/sitemap.xml">Sitemap</a></li>
</ul>
';

  $export['footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Front page accordion';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'front_page_accordion';
  $fe_block_boxes->body = '<div class="container">

	<div class="col-md-12 col-sm-12 col-xs-12">

		<div class="panel-group wrap" id="bs-collapse">



			<!-- Accordion panel: Join -->

			<div class="panel join">
	
				<div class="panel-heading">
					<h4 class="panel-title">
						<a data-toggle="collapse" data-parent="#bs-collapse" href="#one"><span class="icon"></span><span class="text">Why join Cycling UK?</span></a>
					</h4>
				</div>
				
				<div id="one" class="panel-collapse collapse in">
					<div class="panel-body">


						<div class="left-container col-xs-12 col-sm-12 col-md-6 col-lg-6">
							<h5>Support Cycling!</h5>
							<p><strong>By supporting Cycling UK you\'ll join 67,000 cyclists giving us a louder voice when campaigning locally and nationally on the issues that are important  to you, as well as receiving valuable member benefits.</strong></p>
							<span class="yellow-line"></span>
							<p><span class="blue-text">Whether you\'re new to cycling, ride regularly or want to get back into it, we cater for you.<span></p>
							<div class="button-wrapper">
								<a class="btn btn-transparent btn-shadow" href="#">Join today</a>
								<a class="btn btn-transparent btn-shadow" href="#">Renew membership</a>
							</div>
						</div>
					
						<div class="right-container col-xs-12 col-sm-12 col-md-6 col-lg-6">
							<div class="top-container">
								<img src="/sites/all/themes/cyclinguk/images/hero/front-accordion-join.jpg";>
							</div>
							<div class="bottom-container">
								<p>All members also get...</p>
								<ul>
									<li><span>£10m third party insurance cover</span></li>
									<li><span>Cycle magazine</span></li>
									<li><span>CycleClips</span></li>
									<li><span>Cycling UK Incident Line</span></li>
								</ul>
								<a class="btn btn-transparent" href="#">See all benefits</a>
							</div>
						</div>

						
					</div>
				</div>
	
			</div>



			<!-- Accordion panel: Start cycling -->

			<div class="panel start-cycling">
	
				<div class="panel-heading">
					<h4 class="panel-title">
						<a data-toggle="collapse" data-parent="#bs-collapse" href="#two"><span class="icon"></span><span class="text">Start cycling</span></a>
					</h4>
				</div>
				
				<div id="two" class="panel-collapse collapse">

					<div class="panel-body">

						<div class="left-container col-xs-12 col-sm-12 col-md-6 col-lg-6">
							<h5>New to cycling?</h5>
							<p><strong>We’ll share our love of cycling, expertise and support, to give you the knowhow and confidence to get cycling and keep cycling.</strong></p>
							<span class="yellow-line"></span>
							<p><span class="blue-text">From our guides on how to teach a child and adult to ride a bike, to step-by-step basic bike maintenance tips, advice on choosing the right bike and kit and onwards towards beginner friendly cycling routes and events, we’re here to encourage your new found (or re-found!) love of cycling.<span></p>
							<div class="button-wrapper">
								<a class="btn btn-transparent btn-shadow" href="#">Start Cycling</a>
							</div>
						</div>
						
						<div class="right-container col-xs-12 col-sm-12 col-md-6 col-lg-6">
							<div class="top-container">
								<img src="/sites/all/themes/cyclinguk/images/hero/front-accordion-start.jpg";>
							</div>
							<div class="bottom-container">
								<p>Join us and get...</p>
								<ul>
									<li><span>How to guides</span></li>
									<li><span>Bike maintenance tips</span></li>
									<li><span>Buying advice</span></li>
									<li><span>Beginner\'s routes and events</span></li>
								</ul>
								<!--<a class="btn btn-transparent" href="#">Start Cycling</a>-->
							</div>
						</div>
						
					</div>

				</div>
	
			</div>



			<!-- Accordion panel: Start cycling -->

			<div class="panel fun-friends-family">
	
				<div class="panel-heading">
					<h4 class="panel-title">
						<a data-toggle="collapse" data-parent="#bs-collapse" href="#three"><span class="icon"></span><span class="text">Fun, friends and family</span></a>
					</h4>
				</div>
				
				<div id="three" class="panel-collapse collapse">
					
					<div class="panel-body">
						
							<div class="left-container col-xs-12 col-sm-12 col-md-6 col-lg-6">
								<h5>Fun, friends and family</h5>
								<p><strong>Cycling is a great way of spending quality time with your friends and family.  We’ve got over 13,000 rides and events every year, so you’ll be sure to have fun with your friends and make some new ones too.</strong></p>
								<span class="yellow-line"></span>
								<p><span class="blue-text">Whether you’re seeking advice on cycling with your children, choosing a family friendly route,  exploring the countryside, or are simply looking for an excuse to get out and cycle again, we’ve got that bit of inspiration you’re looking for.</span></p>
								<div class="button-wrapper">								
									<a class="btn btn-transparent btn-shadow" href="#">Have fun and get cycling!</a>
								</div>
							</div>
							
							<div class="right-container col-xs-12 col-sm-12 col-md-6 col-lg-6">
								<div class="top-container">
									<img src="/sites/all/themes/cyclinguk/images/hero/front-accordion-fun.jpg";>
								</div>
								<div class="bottom-container">
									<p>Join us and get...</p>
									<ul>
										<li><span>Access to over 13,000 rides and events</span></li>
										<li><span>Make new friends</span></li>
										<li><span>Advice on cycling with your children</span></li>
										<li><span>Family friendly routes</span></li>
									</ul>
									<!--<a class="btn btn-transparent" href="#">Start Cycling</a>-->
								</div>
							</div>
						
					</div>
					
				</div>
	
			</div>



			<!-- Accordion panel: Commuting -->

			<div class="panel commuting">
	
				<div class="panel-heading">
					<h4 class="panel-title">
						<a data-toggle="collapse" data-parent="#bs-collapse" href="#four"><span class="icon"></span><span class="text">Commuting</span></a>
					</h4>
				</div>
				
				<div id="four" class="panel-collapse collapse">

					<div class="panel-body">
						
						<div class="left-container col-xs-12 col-sm-12 col-md-6 col-lg-6">
							<h5>Cycle to work</h5>
							<p><strong>Cycling to work means you will avoid traffic jams and expensive travel tickets, plus you will get fit too.</strong></p>
							<span class="yellow-line"></span>
							<p><span class="blue-text">With over 135 years’ experience, Cycling UK champions the importance of making cycling a safe, enjoyable and convenient way to get around. If you’re keen to plan your best cycle route to work, want some top tips for cycling in traffic, or are keen to improve your basic bike maintenance skills, we’ve got what you need to make your cycle commute easier.</span></p>
							<div class="button-wrapper">
								<a class="btn btn-transparent btn-shadow" href="#">Cycle to work</a>
							</div>
						</div>
						
						<div class="right-container col-xs-12 col-sm-12 col-md-6 col-lg-6">
							<div class="top-container">
								<img src="/sites/all/themes/cyclinguk/images/hero/front-accordion-commuting.jpg";>
							</div>
							<div class="bottom-container">
								<p>Join us and...</p>
								<ul>
									<li><span>Save time and money</span></li>
									<li><span>Get fit</span></li>
									<li><span>Top tips for cycling in traffic</span></li>
									<li><span>Bike maintenance skills</span></li>
								</ul>
								<!--<a class="btn btn-transparent" href="#">Start Cycling</a>-->
							</div>
						</div>

					</div>

				</div>
	
			</div>



			<!-- Accordion panel: Fitness and sport -->

			<div class="panel fitness-sport">
	
				<div class="panel-heading">
					<h4 class="panel-title">
						<a data-toggle="collapse" data-parent="#bs-collapse" href="#five"><span class="icon"></span><span class="text">Fitness and sport</span></a>
					</h4>
				</div>
				
				<div id="five" class="panel-collapse collapse">

					<div class="panel-body">
						
						<div class="left-container col-xs-12 col-sm-12 col-md-6 col-lg-6">
							<h5>Fitness and sport</h5>
							<p><strong>Want to build your fitness or find a new challenge through cycling? Then Cycling UK is here for you. With over 13,000 local rides and events happening every year, you’ll be sure to get in shape quickly and find a challenge that helps to take your cycling onto another level.</strong></p>
							<span class="yellow-line"></span>
							<p><span class="blue-text">Whether you’re just starting out on a fitness drive, are looking for a ready-made route to test yourself, or keen to buddy up with others, we’ve got what you need to cycle to improve your health and fitness.</span></p>
							<div class="button-wrapper">
								<a class="btn btn-transparent btn-shadow" href="#">Get fit!</a>
							</div>
						</div>
						
						<div class="right-container col-xs-12 col-sm-12 col-md-6 col-lg-6">
							<div class="top-container">
								<img src="/sites/all/themes/cyclinguk/images/hero/front-accordion-fitness.jpg";>
							</div>
							<div class="bottom-container">
								<p>Join us and get...</p>
								<ul>
									<li><span>Access to over 13,000 rides and events</span></li>
									<li><span>Help finding your next challenge</span></li>
									<li><span>Fitness tips</span></li>
									<li><span>Find new friends</span></li>
								</ul>
								<!--<a class="btn btn-transparent" href="#">Start Cycling</a>-->
							</div>

						</div>

					</div>

				</div>
	
			</div>




			<!-- Accordion panel: Experienced -->

			<div class="panel experienced">
	
				<div class="panel-heading">
					<h4 class="panel-title">
						<a data-toggle="collapse" data-parent="#bs-collapse" href="#six"><span class="icon"></span><span class="text">Experienced cyclist</span></a>
					</h4>
				</div>
				
				<div id="six" class="panel-collapse collapse">

					<div class="panel-body">
						
						<div class="left-container col-xs-12 col-sm-12 col-md-6 col-lg-6">
							<h5>Experienced cyclist</h5>
							<p><strong>Seeking your next big cycling adventure? Cycling UK has loads of ideas and inspiring places ready for you to explore.</strong></p>
							<span class="yellow-line"></span>
							<p><span class="blue-text">With over 13,000 local rides and events happening every year, access to exclusive members’ only cycling holidays, advice from expert cycle mechanics, plus information and features from Cycle magazine, you’ll be sure to get that spark of inspiration for your next big ride.</span></p>
							<div class="button-wrapper">
								<a class="btn btn-transparent btn-shadow" href="#">Inspire me</a>
							</div>
						</div>
						
						<div class="right-container col-xs-12 col-sm-12 col-md-6 col-lg-6">
							<div class="top-container">
								<img src="/sites/all/themes/cyclinguk/images/hero/front-accordion-experienced.jpg";>
							</div>
							<div class="bottom-container">
								<p>Join us and get...</p>
								<ul>
									<li><span>Inspiration for new places to explore</span></li>
									<li><span>Access to exclusive members\' only cycling holidays</span></li>
									<li><span>Advice from expert cycle mechanics</span></li>
									<li><span>Information and feature Cycle magazine</span></li>
								</ul>
								<!--<a class="btn btn-transparent" href="#">Start Cycling</a>-->
							</div>

						</div>

					</div>

				</div>
	
			</div>

		</div> <!-- end of #bs-collapse  -->

	</div>

</div>
';

  $export['front_page_accordion'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Join today banner';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'join_today_banner';
  $fe_block_boxes->body = '<div class="wide">
  <div class="text">Protect the gift of Cycling!</div>
  <div class="btn btn-white btn-shadow join"><a href="#">Join today</a></div>
  <div class="btn btn-purple renew"><a href="#">Renew</a></div>
</div>

<div class="narrow">
  <div><a href="#">Join Cycling UK today!</a></div>
</div>';

  $export['join_today_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Post Banner News';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'post_banner_news';
  $fe_block_boxes->body = '<div class="inner-wrapper">Cycling news</div>';

  $export['post_banner_news'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social icons';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'social_icons';
  $fe_block_boxes->body = '<div class="text">Speak to us today</div>
<ul class="social-links">
	<li class="twitter"><a href="https://twitter.com/wearecyclinguk" target="_blank"><span>Twitter</span></a></li>
	<li class="facebook"><a href="https://www.facebook.com/CyclingUK" target="_blank"><span>Facebook</span></a></li>
	<li class="forum"><a href="http://forum.cyclinguk.org/" target="_blank"><span>Forum</span></a></li>
</ul>

<span class="yellow-line"></span>';

  $export['social_icons'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Top Menu Icons';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'top_menu_icons';
  $fe_block_boxes->body = '<ul class="top-menu">
	
  <li class="contact">
    <a href="/contact" class="top-menu-contact">
    	<span>Contact</span>
    </a>
  </li>

  <li class="forum">
    <a href="https://forum.cyclinguk.org/" target="_blank" class="top-menu-forum">
    	<span>Forum</span>
    </a>
  </li>

  <li class="maps">
    <a href="/maps" class="top-menu-maps">
    	<span>Maps</span>
    </a>
  </li>

  <li class="user">
    <a href="/user" class="top-menu-user">
    	<span>User</span>
    </a>
  </li>

  <li class="search">
    <a href="/search" class="top-menu-search">
    	<span>Search</span>
    </a>
  </li>

</ul>
';

  $export['top_menu_icons'] = $fe_block_boxes;

  return $export;
}
