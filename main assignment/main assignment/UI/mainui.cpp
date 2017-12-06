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
        
        cout << "VELKOMIN/N!" << endl << endl;
        cout << "Vinsamlegast veldu:" << endl;
        cout << '\t' << "1. fyrir umsjón" << endl;
        cout << '\t' << "2. fyrir sölu" << endl;
        cout << '\t' << "3. fyrir bakstur" << endl;
        cout << '\t' << "4. fyrir afhendingu" << endl;
        cout << '\t' << "5. fyrir hætta" << endl;
        
        cout << "--> ";
        cin >> selection;
        
        if (selection == '1') {
            umsjonui.umsjonUI();
        }
        else if (selection == '2') {
            salaui.salaUI();
        }
        else if (selection == '3') {
            baksturui.baksturUI();
        }
        else if (selection == '4') {
            afhendingui.afhendingUI();
        }
    }
    while (selection != '5');
}
