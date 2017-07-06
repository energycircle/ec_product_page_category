<?php
/**
 * @file
 * ec_product_page_category.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ec_product_page_category_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__product_category';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__product_category'] = $strongarm;

  return $export;
}
