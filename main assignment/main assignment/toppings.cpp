//
//  toppings.cpp
//  main assignment
//
//  Created by illugi steingrimsson on 30/11/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#include "toppings.h"
#include <string.h>

Topping::Topping(){
    
}
Topping::Topping(char* name, int price){
    strcpy(this->name, name);
    this->price = price;
}
Topping::~Topping(){
    
}








