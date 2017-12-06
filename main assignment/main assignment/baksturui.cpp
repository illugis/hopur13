//
//  bakstur.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "baksturui.h"

#include <iostream>

using namespace std;

void BaksturUI::baksturUI() {
    
    char afhendingars;
    cout << "Veldu þinn Afhendingarstað: " << endl;
    cout << '\t' << "'i' fyrir hjá Illuga" << endl;
    cout << '\t' << "'g' fyrir hjá Gulla" << endl;
    cout << '\t' << "'s' fyrir hjá Styrmi" << endl;
    cout << "--> ";
    cin >> afhendingars;
    
    cout << "Listi yfir pantaðar pítsur:" << endl;
    //listi
    
    cout << "veldu pöntun" << endl;
    //cin >> pizza;
    
    char inTheMaking;
    cout << "Pítsan komin í vinnslu(y/n)? ";
    cin >> inTheMaking;
    
    char isReady;
    cout << "Er pítsan tilbúin(y/n)? ";
    cin >> isReady;
    
}




