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

class CrustService {
    
private:
    CrustRepository crust_repo;
    
public:
    CrustService();
    void storeAllCrust(const vector<Crust> &crust);
    vector<Crust> retrieveAllCrust();
    
};


#endif /* defined(__main_assignment__CrustService__) */
