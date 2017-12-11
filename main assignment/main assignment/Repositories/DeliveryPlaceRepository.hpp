//
//  DeliveryPlaceRepository.hpp
//  main assignment
//
//  Created by illugi steingrimsson on 11/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#ifndef DeliveryPlaceRepository_hpp
#define DeliveryPlaceRepository_hpp

#include <stdio.h>
#include "DeliveryPlace.hpp"
#include <fstream>
#include <vector>

class DeliveryPlaceRepository {
private:
    
public:
    DeliveryPlaceRepository();
    void storeAllDeliveryPlaces(const vector<DeliveryPlace> &deliveryplace);
    vector<DeliveryPlace> retriveAllDeliveryPlaces();
    
};

#endif /* DeliveryPlaceRepository_hpp */
