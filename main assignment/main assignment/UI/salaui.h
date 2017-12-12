//
//  sala.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__sala__
#define __main_assignment__sala__

#include "Order.h"
#include "OrderService.hpp"
#include "Pizza.hpp"
#include "PizzaService.h"
#include "ToppingsService.h"

#include <iostream>

using namespace std;

class SalaUI {
    
private:
    string delivery;
    char payment;
    void sala_menuUI();
    void sala_orderUI();
    Order create_order();
    
    Order order;
    vector<Order> make_order();
    OrderService order_service;
    
    ToppingsService toppings_service;
    PizzaService pizza_service;
    
public:
    SalaUI();
    void salaUI();
    
};

#endif /* defined(__main_assignment__sala__) */
