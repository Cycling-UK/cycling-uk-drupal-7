<?php

/**
 * @file
 * content_type_paragraphs.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function content_type_paragraphs_ckeditor_profile_defaults() {
  $data = array(
    'Paragraphs' => array(
      'name' => 'Paragraphs',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Bold\',\'Italic\',\'-\',\'NumberedList\',\'BulletedList\',\'-\',\'Link\',\'Unlink\',\'-\',\'Scayt\',\'Source\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'theme',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'linkit' => array(
            'name' => 'linkit',
            'desc' => 'Support for Linkit module',
            'path' => '%base_path%sites/all/modules/contrib/linkit/editors/ckeditor/',
            'buttons' => array(
              'linkit' => array(
                'label' => 'Linkit',
                'icon' => 'icons/linkit.png',
              ),
            ),
          ),
          'picture_ckeditor' => array(
            'name' => 'picture_ckeditor',
            'desc' => 'Support responsive images with the Picture module.',
            'buttons' => FALSE,
            'path' => '%base_path%sites/all/modules/contrib/picture/ckeditor/plugins/',
            'default' => 't',
          ),
          'tableresize' => array(
            'name' => 'tableresize',
            'desc' => 'Table Resize plugin. See <a href="http://ckeditor.com/addon/tableresize">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.5.6/full-all/plugins/tableresize/',
            'buttons' => FALSE,
            'default' => 't',
          ),
        ),
      ),
      'input_formats' => array(
        'paragraphs' => 'Paragraphs',
      ),
    ),
  );
  return $data;
}
