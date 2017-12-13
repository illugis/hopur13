//
//  OtherService.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 11/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__OtherService__
#define __main_assignment__OtherService__

#include "Other.h"
#include "OtherRepository.h"
#include "InvalidOtherException.hpp"
#include "InvalidOtherPriceException.hpp"

class OtherService {
    
private:
    OtherRepository other_repo;
    bool InvalidError(const Other& other);
    
public:
    OtherService();
    void storeAllOther(const vector<Other> &other);
    vector<Other> retrieveAllOther();
    
};

#endif /* defined(__main_assignment__OtherService__) */
