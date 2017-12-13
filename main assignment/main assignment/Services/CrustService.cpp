//
//  CrustService.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 11/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "CrustService.h"

CrustService::CrustService() {
    
}

void CrustService::storeAllCrust(const vector<Crust> &crust) {
    
    crust_repo.storeAllCrust(crust);
}

vector<Crust> CrustService::retrieveAllCrust() {
    
    return crust_repo.retrieveAllCrust();
}

bool CrustService::validateError(const Crust& crust) {
    string name = crust.getCrustName();
    
    for(unsigned int i = 0; i < name.length(); i++){
        if(!isalpha(name[i]) || name[i] != ' ' || name.length() > 25) {
            throw (InvalidCrustException());
        }
    }
    
    int price = crust.getCrustPrice();
    if(!isdigit(price) && price < 0){
        throw (InvalidCrustPriceException());
    }
    return true;
}

