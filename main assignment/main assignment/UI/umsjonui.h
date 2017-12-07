//
//  umsjonui.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__umsjonui__
#define __main_assignment__umsjonui__

#include "mainui.h"

#include <iostream>
#include <string>
#include <vector>
#include "toppings.h"
#include "Pizza.hpp"
#include "PizzaService.h"

using namespace std;

class UmsjonUI {
    
private:
    string place;
    string other;
    Pizza pizza;
    void val_umsjonUI();
    void val_pizzaUI();
    void val_menu_pizzaUI();
    Pizza create_pizza();
    PizzaService pizza_service;
    
public:
    void umsjonUI();
    
};

#endif /* defined(__main_assignment__umsjonui__) */
