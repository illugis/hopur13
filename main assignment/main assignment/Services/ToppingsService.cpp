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