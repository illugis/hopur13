//
//  sala.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "salaui.h"

#include <iostream>

using namespace std;

void SalaUI::salaUI() {
    
    cout << "Pöntun: " << endl;
    //Bæta því í skjal
    // Ná í skjal og birta
    
    cout << "Bæta við pöntun?(y/n) ";
    //Bæta pizum (og öðru) við pöntun
    
    cout << "Heildarverð: "; //Ná í heildarverð
    
    cout << "Sent eða sótt? ";
    cin >> delivery;
    
    cout << "Pöntun greidd?(y/n) ";
    if (payment == 'y') {
        //fout --> "Greitt"
    }
    else if (payment == 'n') {
        //fout --> "Ógreitt"
    }
    
    cout << "Athugasemdir: ";
    //fout getline(cin, str)
}
