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
    string size;
    string crust;
    string destination;
    bool verbose;
    
public:
    Pizza();
    Pizza(string size, string crust, vector<Topping> toppings, string destination);
    void addTopping(Topping topping);
    void setSize(string size);
    void setCrust(string crust);
    void checkVerbose(bool v) ;
    string getSize() const;
    string getCrust() const;
    vector<Topping> getTopping() const;
    string getDestination() const;
    
    friend istream& operator >> (istream& in, Pizza& pizza);
    friend ostream& operator << (ostream& out, const Pizza& pizza);
    
    
};

#endif /* Pizza_hpp */
