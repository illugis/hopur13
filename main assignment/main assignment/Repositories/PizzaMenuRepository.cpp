//
//  PizzaMenuRepository.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 13/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "PizzaMenuRepository.h"
#include <fstream>

using namespace std;

PizzaMenuRepository::PizzaMenuRepository() {
    
    
}

void PizzaMenuRepository::storeAllPizzaMenus(const vector<PizzaMenu> &pizzamenu) {
    
    ofstream fout;
    fout.open("pizzamenu.dat", ios::binary);
    
    int pizzamenuCount = pizzamenu.size();
    
    fout.write((char*)(&pizzamenuCount), sizeof(int));
    
    for (int i = 0; i < pizzamenuCount; i++) {
        pizzamenu[i].write(fout);
    }
    
    fout.close();
}

vector<PizzaMenu> PizzaMenuRepository::retrieveAllPizzaMenus() {
    
    vector<PizzaMenu> pizzamenu;
    PizzaMenu pizza1;
    
    ifstream fin;
    fin.open("pizzas.dat", ios::binary);
    
    if (fin.is_open()) {
        int pizzamenuCount;
        
        fin.read((char*)(&pizzamenuCount), sizeof(int));
        
        for (int i = 0; i < pizzamenuCount; i++) {
            pizza1.read(fin);
            pizzamenu.push_back(pizza1);
            cout << pizzamenu[i] << endl;
        }
        
        fin.close();
    }
    
    return pizzamenu;
}
