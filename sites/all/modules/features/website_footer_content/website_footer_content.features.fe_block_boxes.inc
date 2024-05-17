<?php

/**
 * @file
 * website_footer_content.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function website_footer_content_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Website footer';
  $fe_block_boxes->format = 'code';
  $fe_block_boxes->machine_name = 'footer';
  $fe_block_boxes->body = '<p><span class="yellow-text">Patron:</span> Her Majesty The Queen</p>

<p><span class="yellow-text">President:</span> Jon Snow</p>

<p><span class="yellow-text">Chief Executive:</span> Sarah Mitchell</p>

<p>&nbsp;</p>

<p class="small-print">Cycling UK is a trading name of Cyclists’ Touring Club (CTC) a company limited by guarantee,
    registered in England no: 25185. Registered as a charity in England and Wales charity no: 1147607 and in Scotland
    charity no: SC042541. Registered office: Parklands, Railton Road, Guildford, Surrey GU2 9JX.</p>

<p>&nbsp;</p>

<p><strong>Copyright © CTC 2021</strong></p>

<ul class="footer-links">
    <li class="galleta-comp">Cookie Preferences</li>
    <li><a href="/terms-and-conditions">Terms and Conditions</a></li>
    <li><a href="/grand-draw-terms">Grand Draw Terms and Conditions</a></li>
    <li><a href="https://shop.cyclinguk.org/kit-terms-postage-and-returns">Shop Terms, Postage and Returns</a></li>
    <li><a href="/cookie-policy">Cookie Policy</a></li>
    <li><a href="/privacy-policy">Privacy Policy</a></li>
    <!--<li><a href="http://www.cyclinguk.org/contact">Contact</a></li>-->
    <li><a href="/membership-frequently-asked-questions">Membership FAQ</a></li>
    <li><a href="/sitemap.xml">Sitemap</a></li>
</ul>
<div class="footer-end-logos">
    <div class="fundreg">
        <a href="https://www.fundraisingregulator.org.uk/" title="the fundraising regulator">
            <img src="/sites/all/themes/cyclingukxl/images/logos/fundraisingregulator45.png" alt="fundraising regulator logo" class="fundraising-regulator">
        </a>
    </div>
</div>';

  $export['footer'] = $fe_block_boxes;

  return $export;
}
