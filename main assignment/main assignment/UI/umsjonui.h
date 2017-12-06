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
#include "Pizza.hpp"

using namespace std;

class UmsjonUI {
    
private:
    string place;
    string other;
    Pizza pizza;
    
public:
    void umsjonUI();
    void val_umsjonUI();
    
};

#endif /* defined(__main_assignment__umsjonui__) */
