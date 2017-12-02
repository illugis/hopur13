//
//  umsjonui.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__umsjonui__
#define __main_assignment__umsjonui__

#include <stdio.h>

#include <iostream>
#include <string>
#include "toppings.h"

using namespace std;

class UmsjonUI {
    
private:
    char size;
    string base;
    int price;
    string place;
    string toppings;
    string other;
    int numberOfToppings;
    //Topping *toppings;
    //int toppingCount;
    
public:
    UmsjonUI();
    //int numberOfToppings(int _toppingCount);
    void umsjonUI();
    //void addTopping(Topping topping);
    string getPlace();
};

#endif /* defined(__main_assignment__umsjonui__) */
