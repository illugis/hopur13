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

    /*
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
     */
}

void UmsjonUI::val_umsjonUI() {
    
    char selection = '\0';
    
    cout << "Vinsamlegast veldu:" << endl;
    cout << "\t [1] til að skrá pizzu að eigin vali" << endl;
    cout << "\t [2] til að skrá pizzu af matseðli" << endl;
    //cout << "\t [3] til baka" << endl;
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

void UmsjonUI::val_pizzaUI() {
    
    pizza_service.add_pizza(create_pizza());
    
     
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

void UmsjonUI::val_menu_pizzaUI() {
    

    char selection = '\0';
    
    cout << "Matseðill " << endl;
    cout << "\t [1] Margarita" << endl;
    cout << "\t [2] Svepperoni" << endl;
    cout << "\t [3] Veganveisla" << endl;
    //cout << "[4] til baka" << endl;
    
    if (selection == '1') {
        cout << "Margarita" << endl;
        //Ekkert
        //pizza_menu_service.add_pizza(create_pizza_menu_marg());
    }
    else if (selection == '2') {
        cout << "Svepperoni" << endl;
        //Pepp og svepp
        //pizza_menu_service.add_pizza(create_pizza_menu_svepperoni());
    }
    else if (selection == '3') {
        cout << "Veganveisla" << endl;
        //Sveppir, ólífur, laukur, ananas, paprika
        //pizza_menu_service.add_pizza(create_pizza_menu_vegan());
    }
}

Pizza UmsjonUI::create_pizza_menu_marg() {
    
    int numberOfToppings = 1;
    string size, crust, destination;
    cout << "Skrá gerð af pizzu" << endl;
    cout << '\t' << "Stærð: ";
    cin >> size;
    cout << '\t' << "Botn (þykkur eða þunnur): ";
    cin >> crust;
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

Pizza UmsjonUI::create_pizza_menu_svepperoni() {
    
    int numberOfToppings = 2;
    string size, crust, destination;
    cout << "Skrá gerð af pizzu" << endl;
    cout << '\t' << "Stærð: ";
    cin >> size;
    cout << '\t' << "Botn (þykkur eða þunnur): ";
    cin >> crust;
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

Pizza UmsjonUI::create_pizza_menu_vegan() {
    
    int numberOfToppings = 5;
    string size, crust, destination;
    cout << "Skrá gerð af pizzu" << endl;
    cout << '\t' << "Stærð: ";
    cin >> size;
    cout << '\t' << "Botn (þykkur eða þunnur): ";
    cin >> crust;
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
