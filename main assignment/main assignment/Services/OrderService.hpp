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
    
    vector<Order> retrieveOrdersDelivery(string str);
    vector<Order> retrieveOrderForName(string str, string name);
    vector<Order> retrievePizzasPlace(string str);
    vector<Order> retrievePizzasForName(string str, string name);
};

#endif /* OrderService_hpp */
