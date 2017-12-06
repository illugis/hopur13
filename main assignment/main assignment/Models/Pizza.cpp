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
Pizza::Pizza(int size, string crust, vector<Topping> toppings){
    this->size = size;
    this->crust = crust;
    this->toppings = toppings;
}
void Pizza::addTopping(Topping topping){
    toppings.push_back(topping);
}
void Pizza::setSize(int size) {
    this->size = size;
}
void Pizza::setCrust(string crust) {
    this->crust = crust;
}
int Pizza::getSize() const{
    return this->size;
}
string Pizza::getCrust() const{
    return this->crust;
}
istream& operator >> (istream& in, Pizza& pizza){

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




