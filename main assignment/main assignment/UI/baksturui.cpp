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

BaksturUI::BaksturUI(){
    
}

void BaksturUI::baksturUI() {
    
    cout << "Listi yfir pantaðar pítsur:" << endl;
    //listi
    //pizza_service.retrieveAllPizzas();
    vector<Pizza> pizzas = pizza_service.retrieveAllPizzas();
    
    for (unsigned int i = 0; i < pizzas.size(); i++) {
        cout << pizzas[i] << endl;
    }
    
}


void BaksturUI::getPizza_list() {
    
    string pizzas = pizza_service.read_pizza();
}


