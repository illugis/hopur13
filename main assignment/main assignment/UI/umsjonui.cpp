//
//  umsjonui.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "mainui.h"
#include "umsjonui.h"

#include <iostream>

using namespace std;

void UmsjonUI::val_umsjonUI() {
    
    cout << "Vinsamlegast veldu:" << endl;
    cout << "\t 1. til að skrá \"custom\" pizzu" << endl;
    cout << "\t 2. til að skrá pizzu af matseðli" << endl;
    cout << "--> ";
}

void UmsjonUI::umsjonUI() {
    
    val_umsjonUI();
    
    cout << "Skrá gerð af pizzu" << endl;
    cout << '\t' << "Stærð: ";
    int size;
    cin >> size;
    //pizza.setSize(size);
    cout << '\t' << "Botn(þykkur eða þunnur): ";
    string crust;
    cin >> crust;
    //pizza.setCrust(crust);
    
    cout << "Hversu margar áleggstegundir? ";
    int numberOfToppings;
    cin >> numberOfToppings;
    
    Pizza pizza;
    
    for(int i = 0; i < numberOfToppings; i++){
        Topping toppings;
        cin >> toppings;
        pizza.addTopping(toppings);
        
    }
    //Pizza madePizza(size, crust, t);

    cout << "Ákveðnar samsetningar: " ;
    cout << endl;
    
    cout << "Annað(y/n)? ";
    char svar;
    do{
        cin >> svar;
        
        if(svar == 'y'){
            cout << "Brauðstangir og/eða gos? ";
            cin >> other;
            svar = 'n';
        }
    }
    while(svar != 'n');
    
    cout << "Verð: ";
    //cin >> price;
    
    cout << endl;
    
    cout << "Afhendingarstaður: ";
    cin >> place;
}
