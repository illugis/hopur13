//
//  Pizza.hpp
//  main assignment
//
//  Created by illugi steingrimsson on 05/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#ifndef Pizza_hpp
#define Pizza_hpp

#include <stdio.h>
#include <vector>
#include "toppings.h"

class Pizza {
private:
    vector<Topping> toppings;
    
public:
    Pizza();
    void addTopping(Topping topping);
    
    friend istream& operator >> (istream& in, Pizza& pizza);
    friend ostream& operator << (ostream& out, Pizza& pizza);
    
    
};

#endif /* Pizza_hpp */
