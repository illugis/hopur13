//
//  Order.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 07/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "Order.h"

Order::Order(string name, Pizza pizza, string other, int price, string destination){
    this->name = name;
    this->pizza = pizza;
    this->other = other;
    this->price = price;
    this->destination = destination;
}

string Order::getOther() const{
    return this->other;
}
int Order::getPrice() const{
    return this->price;
}
string Order::getDestination() const{
    return this->destination;
}
ostream& operator << (ostream& out, const Order order){
    out << "Pizza: " << order.pizza << endl;
    out << "Annað: " << order.other << endl;
    out << "Afhendingarstaður: " << order.destination << endl;
    
    return out;
}
istream& operator >> (istream& in, Order order){
    cout << "Pizza: ";
    in >> order.pizza;
    cout << "Annað: ";
    in >> order.other;
    cout << "Afhendingarstaður: ";
    in >> order.destination;
    
    return in;
}











