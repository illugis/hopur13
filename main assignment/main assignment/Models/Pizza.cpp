//
//  Pizza.cpp
//  main assignment
//
//  Created by illugi steingrimsson on 05/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#include "Pizza.hpp"
#include <fstream>

using namespace std;

Pizza::Pizza() {
    
}


void Pizza::addTopping(Topping topping){
    
    toppings.push_back(topping);
}

void Pizza::addCrust(Crust crust){
    
    this->crust.push_back(crust);
}

void Pizza::addDeliveryPlace(DeliveryPlace deliveryplace) {
    
    this->deliveryplace.push_back(deliveryplace);
}

void Pizza::checkVerbose(bool v) {
    verbose = v;
}

void Pizza::write(ofstream& fout) const {
    
    /*int crustCount = crust.size();
    
    fout.write((char*)(&crustCount), sizeof(crustCount));
    
    _crust.write(fout);
    */
    
    int toppingCount = toppings.size();
    
    fout.write((char*)(&toppingCount), sizeof(toppingCount));
    
    for (int i = 0; i < toppingCount; i++) {
        toppings[i].write(fout);
    }
}

void Pizza::read(ifstream& fin) {
  /*
    int crustCount;
    
    fin.read((char*)(&crustCount), sizeof(crustCount));
    
    Crust crust;
    for (int i = 0; i < crustCount; i++) {
        crust.read(fin);
    }
   */
    int toppingCount;
    fin.read((char*)(&toppingCount), sizeof(toppingCount));
    
    Topping topping;
    for (int i = 0; i < toppingCount; i++) {
        topping.read(fin);
        addTopping(topping);
    }
}

istream& operator >> (istream& in, Pizza& pizza){
    
    int toppingCount;
    in >> toppingCount;
    
    Topping topping;
    for (unsigned int i = 0; i < pizza.toppings.size(); i++) {
        in >> topping;
        pizza.addTopping(topping);
    }
    
    return in;
}

ostream& operator << (ostream& out, const Pizza& pizza){
    /*
    out << pizza._crust << endl;
    for (unsigned int i = 0; i < pizza.crust.size(); i++) {
        out << pizza.crust[i] << endl;
        out << "hallo" << endl;
    }
    */
    for (unsigned int i = 0; i < pizza.toppings.size(); i++) {
        out << pizza.toppings[i] << endl;
    }
    
    return out;
}
