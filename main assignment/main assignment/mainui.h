//
//  mainui.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__mainui__
#define __main_assignment__mainui__

#include <stdio.h>
#include "umsjonui.h"
#include "sala.h"
#include "bakstur.h"
#include "afhending.h"


class MainUI {
    
private:
    UmsjonUI umsjonui;
    SalaUI salaui;
    BaksturUI baksturui;
    AfhendingUI afhendingui;
    
    
public:
    void startUI();
    
};

#endif /* defined(__main_assignment__mainui__) */
