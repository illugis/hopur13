//
//  DeliveryPlaceRepository.cpp
//  main assignment
//
//  Created by illugi steingrimsson on 11/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#include "DeliveryPlaceRepository.hpp"

DeliveryPlaceRepository::DeliveryPlaceRepository() {
    
}

void DeliveryPlaceRepository::storeAllDeliveryPlaces(const vector<DeliveryPlace> &deliveryplace){
        
    ofstream fout;
    fout.open("deliveryplace.dat", ios::binary);
    
    int deliveryPlaceCount = deliveryplace.size();
    
    fout.write((char*)(&deliveryPlaceCount), sizeof(int));
    
    
    for (int i = 0; i < deliveryPlaceCount; i++) {
        deliveryplace[i].write(fout);
    }
    
    fout.close();
}

vector<DeliveryPlace> DeliveryPlaceRepository::retriveAllDeliveryPlaces(){
    
    vector<DeliveryPlace> deliveryplace;
    DeliveryPlace deliveryplace1;
    
    ifstream fin;
    fin.open("deliveryplace.dat", ios::binary);
    
    if (fin.is_open()) {
        int deliveryPlaceCount;
        
        fin.read((char*)(&deliveryPlaceCount), sizeof(int));
        
        for (int i = 0; i < deliveryPlaceCount; i++) {
            deliveryplace1.read(fin);
            deliveryplace.push_back(deliveryplace1);
        }
        
        fin.close();
    }
    
    return deliveryplace;
}




