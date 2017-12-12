//
//  Other.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 11/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__Other__
#define __main_assignment__Other__

#include <iostream>
#include <string>
#pragma once

using namespace std;

class Other {
    
private:
    string name;
    int price;
    
public:
    Other();
    Other(string name, int price);
    void write(ofstream& fout) const;
    void read(ifstream& fin);
    string getOtherName() const;
    int getOtherPrice() const;
    friend istream& operator >> (istream& in, Other& other);
    friend ostream& operator << (ostream& out, const Other& other);
    
};

#endif /* defined(__main_assignment__Other__) */
