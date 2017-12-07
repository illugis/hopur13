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

Pizza::Pizza(string size, string crust, vector<Topping> toppings, string destination){
    this->size = size;
    this->crust = crust;
    this->toppings = toppings;
    this->destination = destination;
}

void Pizza::addTopping(Topping topping){
    toppings.push_back(topping);
}

void Pizza::setSize(string size) {
    this->size = size;
}

void Pizza::setCrust(string crust) {
    this->crust = crust;
}

string Pizza::getSize() const{
    return this->size;
}

string Pizza::getCrust() const{
    return this->crust;
}

string Pizza::getDestination() const{
    return this->destination;
}

istream& operator >> (istream& in, Pizza& pizza){

    Topping topping;
    for(int i = 0; i < pizza.toppings.size(); i++){
        in >> topping;
        pizza.addTopping(topping);
    }
    return in;
}

ostream& operator << (ostream& out, const Pizza& pizza){
    out << "Pizza with toppings: " << endl;
    
    for(int i = 0; i < pizza.toppings.size(); i++){
        out << pizza.toppings[i] << " ";
    }
    return out;
}




