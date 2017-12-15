//
//  OrderRepository.hpp
//  main assignment
//
//  Created by illugi steingrimsson on 09/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#ifndef OrderRepository_hpp
#define OrderRepository_hpp

#include "Order.h"
#include <fstream>

class OrderRepository {

private:
    Order order;
    
    
public:
    OrderRepository();
    void storeAllOrders(const vector<Order> &order);
    vector<Order> retrieveAllOrders();
    
    vector<Order> retrieveOrdersDelivery(string str);
    vector<Order> retrieveOrderForName(string str, string name);
    vector<Order> retrievePizzasPlace(string str);
};


#endif /* OrderRepository_hpp */
