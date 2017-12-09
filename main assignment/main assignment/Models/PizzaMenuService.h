//
//  PizzaMenuService.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 08/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__PizzaMenuService__
#define __main_assignment__PizzaMenuService__

#include "Pizza.hpp"
#include "PizzaMenuRepository.h"

#endif /* defined(__main_assignment__PizzaMenuService__) */

class PizzaMenuService {
    
private:
    PizzaMenuRepository pizza_menu_repo;
    
public:
    void add_pizza_menu(const Pizza& pizza);
    
};