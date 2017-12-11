//
//  Other.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 11/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "Other.h"
#include <fstream>

Other::Other() {
    
}

Other::Other(string name, int price){
    this->name = name;
    this->price = price;
}

void Other::write(ofstream& fout) const {
    
    int stringLength = name.length() + 1;
    
    fout.write((char*)(&stringLength), sizeof(int));
    fout.write(name.c_str(), stringLength);
    
    fout.write((char*)(&price), sizeof(int));
}

void Other::read(ifstream& fin) {
    
    int stringLength;
    
    fin.read((char*)(&stringLength), sizeof(int));
    char* str = new char[stringLength];
    
    fin.read(str, stringLength);
    
    name = str;
    
    fin.read((char*)(&price), sizeof(int));
    
    delete [] str;
}

istream& operator >> (istream& in, Other& other){
    cout << "Nafn: ";
    in >> ws;
    getline(in, other.name);
    
    cout << "Verð (kr): ";
    in >> other.price;
    
    return in;
}

ostream& operator << (ostream& out, const Other& other){
    
    out << other.name << " ";
    out << other.price;
    
    return out;
}