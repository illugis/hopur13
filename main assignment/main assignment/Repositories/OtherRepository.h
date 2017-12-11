//
//  OtherRepository.h
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 11/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#ifndef __main_assignment__OtherRepository__
#define __main_assignment__OtherRepository__

#include "Other.h"
#include <vector>

class OtherRepository {
    
private:
    
    
public:
    OtherRepository();
    void storeAllOther(const vector<Other> &other);
    vector<Other> retrieveAllOther();
    
};

#endif /* defined(__main_assignment__OtherRepository__) */
