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

class PizzaService {
    
private:
    PizzaRepository pizza_repo;
    
public:
    void add_pizza(const Pizza& pizza);
    
};

#endif /* defined(__main_assignment__PizzaService__) */
