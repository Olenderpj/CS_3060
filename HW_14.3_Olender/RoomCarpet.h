//
// Created by PJ Olender on 9/3/22.
//

#ifndef HW_14_3_OLENDER_ROOMCARPET_H
#define HW_14_3_OLENDER_ROOMCARPET_H

#include "RoomDimension.h"

class RoomCarpet { ;
    double cost;
    RoomDimension roomDimension;

public:
    // Constructor
    RoomCarpet(RoomDimension room, double cost){
        // Convert the price from sqft to sqin
        this->cost = cost / 144;
        roomDimension = room;
    }

    // Member Functions
    // Calculate the total cost of the carpet using the area of the room
    double totalCost(){
        return roomDimension.getArea() * cost;
    }

}; // END RoomCarpet Class

#endif //HW_14_3_OLENDER_ROOMCARPET_H
