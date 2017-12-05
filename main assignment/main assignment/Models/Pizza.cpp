//
//  Pizza.cpp
//  main assignment
//
//  Created by illugi steingrimsson on 05/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#include "Pizza.hpp"

Pizza::Pizza() {
    
}
void Pizza::addTopping(Topping topping){
    toppings.push_back(topping);
}

istream& operator >> (istream& in, Pizza& pizza){
    int toppingCount;
    in >> toppingCount;
    
    Topping topping;
    for(int i = 0; i < pizza.toppings.size(); i++){
        in >> topping;
        pizza.addTopping(topping);
    }
    return in;
}
ostream& operator << (ostream& out, Pizza& pizza){
    out << "Pizza with toppings: " << endl;
    
    for(int i = 0; i < pizza.toppings.size(); i++){
        out << pizza.toppings[i] << " ";
    }
    return out;
}




