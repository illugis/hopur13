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
    if (fout.is_open()) {
        fout << pizza;
        fout.close();
    }
    else {
        //throw error
        //cout << "File could not be opened!" << endl;
    }
}