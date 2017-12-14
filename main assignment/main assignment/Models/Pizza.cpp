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
    
    this->crust = crust;
}

void Pizza::addDeliveryPlace(DeliveryPlace deliveryplace) {
    
    this->deliveryplace = deliveryplace;
}


Crust Pizza::getCrust() const{
    return this->_crust;
}
Topping Pizza::getTopping() const{
    return this->topping;
}
DeliveryPlace Pizza::getDeliveryPlace() const{
    return this->_deliveryplace;
}

void Pizza::write(ofstream& fout) const {
    
    int crustCount = 1;
    
    fout.write((char*)(&crustCount), sizeof(crustCount));
    
    for(int i = 0; i < crustCount; i++){
        crust.write(fout);
    }
    
    int toppingCount = toppings.size();
    
    fout.write((char*)(&toppingCount), sizeof(toppingCount));
    
    for (int i = 0; i < toppingCount; i++) {
        cout <<toppings[i] << endl;
        toppings[i].write(fout);
    }
    
    int deliveryPlaceCount = 1;
    
    fout.write((char*)(&deliveryPlaceCount), sizeof(deliveryPlaceCount));
    
    for(int i = 0; i < deliveryPlaceCount; i++){
        deliveryplace.write(fout);
    }
}

void Pizza::read(ifstream& fin) {
  
    int crustCount;
    
    fin.read((char*)(&crustCount), sizeof(crustCount));
    
    Crust crust;
    for (int i = 0; i < crustCount; i++) {
        crust.read(fin);
        addCrust(crust);
    }
   
    int toppingCount;
    fin.read((char*)(&toppingCount), sizeof(toppingCount));
    
    Topping topping;
    for (int i = 0; i < toppingCount; i++) {
        topping.read(fin);
        addTopping(topping);
    }
    
    int deliveryCount;
    fin.read((char*)(&deliveryCount), sizeof(deliveryCount));
    
    DeliveryPlace deliveryplace;
    for (int i = 0; i < deliveryCount; i++) {
        deliveryplace.read(fin);
        addDeliveryPlace(deliveryplace);
    }
}

istream& operator >> (istream& in, Pizza& pizza){
    
    
    Topping topping;
    for (unsigned int i = 0; i < pizza.toppings.size(); i++) {
        in >> topping;
        pizza.addTopping(topping);
    }
    /*for(int i = 0; i < pizza.toppings.size();i++){
        cout << toppings[i] << endl;
    }*/
    //geri svona til að cout'a bara pitsur ur orderlista
    return in;
}

ostream& operator << (ostream& out, const Pizza& pizza){
    
    out << pizza.crust << endl;
    
    
    for (unsigned int i = 0; i < pizza.toppings.size(); i++) {
        out << pizza.toppings[i] << endl;
    }
    out << pizza.deliveryplace << endl;
    /*
    for (unsigned int i = 0; i < pizza.deliveryplace.size(); i++) {
        out << pizza.deliveryplace[i] << endl;
    }
    */
    
    return out;
}
