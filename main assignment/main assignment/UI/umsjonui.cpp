//
//  umsjonui.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "umsjonui.h"
#include <iostream>

using namespace std;

UmsjonUI::UmsjonUI() {
    
}

void UmsjonUI::umsjonUI() {
    
    val_umsjonUI();
    //annad_umsjonUI();
}

void UmsjonUI::val_umsjonUI() {
    
    char selection = '\0';
    
    cout << "UMSJÓN" << endl << endl;
    cout << "Vinsamlegast veldu:" << endl;
    cout << "\t [1] til að skrá botn" << endl;
    cout << "\t [2] til að skrá álegg" << endl;
    cout << "\t [3] til að skrá ákv. samsetningar" << endl;
    cout << "\t [4] til að skrá aðrar vörur" << endl;
    cout << "\t [5] til að skrá afhendingarstaði" << endl;
    cout << "\t [6] til baka" << endl;
    cout << "--> ";
    cin >> selection;
    
    if (selection == '1') {
        val_pizzaUI();
        //val_annad_umsjonUI();
    }
    else if (selection == '2') {
        cout << "Sæll vertu" << endl;
        //val_main_menu_pizzaUI();
        //val_menu_pizzaUI();
    }
    else if (selection == '3') {
     
     }
}

void UmsjonUI::crustUI() {
    
    
}

void UmsjonUI::toppingsUI() {
    
    
}

void UmsjonUI::val_pizzaUI() {
    
    try {
        pizza_service.add_pizza(create_pizza());
    }
    catch (InvalidSizeException) {
        cout << "Invalid size!" << endl;
    }
    catch (InvalidCrustException) {
        cout << "Invalid crust!" << endl;
    }
    catch (InvalidDestinationException) {
        cout << "Invalid destination!" << endl;
    }
}

Pizza UmsjonUI::create_pizza() {
    
    int numberOfToppings, price;
    vector<Topping> toppings;
    string size, crust, destination;
    cout << "Skrá gerð af pizzu" << endl;
    cout << '\t' << "Stærð: ";
    cin >> size;
    cout << '\t' << "Botn: ";
    cin >> crust;
    cout << "Hversu margar áleggstegundir? ";
    cin >> numberOfToppings;
    for(int i = 0; i < numberOfToppings; i++){
        Topping top;
        cin >> top;
        toppings.push_back(top);
        pizza.addTopping(top);
    }
    cout << "Verð (kr): ";
    cin >> price;
    cout << "Afhendingarstaður: ";
    cin >> destination;
    Pizza pizza(size, crust, toppings, price, destination);
    return pizza;
}

Order UmsjonUI::create_order() {
    
    int price = 0;
    char selection;
    string other, name;
    cout << "\t [1] Brauðstangir" << endl;
    cout << "\t [2] Gos" << endl;
    cout << "\t [3] Brauðstangir og gos" << endl;
    cin >> selection;

    if(selection == '1'){
     price = 500;
     other = "brauðstangir";
    }
    else if(selection == '2'){
     price = 250;
     other = "gos";
    }
    else if(selection == '3'){
     price = 750;
     other = "brauðstangir og gos";
    }
    Order order(name, create_pizza(), other, price);
    return order;
}
/*
void UmsjonUI::val_menu_pizzaUI() {
    
    char selection = '\0';
    
    cout << "Matseðill " << endl;
    cout << "\t [1] Margarita" << endl;
    cout << "\t [2] Svepperoni" << endl;
    cout << "\t [3] Veganveisla" << endl;
    //cout << "[4] til baka" << endl;
    cout << "--> ";
    cin >> selection;
    
    if (selection == '1') {
        cout << "Margarita" << endl;
        //Ekkert
        //pizza_service.add_pizza_menu(create_pizza_menu_marg());
        //pizza_menu_service.add_pizza_menu(create_pizza_menu_marg());
    }
    else if (selection == '2') {
        cout << "Svepperoni" << endl;
        //Pepp og svepp
        //pizza_service.add_pizza_menu(create_pizza_menu_svepperoni());
        //pizza_menu_service.add_pizza_menu(create_pizza_menu_svepperoni());
    }
    else if (selection == '3') {
        cout << "Veganveisla" << endl;
        //Sveppir, ólífur, laukur, ananas, paprika
        //pizza_service.add_pizza_menu(create_pizza_menu_vegan());
        //pizza_menu_service.add_pizza_menu(create_pizza_menu_vegan());
    }
}
*/
void UmsjonUI::val_annad_umsjonUI() {
    
    char selection = '\0';
    
    cout << "Annað?(y/n)" << endl;
    cout << "--> ";
    cin >> selection;
    
    if(selection == 'y') {
        create_order();
        
    }
    else if(selection == 'n'){
        
    }
}

void UmsjonUI::annad_umsjonUI() {
    
    
    
    //order_service.add_order(create_order());
    
}

