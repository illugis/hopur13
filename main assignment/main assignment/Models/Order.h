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
#include "Other.h"

#include <iostream>
#include <string>
#include <vector>
#pragma once

using namespace std;

class Order {
    
private:
    string name;
    Pizza pizza;
    string other;
    int price;
    string delivery;
    string payment;
    string comment;
    
    DeliveryPlace deliveryplace;
    
    vector<Order> orders;
    vector<Other> others;
    vector<Pizza> pizzas;
    
public:
    Order();
    Order(string name, int price);
    
    string getOther() const;
    int getPrice() const;
    //string getDestination() const;
    
    void addName(string name);
    void addPizza(Pizza pizza);
    void addOther(Other other);
    void addDelivery(string delivery);
    void addPayment(string payment);
    void addComment(string comment);
    void addDeliveryPlace(DeliveryPlace deliveryplace);
    vector<Pizza> getPizzas() const;
    
    void writeName(ofstream& fout) const;
    void readName(ifstream& fin);
    void writeDelivery(ofstream& fout) const;
    void readDelivery(ifstream& fin);
    void writePayment(ofstream& fout) const;
    void readPayment(ifstream& fin);
    void writeComment(ofstream& fout) const;
    void readComment(ifstream& fin);
    void write(ofstream& fout) const;
    void read(ifstream& fin);
    
    friend ostream& operator << (ostream& out, const Order& order);
    friend istream& operator >> (istream& in, Order& order);
    
};













#endif /* defined(__main_assignment__Order__) */
