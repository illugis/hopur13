//
//  afhending.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__afhending__
#define __main_assignment__afhending__


#include "OrderService.hpp"
#include <iostream>

using namespace std;

class AfhendingUI {
    
private:
    char greitt;
    char afhent;
    Order order;
    
    OrderService order_service;
public:
    AfhendingUI();
    void afhendingUI();
    string getPlace();
    
};

#endif /* defined(__main_assignment__afhending__) */
