//
//  toppings.cpp
//  main assignment
//
//  Created by illugi steingrimsson on 30/11/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#include "toppings.h"
#include <fstream>

Topping::Topping(){
    
}

Topping::Topping(string name, int price){
    this->name = name;
    this->price = price;
}

string Topping::getToppingName() const{
    return this->name;
}

int Topping::getToppingPrice() const{
    return this-> price;
}

void Topping::write(ofstream& fout) const {
    
    int stringLength = name.length() + 1;
    
    fout.write((char*)(&stringLength), sizeof(int));
    fout.write(name.c_str(), stringLength);
    
    fout.write((char*)(&price), sizeof(int));
}

void Topping::read(ifstream& fin) {
    
    int stringLength;
    
    fin.read((char*)(&stringLength), sizeof(int));
    char* str = new char[stringLength];
    
    fin.read(str, stringLength);
    
    name = str;
    
    fin.read((char*)(&price), sizeof(int));
    
    delete [] str;
}

istream& operator >> (istream& in, Topping& topping){
    cout << "Álegg: ";
    in >> ws;
    getline(in, topping.name);
    
    cout << "Verð (kr): ";
    in >> topping.price;
    
    return in;
}

ostream& operator << (ostream& out, const Topping& topping){
    
    out << topping.name << " ";
    out << topping.price;
    
    return out;
}
