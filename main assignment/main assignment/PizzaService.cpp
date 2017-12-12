//
//  PizzaService.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 07/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "PizzaService.h"

PizzaService::PizzaService() {
    
    
}

void PizzaService::add_pizza(Pizza pizza) {
    
        pizza_repo.add_pizza(pizza);
        //tengja við repo
}

void PizzaService::storeAllPizzas(const vector<Pizza> &pizza) {
    
    pizza_repo.storeAllPizzas(pizza);
}

vector<Pizza> PizzaService::retrieveAllPizzas() {
    
    return pizza_repo.retrieveAllPizzas();
}

void PizzaService::add_pizza_menu(const Pizza& pizza) {
    
    pizza_repo.add_pizza_menu(pizza);
}

string PizzaService::read_pizza() {
    
    return pizza_repo.read_pizza();
}

