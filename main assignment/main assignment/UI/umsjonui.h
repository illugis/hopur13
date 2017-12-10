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

using namespace std;

class UmsjonUI {
    
private:
    string place;
    string other;
    Pizza pizza;
    Order order;
    void val_umsjonUI();
    void val_pizzaUI();
    void val_main_menu_pizzaUI();
    void val_menu_pizzaUI();
    void val_annad_umsjonUI();
    void annad_umsjonUI();
    Order create_order();
    Pizza create_pizza();
    Pizza create_pizza_menu_marg();
    Pizza create_pizza_menu_svepperoni();
    Pizza create_pizza_menu_vegan();
    PizzaService pizza_service;
    OrderService order_service;
    
public:
    UmsjonUI();
    void umsjonUI();
    
};

#endif /* defined(__main_assignment__umsjonui__) */
