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

SalaUI::SalaUI() {
    
}

void SalaUI::salaUI() {
    
    sala_menuUI();
    
    /*
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
     */
}

void SalaUI::sala_menuUI() {
    
    char selection = '\0';
    
    cout << "Veldu eftirfarandi: " << endl;
    cout << "[1] til að skrá pöntun" << endl;
    cout << "[2] til baka" << endl;
    cout << "--> ";
    cin >> selection;
    
    if (selection == '1') {
        sala_orderUI();
    }
}

void SalaUI::sala_orderUI() {
    
    vector<Topping> toppings = toppings_service.retrieveAllToppings();
    
    vector<Pizza> pizza;
    
    int toppingSelection = -1;
    while (toppingSelection != 0) {
        cout << "Vinsamlegast veldu eftirfarandi nr. til að bæta við áleggi (0 fyrir hætta)" << endl;
        for (unsigned int i = 0; i < toppings.size(); i++) {
            cout << "[" << i+1 << "] " << toppings[i] << endl;
        }
        cin >> toppingSelection;
        
        if(toppingSelection > 0 && toppingSelection <= (int)toppings.size()) {
            pizza.addTopping(toppings[toppingSelection - 1]);
        }
    }
    
    pizza_service.storeAllPizzas(pizza);
    
    cout << endl;
}


