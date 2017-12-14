//
//  OtherService.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 11/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "OtherService.h"

OtherService::OtherService() {
    
}

void OtherService::storeAllOther(const vector<Other> &other) {
    
    other_repo.storeAllOther(other);
}

vector<Other> OtherService::retrieveAllOther() {
    
    return other_repo.retrieveAllOther();
}

bool OtherService::InvalidError(const Other& other){
    
    string name = other.getOtherName();
    
    for(unsigned int i = 0; i < name.length(); i++){
        if(!isalpha(name[i]) || name[i] != ' ' || name.length() > 25) {
            throw(InvalidOtherException());
        }
    }
    
    int price = other.getOtherPrice();
    
    if(!isdigit(price) || price < 0) {
        throw(InvalidOtherPriceException());
    }
    return true;
}

