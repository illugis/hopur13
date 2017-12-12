//
//  PizzaService.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 07/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__PizzaService__
#define __main_assignment__PizzaService__


#include "Pizza.hpp"
#include "PizzaRepository.h"
#include "InvalidSizeException.h"
#include "InvalidCrustException.h"
#include "InvalidDestinationException.h"
#include "InvalidToppingException.h"
#pragma once

class PizzaService {
    
private:
    PizzaRepository pizza_repo;
    
public:
    PizzaService();
    void storeAllPizzas(const vector<Pizza> &pizza);
    vector<Pizza> retrieveAllPizzas();
    
    void add_pizza(Pizza pizza);
    void add_pizza_menu(const Pizza& pizza);
    string read_pizza();
    
};

#endif /* defined(__main_assignment__PizzaService__) */
