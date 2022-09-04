//
// Created by PJ Olender on 9/3/22.
//

#ifndef HW_14_3_OLENDER_ROOMDIMENSION_H
#define HW_14_3_OLENDER_ROOMDIMENSION_H

#include "FeetInches.h"

class RoomDimension{
    double length;
    double width;

public:
    // Default Constructor
    RoomDimension(){}

    // Constructor
    RoomDimension(FeetInches feetInchLength, FeetInches feetInchWidth){
        length = feetInchLength.getInches();
        width = feetInchWidth.getInches();
    }

    double getArea() {
        return length * width;
    }

}; // END RoomDimension class

#endif //HW_14_3_OLENDER_ROOMDIMENSION_H
