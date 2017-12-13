//
//  DeliveryPlaceService.hpp
//  main assignment
//
//  Created by illugi steingrimsson on 11/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#ifndef DeliveryPlaceService_hpp
#define DeliveryPlaceService_hpp

#include "DeliveryPlace.hpp"
#include "DeliveryPlaceRepository.hpp"
#include "InvalidDestinationException.h"

class DeliveryPlaceService {
private:
    DeliveryPlaceRepository deliveryplace_repo;
    bool InvalidError(const DeliveryPlace& deliveryplace);
    
public:
    DeliveryPlaceService();
    void storeAllDeliveryPlaces(const vector<DeliveryPlace> &deliveryplace);
    vector<DeliveryPlace> retriveAllDeliveryPlaces();
    
};

#endif /* DeliveryPlaceService_hpp */
