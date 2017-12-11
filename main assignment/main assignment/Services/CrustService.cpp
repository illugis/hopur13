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