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
    cout << "Vinsamlegast sláðu inn afhendingarstað";
    
    cout << "Listi af pöntunum fyrir " << endl;
    //listi (ifstream örugglega)
    
    cout << "Tilbúnar pantanir fyrir " << endl;

    //listi
    
    cout << "Veldu pöntun: " << endl;
    
    cout << "Hefur pöntun verið greidd(y/n)? ";
    cin >> greitt;
   /* if(greitt == 'y'){
        ofstream fout;
        fout....
    }*/
    
    cout << "Hefur pöntun verið afhent(y/n)? ";
    cin >> afhent;
    
}
