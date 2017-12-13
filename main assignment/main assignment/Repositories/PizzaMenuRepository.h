//
//  PizzaMenuRepository.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 13/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__PizzaMenuRepository__
#define __main_assignment__PizzaMenuRepository__

#include "PizzaMenu.h"
#include <fstream>

class PizzaMenuRepository {
    
private:
    
    
public:
    PizzaMenuRepository();
    void storeAllPizzaMenus(const vector<PizzaMenu> &pizzamenu);
    vector<PizzaMenu> retrieveAllPizzaMenus();
    
};

#endif /* defined(__main_assignment__PizzaMenuRepository__) */
