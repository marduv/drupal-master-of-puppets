<?php
/**
 * @file
 * cmm_articles.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cmm_articles_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
  $panelizer->no_blocks = TRUE;
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
  $display->uuid = 'f1cdcdf4-252d-4231-a2c7-685a61da1338';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-58db4277-c021-4bdb-916f-cda4cd421c3e';
    $pane->panel = 'top';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '58db4277-c021-4bdb-916f-cda4cd421c3e';
    $display->content['new-58db4277-c021-4bdb-916f-cda4cd421c3e'] = $pane;
    $display->panels['top'][0] = 'new-58db4277-c021-4bdb-916f-cda4cd421c3e';
    $pane = new stdClass();
    $pane->pid = 'new-e9b0f3e8-1cae-4dbd-add2-d0aba05e5642';
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
    $pane->uuid = 'e9b0f3e8-1cae-4dbd-add2-d0aba05e5642';
    $display->content['new-e9b0f3e8-1cae-4dbd-add2-d0aba05e5642'] = $pane;
    $display->panels['top'][1] = 'new-e9b0f3e8-1cae-4dbd-add2-d0aba05e5642';
    $pane = new stdClass();
    $pane->pid = 'new-9670b837-0b15-46d2-803a-c00f3f23375d';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
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
    $pane->uuid = '9670b837-0b15-46d2-803a-c00f3f23375d';
    $display->content['new-9670b837-0b15-46d2-803a-c00f3f23375d'] = $pane;
    $display->panels['top'][2] = 'new-9670b837-0b15-46d2-803a-c00f3f23375d';
    $pane = new stdClass();
    $pane->pid = 'new-20505ffb-c1dd-4195-b7e9-1da467f28ec5';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '20505ffb-c1dd-4195-b7e9-1da467f28ec5';
    $display->content['new-20505ffb-c1dd-4195-b7e9-1da467f28ec5'] = $pane;
    $display->panels['top'][3] = 'new-20505ffb-c1dd-4195-b7e9-1da467f28ec5';
    $pane = new stdClass();
    $pane->pid = 'new-1a7811a2-656d-4439-94a6-c5f99bd1fa3d';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1a7811a2-656d-4439-94a6-c5f99bd1fa3d';
    $display->content['new-1a7811a2-656d-4439-94a6-c5f99bd1fa3d'] = $pane;
    $display->panels['top'][4] = 'new-1a7811a2-656d-4439-94a6-c5f99bd1fa3d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9670b837-0b15-46d2-803a-c00f3f23375d';
  $panelizer->display = $display;
  $export['node:article:default'] = $panelizer;

  return $export;
}
