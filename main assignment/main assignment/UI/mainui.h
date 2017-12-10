//
//  mainui.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__mainui__
#define __main_assignment__mainui__


#include "umsjonui.h"
#include "salaui.h"
#include "baksturui.h"
#include "afhendingui.h"

class MainUI {
    
private:
    UmsjonUI umsjonui;
    SalaUI salaui;
    BaksturUI baksturui;
    AfhendingUI afhendingui;
    
public:
    MainUI();
    void startUI();
};

#endif /* defined(__main_assignment__mainui__) */
