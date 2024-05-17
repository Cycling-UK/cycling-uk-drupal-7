<div class="sticky">
    <?php if ($sticky) { ?>
        <span class="wrapper"><span>Yes</span></span>
    <?php } ?>
</div>

<?php
if ($sticky) {
    $stext = 'sticky-Yes';
} else {
    $stext = 'sticky-No';
}?>

<a class="<?php print $stext; ?>" href="<?php print $node_url; ?>">
    <span class="date"><?php if (isset($content['field_date'])) {
      print render($content['field_date']);
    } elseif (isset($content['field_date_ride'])) {
      print render($content['field_date_ride']);
    } else {
      print render($content['post_date']);} ?></span>
    <?php
    if (isset($content['field_hero'])) {
      print '<span class="image">';
      if ($content['field_hero']['#items'][0]['type'] !== 'video') {
        print theme('image_style', array('style_name' => '320x205', 'path' => $content['field_hero']['#items'][0]['uri']));
      } else {
        //print_r($content['field_hero']['#items'][0]);
        print theme('image_style', array('style_name' => '320x205', 'path' => $content['field_hero']['#items'][0]['field_image']['und'][0]['uri']));
      }
      print '</span>';
    } elseif (isset($content['field_image'])) {
      print '<span class="image">';
      print theme('image_style', array('style_name' => '320x205', 'path' => $content['field_image']['#items'][0]['uri']));
      print '</span>';
    } elseif (isset($content['field_image_gallery'])) {
      print '<span class="image">';
      print theme('image_style', array('style_name' => '320x205', 'path' => $content['field_image_gallery']['#items'][0]['uri']));
      print '</span>';
    } elseif (isset($content['field_group_image'])) {
      print '<span class="image">';
      print theme('image_style', array('style_name' => '320x205', 'path' => $content['field_group_image']['#items'][0]['uri']));
      print '</span>';
    } elseif (isset($content['field_banner_image_paragraph'])) {
      print '<span class="image">';
      print theme('image_style', array('style_name' => '320x205', 'path' => $content['field_banner_image_paragraph'][0][entity][paragraphs_item][1]['field_banner_image'][0]['#item']['uri']));
      print '</span>';
    }else { ?>
    <span class="image">
      <img class="img-responsive" srcset="<?php print file_create_url('public://styles/320x205/public/default_images/default_image_0.jpg'); ?>" alt="" title="">
    </span>

    <?php } ?>
    <span class="terms"><?php
    if (isset($content['field_town'])) {
      print render($content['field_town']);
    } else {
      print render($content['field_post_type']);
    }
    ?></span>
    <span class="yellow-line line-width-140"></span>
    <span class="title"><span class="inner-container"><?php print truncate_utf8($title, 85, TRUE, TRUE); ?>
      <?php

      //if (isset($content['field_date']) || isset($content['field_date_ride'])) {
      //  print '<br>';
      //  $intX = 0;
      //  while (date('Y-m-d', strtotime($content['field_date_ride']['#items'][$intX]['value'])) < date('Y-m-d') && isset($content['field_date_ride']['#items'][$intX]['value'])) {
      //    $intX++;
      //  }
      //  print format_date(strtotime($content['field_date']['#items'][$intX]['value']), 'long_date_only');
      //  $repeat = ($intX > 0)?'Next ride ': '';
      //  print $repeat. format_date(strtotime($content['field_date_ride']['#items'][$intX]['value']), 'short_date_only') . ' '  . date_repeat_rrule_description($content['field_date_ride']['#items'][0]['rrule']) ;
      //}
      ?>
    </span></span>


    <span class="btn btn-transparent"><span class="inner-container">View</span></span>
</a>
