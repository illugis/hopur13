//
//  toppings.cpp
//  main assignment
//
//  Created by illugi steingrimsson on 30/11/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#include "toppings.h"
#include <string.h>

Topping::Topping(){
    
}

Topping::Topping(string name, int price){
    this->name = name;
    this->price = price;
}

istream& operator >> (istream& in, Topping& topping){
    cout << "Álegg: ";
    getline(in, topping.name);
    getline(in, topping.name);
    
    cout << "Verð: ";
    in >> topping.price;
    return in;
}

ostream& operator << (ostream& out, const Topping& topping){
    out << topping.name << endl;
    out << topping.price << endl;
    
    return out;
}








