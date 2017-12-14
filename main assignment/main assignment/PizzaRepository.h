//
//  PizzaRepository.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 07/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__PizzaRepository__
#define __main_assignment__PizzaRepository__

#include "Pizza.hpp"
#include <fstream>

class PizzaRepository {
    
private:
    Pizza pizza;
    

public:
    PizzaRepository();
    void storeAllPizzas(const vector<Pizza> &pizza);
    vector<Pizza> retrieveAllPizzas();
    void print() const;
    
    void add_pizza(Pizza pizza);
    void add_pizza_menu(const Pizza& pizza);
    string read_pizza();
    
};

#endif /* defined(__main_assignment__PizzaRepository__) */
