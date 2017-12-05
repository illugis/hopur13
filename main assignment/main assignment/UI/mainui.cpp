//
//  mainui.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "mainui.h"

#include <iostream>

using namespace std;

void MainUI::startUI() {
    
    char selection = '\0';
    
    do {
        
        cout << "Vinsamlegast veldu:" << endl;
        cout << '\t' << "'u' fyrir umsjón" << endl;
        cout << '\t' << "'s' fyrir sölu" << endl;
        cout << '\t' << "'b' fyrir bakstur" << endl;
        cout << '\t' << "'a' fyrir afhendingu" << endl;
        cout << '\t' << "'h' fyrir hætta" << endl;
        
        cout << "--> ";
        cin >> selection;
        
        if (selection == 'u') {
            umsjonui.umsjonUI();
        }
        else if (selection == 's') {
            salaui.salaUI();
        }
        else if (selection == 'b') {
            baksturui.baksturUI();
        }
        else if (selection == 'a') {
            afhendingui.afhendingUI();
        }
    }
    while (selection != 'h');
}
