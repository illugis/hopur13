//
//  DeliveryPlace.cpp
//  main assignment
//
//  Created by illugi steingrimsson on 11/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#include "DeliveryPlace.hpp"
#include <fstream>

DeliveryPlace::DeliveryPlace(){
    
}

DeliveryPlace::DeliveryPlace(string name){
    this->name = name;
}

string DeliveryPlace::getDeliveryPlaceName() const{
    return this->name;
}

void DeliveryPlace::setDeliveryPlaceName(string name) {
    this->name = name;
}

void DeliveryPlace::write(ofstream &fout) const{
    
    int stringLength = name.length() + 1;
    
    fout.write((char*)(&stringLength), sizeof(int));
    fout.write(name.c_str(), stringLength);
}

void DeliveryPlace::read(ifstream &fin) {
    
    int stringLength;
    
    fin.read((char*)(&stringLength), sizeof(int));
    char* str = new char[stringLength];
    
    fin.read(str, stringLength);
    
    name = str;
    
    delete [] str;
}

istream& operator >> (istream& in, DeliveryPlace& deliveryplace){
    
    cout << "Afhendingarstaður: ";
    in >> ws;
    getline(in, deliveryplace.name);
    
    return in;
}

ostream& operator << (ostream& out, const DeliveryPlace& deliveryplace){
    
    out << deliveryplace.name;
    
    return out;
}
