<a href="<?php print $node_url; ?>">
    <?php
    if (isset($content['field_hero'])) {
        print '<span class="image">';
        if ($content['field_hero']['#items'][0]['type'] !== 'video') {
          print theme('image_style', array('style_name' => '640x240', 'path' => $content['field_hero']['#items'][0]['uri']));
        } else {
          print theme('image_style', array('style_name' => '640x240', 'path' => $content['field_hero']['#items'][0]['field_image']['und'][0]['uri']));
        }
        print '</span>';
    } elseif (isset($content['field_image'])) {
        print '<span class="image">';
        print theme('image_style', array('style_name' => '640x240', 'path' => $content['field_image']['#items'][0]['uri']));
        print '</span>';
    } else { ?>

        <span class="image">
            <img class="img-responsive" srcset="<?php print file_create_url('public://styles/640x240/public/default_images/default_image_0.jpg'); ?>" alt="" title="">
        </span>

    <?php } ?>

    <span class="inner-wrapper">
        <span class="title"><?php print $title; ?></span>
        <span class="btn btn-transparent">View</span>
    </span>
</a>
