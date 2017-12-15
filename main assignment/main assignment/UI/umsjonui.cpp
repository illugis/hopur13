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
}

void UmsjonUI::val_umsjonUI() {
    
    char selection = '\0';
    
    cout << "UMSJÓN" << endl;
    cout << "------" << endl;
    cout << "Vinsamlegast veldu:" << endl;
    cout << "\t [1] til að skrá botn" << endl;
    cout << "\t [2] til að skrá álegg" << endl;
    cout << "\t [3] til að skrá pítsu á matseðil" << endl;
    cout << "\t [4] til að skrá aðrar vörur" << endl;
    cout << "\t [5] til að skrá afhendingarstaði" << endl;
    cout << "\t [6] til baka" << endl;
    cout << "--> ";
    cin >> selection;
    
    if (selection == '1') {
        crust_service.storeAllCrust(create_crust());
    }
    else if (selection == '2') {
        toppings_service.storeAllToppings(create_topping());
    }
    else if (selection == '3') {
        pizzamenu_service.storeAllPizzaMenus(create_pizzamenu());
    }
    else if (selection == '4') {
        other_service.storeAllOther(create_other());
    }
    else if (selection == '5') {
        deliveryplace_service.storeAllDeliveryPlaces(create_deliveryplace());
    }
    else if (selection == '6') {
        
    }
}

vector<Crust> UmsjonUI::create_crust() {
    
    vector<Crust> crusts = crust_service.retrieveAllCrust();
    
    cout << "Listi yfir botna í kerfi:" << endl;
    for (unsigned int i = 0; i < crusts.size(); i++) {
        cout << "[" << i+1 << "] " << crusts[i] << endl;
    }
    
    char selection = 'y';
    Crust crust1;
    while (selection == 'y') {
        cout << endl;
        
        cout << "Bæta við botn?(y/n) ";
        cin >> selection;
        if (selection == 'y') {
            cin >> crust1;
            crusts.push_back(crust1);
            cout << "Botni hefur verið bætt við í kerfi" << endl;
        }
    }
    return crusts;
}

vector<Topping> UmsjonUI::create_topping() {
    
    vector<Topping> toppings = toppings_service.retrieveAllToppings();
    
    cout << "Listi yfir álegg í kerfi:" << endl;
    for (unsigned int i = 0; i < toppings.size(); i++) {
        cout << "[" << i+1 << "] " << toppings[i] << endl;
    }
    
    char selection = 'y';
    Topping topping1;
    while (selection == 'y') {
        cout << endl;
        
        cout << "Bæta við áleggi?(y/n) ";
        cin >> selection;
        if (selection == 'y') {
            cin >> topping1;
            toppings.push_back(topping1);
            cout << "Áleggi hefur verið bætt við í kerfi" << endl;
        }
    }
    return toppings;
}

vector<PizzaMenu> UmsjonUI::create_pizzamenu() {
    
    vector<Topping> toppings = toppings_service.retrieveAllToppings();
    
    vector<PizzaMenu> pizzamenus = pizzamenu_service.retrieveAllPizzaMenus();
    PizzaMenu pizzamenu;
    
    cout << "Listi yfir pítsur á matseðli í kerfi:" << endl;
    for (unsigned int i = 0; i < pizzamenus.size(); i++) {
        cout << "[" << i+1 << "] " << pizzamenus[i] << endl;
    }
    cout << endl;
    
    char selection = 'y';
    char selection2 = '\0';
    Topping topping1;
    
    while (selection == 'y') {
        cout << "Bæta við pítsu á matseðil?(y/n) ";
        cin >> selection2;
        if (selection2 != 'y') {
            break;
        }
        else {
            cout << endl;
            
            cin >> pizzamenu;
            cout << endl;

            int toppingSelection = -1;
            while (toppingSelection != 0) {
                cout << "Vinsamlegast veldu eftirfarandi nr. til að bæta við áleggi (0 fyrir hætta)" << endl;
                for (unsigned int i = 0; i < toppings.size(); i++) {
                    cout << "[" << i+1 << "] " << toppings[i] << endl;
                }
                cin >> toppingSelection;
                cout << endl;
                        
                if(toppingSelection > 0 && toppingSelection <= (int)toppings.size()) {
                    pizzamenu.addTopping(toppings[toppingSelection - 1]);
                }
            }
        }
        
        pizzamenus.push_back(pizzamenu);
            
        cout << "Pítsu hefur verið bætt á matseðil" << endl << endl;
    }

    return pizzamenus;
}

vector<Other> UmsjonUI::create_other() {
    
    vector<Other> other = other_service.retrieveAllOther();
    
    cout << "Listi yfir annað í kerfi:" << endl;
    for (unsigned int i = 0; i < other.size(); i++) {
        cout << "[" << i+1 << "] " << other[i] << endl;
    }
    
    char selection = 'y';
    Other other1;
    while (selection == 'y') {
        cout << endl;
        
        cout << "Bæta við öðru?(y/n) ";
        cin >> selection;
        if (selection == 'y') {
            cin >> other1;
            other.push_back(other1);
            cout << "Öðru hefur verið bætt við í kerfi" << endl;
        }
    }
    return other;
}

vector<DeliveryPlace> UmsjonUI::create_deliveryplace() {
    
    vector<DeliveryPlace> deliveryplace = deliveryplace_service.retriveAllDeliveryPlaces();
    
    cout << "Listi yfir afhendingarstaði í kerfi:" << endl;
    for (unsigned int i = 0; i < deliveryplace.size(); i++) {
        cout << "[" << i+1 << "] " << deliveryplace[i] << endl;
    }
    
    char selection = 'y';
    DeliveryPlace deliveryplace1;
    while (selection == 'y') {
        cout << endl;
        
        cout << "Bæta við afhendingarstað?(y/n) ";
        cin >> selection;
        if (selection == 'y') {
            cin >> deliveryplace1;
            deliveryplace.push_back(deliveryplace1);
            cout << "Afhendingarstað hefur verið bætt við í kerfi" << endl;
        }
    }
    return deliveryplace;
}
