//
//  Pizza.hpp
//  main assignment
//
//  Created by illugi steingrimsson on 05/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#ifndef Pizza_hpp
#define Pizza_hpp

#include "Crust.h"
#include "toppings.h"
#include "DeliveryPlace.hpp"
#include <vector>
#pragma once

class Pizza {

private:
    vector<Crust> crust;
    vector<Topping> toppings;
    vector<DeliveryPlace> deliveryplace;
    bool verbose;
    
public:
    Pizza();
   
    void addTopping(Topping topping);
    void addCrust(Crust crust);
    void addDeliveryPlace(DeliveryPlace deliveryplace);
    void checkVerbose(bool v);
    
    void write(ofstream& fout) const;
    void read(ifstream& fin);
    
    friend istream& operator >> (istream& in, Pizza& pizza);
    friend ostream& operator << (ostream& out, const Pizza& pizza);
    
};

#endif /* Pizza_hpp */
