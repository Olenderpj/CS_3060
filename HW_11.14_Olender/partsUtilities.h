//
// Created by PJ Olender on 8/28/22.
//

#ifndef HW_11_8_OLENDER_PARTSUTILITIES_H
#define HW_11_8_OLENDER_PARTSUTILITIES_H

struct Part{
    std::string description;
    int quantity;
};


void displayParts(Part array[]);
int addParts(int initialPart, int partsAdded);
int removeParts(int initialPart, int partsRemoved);
bool canAddMoreParts(Part part);
bool tooManyParts(int totalParts);

#endif //HW_11_8_OLENDER_PARTSUTILITIES_H
