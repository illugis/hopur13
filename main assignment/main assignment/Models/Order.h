//
//  Order.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 07/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__Order__
#define __main_assignment__Order__

#include "Pizza.hpp"

#include <stdio.h>
#include <iostream>

using namespace std;

class Order {
    
private:
    Pizza pizza;
    string other;
    int price;
    string destination;
    
public:
    Order(Pizza pizza, string other, int price, string destination);
    
};

#endif /* defined(__main_assignment__Order__) */
