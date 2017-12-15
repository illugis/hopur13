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
    
    vector<Pizza> pizzas = pizza_service.retrieveAllPizzas();
    
    for (unsigned int i = 0; i < pizzas.size(); i++) {
        cout << pizzas[i] << endl;
    }
    
    /*vector<Order> orders = order_service.retrieveAllOrders();
    
    for(int i = 0; i < order.getPizzas().size();i++){
        cout << order.getPizzas()[i] << endl;
    }*/
    
}


void BaksturUI::getPizza_list() {
    
    string pizzas = pizza_service.read_pizza();
}


