//
//  Order.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 07/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__Order__
#define __main_assignment__Order__

#include "Pizza.hpp"

#include <iostream>
#include <string>
#include <vector>
#pragma once

using namespace std;

class Order {
    
private:
    string name;
    //Pizza pizza;
    string other;
    int price;
    //string destination;
    
    vector<Order> orders;
    
public:
    Order();
    Order(string name, int price);
    
    string getOther() const;
    int getPrice() const;
    //string getDestination() const;
    
    void addName(string name);
    
    void write(ofstream& fout) const;
    void read(ifstream& fin);
    
    friend ostream& operator << (ostream& out, const Order& order);
    friend istream& operator >> (istream& in, Order& order);
    
};













#endif /* defined(__main_assignment__Order__) */
