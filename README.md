apachesolr_views_statistics
===========================

Description
-----------------
Extension for Apache Solr View Drupal module to work with statistics module.
Creates fields: is_statistics_totalcount, is_statistics_daycount which are listed
in Apache Solr view, after the reindexing process.

After content is viewed, the module will update its Apache Solr fields for viewed
content, and will mark the content for reindexing. Counters visible in views will
be updated after next Apache Solr index rebuild.