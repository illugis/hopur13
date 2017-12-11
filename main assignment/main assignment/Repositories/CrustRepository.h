//
//  CrustRepository.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 11/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__CrustRepository__
#define __main_assignment__CrustRepository__

#include "Crust.h"
#include <vector>

class CrustRepository {
    
private:
    
    
public:
    CrustRepository();
    void storeAllCrust(const vector<Crust> &crust);
    vector<Crust> retrieveAllCrust();
    
    
};

#endif /* defined(__main_assignment__CrustRepository__) */
