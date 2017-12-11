//
//  OtherRepository.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 11/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "OtherRepository.h"
#include <fstream>

using namespace std;

OtherRepository::OtherRepository() {
    
    
}

void OtherRepository::storeAllOther(const vector<Other> &other) {
    
    ofstream fout;
    fout.open("other.dat", ios::binary);
    
    int otherCount = other.size();
    
    fout.write((char*)(&otherCount), sizeof(int));
    
    
    for (int i = 0; i < otherCount; i++) {
        other[i].write(fout);
    }
    
    fout.close();
}

vector<Other> OtherRepository::retrieveAllOther() {
    
    vector<Other> other;
    Other other1;
    
    ifstream fin;
    fin.open("other.dat", ios::binary);
    
    if (fin.is_open()) {
        int crustCount;
        
        fin.read((char*)(&crustCount), sizeof(int));
        
        for (int i = 0; i < crustCount; i++) {
            other1.read(fin);
            other.push_back(other1);
        }
        
        fin.close();
    }
    
    return other;
}
