<?php

$view = new view();
$view->name = 'commerce_cart_form';
$view->description = 'Display a shopping cart update form.';
$view->tag = 'commerce';
$view->base_table = 'commerce_order';
$view->human_name = 'Shopping cart form';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Shopping cart';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
    'commerce_display_path' => 'commerce_display_path',
    'line_item_title' => 'line_item_title',
    'line_item_label' => 'line_item_label',
    'commerce_unit_price' => 'commerce_unit_price',
    'edit_quantity' => 'edit_quantity',
    'edit_delete' => 'edit_delete',
    'commerce_total' => 'commerce_total',
    'field_family_member' => 'line_item_title',
    'rendered_entity' => 'line_item_title',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
    'commerce_display_path' => array(
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
    ),
    'line_item_title' => array(
        'align' => '',
        'separator' => '<br>',
        'empty_column' => 0,
    ),
    'line_item_label' => array(
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
    ),
    'commerce_unit_price' => array(
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
    ),
    'edit_quantity' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
    ),
    'edit_delete' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
    ),
    'commerce_total' => array(
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
    ),
    'field_family_member' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
    ),
    'rendered_entity' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
    ),
);
/* Footer: Commerce Line Item: Line item summary */
$handler->display->display_options['footer']['line_item_summary']['id'] = 'line_item_summary';
$handler->display->display_options['footer']['line_item_summary']['table'] = 'commerce_line_item';
$handler->display->display_options['footer']['line_item_summary']['field'] = 'line_item_summary';
$handler->display->display_options['footer']['line_item_summary']['label'] = 'Cart summary';
$handler->display->display_options['footer']['line_item_summary']['info'] = array(
    'quantity' => 0,
    'total' => 'total',
);
/* Relationship: Commerce Order: Referenced line items */
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['required'] = TRUE;
/* Field: Commerce Line item: Display path */
$handler->display->display_options['fields']['commerce_display_path']['id'] = 'commerce_display_path';
$handler->display->display_options['fields']['commerce_display_path']['table'] = 'field_data_commerce_display_path';
$handler->display->display_options['fields']['commerce_display_path']['field'] = 'commerce_display_path';
$handler->display->display_options['fields']['commerce_display_path']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['fields']['commerce_display_path']['label'] = '';
$handler->display->display_options['fields']['commerce_display_path']['exclude'] = TRUE;
/* Field: Commerce Line Item: Title */
$handler->display->display_options['fields']['line_item_title']['id'] = 'line_item_title';
$handler->display->display_options['fields']['line_item_title']['table'] = 'commerce_line_item';
$handler->display->display_options['fields']['line_item_title']['field'] = 'line_item_title';
$handler->display->display_options['fields']['line_item_title']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['fields']['line_item_title']['label'] = 'Product';
$handler->display->display_options['fields']['line_item_title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['line_item_title']['alter']['path'] = '[commerce_display_path]';
/* Field: Commerce Line Item: Label */
$handler->display->display_options['fields']['line_item_label']['id'] = 'line_item_label';
$handler->display->display_options['fields']['line_item_label']['table'] = 'commerce_line_item';
$handler->display->display_options['fields']['line_item_label']['field'] = 'line_item_label';
$handler->display->display_options['fields']['line_item_label']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['fields']['line_item_label']['label'] = '';
$handler->display->display_options['fields']['line_item_label']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['line_item_label']['alter']['text'] = 'Edit';
$handler->display->display_options['fields']['line_item_label']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['line_item_label']['link_to_line_item'] = 'customer';
/* Field: Commerce Line item: Unit price */
$handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
$handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
$handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
$handler->display->display_options['fields']['commerce_unit_price']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['fields']['commerce_unit_price']['label'] = 'Price';
$handler->display->display_options['fields']['commerce_unit_price']['element_class'] = 'price';
$handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
/* Field: Commerce Line Item: Quantity text field */
$handler->display->display_options['fields']['edit_quantity']['id'] = 'edit_quantity';
$handler->display->display_options['fields']['edit_quantity']['table'] = 'commerce_line_item';
$handler->display->display_options['fields']['edit_quantity']['field'] = 'edit_quantity';
$handler->display->display_options['fields']['edit_quantity']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['fields']['edit_quantity']['label'] = 'Quantity';
$handler->display->display_options['fields']['edit_quantity']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['edit_quantity']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['edit_quantity']['element_label_colon'] = FALSE;
/* Field: Commerce Line Item: Delete button */
$handler->display->display_options['fields']['edit_delete']['id'] = 'edit_delete';
$handler->display->display_options['fields']['edit_delete']['table'] = 'commerce_line_item';
$handler->display->display_options['fields']['edit_delete']['field'] = 'edit_delete';
$handler->display->display_options['fields']['edit_delete']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['fields']['edit_delete']['label'] = 'Remove';
/* Field: Commerce Line item: Total */
$handler->display->display_options['fields']['commerce_total']['id'] = 'commerce_total';
$handler->display->display_options['fields']['commerce_total']['table'] = 'field_data_commerce_total';
$handler->display->display_options['fields']['commerce_total']['field'] = 'commerce_total';
$handler->display->display_options['fields']['commerce_total']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['fields']['commerce_total']['element_class'] = 'price';
$handler->display->display_options['fields']['commerce_total']['click_sort_column'] = 'amount';
/* Field: Commerce Line Item: Rendered Commerce Line item */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_commerce_line_item';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'shopping_basket';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Sort criterion: Commerce Line Item: Line item ID */
$handler->display->display_options['sorts']['line_item_id']['id'] = 'line_item_id';
$handler->display->display_options['sorts']['line_item_id']['table'] = 'commerce_line_item';
$handler->display->display_options['sorts']['line_item_id']['field'] = 'line_item_id';
$handler->display->display_options['sorts']['line_item_id']['relationship'] = 'commerce_line_items_line_item_id';
/* Contextual filter: Commerce Order: Order ID */
$handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
$handler->display->display_options['arguments']['order_id']['table'] = 'commerce_order';
$handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
$handler->display->display_options['arguments']['order_id']['default_action'] = 'empty';
$handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Commerce Line Item: Line item is of a product line item type */
$handler->display->display_options['filters']['product_line_item_type']['id'] = 'product_line_item_type';
$handler->display->display_options['filters']['product_line_item_type']['table'] = 'commerce_line_item';
$handler->display->display_options['filters']['product_line_item_type']['field'] = 'product_line_item_type';
$handler->display->display_options['filters']['product_line_item_type']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['filters']['product_line_item_type']['value'] = '1';
$handler->display->display_options['filters']['product_line_item_type']['group'] = 0;
