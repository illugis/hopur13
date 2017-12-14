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
#include "Crust.h"
#include "CrustService.h"
#include "Other.h"
#include "OtherService.h"
#include "DeliveryPlace.hpp"
#include "DeliveryPlaceService.hpp"

#include <iostream>
#include <vector>
#pragma once

using namespace std;

class SalaUI {
    
private:
    void sala_menuUI();
    
    void make_order();
    void make_pizza();
    //void make_other();
    
    Order create_order();
    
    Order order;
    Pizza pizza;
    //vector<Order> make_order();
    OrderService order_service;
    
    CrustService crust_service;
    ToppingsService toppings_service;
    PizzaService pizza_service;
    OtherService other_service;
    DeliveryPlaceService deliveryplace_service;
    
public:
    SalaUI();
    void salaUI();
    
};

#endif /* defined(__main_assignment__sala__) */
