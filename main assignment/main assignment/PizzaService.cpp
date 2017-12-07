//
//  PizzaService.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 07/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "PizzaService.h"

void PizzaService::add_pizza(const Pizza& pizza) {
    
    //validate pizza
    pizza_repo.add_pizza(pizza);
    //tengja við repo
}