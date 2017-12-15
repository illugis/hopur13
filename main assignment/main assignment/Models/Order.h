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
#include "PizzaMenu.h"
#include "Crust.h"
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
    string delivery;
    string payment;
    string comment;
    int price;
    
    Crust crust;
    Topping topping;
    
    DeliveryPlace deliveryplace;
    
    vector<Order> orders;
    
    vector<Pizza> pizzas;
    vector<PizzaMenu> pizzamenus;
    vector<Topping> toppings;
    
    vector<Other> others;
    
public:
    Order();
    Order(string name, int price);
    
    string getOther() const;
    int getPrice() const;
    //string getDestination() const;
    
    void addName(string name);
    void addCrust(Crust crust);
    
    void addPizza(Pizza pizza);
    void addPizzaMenu(PizzaMenu pizzamenu);
    
    string getDeliveryPlaceName() const;
    string getName() const;
    Crust getCrust() const;
    string getPayment() const;
    void setPayment(const string payment);
    
    void addOther(Other other);
    void addDelivery(string delivery);
    void addPayment(string payment);
    void addComment(string comment);
    void addDeliveryPlace(DeliveryPlace deliveryplace);
    vector<Pizza> getPizzas() const;
    vector<PizzaMenu> getPizzamenus() const;
    
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
    
    friend ostream& operator << (ostream& outs, const Order& order);
    friend istream& operator >> (istream& ins, Order& order);
    
};













#endif /* defined(__main_assignment__Order__) */
