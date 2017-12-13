//
//  PizzaMenu.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 13/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "PizzaMenu.h"
#include <fstream>

PizzaMenu::PizzaMenu() {
    
    
}

PizzaMenu::PizzaMenu(string name) {
    
    this->name = name;
}

void PizzaMenu::addTopping(Topping topping) {
    
    toppings.push_back(topping);
}

void PizzaMenu::addCrust(Crust crust) {
    
    this->crust.push_back(crust);
}

void PizzaMenu::write(ofstream &fout) const{
    
    int stringLength = name.length() + 1;
    
    fout.write((char*)(&stringLength), sizeof(int));
    fout.write(name.c_str(), stringLength);
}

void PizzaMenu::read(ifstream &fin) {
    
    int stringLength;
    
    fin.read((char*)(&stringLength), sizeof(int));
    char* str = new char[stringLength];
    
    fin.read(str, stringLength);
    
    name = str;
    
    delete [] str;
}

istream& operator >> (istream& in, PizzaMenu& pizzamenu){
    
    cout << "Afhendingarstaður: ";
    in >> ws;
    getline(in, pizzamenu.name);
    
    return in;
}

ostream& operator << (ostream& out, const PizzaMenu& pizzamenu){
    
    out << pizzamenu.name << " ";
    
    return out;
}
