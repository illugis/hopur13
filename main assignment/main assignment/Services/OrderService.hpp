//
//  OrderService.hpp
//  main assignment
//
//  Created by illugi steingrimsson on 09/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#ifndef OrderService_hpp
#define OrderService_hpp

#include "Order.h"
#include "OrderRepository.hpp"

class OrderService {
    
private:
    OrderRepository order_repo;
    
public:
    OrderService();
    void storeAllOrders(const vector<Order> &order);
    vector<Order> retrieveAllOrders();
};

#endif /* OrderService_hpp */
