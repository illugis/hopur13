//
//  PizzaService.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 07/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "PizzaService.h"

void PizzaService::add_pizza(Pizza pizza) {
    
    if (isValidSize(pizza) && isValidCrust(pizza)) {
        pizza_repo.add_pizza(pizza);
        //tengja við repo
    }
}

void PizzaService::add_pizza_menu(const Pizza& pizza) {
    
    pizza_repo.add_pizza_menu(pizza);
}

string PizzaService::read_pizza() {
    
    return pizza_repo.read_pizza();
}

bool PizzaService::isValidSize(const Pizza& pizza) {
    
    string size = pizza.getSize();
    
    for (unsigned int i = 0; i < size.length(); i++) {
        if (!isalpha(size[i])) {
            throw (InvalidSizeException());
        }
    }
    return true;
}

bool PizzaService::isValidCrust(const Pizza& pizza) {
    
    string crust = pizza.getCrust();
    
    for (unsigned int i = 0; i < crust.length(); i++) {
        if (!isalpha(crust[i]) && crust[i] != ' ') {
            throw (InvalidCrustException());
        }
    }
    return true;
}

bool PizzaService::isValidDestination(const Pizza& pizza) {
    
    string destination = pizza.getDestination();
    
    for (unsigned int i = 0; i < destination.length(); i++) {
        if (!isalpha(destination[i])) {
            throw (InvalidDestinationException());
        }
    }
    return true;
}

bool PizzaService::isValidTopping(const Pizza& pizza) {
    
    vector<Topping> toppings = pizza.getTopping();
    
    return true;
}
