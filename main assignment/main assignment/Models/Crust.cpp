//
//  crust.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 10/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "Crust.h"
#include <fstream>

Crust::Crust() {
    
}

Crust::Crust(string name, int price){
    this->name = name;
    this->price = price;
}

string Crust::getCrustName() const{
    return this->name;
}
int Crust::getCrustPrice() const{
    return this->price;
}

void Crust::write(ofstream& fout) const {
    
    int stringLength = name.length() + 1;
    
    fout.write((char*)(&stringLength), sizeof(int));
    fout.write(name.c_str(), stringLength);
    
    fout.write((char*)(&price), sizeof(int));
}

void Crust::read(ifstream& fin) {
    
    int stringLength;
    
    fin.read((char*)(&stringLength), sizeof(int));
    char* str = new char[stringLength];
    
    fin.read(str, stringLength);
    
    name = str;
    
    fin.read((char*)(&price), sizeof(int));
    
    delete [] str;
}

istream& operator >> (istream& in, Crust& crust){
    cout << "Botn: ";
    in >> ws;
    getline(in, crust.name);
    
    cout << "Verð (kr): ";
    in >> crust.price;
    
    return in;
}

ostream& operator << (ostream& out, const Crust& crust){
    
    out << crust.name << " ";
    out << crust.price;
    
    return out;
}
