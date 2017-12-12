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
}

void SalaUI::sala_menuUI() {
    
    char selection = '\0';
    
    cout << "SALA" << endl << endl;
    cout << "Vinsamlegast veldu: " << endl;
    cout << "[1] til að skrá pöntun" << endl;
    cout << "[2] til baka" << endl;
    cout << "--> ";
    cin >> selection;
    
    if (selection == '1') {
        sala_orderUI();
    }
    else if (selection == '2') {
        
    }
}

void SalaUI::sala_orderUI() {
    
    vector<Crust> crust = crust_service.retrieveAllCrust();
    vector<Topping> toppings = toppings_service.retrieveAllToppings();
    //vector<DeliveryPlace> deliveryplace_service.retrieveAllDeliveryPlaces();
    
    vector<Pizza> pizza;
    Pizza temp;
    
    /*int crustSelection;
    cout << "Vinsamlegast veldu eftirfarandi nr. til að velja stærð og botn" << endl;
    for(unsigned int i = 0; i < crust.size(); i++){
        cout << "[" << i+1 << "] " << crust[i] << endl;
    }
    cin >> crustSelection;
    
    temp.addCrust((crust[crustSelection - 1]));
    */
    
    int toppingSelection = -1;
    while (toppingSelection != 0) {
        cout << "Vinsamlegast veldu eftirfarandi nr. til að bæta við áleggi (0 fyrir hætta)" << endl;
        for (unsigned int i = 0; i < toppings.size(); i++) {
            cout << "[" << i+1 << "] " << toppings[i] << endl;
        }
        cin >> toppingSelection;
        
        if(toppingSelection > 0 && toppingSelection <= (int)toppings.size()) {
            temp.addTopping((toppings[toppingSelection - 1]));
            pizza.push_back(temp);
        }
    }
    
    
    pizza_service.storeAllPizzas(pizza);
    
    cout << endl;
}

/* void SalaUI::make_order() {
 
 vector<Order> order;
 
 string name;
 cout << "Nafn: ";
 cin >> name;
 order.push_back(name);
 
 char selection = 'y';
 while (selection == 'y') {
    cout << "Bæta við pítsu?(y/n)";
    cin >> selection;
    if (selection == 'y') {
        make_pizza();
    }
 }
 
 while (selection == 'y') {
    cout << "Bæta við öðru?(y/n)";
    cin >> selection;
    if (selection == 'y') {
        make_other();
    }
}
 
 cout << "Heildarverð: ";
 
 //Eitthvað meira
 
 order_service.storeAllOrders(pizza);
 
}
 
 void SalaUI::make_pizza() {
 
    vector<Crust> crust = crust_service.retrieveAllCrust();
    vector<Topping> toppings = toppings_service.retrieveAllToppings();
 
    vector<Pizza> pizza;
 
    int crustSelection = -1;
    while (crustSelection != 0) {
        cout << "Vinsamlegast veldu eftirfarandi nr. fyrir botn á pítsu (0 fyrir hætta)" << endl;
        for (unsigned int i = 0; i < crust.size(); i++) {
            cout << "[" << i+1 << "] " << crust[i] << endl;
        }
        cin >> crustSelection;
 
        if(crustSelection > 0 && crustSelection <= (int)crust.size()) {
            pizza.addCrust(crust[crustSelection -1]);
        }
    }
 
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
    order_service.storeAllOrders(pizza);
 
    cout << endl;
 
 }
 
 void SalaUI::make_other() {
 
 vector<Other> other = other_service.retrieveAllOther();
 
 vector<Other> other1;
 
 int otherSelection = -1;
 while (otherSelection != 0) {
    cout << "Vinsamlegast veldu eftirfarandi nr. fyrir annað (0 fyrir hætta)" << endl;
    for (unsigned int i = 0; i < other.size(); i++) {
        cout << "[" << i+1 << "] " << other[i] << endl;
    }
    cin >> otherSelection;

    if(otherSelection > 0 && otherSelection <= (int)other.size()) {
        pizza.addOther(other[otherSelection -1]);
    }
 }
 
    order_service.storeAllOrders(other);
 
    cout << endl;
 
 }
 

*/
