//
//  OrderRepository.hpp
//  main assignment
//
//  Created by illugi steingrimsson on 09/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#ifndef OrderRepository_hpp
#define OrderRepository_hpp

#include <stdio.h>
#include <fstream>
#include "Order.h"

class OrderRepository {

private:
    
    
public:
    void add_order(const Order& order);
    string read_order();
    
};


#endif /* OrderRepository_hpp */
