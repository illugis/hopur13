//
//  ToppingsService.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 11/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "ToppingsService.h"

ToppingsService::ToppingsService() {
    
}

void ToppingsService::storeAllToppings(const vector<Topping> &toppings) {
    
    toppings_repo.storeAllToppings(toppings);
}

vector<Topping> ToppingsService::retrieveAllToppings() {
    
    return toppings_repo.retrieveAllToppings();
}

bool ToppingsService::InvalidError(const Topping& topping){
    
    string name = topping.getToppingName();
    
    for(unsigned int i = 0; i < name.length(); i++){
        if(!isalpha(name[i]) || name.length() > 25){
            throw(InvalidToppingException());
        }
    }
    
    int price = topping.getToppingPrice();
    
    if(!isdigit(price) || price < 0){
        throw(InvalidToppingPriceException());
    }
    
    return true;
    
}

