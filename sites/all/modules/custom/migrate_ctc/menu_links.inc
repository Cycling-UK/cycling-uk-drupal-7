<?php


/**
 * Extend the default DrupalNode6Migration class to add field migrations.
 */
class MigrateDrupalMenuLinks6Migration extends DrupalMenuLinks6Migration {

  protected $all_node_migrations = array(
    'node_info',
    'node_area',
    'node_article',
    'node_blog',
    'node_briefings',
    'node_campaign',
    'node_case_study',
    'node_course_details',
    'node_course_venues',
    'node_cycle_magazine',
    'node_editorial_page',
    'node_gallery',
    'node_link',
    'node_member_benefit',
    'node_news',
    'node_newsletter',
    'node_panel',
    'node_person_profile',
    'node_press_release',
    'node_project',
    'node_publication',
    'node_tribe');
  /**
   * Extend parent constructor to add additional field mappings.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('module', 'module', FALSE);
    //$this->addFieldMapping('hidden',0,FALSE)->defaultValue(0);
    $this->addFieldMapping('link_path','link_path',FALSE);

  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    //print_r($row);
    //if ($row->menu_name != 'main-menu') {
      //echo 'miss'.$row->p1;
    //  return FALSE;
    //}

    //print_r($row->p1);
    //5717 - library
    //6533 - support (6434 join org 2530, 6537 why 446, 35441 membership 5564, 46754 trusts 9366, 68847 volunteer 20928, 170746 donate 32946)
    //6641 - go cycling (55083 groups, 55083/35620 resources, 64599 events old, 64604 events, 68447 events 20821)
    //6642 - campaigns (4729 cdf, 4766 local 354, 35518 campaigns 5262, 39278 views and breifings 7144  )
    //11515 - near me (inc groups as subs menus - other groups are at level 1)
    //35442 - projects 5436 (11608 inclusive 1208, 35443 outreach 5565, 51310 recycling 51310, 57684 courses 5566 )
    //349736 - about (4440 about, 11666 press, 38795 publications)
    //349801 - our services (35445 insurance, 35589 holidays, 57694 training)
    //351741 - advice
    //417901 - womens cycling

    //if ($row->p1 != 349736 and $row->p1 !=6641 and $row->p1 != 35442 and $row->p1 != 349801 and $row->p1 !=6533 and $row->p1 !=6642 and $row->p1 !=351741) {
    if ($row->p1 != 6533 and $row->p1 !=6641 and $row->p1 != 6642 and $row->p1 != 35442 and $row->p1 !=349736 and $row->p1 !=349801 and $row->p1 !=351741 and $row->p1 !=417901) {
      echo $row->p1.'/'.$row->p2.'; ';
      return FALSE;
    }

    if (isset($row->module)) {
      $row->module = ($row->module == 'nodehierarchy' ? 'menu' : $row->module);
    }
    //if (isset($row->link_path)){
    //  preg_match('!\d+!', $row->link_path, $match);
    //  $new_nid = $this->handleSourceMigration($this->all_node_migrations, $match);
    //  $row->link_path = 'node/'.$new_nid;
    //}
  }



}
