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