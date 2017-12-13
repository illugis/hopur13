//
//  umsjonui.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__umsjonui__
#define __main_assignment__umsjonui__

#include "Pizza.hpp"
#include "PizzaService.h"
#include "Order.h"
#include "OrderService.hpp"
#include "Crust.h"
#include "CrustService.h"
#include "toppings.h"
#include "ToppingsService.h"
#include "PizzaMenu.h"
#include "PizzaMenuService.h"
#include "Other.h"
#include "OtherService.h"
#include "DeliveryPlace.hpp"
#include "DeliveryPlaceService.hpp"
#include <iostream>
#include <string>
#include <vector>
#pragma once

using namespace std;

class UmsjonUI {
    
private:
    Pizza pizza;
    
    Crust crust;
    Topping topping;
    Other other;
    DeliveryPlace deliveryplace;
    
    vector<Crust> create_crust();
    vector<Topping> create_topping();
    vector<PizzaMenu> create_pizzamenu();
    vector<Other> create_other();
    vector<DeliveryPlace> create_deliveryplace();
    
    void val_umsjonUI();
    void val_pizzaUI();
    void val_menu_pizzaUI();
    
    //Pizza create_pizza();

    PizzaService pizza_service;
    
    CrustService crust_service;
    ToppingsService toppings_service;
    PizzaMenuSerivce pizzamenu_service;
    OtherService other_service;
    DeliveryPlaceService deliveryplace_service;
    
public:
    UmsjonUI();
    void umsjonUI();
    
};

#endif /* defined(__main_assignment__umsjonui__) */
