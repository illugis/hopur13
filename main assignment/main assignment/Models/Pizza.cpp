//
//  Pizza.cpp
//  main assignment
//
//  Created by illugi steingrimsson on 05/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#include "Pizza.hpp"
#include <fstream>

Pizza::Pizza() {
    
}

Pizza::Pizza(string size, string crust, vector<Topping> toppings, int price, string destination){
    this->size = size;
    this->crust = crust;
    this->toppings = toppings;
    this->price = price;
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

void Pizza::checkVerbose(bool v) {
    verbose = v;
}

string Pizza::getSize() const{
    return this->size;
}

string Pizza::getCrust() const{
    return this->crust;
}

vector<Topping> Pizza::getTopping() const {
    return this->toppings;
}

string Pizza::getDestination() const{
    return this->destination;
}

istream& operator >> (istream& in, Pizza& pizza){
    //cout << "Stærð: ";
    in >> pizza.size;
    //cout << "Botn: ";
    in >> pizza.crust;
    //cout << "Álegg: ";
    Topping topping;
    for(int i = 0; i < pizza.toppings.size(); i++){
        in >> topping;
        pizza.addTopping(topping);
    }
    //cout << "Afhendingarstaður: ";
    in >> pizza.destination;
    return in;
}

ostream& operator << (ostream& out, const Pizza& pizza){
    
    if(pizza.verbose){
    out << "Stærð: ";
    }
    out << pizza.size << endl;
    if(pizza.verbose){
    out << "Botn: ";
    }
    out << pizza.crust << endl;

    for(int i = 0; i < pizza.toppings.size(); i++){
        //if(pizza.verbose){
        //out << "Álegg " << i+1 << ": ";
        //}
        out << pizza.toppings[i];
    }
    out << "Verð (kr): ";
    out << pizza.price << endl;
    
    if(pizza.verbose){
    out << "Afhendingarstaður: ";
    }
    out << pizza.destination << endl;
    
    return out;
}
