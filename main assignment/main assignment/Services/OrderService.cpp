//
//  OrderService.cpp
//  main assignment
//
//  Created by illugi steingrimsson on 09/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#include "OrderService.hpp"

void OrderService::add_order(const Order& order) {
    
    order_repo.add_order(order);
}

string OrderService::read_order() {
    
    return order_repo.read_order();
}


