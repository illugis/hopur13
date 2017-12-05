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
    cout << "Name: ";
    getline(in, topping.name);
    
    cout << "Price: ";
    return in;
}
ostream& operator << (ostream& out, Topping& topping){
    out << "Topping: " << topping.name << endl;
    out << "price: " << topping.price << endl;
    
    return out;
}








