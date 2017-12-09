//
//  PizzaMenuRepository.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 08/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "PizzaMenuRepository.h"

void PizzaMenuRepository::add_pizza_menu(const Pizza& pizza) {
    
    ofstream fout;
    fout.open("pizzas.txt");
    if (fout.is_open()) {
        fout << pizza << endl;
        fout.close();
    }
    else {
        cout << "File could not be open!" << endl;
    }
}