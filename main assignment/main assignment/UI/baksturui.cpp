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
    
    cout << "Vinsamlegast sláðu inn afhendingarstað: ";
    //Notandi slær inn afhendingarstað
    
    cout << "Listi yfir pantaðar pítsur:" << endl;
    //listi
    getPizza_list();
    
    cout << "veldu pöntun" << endl;
    //cin >> pizza;
    
    char inTheMaking;
    cout << "Pítsan komin í vinnslu(y/n)? ";
    cin >> inTheMaking;
    
    char isReady;
    cout << "Er pítsan tilbúin(y/n)? ";
    cin >> isReady;
    
}

void BaksturUI::getPizza_list() {
    
    string pizzas = pizza_service.read_pizza();
}
