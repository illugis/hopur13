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
    
    cout << "SALA" << endl;
    cout << "----" << endl;
    cout << "Vinsamlegast veldu: " << endl;
    cout << "[1] til að skrá pöntun" << endl;
    cout << "[2] til baka" << endl;
    cout << "--> ";
    cin >> selection;
    
    if (selection == '1') {
        make_order();
    }
    else if (selection == '2') {
        
    }
}

void SalaUI::make_order() {
    
    vector<Other> other = other_service.retrieveAllOther();
    
    vector<Order> orders;
    Order ordertemp;
    
    string name, delivery, payment, comment;
    char selection = 'y';
    char loopSelection = 'y';
    
    do {
        cout << "Nafn: ";
        cin >> ws;
        getline(cin, comment);
        cout << endl;
        ordertemp.addName(name);
        
        
        while (selection == 'y') {
            cout << "Bæta við pítsu?(y/n) ";
            cin >> selection;
            if (selection == 'y') {
                //ordertemp.addPizza
                make_pizza();
            }
        }
        
        while (selection == 'y') {
            cout << "Bæta við öðru?(y/n) ";
            cin >> selection;
            if (selection == 'y') {
                
                int otherSelection = -1;
                while (otherSelection != 0) {
                    cout << "Vinsamlegast veldu eftirfarandi nr. fyrir annað (0 fyrir hætta)" << endl;
                    for (unsigned int i = 0; i < other.size(); i++) {
                        cout << "[" << i+1 << "] " << other[i] << endl;
                    }
                    cin >> otherSelection;
                    
                    if(otherSelection > 0 && otherSelection <= (int)other.size()) {
                        ordertemp.addOther(other[otherSelection -1]);
                    }
                }
            }
        }
        
        cout << "Heildarverð: ";
    
        cout << "Sent eða sótt?" << endl;
        cin >> delivery;
        ordertemp.addDelivery(delivery);
        
        cout << "Pöntun greidd eða ógreidd?" << endl;
        cin >> payment;
        ordertemp.addPayment(payment);
        
        //Mögulega annað fall sem sér um þetta?
        vector<DeliveryPlace> deliveryplace = deliveryplace_service.retriveAllDeliveryPlaces();
        int deliveryplaceSelection = -1;
        cout << "Vinsamlegast veldu eftirfarandi nr. fyrir afhendingarstað" << endl;
        for (unsigned int i = 0; i < deliveryplace.size(); i++) {
            cout << "[" << i+1 << "] " << deliveryplace[i] << endl;
        }
        cin >> deliveryplaceSelection;
        
        if (deliveryplaceSelection > 0 && deliveryplaceSelection <= (int)deliveryplace.size()) {
            ordertemp.addDeliveryPlace(deliveryplace[deliveryplaceSelection - 1]);
        }
        
        cout << "Skrá athugasemd?(y/n) ";
        cin >> selection;
        if (selection == 'y') {
            cin >> ws;
            getline(cin, comment);
            ordertemp.addComment(comment);
        }
        
        orders.push_back(ordertemp);
        order_service.storeAllOrders(orders);
        cout << "Pöntun hefur verið skráð" << endl << endl;
        
        cout << "Skrá aðra pöntun?(y/n) ";
        cin >> loopSelection;
    }
    while (loopSelection == 'y');

}

 void SalaUI::make_pizza() {
 
     vector<Crust> crust = crust_service.retrieveAllCrust();
     vector<Topping> toppings = toppings_service.retrieveAllToppings();
     vector<DeliveryPlace> deliveryplace = deliveryplace_service.retriveAllDeliveryPlaces();
 
     vector<Pizza> pizza = pizza_service.retrieveAllPizzas();
     Pizza pizzatemp;
 
     int crustSelection = -1;
     cout << "Vinsamlegast veldu eftirfarandi nr. fyrir botn á pítsu" << endl;
     for (unsigned int i = 0; i < crust.size(); i++) {
         cout << "[" << i+1 << "] " << crust[i] << endl;
     }
     cin >> crustSelection;
     
     if(crustSelection > 0 && crustSelection <= (int)crust.size()) {
         pizzatemp.addCrust(crust[crustSelection -1]);
     }
     
     int toppingSelection = -1;
     while (toppingSelection != 0) {
        cout << "Vinsamlegast veldu eftirfarandi nr. til að bæta við áleggi (0 fyrir hætta)" << endl;
        for (unsigned int i = 0; i < toppings.size(); i++) {
            cout << "[" << i+1 << "] " << toppings[i] << endl;
        }
        cin >> toppingSelection;
 
        if(toppingSelection > 0 && toppingSelection <= (int)toppings.size()) {
            pizzatemp.addTopping(toppings[toppingSelection - 1]);
        }
     }
     /*
     int deliveryplaceSelection = -1;
     cout << "Vinsamlegast veldu eftirfarandi nr. fyrir afhendingarstað" << endl;
     for (unsigned int i = 0; i < deliveryplace.size(); i++) {
         cout << "[" << i+1 << "] " << deliveryplace[i] << endl;
     }
     cin >> deliveryplaceSelection;
     
     if (deliveryplaceSelection > 0 && deliveryplaceSelection <= (int)deliveryplace.size()) {
         pizzatemp.addDeliveryPlace(deliveryplace[deliveryplaceSelection - 1]);
     }*/
     
     pizza.push_back(pizzatemp);
     pizza_service.storeAllPizzas(pizza);
 
     cout << endl;
 
 }
/*
void SalaUI::make_other() {
 
    vector<Other> other = other_service.retrieveAllOther();

    Other othertemp;
 
    int otherSelection = -1;
    while (otherSelection != 0) {
        cout << "Vinsamlegast veldu eftirfarandi nr. fyrir annað (0 fyrir hætta)" << endl;
        for (unsigned int i = 0; i < other.size(); i++) {
            cout << "[" << i+1 << "] " << other[i] << endl;
        }
        cin >> otherSelection;

        if(otherSelection > 0 && otherSelection <= (int)other.size()) {
            othertemp.addOther(other[otherSelection -1]);
        }
    }
 
    other.push_back(othertemp);
    order_service.storeAllOrders(other);
 
    cout << endl;
 
}
*/