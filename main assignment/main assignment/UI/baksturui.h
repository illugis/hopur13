//
//  bakstur.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__bakstur__
#define __main_assignment__bakstur__

#include "PizzaService.h"
#include "OrderService.hpp"

#include <iostream>

using namespace std;

class BaksturUI {
    
private:
    PizzaService pizza_service;
    OrderService order_service;
    Order order;
    
public:
    BaksturUI();
    void baksturUI();
    
    
    
    void getPizza_list();
    
};

#endif /* defined(__main_assignment__bakstur__) */
