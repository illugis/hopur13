//
//  toppings.hpp
//  main assignment
//
//  Created by illugi steingrimsson on 30/11/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#ifndef toppings_hpp
#define toppings_hpp
#include <iostream>
using namespace std;

class Topping {
private:
    string name;
    int price;
public:
    Topping();
    Topping(string name, int price);
    friend istream& operator >> (istream& in, Topping& topping);
    friend ostream& operator << (ostream& out, Topping& topping);
    
    
};







#include <stdio.h>














#endif /* toppings_hpp */
