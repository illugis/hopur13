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
    void val_umsjonUI();
    vector<Crust> create_crust();
    vector<Topping> create_topping();
    vector<PizzaMenu> create_pizzamenu();
    vector<Other> create_other();
    vector<DeliveryPlace> create_deliveryplace();
    Crust crust;
    Topping topping;
    Other other;
    DeliveryPlace deliveryplace;
    CrustService crust_service;
    ToppingsService toppings_service;
    PizzaMenuService pizzamenu_service;
    OtherService other_service;
    DeliveryPlaceService deliveryplace_service;
    
public:
    //Gerir þessi smiður eitthvað?
    UmsjonUI();
    void umsjonUI();
    
};

#endif /* defined(__main_assignment__umsjonui__) */
