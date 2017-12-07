//
//  Pizza.hpp
//  main assignment
//
//  Created by illugi steingrimsson on 05/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#ifndef Pizza_hpp
#define Pizza_hpp


#include <vector>
#include "toppings.h"

class Pizza {
private:
    vector<Topping> toppings;
    int size;
    string crust;
    string destination;
    
public:
    Pizza();
    Pizza(int size, string crust, vector<Topping> toppings, string destination);
    void addTopping(Topping topping);
    void setSize(int size);
    void setCrust(string crust);
    int getSize() const;
    string getCrust() const;
    string getDestination() const;
    
    friend istream& operator >> (istream& in, Pizza& pizza);
    friend ostream& operator << (ostream& out, const Pizza& pizza);
    
    
};

#endif /* Pizza_hpp */
