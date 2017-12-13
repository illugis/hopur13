//
//  CrustService.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 11/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__CrustService__
#define __main_assignment__CrustService__

#include "Crust.h"
#include "CrustRepository.h"
#include "InvalidCrustException.h"
#include "InvalidCrustPriceException.h"

class CrustService {
    
private:
    CrustRepository crust_repo;
    bool validateError(const Crust& crust);
    
public:
    CrustService();
    void storeAllCrust(const vector<Crust> &crust);
    vector<Crust> retrieveAllCrust();
    
};


#endif /* defined(__main_assignment__CrustService__) */
