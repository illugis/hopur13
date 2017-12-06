//
//  afhending.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__afhending__
#define __main_assignment__afhending__

#include <stdio.h>

#include <iostream>
#include "umsjonui.h"

using namespace std;

class AfhendingUI {
    
private:
    UmsjonUI umsjonui;
    char greitt;
    char afhent;
    
public:
    void afhendingUI();
    string getPlace();
    
};

#endif /* defined(__main_assignment__afhending__) */
