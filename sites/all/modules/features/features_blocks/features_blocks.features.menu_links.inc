<?php

/**
 * @file
 * features_blocks.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function features_blocks_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-top-menu_forum:https://forum.cyclinguk.org/.
  $menu_links['menu-top-menu_forum:https://forum.cyclinguk.org/'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'https://forum.cyclinguk.org/',
    'router_path' => '',
    'link_title' => 'Forum',
    'options' => array(
      'attributes' => array(
        'title' => 'Visit the Cycling UK forums',
        'class' => array(
          0 => 'top-menu-forum',
        ),
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'forum',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_forum:https://forum.cyclinguk.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_login:user/login.
  $menu_links['menu-top-menu_login:user/login'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => 'Login',
        'class' => array(
          0 => 'top-menu-login',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'login',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-top-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_logout:user/logout.
  $menu_links['menu-top-menu_logout:user/logout'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => 'Logout',
        'class' => array(
          0 => 'top-menu-logout',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'logout',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-top-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_maps:node/47621.
  $menu_links['menu-top-menu_maps:node/47621'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/47621',
    'router_path' => 'node/%',
    'link_title' => 'Maps',
    'options' => array(
      'attributes' => array(
        'title' => 'Plan your next cycling journey',
        'class' => array(
          0 => 'top-menu-maps',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'maps',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_maps:node/47621',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_my-account:user.
  $menu_links['menu-top-menu_my-account:user'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My Account',
    'options' => array(
      'attributes' => array(
        'title' => 'My Account',
        'class' => array(
          0 => 'top-menu-my-account',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'my-account',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-top-menu_my-account:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_search:search.
  $menu_links['menu-top-menu_search:search'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => 'Search the Cycling UK websit',
        'class' => array(
          0 => 'top-menu-search',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'search',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_search:search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_shop:https://shop.cyclinguk.org/.
  $menu_links['menu-top-menu_shop:https://shop.cyclinguk.org/'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'https://shop.cyclinguk.org/',
    'router_path' => '',
    'link_title' => 'Shop',
    'options' => array(
      'attributes' => array(
        'title' => 'Visit the Cycling UK shop',
        'class' => array(
          0 => 'top-menu-shop',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'shop',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_shop:https://shop.cyclinguk.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Forum');
  t('Login');
  t('Logout');
  t('Maps');
  t('My Account');
  t('Search');
  t('Shop');

  return $menu_links;
}
