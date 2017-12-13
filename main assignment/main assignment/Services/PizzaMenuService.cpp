//
//  PizzaMenuService.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 13/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "PizzaMenuService.h"

PizzaMenuService::PizzaMenuService() {
    
    
}

void PizzaMenuService::storeAllPizzaMenus(const vector<PizzaMenu> &pizzamenu) {
    
    pizzamenu_repo.storeAllPizzaMenus(pizzamenu);
}

vector<PizzaMenu> PizzaMenuService::retrieveAllPizzaMenus() {
    
    return pizzamenu_repo.retrieveAllPizzaMenus();
}