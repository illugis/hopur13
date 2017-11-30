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
    
    cout << '\t' << "Botn: ";
    cin >> base;
    
    cout << endl;
    
    cout << "Áleggstegundir: ";

    cout << "Ákveðnar samsetningar: ";
    
    cout << "Annað: ";
    
    cout << "Verð: ";
    cin >> price;
    
    cout << endl;
    
    cout << "Afhendingarstaður: ";
    cin >> place;
}
