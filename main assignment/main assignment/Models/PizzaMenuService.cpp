//
//  PizzaMenuService.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 08/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "PizzaMenuService.h"

void PizzaMenuService::add_pizza_menu(const Pizza& pizza) {
    
    pizza_menu_repo.add_pizza_menu(pizza);
    //tengja við repo
}