//
//  OrderRepository.cpp
//  main assignment
//
//  Created by illugi steingrimsson on 09/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#include "OrderRepository.hpp"

using namespace std;

OrderRepository::OrderRepository() {
    
}

void OrderRepository::storeAllOrders(const vector<Order> &order) {
    
    ofstream fout;
    fout.open("orders.dat", ios::binary);
    
    int orderCount = order.size();
    
    fout.write((char*)(&orderCount), sizeof(int));
    
    for (int i = 0; i < orderCount; i++) {
        order[i].write(fout);
    }
    
    fout.close();
}

vector<Order> OrderRepository::retrieveAllOrders() {
    
    vector<Order> order;
    Order order1;
    
    ifstream fin;
    fin.open("order.dat", ios::binary);
    
    if (fin.is_open()) {
        int orderCount;
        
        fin.read((char*)(&orderCount), sizeof(int));
        
        for (int i = 0; i < orderCount; i++) {
            order1.read(fin);
            order.push_back(order1);
        }
        
        fin.close();
    }
    
    return order;
}
