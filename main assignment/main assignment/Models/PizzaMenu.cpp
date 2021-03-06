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

Crust PizzaMenu::getCrust() const{
    
    return this->_crust;
}

vector<Topping> PizzaMenu::getToppings() const{
    
    return toppings;
}

int PizzaMenu::getPrice() const{
    
    return this->price;
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
    
    fout.write((char*)(&price), sizeof(int));
    
    _crust.write(fout);
    
    topping.write(fout);
   
}

void PizzaMenu::read(ifstream &fin) {
    
    int stringLength;
    
    fin.read((char*)(&stringLength), sizeof(int));
    char* str = new char[stringLength];
    
    fin.read(str, stringLength);
    
    name = str;
    
    fin.read((char*)(&price), sizeof(int));
    
    delete [] str;
    
    _crust.read(fin);
    
    topping.read(fin);
}

istream& operator >> (istream& in, PizzaMenu& pizzamenu){
    
    cout << "Nafn á pítsu: ";
    in >> ws;
    getline(in, pizzamenu.name);
    
    Topping topping;
    for (unsigned int i = 0; i < pizzamenu.toppings.size(); i++) {
        in >> topping;
        pizzamenu.addTopping(topping);
    }
    
    cout << "Verð (kr): ";
    in >> pizzamenu.price;
    
    return in;
}

ostream& operator << (ostream& out, const PizzaMenu& pizzamenu){
    
    out << pizzamenu.name << " ";
    out << pizzamenu.price << "kr.";
    /*for (unsigned int i = 0; i < pizzamenu.toppings.size(); i++) {
        out << "Álegg " << i + 1 << ". " << pizzamenu.toppings[i] << "kr." << endl;
    }*/
    
    
    return out;
}
