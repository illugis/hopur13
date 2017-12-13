//
//  DeliveryPlaceService.cpp
//  main assignment
//
//  Created by illugi steingrimsson on 11/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#include "DeliveryPlaceService.hpp"

DeliveryPlaceService::DeliveryPlaceService() {
    
}
void DeliveryPlaceService::storeAllDeliveryPlaces(const vector<DeliveryPlace> &deliveryplace){
    
    deliveryplace_repo.storeAllDeliveryPlaces(deliveryplace);
}

vector<DeliveryPlace> DeliveryPlaceService::retriveAllDeliveryPlaces(){
    
    return deliveryplace_repo.retriveAllDeliveryPlaces();
}

bool DeliveryPlaceService::InvalidError(const DeliveryPlace& deliveryplace){
    
    string name = deliveryplace.getDeliveryPlaceName();
    
    for(unsigned int i = 0; i < name.length(); i++){
        if(!isalpha(name[i]) || name.length() > 25){
            throw(InvalidDestinationException());
        }
    }
    
    return true;
}


