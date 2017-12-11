//
//  umsjonui.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__umsjonui__
#define __main_assignment__umsjonui__

#include <iostream>
#include <string>
#include <vector>
#include "toppings.h"
#include "Pizza.hpp"
#include "PizzaService.h"
#include "Order.h"
#include "OrderService.hpp"
#include "Crust.h"
#include "CrustService.h"
#include "DeliveryPlace.hpp"

using namespace std;

class UmsjonUI {
    
private:
    string place;
    string other;
    Pizza pizza;
    Order order;
    Crust crust;
    DeliveryPlace deliveryplace;
    
    vector<Crust> create_crust();
    vector<DeliveryPlace> create_deliveryplace();
    
    void val_umsjonUI();
    void val_pizzaUI();
    void val_menu_pizzaUI();
    void val_annad_umsjonUI();
    void annad_umsjonUI();
    
    void toppingsUI();
    
    Order create_order();
    Pizza create_pizza();

    PizzaService pizza_service;
    OrderService order_service;
    CrustService crust_service;
    
public:
    UmsjonUI();
    void umsjonUI();
    
};

#endif /* defined(__main_assignment__umsjonui__) */
