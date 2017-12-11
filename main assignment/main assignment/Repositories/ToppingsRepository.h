//
//  ToppingsRepository.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 10/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__ToppingsRepository__
#define __main_assignment__ToppingsRepository__

#include "toppings.h"
#include <vector>

using namespace std;

class ToppingsRepository {
    
private:
    
    
public:
    ToppingsRepository();
    void storeAllToppings(const vector<Topping> &toppings);
    vector<Topping> retrieveAllToppings();
    
};

#endif /* defined(__main_assignment__ToppingsRepository__) */
