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

string Order::getDeliveryPlaceName() const{
    
    return this->deliveryplace.getDeliveryPlaceName();
}

string Order::getName() const{
    
    return this->name;
}

vector<Pizza> Order::getPizzas() const{
    
    return pizzas;
}

void Order::addName(string name) {
    
    this->name = name;
}

void Order::addCrust(Crust crust){
    
    this->crust = crust;
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
void Order::writeName(ofstream& fout) const{
    
    int stringLength = name.length() + 1;
    
    fout.write((char*)(&stringLength), sizeof(int));
    fout.write(name.c_str(), stringLength);
    
    
}

void Order::readName(ifstream& fin){
    
    int stringLength;
    
    fin.read((char*)(&stringLength), sizeof(int));
    char* str = new char[stringLength];
    
    fin.read(str, stringLength);
    
    name = str;
    
    delete [] str;
}

void Order::writeDelivery(ofstream& fout) const{
    
    int stringLength = delivery.length() + 1;
    
    fout.write((char*)(&stringLength), sizeof(int));
    fout.write(delivery.c_str(), stringLength);
    
}
void Order::readDelivery(ifstream& fin){
    
    int stringLength;
    
    fin.read((char*)(&stringLength), sizeof(int));
    char* str = new char[stringLength];
    
    fin.read(str, stringLength);
    
    delivery = str;
    
    delete [] str;
}

void Order::writePayment(ofstream& fout) const{
    
    int stringLength = payment.length() + 1;
    
    fout.write((char*)(&stringLength), sizeof(int));
    fout.write(payment.c_str(), stringLength);
}
void Order::readPayment(ifstream& fin){
    
    int stringLength;
    
    fin.read((char*)(&stringLength), sizeof(int));
    char* str = new char[stringLength];
    
    fin.read(str, stringLength);
    
    payment = str;
    
    delete [] str;
}

void Order::writeComment(ofstream& fout) const{
    
    int stringLength = comment.length() + 1;
    
    fout.write((char*)(&stringLength), sizeof(int));
    fout.write(comment.c_str(), stringLength);
}
void Order::readComment(ifstream& fin){
    
    int stringLength;
    
    fin.read((char*)(&stringLength), sizeof(int));
    char* str = new char[stringLength];
    
    fin.read(str, stringLength);
    
    comment = str;
    
    delete [] str;
}

void Order::write(ofstream& fout) const {
    
    int nameCount = 1;
    
    fout.write((char*)(&nameCount), sizeof(nameCount));
    
    for(int i = 0; i < nameCount; i++){
        writeName(fout);
    }
    
    int pizzaCount = pizzas.size();
    
    fout.write((char*)(&pizzaCount), sizeof(pizzaCount));
    
    for (int i = 0; i < pizzaCount; i++) {
        pizzas[i].write(fout);
    }
    
    int otherCount = others.size();
    
    fout.write((char*)(&otherCount), sizeof(otherCount));
    
    for (int i = 0; i < otherCount; i++) {
        others[i].write(fout);
    }
    
    int deliveryCount = 1;
    
    fout.write((char*)(&deliveryCount), sizeof(deliveryCount));
    
    for(int i = 0; i < deliveryCount; i++){
        writeDelivery(fout);
    }
    
    int paymentCount = 1;
    
    fout.write((char*)(&paymentCount), sizeof(paymentCount));
    
    for(int i = 0; i < paymentCount; i++){
        writePayment(fout);
    }
    
    int deliveryPlaceCount = 1;
    
    fout.write((char*)(&deliveryPlaceCount), sizeof(deliveryPlaceCount));
    
    for(int i = 0; i < deliveryPlaceCount; i++){
        deliveryplace.write(fout);
    }
    
    int commentCount = 1;
    
    fout.write((char*)(&commentCount), sizeof(commentCount));
    
    for(int i = 0; i < commentCount; i++){
        writeComment(fout);
    }
}

void Order::read(ifstream& fin) {
    
    pizzas.clear();
    others.clear();
    
    int nameCount;
    
    fin.read((char*)(&nameCount), sizeof(nameCount));
    
    for (int i = 0; i < nameCount; i++) {
        readName(fin);
        addName(name);
    }
    
    int pizzaCount;
    fin.read((char*)(&pizzaCount), sizeof(pizzaCount));
    
    Pizza pizza;
    for (int i = 0; i < pizzaCount; i++) {
        pizza.read(fin);
        addPizza(pizza);
    }
    
    int otherCount;
    fin.read((char*)(&otherCount), sizeof(otherCount));
    
    Other other;
    for (int i = 0; i < otherCount; i++) {
        other.read(fin);
        addOther(other);
    }
    
    int deliveryCount;
    
    fin.read((char*)(&deliveryCount), sizeof(deliveryCount));
    
    for (int i = 0; i < deliveryCount; i++) {
        readDelivery(fin);
        addDelivery(delivery);
    }
    
    int paymentCount;
    
    fin.read((char*)(&paymentCount), sizeof(paymentCount));
    
    for (int i = 0; i < paymentCount; i++) {
        readPayment(fin);
        addPayment(payment);
    }
    
    int deliveryPlaceCount;
    fin.read((char*)(&deliveryPlaceCount), sizeof(deliveryPlaceCount));
    
    DeliveryPlace deliveryplace;
    for (int i = 0; i < deliveryPlaceCount; i++) {
        deliveryplace.read(fin);
        addDeliveryPlace(deliveryplace);
    }
    
    int commentCount;
    
    fin.read((char*)(&commentCount), sizeof(commentCount));
    
    for (int i = 0; i < commentCount; i++) {
        readComment(fin);
        addComment(comment);
    }
    
    
}

ostream& operator << (ostream& outs, const Order& order){
    
    outs << "Nafn: " << order.name << endl;
    
    outs << "Pítsa/pítsur: " << endl;
    for (unsigned int i = 0; i < order.pizzas.size(); i++) {
        outs << order.pizzas[i] << endl;
    }
    outs << "Annað: " << endl;
    for (unsigned int i = 0; i < order.others.size(); i++) {
        outs << order.others[i] << endl;
    }
    
    outs << "Sent eða sótt: " << order.delivery << endl;
    
    outs << "Er pöntun greidd? " << order.payment << endl;
    
    outs << "Afhendingarstaður: " << order.deliveryplace << endl;
    
    outs << "Athugasemd: " << order.comment << endl;
    
    return outs;
}

istream& operator >> (istream& ins, Order& order){
    
    
    return ins;
}
