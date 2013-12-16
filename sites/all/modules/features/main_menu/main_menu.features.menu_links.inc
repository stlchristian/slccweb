<?php
/**
 * @file
 * main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_404-page:node/92
  $menu_links['main-menu_404-page:node/92'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/92',
    'router_path' => 'node/%',
    'link_title' => '404 Page',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_404-page:node/92',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_default-pages:node/113',
  );
  // Exported menu link: main-menu_academics:node/117
  $menu_links['main-menu_academics:node/117'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/117',
    'router_path' => 'node/%',
    'link_title' => 'Academics',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_academics:node/117',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_admissions:node/116
  $menu_links['main-menu_admissions:node/116'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/116',
    'router_path' => 'node/%',
    'link_title' => 'Admissions',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_admissions:node/116',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_articles:articles
  $menu_links['main-menu_articles:articles'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'articles',
    'router_path' => 'articles',
    'link_title' => 'Articles',
    'options' => array(
      'identifier' => 'main-menu_articles:articles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_default-pages:node/113',
  );
  // Exported menu link: main-menu_blue:node/83
  $menu_links['main-menu_blue:node/83'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/83',
    'router_path' => 'node/%',
    'link_title' => 'Blue',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_blue:node/83',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tb-styles:node/81',
  );
  // Exported menu link: main-menu_bonus-pages:node/95
  $menu_links['main-menu_bonus-pages:node/95'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/95',
    'router_path' => 'node/%',
    'link_title' => 'Bonus pages',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_bonus-pages:node/95',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_demo-contents:demo-contents',
  );
  // Exported menu link: main-menu_bonus-styles:node/115
  $menu_links['main-menu_bonus-styles:node/115'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/115',
    'router_path' => 'node/%',
    'link_title' => 'Bonus styles',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_bonus-styles:node/115',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_styles:node/81',
  );
  // Exported menu link: main-menu_brown:node/84
  $menu_links['main-menu_brown:node/84'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/84',
    'router_path' => 'node/%',
    'link_title' => 'Brown',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_brown:node/84',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tb-styles:node/81',
  );
  // Exported menu link: main-menu_contact-us:contact
  $menu_links['main-menu_contact-us:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_contact-us:contact',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact-us:node/79
  $menu_links['main-menu_contact-us:node/79'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/79',
    'router_path' => 'node/%',
    'link_title' => 'Contact us',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_contact-us:node/79',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_courses-page:courses-page
  $menu_links['main-menu_courses-page:courses-page'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'courses-page',
    'router_path' => 'courses-page',
    'link_title' => 'Courses Page',
    'options' => array(
      'identifier' => 'main-menu_courses-page:courses-page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_bonus-pages:node/95',
  );
  // Exported menu link: main-menu_default-pages:node/113
  $menu_links['main-menu_default-pages:node/113'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/113',
    'router_path' => 'node/%',
    'link_title' => 'Default Pages',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_default-pages:node/113',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_demo-contents:demo-contents',
  );
  // Exported menu link: main-menu_default:node/82
  $menu_links['main-menu_default:node/82'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/82',
    'router_path' => 'node/%',
    'link_title' => 'Default',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_default:node/82',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tb-styles:node/81',
  );
  // Exported menu link: main-menu_demo-contents:demo-contents
  $menu_links['main-menu_demo-contents:demo-contents'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'demo-contents',
    'router_path' => 'demo-contents',
    'link_title' => 'Demo Contents',
    'options' => array(
      'attributes' => array(
        'title' => 'Demo Contents',
      ),
      'identifier' => 'main-menu_demo-contents:demo-contents',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events-page:events
  $menu_links['main-menu_events-page:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events Page',
    'options' => array(
      'identifier' => 'main-menu_events-page:events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_bonus-pages:node/95',
  );
  // Exported menu link: main-menu_forums:forum
  $menu_links['main-menu_forums:forum'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forums',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_forums:forum',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_green:node/85
  $menu_links['main-menu_green:node/85'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/85',
    'router_path' => 'node/%',
    'link_title' => 'Green',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_green:node/85',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tb-styles:node/81',
  );
  // Exported menu link: main-menu_grey:node/86
  $menu_links['main-menu_grey:node/86'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/86',
    'router_path' => 'node/%',
    'link_title' => 'Grey',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_grey:node/86',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_bonus-styles:node/115',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_iron:node/87
  $menu_links['main-menu_iron:node/87'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/87',
    'router_path' => 'node/%',
    'link_title' => 'Iron',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_iron:node/87',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_bonus-styles:node/115',
  );
  // Exported menu link: main-menu_login:user/login
  $menu_links['main-menu_login:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_default-pages:node/113',
  );
  // Exported menu link: main-menu_logout:user/logout
  $menu_links['main-menu_logout:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_default-pages:node/113',
  );
  // Exported menu link: main-menu_navigation:node/58
  $menu_links['main-menu_navigation:node/58'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/58',
    'router_path' => 'node/%',
    'link_title' => 'Navigation',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_navigation:node/58',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sf-navbar:node/22
  $menu_links['main-menu_sf-navbar:node/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'SF NavBar',
    'options' => array(
      'identifier' => 'main-menu_sf-navbar:node/22',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_navigation:node/58',
  );
  // Exported menu link: main-menu_students-page:students-page
  $menu_links['main-menu_students-page:students-page'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'students-page',
    'router_path' => 'students-page',
    'link_title' => 'Students page',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_students-page:students-page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_bonus-pages:node/95',
  );
  // Exported menu link: main-menu_styles:node/81
  $menu_links['main-menu_styles:node/81'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/81',
    'router_path' => 'node/%',
    'link_title' => 'Styles',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_styles:node/81',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_superfish-menu:node/58
  $menu_links['main-menu_superfish-menu:node/58'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/58',
    'router_path' => 'node/%',
    'link_title' => 'Superfish Menu',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_superfish-menu:node/58',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_navigation:node/58',
  );
  // Exported menu link: main-menu_tb-styles:node/81
  $menu_links['main-menu_tb-styles:node/81'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/81',
    'router_path' => 'node/%',
    'link_title' => 'TB styles',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_tb-styles:node/81',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_styles:node/81',
  );
  // Exported menu link: main-menu_teal:node/90
  $menu_links['main-menu_teal:node/90'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/90',
    'router_path' => 'node/%',
    'link_title' => 'Teal',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_teal:node/90',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_bonus-styles:node/115',
  );
  // Exported menu link: main-menu_videos-page:videos
  $menu_links['main-menu_videos-page:videos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'videos',
    'router_path' => 'videos',
    'link_title' => 'Videos Page',
    'options' => array(
      'identifier' => 'main-menu_videos-page:videos',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_bonus-pages:node/95',
  );
  // Exported menu link: main-menu_violet:node/89
  $menu_links['main-menu_violet:node/89'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/89',
    'router_path' => 'node/%',
    'link_title' => 'Violet',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_violet:node/89',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_bonus-styles:node/115',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('404 Page');
  t('Academics');
  t('Admissions');
  t('Articles');
  t('Blue');
  t('Bonus pages');
  t('Bonus styles');
  t('Brown');
  t('Contact Us');
  t('Contact us');
  t('Courses Page');
  t('Default');
  t('Default Pages');
  t('Demo Contents');
  t('Events Page');
  t('Forums');
  t('Green');
  t('Grey');
  t('Home');
  t('Iron');
  t('Login');
  t('Logout');
  t('Navigation');
  t('SF NavBar');
  t('Students page');
  t('Styles');
  t('Superfish Menu');
  t('TB styles');
  t('Teal');
  t('Videos Page');
  t('Violet');


  return $menu_links;
}
