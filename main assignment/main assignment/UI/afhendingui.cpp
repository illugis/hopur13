//
//  afhending.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 30/11/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "afhendingui.h"


void AfhendingUI::afhendingUI(){
    
    cout << "Hver er þinn afhendingarstaður? ";
    
    
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
