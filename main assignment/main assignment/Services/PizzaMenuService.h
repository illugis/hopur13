//
//  PizzaMenuService.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 13/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__PizzaMenuService__
#define __main_assignment__PizzaMenuService__

#include "PizzaMenu.h"
#include "PizzaMenuRepository.h"

class PizzaMenuService {
    
private:
    PizzaMenuRepository pizzamenu_repo;
    
public:
    PizzaMenuService();
    void storeAllPizzaMenus(const vector<PizzaMenu> &pizzamenu);
    vector<PizzaMenu> retrieveAllPizzaMenus();
    
};

#endif /* defined(__main_assignment__PizzaMenuService__) */
