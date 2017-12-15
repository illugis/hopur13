//
//  PizzaMenu.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 13/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__PizzaMenu__
#define __main_assignment__PizzaMenu__

#include "Crust.h"
#include "toppings.h"

#include <iostream>
#include <vector>
#pragma once

using namespace std;

class PizzaMenu {
    
private:
    string name;
    int price;
    vector<Crust> crust;
    vector<Topping> toppings;
    
public:
    PizzaMenu();
    PizzaMenu(string name);
    void addTopping(Topping topping);
    void addCrust(Crust crust);
    void write(ofstream& fout) const;
    void read(ifstream& fin);
    friend istream& operator >> (istream& in, PizzaMenu& pizzamenu);
    friend ostream& operator << (ostream& out, const PizzaMenu& pizzamenu);
};

#endif /* defined(__main_assignment__PizzaMenu__) */
