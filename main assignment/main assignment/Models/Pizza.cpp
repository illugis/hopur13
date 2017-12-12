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

void Pizza::checkVerbose(bool v) {
    verbose = v;
}

void Pizza::write(ofstream& fout) const {
    
    int toppingCount = toppings.size();
    
    fout.write((char*)(&toppingCount), sizeof(int));
    
    for (int i = 0; i < toppingCount; i++) {
        toppings[i].write(fout);
    }
}

void Pizza::read(ifstream& fin) {
    
    int toppingCount;
    fin.read((char*)(&toppingCount), sizeof(int));
    
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
    
    //out << pizza.crust << endl;
    
    for (unsigned int i = 0; i < pizza.toppings.size(); i++) {
        out << pizza.toppings[i] << endl;
    }
    
    return out;
}
