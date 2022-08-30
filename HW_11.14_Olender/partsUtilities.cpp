//
// Created by PJ Olender on 8/28/22.
//

#include <iomanip>
#include <iostream>
#include "partsUtilities.h"

using namespace std;

const int SPACE_DELIMITER = 35;

// Format and display all the part's descriptions and their names with set spacing
void displayParts(Part array[]){

    std::cout << "-----------------------------------------------------------------------\n" <<
                 "Part Description \t\t\t Number of Parts in the bin\n" <<
                 "-----------------------------------------------------------------------" << std::endl;

    for (int i = 0; i < 10; i++){
        int wordLength = array[i].description.size();

        if (array[i].quantity < 10){
            std::cout << array[i].description << std::setw(SPACE_DELIMITER - wordLength) <<  array[i].quantity << std::endl;
        } else {
            std::cout << array[i].description << std::setw(SPACE_DELIMITER - wordLength + 1) << array[i].quantity << std::endl;
        }
    }
}

// Increment parts by a specified amount
int addParts(int initialPart, int partsAdded) {
    initialPart += partsAdded;
    return initialPart ;
}

// Decrement parts by a specified amount
int removeParts(int initialPart, int partsRemoved){
    initialPart -= partsRemoved;
    return initialPart;
}

// Verify if the parts bin is currently full
bool canAddMoreParts(Part part){
    if (part.quantity == 30 || part.quantity > 30){
        return false;
    }
    return true;
}

// Confirm that no more than 30 parts can exist in the bin
bool tooManyParts(int totalParts){
    if (totalParts > 30){
        std::cout << "OVERFLOW ERROR: Only 30 parts can fit in the bin!" << std::endl;
        return true;
    }
    return false;
}


