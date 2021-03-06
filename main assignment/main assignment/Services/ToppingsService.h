//
//  ToppingsService.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 11/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__ToppingsService__
#define __main_assignment__ToppingsService__

#include "toppings.h"
#include "ToppingsRepository.h"
#include "InvalidToppingException.h"
#include "InvalidToppingPriceException.hpp"

class ToppingsService {
    
private:
    ToppingsRepository toppings_repo;
    bool InvalidError(const Topping& topping);
    
public:
    ToppingsService();
    void storeAllToppings(const vector<Topping> &toppings);
    vector<Topping> retrieveAllToppings();
    
};

#endif /* defined(__main_assignment__ToppingsService__) */
