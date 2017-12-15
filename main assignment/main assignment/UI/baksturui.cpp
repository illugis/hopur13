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
    
    cout << "BAKSTUR" << endl;
    cout << "-------" << endl;
    cout << "Vinsamlegast sláðu inn afhendingarstað: ";
    string afhendingarstadur;
    cin >> afhendingarstadur;
    
    cout << "Listi yfir pantaðar pítsur:" << endl;
    
    
    
    vector<Order> orders = order_service.retrievePizzasPlace(afhendingarstadur);
    
    for(int i = 0; i < orders.size();i++){
        for(int j = 0; j < orders[i].getPizzas().size(); j++){
            
            cout << orders[i].getPizzas()[j] << endl;
        }
    }
    
}


void BaksturUI::getPizza_list() {
    
    string pizzas = pizza_service.read_pizza();
}


