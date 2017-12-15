//
//  Order.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 07/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "Order.h"
#include <fstream>

Order::Order() {
    
}

Order::Order(string name, int price){
   
    this->name = name;
    this->price = price;
}

void Order::addName(string name) {
    
    this->name = name;
}

void Order::addPizza(Pizza pizza) {
    
    pizzas.push_back(pizza);
}

void Order::addPizzaMenu(PizzaMenu pizzamenu) {
    
    pizzamenus.push_back(pizzamenu);
}

void Order::addOther(Other other) {
    
    others.push_back(other);
}

void Order::addDelivery(string delivery) {
    
    this->delivery = delivery;
}

void Order::addPayment(string payment) {
    
    this->payment = payment;
}

void Order::addComment(string comment) {
    
    this->comment = comment;
}

void Order::addDeliveryPlace(DeliveryPlace deliveryplace) {
    
    this->deliveryplace = deliveryplace;
}

int Order::getPrice() const{
    return this->price;
}
/*string Order::getDestination() const{
    return this->destination;
}
 */

void Order::write(ofstream& fout) const {
    
    int stringLength = name.length() + 1;
    
    fout.write((char*)(&stringLength), sizeof(int));
    fout.write(name.c_str(), stringLength);
    
    fout.write((char*)(&price), sizeof(int));
}

void Order::read(ifstream& fin) {
    
    int stringLength;
    
    fin.read((char*)(&stringLength), sizeof(int));
    char* str = new char[stringLength];
    
    fin.read(str, stringLength);
    
    name = str;
    
    fin.read((char*)(&price), sizeof(int));
    
    delete [] str;
}

ostream& operator << (ostream& out, const Order& order){
    
    
    return out;
}

istream& operator >> (istream& in, Order& order){
    
    
    return in;
}
