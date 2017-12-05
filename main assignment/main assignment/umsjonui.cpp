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

void UmsjonUI::umsjonUI() {
    
    cout << "Skrá gerð af pizzu" << endl;
    cout << '\t' << "Stærð: ";
    cin >> size;
    cout << '\t' << "Botn(þykkur eða þunnur): ";
    cin >> base;
    cin >> base;
    
    cout << "Hversu margar áleggstegundir? ";
    cin >> numberOfToppings;
    
    cout << "Hvaða álegg?" << endl;
    for(int i = 0; i < numberOfToppings; i++){
        cin >> toppings;
    }

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
    cin >> price;
    
    cout << endl;
    
    cout << "Afhendingarstaður: ";
    cin >> place;
}
