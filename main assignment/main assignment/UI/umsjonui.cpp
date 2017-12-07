//
//  umsjonui.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "mainui.h"
#include "umsjonui.h"

#include <iostream>

using namespace std;

void UmsjonUI::umsjonUI() {
    
    val_umsjonUI();

    cout << "Ákveðnar samsetningar: " ;
    cout << endl;
    
    cout << "Annað(y/n)? ";
    char svar;
    do{
        cin >> svar;
        
        if(svar == 'y'){
            cout << "Brauðstangir og/eða gos? ";
            cin >> other;
            svar = 'n';
        }
    }
    while(svar != 'n');
    
    cout << "Verð: ";
    //cin >> price;
    
    cout << endl;
    
    cout << "Afhendingarstaður: ";
    cin >> place;
}

void UmsjonUI::val_umsjonUI() {
    
    char selection = '\0';
    
    cout << "Vinsamlegast veldu:" << endl;
    cout << "\t [1] til að skrá pizzu að eigin vali" << endl;
    cout << "\t [2] til að skrá pizzu af matseðli" << endl;
    //cout << "\t [3] tilbaka" << endl;
    cout << "--> ";
    cin >> selection;
    
    if (selection == '1') {
        val_pizzaUI();
    }
    else if (selection == '2') {
        val_menu_pizzaUI();
    }
    /*else if (selection == '3') {
     
     }*/
}
/*
void UmsjonUI::val_pizzaUI() {
    
    pizza_service.add_pizza(create_pizza());
    
    cout << "Skrá gerð af pizzu" << endl;
    cout << '\t' << "Stærð: ";
    int size;
    cin >> size;
    //pizza.setSize(size);
    cout << '\t' << "Botn(þykkur eða þunnur): ";
    string crust;
    cin >> crust;
    //pizza.setCrust(crust);
    
    cout << "Hversu margar áleggstegundir? ";
    int numberOfToppings;
    cin >> numberOfToppings;
    
    Pizza pizza;
    
    for(int i = 0; i < numberOfToppings; i++){
        Topping toppings;
        cin >> toppings;
        pizza.addTopping(toppings);
        
    }
    //Pizza madePizza(size, crust, t);
     
}

Pizza UmsjonUI::create_pizza() {
    
    int size, numberOfToppings;
    string crust, destination;
    cout << "Skrá gerð af pizzu" << endl;
    cout << '\t' << "Stærð: ";
    cin >> size;
    cout << '\t' << "Botn (þykkur eða þunnur): ";
    cin >> crust;
    cout << "Hversu margar áleggstegundir? ";
    cin >> numberOfToppings;
    for(int i = 0; i < numberOfToppings; i++){
        Topping toppings;
        cin >> toppings;
        pizza.addTopping(toppings);
    }
    cout << "Afhendingarstaður: ";
    cin >> destination;
    Pizza pizza(size, crust, toppings, destination);
    return pizza;
}
*/
void UmsjonUI::val_menu_pizzaUI() {
    

    char selection = '\0';
    
    cout << "Matseðill " << endl;
    cout << "\t [1] Margarita" << endl;
    cout << "\t [2] Svepperoni" << endl;
    cout << "\t [3] Veganveisla" << endl;
    
    if (selection == '1') {
        cout << "Margarita" << endl;
    }
    else if (selection == '2') {
        cout << "Svepperoni" << endl;
    }
    else if (selection == '3') {
        cout << "Veganveisla" << endl;
    }
}

