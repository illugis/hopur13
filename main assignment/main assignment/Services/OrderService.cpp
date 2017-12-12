//
//  OrderService.cpp
//  main assignment
//
//  Created by illugi steingrimsson on 09/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#include "OrderService.hpp"

OrderService::OrderService() {
    
}

void OrderService::storeAllOrders(const vector<Order> &order) {
    
    order_repo.storeAllOrders(order);
}

vector<Order> OrderService::retrieveAllOrders() {
    
    return order_repo.retrieveAllOrders();
}