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
#include <string>
#pragma once

using namespace std;

#endif /* defined(__main_assignment__crust__) */

class Crust {
    
private:
    string name;
    int price;
    
public:
    Crust();
    Crust(string name, int price);
    void write(ofstream& fout) const;
    void read(ifstream& fin);
    string getCrustName() const;
    int getCrustPrice() const;
    friend istream& operator >> (istream& in, Crust& crust);
    friend ostream& operator << (ostream& out, const Crust& crust);
};
