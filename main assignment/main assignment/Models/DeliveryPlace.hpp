//
//  DeliveryPlace.hpp
//  main assignment
//
//  Created by illugi steingrimsson on 11/12/2017.
//  Copyright © 2017 Bloc. All rights reserved.
//

#ifndef DeliveryPlace_hpp
#define DeliveryPlace_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class DeliveryPlace {
private:
    string name;
    
public:
    DeliveryPlace();
    DeliveryPlace(string name);
    void write(ofstream& fout) const;
    void read(ifstream& fin);
    friend istream& operator >> (istream& in, DeliveryPlace& deliveryplace);
    friend ostream& operator << (ostream& out, const DeliveryPlace& deliveryplace);
    
};






#endif /* DeliveryPlace_hpp */
