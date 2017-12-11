//
//  DeliveryPlaceService.hpp
//  main assignment
//
//  Created by illugi steingrimsson on 11/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#ifndef DeliveryPlaceService_hpp
#define DeliveryPlaceService_hpp

#include <stdio.h>
#include "DeliveryPlace.hpp"

class DeliveryPlaceService {
private:
    
public:
    DeliveryPlaceService();
    void storeAllDeliveryPlaces(const vector<DeliveryPlace> &DeliveryPlace);
    vector<DeliveryPlace> retriveAllDeliveryPlaces();
    
};

#endif /* DeliveryPlaceService_hpp */
