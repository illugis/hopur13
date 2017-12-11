//
//  CrustRepository.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 11/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "CrustRepository.h"
#include <fstream>

using namespace std;

CrustRepository::CrustRepository() {
    
    
}

void CrustRepository::storeAllCrust(const vector<Crust> &crust) {
    
    ofstream fout;
    fout.open("crust.dat", ios::binary);
    
    int crustCount = crust.size();
    
    fout.write((char*)(&crustCount), sizeof(int));
    
    
    for (int i = 0; i < crustCount; i++) {
        crust[i].write(fout);
    }
    
    fout.close();
}

vector<Crust> CrustRepository::retrieveAllCrust() {
    
    vector<Crust> crust;
    Crust crust1;
    
    ifstream fin;
    fin.open("crust.dat", ios::binary);
    
    if (fin.is_open()) {
        int crustCount;
        
        fin.read((char*)(&crustCount), sizeof(int));
        
        for (int i = 0; i < crustCount; i++) {
            crust1.read(fin);
            crust.push_back(crust1);
        }
        
        fin.close();
    }
    
    return crust;
}
