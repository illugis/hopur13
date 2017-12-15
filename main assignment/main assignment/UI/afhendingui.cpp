//
//  afhending.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "afhendingui.h"

AfhendingUI::AfhendingUI() {
    
}


void AfhendingUI::afhendingUI(){
    
    cout << "AFHENDING" << endl;
    cout << "---------" << endl;
    cout << "Vinsamlegast sláðu inn afhendingarstað:" << endl;
    string afhendingarstadur;
    cin >> afhendingarstadur;
    cout << "Listi af pöntunum fyrir " << afhendingarstadur << endl;
    //listi (ifstream örugglega)
    
    
    vector<Order> orders = order_service.retrieveOrdersDelivery(afhendingarstadur);
    
    for (unsigned int i = 0; i < orders.size(); i++) {
            cout << orders[i] << endl;
    }
    
    cout << "Tilbúnar pantanir fyrir " << endl;

    //listi
    
    cout << "Sláðu inn nafn til að velja pöntun: ";
    string name;
    cin >> name;
    
    vector<Order> order = order_service.retrieveOrderForName(afhendingarstadur, name);
    
    for(int i = 0; i < order.size(); i++){
        cout << order[i] <<endl;
    }
    
    cout << "Hefur pöntun verið greidd(y/n)? ";
    cin >> greitt;
   /* if(greitt == 'y'){
        ofstream fout;
        fout....
    }*/
    
    cout << "Hefur pöntun verið afhent(y/n)? ";
    cin >> afhent;
    
}
