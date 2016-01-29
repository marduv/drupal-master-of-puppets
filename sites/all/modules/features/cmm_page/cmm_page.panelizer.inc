<?php
/**
 * @file
 * cmm_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cmm_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'b8941a61-1a74-4949-8b54-c1457cd40bd4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-46de8345-e99d-4daf-bd3f-b7f780fad351';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'system-help';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '46de8345-e99d-4daf-bd3f-b7f780fad351';
    $display->content['new-46de8345-e99d-4daf-bd3f-b7f780fad351'] = $pane;
    $display->panels['top'][0] = 'new-46de8345-e99d-4daf-bd3f-b7f780fad351';
    $pane = new stdClass();
    $pane->pid = 'new-f6f93b88-7a83-488c-9171-754185141caa';
    $pane->panel = 'top';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f6f93b88-7a83-488c-9171-754185141caa';
    $display->content['new-f6f93b88-7a83-488c-9171-754185141caa'] = $pane;
    $display->panels['top'][1] = 'new-f6f93b88-7a83-488c-9171-754185141caa';
    $pane = new stdClass();
    $pane->pid = 'new-2ba595a5-2652-4052-b500-ea5f8307d612';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2ba595a5-2652-4052-b500-ea5f8307d612';
    $display->content['new-2ba595a5-2652-4052-b500-ea5f8307d612'] = $pane;
    $display->panels['top'][2] = 'new-2ba595a5-2652-4052-b500-ea5f8307d612';
    $pane = new stdClass();
    $pane->pid = 'new-014a993a-00b0-4965-a61e-3126db60d578';
    $pane->panel = 'top';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '014a993a-00b0-4965-a61e-3126db60d578';
    $display->content['new-014a993a-00b0-4965-a61e-3126db60d578'] = $pane;
    $display->panels['top'][3] = 'new-014a993a-00b0-4965-a61e-3126db60d578';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2ba595a5-2652-4052-b500-ea5f8307d612';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  return $export;
}
