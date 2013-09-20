<?php
/**
 * @file
 * Example view.
 */

/**
 * Implementation of hook_views_default_views()
 */
function apachesolr_views_statistics_views_default_views() {
  $views = array();

  $view = new view();
  $view->name = 'apachesolr_views_statistics_example';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__solr';
  $view->human_name = 'Apache Solr Views Statistics Example';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Apache Solr Views Statistics Example';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'label' => 'label',
    'content' => 'content',
    'is_statistics_totalcount' => 'is_statistics_totalcount',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'label' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'content' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'is_statistics_totalcount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  /* Field: Apache Solr: content */
  $handler->display->display_options['fields']['content']['id'] = 'content';
  $handler->display->display_options['fields']['content']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['content']['field'] = 'content';
  /* Field: Apache Solr: is_statistics_totalcount */
  $handler->display->display_options['fields']['is_statistics_totalcount']['id'] = 'is_statistics_totalcount';
  $handler->display->display_options['fields']['is_statistics_totalcount']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['is_statistics_totalcount']['field'] = 'is_statistics_totalcount';
  /* Sort criterion: Apache Solr: is_statistics_totalcount */
  $handler->display->display_options['sorts']['is_statistics_totalcount']['id'] = 'is_statistics_totalcount';
  $handler->display->display_options['sorts']['is_statistics_totalcount']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['is_statistics_totalcount']['field'] = 'is_statistics_totalcount';
  $handler->display->display_options['sorts']['is_statistics_totalcount']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'apachesolr-views-statistics-example';

  $views['apachesolr_views_statistics_example'] = $view;

  return $views;
}