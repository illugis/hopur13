//
//  crust.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 10/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__crust__
#define __main_assignment__crust__

#include <iostream>

using namespace std;

#endif /* defined(__main_assignment__crust__) */

class Crust {
    
private:
    string name;
    int price;
    
public:
    Crust(string name, int price);
    void write(ofstream& fout) const;
    void read(ifstream& fin);
    friend istream& operator >> (istream& in, Crust& topping);
    friend ostream& operator << (ostream& out, const Crust& topping);
};