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
    return this->crust;
}
Topping Pizza::getTopping() const{
    return this->topping;
}
DeliveryPlace Pizza::getDeliveryPlace() const{
    return this->deliveryplace;
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
        toppings[i].write(fout);
    }
}

void Pizza::read(ifstream& fin) {
  
    toppings.clear();
    
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
    
    out << "Stærð og botn: " << pizza.crust << "kr." << endl;
    
    for (unsigned int i = 0; i < pizza.toppings.size(); i++) {
        out << "Álegg " << i + 1 << ". " << pizza.toppings[i] << "kr." << endl;
    }
    //out << pizza.deliveryplace << endl;
    
    
    return out;
}
