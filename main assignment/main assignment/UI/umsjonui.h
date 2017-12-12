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
#include "Pizza.hpp"
#include "PizzaService.h"
#include "Order.h"
#include "OrderService.hpp"
#include "Crust.h"
#include "CrustService.h"
#include "toppings.h"
#include "ToppingsService.h"
#include "Other.h"
#include "OtherService.h"
#include "DeliveryPlace.hpp"
#include "DeliveryPlaceService.hpp"
#pragma once

using namespace std;

class UmsjonUI {
    
private:
    Pizza pizza;
    Order order;
    
    Crust crust;
    Topping topping;
    Other other;
    DeliveryPlace deliveryplace;
    
    vector<Crust> create_crust();
    vector<Topping> create_topping();
    vector<Other> create_other();
    vector<DeliveryPlace> create_deliveryplace();
    
    void val_umsjonUI();
    void val_pizzaUI();
    void val_menu_pizzaUI();
    void val_annad_umsjonUI();
    void annad_umsjonUI();
    
    void toppingsUI();
    
    Order create_order();
    //Pizza create_pizza();

    PizzaService pizza_service;
    OrderService order_service;
    
    CrustService crust_service;
    ToppingsService toppings_service;
    OtherService other_service;
    DeliveryPlaceService deliveryplace_service;
    
public:
    UmsjonUI();
    void umsjonUI();
    
};

#endif /* defined(__main_assignment__umsjonui__) */
