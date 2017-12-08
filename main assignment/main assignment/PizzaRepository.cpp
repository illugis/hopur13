//
//  PizzaRepository.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 07/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "PizzaRepository.h"

void PizzaRepository::add_pizza(const Pizza& pizza) {
    
    ofstream fout;
    fout.open("pizzas.dat", ios::binary|ios::app);
    fout.write((char*)(&pizza), sizeof(Pizza));
    cout << endl;
    fout.close();
}

vector<Pizza> PizzaRepository::read_pizza() {
    
    vector<Pizza> pizzaList;
    Pizza temp;
    ifstream fin;
    fin.open("pizzas.dat", ios::binary);
    if (fin.is_open()) {
        fin.seekg(0, fin.end);
        int recordCount = fin.tellg() / sizeof(Pizza);
        fin.seekg(0, fin.beg);
        
        for (unsigned int i = 0; i < recordCount; i++) {
            fin.read((char*)(&temp), sizeof(Pizza));
            pizzaList.push_back(temp);
            cout << pizzaList[i] << endl;
        }
        fin.close();
    }
    else {
        cout << "Could not open fiel!" << endl;
    }
    return pizzaList;
}