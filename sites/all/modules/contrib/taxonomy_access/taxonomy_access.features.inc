<?php

// This module implements export and import of taxonomy access control configuration
// with the Features module. The struture of the configuration is shown below.
// Read and understand it before reading the code. Also to understand the
// concepts, look into the configuration menu of taxonomy access control.
//    configuration   = [roleName => roleDescription]
//    roleDescription = globalDefaults x vocabularies
//    globalDefaults  = grants
//    vocabularies    = [vocabularyName => vocabularyAccess]
//    vocabularyAccess= default x termAccess
//    termAccesses    = [termName => grants]

// Implementation of hook_features_api.
// Define the taxonomy access entry for the Features list.
function taxonomy_access_features_api() {
  return array(
    'taxonomy_access' => array(
      'name' => 'Taxonomy Access Control',
      'file' => drupal_get_path('module', 'taxonomy_access') .'/taxonomy_access.features.inc',
      'default_hook' => 'taxonomy_access_features_default_settings',
      'feature_source' => TRUE,
    ),
  );
}

// Implementation of hook_features_export_options.
// Returns a list of user roles known to taxonomy access.
function taxonomy_access_features_export_options() {
  $options = array();
  $roles=_taxonomy_access_user_roles();
  $i=0;
  foreach ($roles as $role){
    $options[$role]= $role;
    $i += 1;
  };
  return $options;
}

// Implementation of hook_features_export.
// Definition of the information going into the Features info file.
//  Dependency of the taxonomy_drupal module.
//  A list of all user roles selected in Features.
function taxonomy_access_features_export($data, &$export, $module_name) {
  $export['dependencies']['taxonomy_access'] = 'taxonomy_access';
  foreach ($data as $component) {
    $export['features']['taxonomy_access'][$component] = $component;
  }
  return array();
}

// Get defaults for a user role.
// Both global default and defaults for vocabularies is returned.
function _tac_features_dbGetDefaults($rid) {
  $tids =
    db_query(
      "SELECT vid, grant_view,grant_update, grant_delete, grant_create, grant_list
       FROM {taxonomy_access_default}
       WHERE rid = :rid ",
      array(':rid' => $rid)
    )
    ->fetchAll();
  return $tids;
}

// Database query for all terms with grants in a vocabulary for a user role.
function _tac_features_dbGetTerms($rid, $vid) {
  $tids =
    db_query(
      "SELECT td.tid, ta.grant_view, ta.grant_update, ta.grant_delete, ta.grant_create, ta.grant_list
       FROM {taxonomy_term_data} td
       LEFT JOIN {taxonomy_access_term} ta ON td.tid = ta.tid
       WHERE ta.rid = :rid AND td.vid = :vid ",
      array(':rid' => $rid, ':vid' => $vid)
    )
    ->fetchAll();
  return $tids;
}

// Get all terms in a vocabulary for a user role.
function _tac_features_getTerms($rid, $vid){
  $termGrants=_tac_features_dbGetTerms($rid, $vid);
  $terms = array();
  foreach($termGrants as $termGrant){
    $term = taxonomy_term_load($termGrant->tid);
    // We don't want to export the tid, its is internal.
    unset($termGrant->tid);
    $terms[$term->name]=$termGrant;
  }
  return $terms;
}

// Get all vocabularies with defaults and terms for a user role.
// Global default is ignored.
function _tac_features_termsGetVocabularies($rid){
  $vocsDef=_tac_features_dbGetDefaults($rid);
  $vocabularies=array();
  foreach($vocsDef as $vocDef){
    $voc=new stdClass();
    $vid=$vocDef->vid;
    if ($vid ==0){
        // global defaults
    } else {
      //  vocabulary default
      // We don't want to export the vid, its is internal.
      unset($vocDef->vid);
      $voc->Default = $vocDef;
      $voc->terms=_tac_features_getTerms($rid, $vid);
      $vocabulary=taxonomy_vocabulary_load($vid);
      $vocabularies[$vocabulary->name]=$voc;
    }
  }
  return $vocabularies ;
}

// hook_features_export_render.
// Generate the configuration to be exported.
function taxonomy_access_features_export_render($module_name, $data, $export = NULL) {
  $options  =taxonomy_access_features_export_options();
  $globals=taxonomy_access_global_defaults();
  $configuration=array();
   foreach ($data as $sysName){
    $roleName=$options[$sysName];
    $role=user_role_load_by_name($roleName);
    $rid=$role->rid;
    $access = new stdClass();
    $access->globalDefault=isset($globals[$rid]) ? $globals[$rid] : NULL ;
    unset($access->globalDefault->rid);
    $access->vocabularies=_tac_features_termsGetVocabularies($rid);
    $configuration[$roleName] =$access;
  }
  $code = " return " . features_var_export($configuration) . ';' ;
  return array('taxonomy_access_features_default_settings' => $code);
}

//  Import a term for a user role.
//  Pass 1: Check that the term exists in the right vocabylary.
//  Pass 2: Import the term.
function _tac_features_importTerm($vocabulary, $termName, $rid, $grants, $import){
  $result = false ;
  $terms = taxonomy_get_term_by_name($termName, $vocabulary->machine_name);
  if (count($terms) == 1){
    $term=array_pop($terms);
    if (!$import){
      $vid=$term->vid;
      $vocabularyDb=taxonomy_vocabulary_load($vid);
      $result = $vocabularyDb && ($vocabularyDb->name == $vocabulary->name);
    } else {
      $grantRow=_taxonomy_access_format_grant_record($term->tid, $rid, $grants, FALSE);
      $result=taxonomy_access_set_term_grants(array($grantRow));
    }
  }
  return $result ;
}

//  Get the vocabulary object from vocabulary name.
function _tac_features_getVocabularyByName($vocabularyName) {
  $vocabularies = taxonomy_get_vocabularies(NULL);
  $vacabulary=NULL;
  foreach ($vocabularies as $voc) {
    if ($voc->name == $vocabularyName) {
      $vocabulary=$voc;
      break;
    }
  }
  return $vocabulary;
}

//  Import all terms for user role.
//  Pass 1: Check that all terms are valid.
//  Pass 2: Import all terms in the vocabulary.
function _tac_features_importVocabulary($rid, $vocName, $vocData, $import){
  $result = true;
  $vocabulary=_tac_features_getVocabularyByName($vocName);
  if (!$import){
    $result = !empty($vocabulary);
  } else {
    $grantRow=_taxonomy_access_format_grant_record($vocabulary->vid, $rid, $vocData['Default'], TRUE);
    $result = taxonomy_access_set_default_grants(array($grantRow));
  }
  foreach ($vocData['terms'] as $termName => $grants){
    if (!_tac_features_importTerm($vocabulary, $termName, $rid, $grants, $import)){
      $result=false ;
      break;
    }
  }
  return $result;
}

//  Import user role global default.
//  Pass 1: Nothing.
//  Pass 2: Import the global.
function _tac_features__tac_features_importRoleGlobalDefault($rid, $globalDefault, $import){
  $result = false ;
  if (!$import){
    $result=true;
  } else {
    // If taxonomy access control disabled.
    if (empty($globalDefault)){
      $result=true;
    } else {
      taxonomy_access_enable_role($rid);
      $grantRow=_taxonomy_access_format_grant_record(0, $rid, $globalDefault, TRUE);
      $result = taxonomy_access_set_default_grants(array($grantRow));
    }
  }
  return $result ;
}

// Import a user role.
// Pass 1: Check the role exists and all vocabularies are valid.
// Pass 2: Delete the role if it exists and create the role.
//         Import all the vocabularies.
function _tac_features_importRole($roleName, $roleAccess, $import){
  $result = false ;
  $role=user_role_load_by_name($roleName);
  $rid=$role->rid;
  if (!$import){
    $result = $role && ($role->name == $roleName);
  } else {
    taxonomy_access_delete_role_grants($rid);
    $result = true;
  }
  if ($result) {
    $result=_tac_features__tac_features_importRoleGlobalDefault($rid, $roleAccess['globalDefault'], $import);
  }
  if ($result){
    foreach($roleAccess['vocabularies'] as $vocName => $vocData){
      if (!_tac_features_importVocabulary($rid, $vocName, $vocData, $import)){
        $result=false;
        break;
      }
    }
  }
  return $result ;
}

//  Import all user roles in the configuration.
//  Pass 1: Check all user roles in the configuration.
//  Pass 2: Import all user roles in the configuration.
function _tac_features_importConfiguration($configuration, $import){
  $result= true ;
  foreach($configuration as $roleName => $roleAccess){
    if (!_tac_features_importRole($roleName, $roleAccess, $import)){
      $result = false ;
      break ;
    }
  }
  return $result ;
}

//  Validate configuration and import it if it is validated.
//  The import functions are two pass functions, controlled by the parameter
//  $import. First pass with $import=false checks the configuration for
//  consistency with the database. The second pass with $import=false does
//  the actual import into the database.
function  _tac_features_validateAndImport($configuration){
  $result=_tac_features_importConfiguration($configuration, false);
  if ($result){
    $result = _tac_features_importConfiguration($configuration, true);
  }
  return $result ;
}

// Implementation of hook_features_rebuild().
function taxonomy_access_features_rebuild($module) {
  $configuration = module_invoke($module, 'taxonomy_access_features_default_settings');
  $result=_tac_features_validateAndImport($configuration);
}

// Implementation of hook_features_revert().
function taxonomy_access_features_revert($module) {
  taxonomy_access_features_rebuild($module);
}
