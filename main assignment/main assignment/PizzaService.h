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

class PizzaService {
    
private:
    PizzaRepository pizza_repo;
    bool isValidSize(const Pizza& pizza);
    bool isValidCrust(const Pizza& pizza);
    bool isValidDestination(const Pizza& pizza);
    bool isValidTopping(const Pizza& pizza);
    
public:
    void add_pizza(Pizza pizza);
    void add_pizza_menu(const Pizza& pizza);
    string read_pizza();
    
};

#endif /* defined(__main_assignment__PizzaService__) */
