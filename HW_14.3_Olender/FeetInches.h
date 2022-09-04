//
// Created by PJ Olender on 9/3/22.
//

#ifndef HW_14_3_OLENDER_FEETINCHES_H
#define HW_14_3_OLENDER_FEETINCHES_H

class FeetInches{
private:
    double inches;

public:
    // Constructor
    FeetInches (double inch){
        inches = inch;

    }

    double getInches() const {
        return inches;
    }
};

#endif //HW_14_3_OLENDER_FEETINCHES_H
