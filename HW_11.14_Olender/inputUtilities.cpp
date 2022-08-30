//
// Created by PJ Olender on 8/28/22.
//

#include <iostream>
#include "outputUtilities.h"
#include "partsUtilities.h"

const double inf = std::numeric_limits<double>::infinity();

// Validate users input exists within a specified range
int validateInputForRange(int min, double max, int input){
    while (input < min || input > max){
        std::cout << "!!!! PARTS CAN NOT BE NEGATIVE !!!!" << std::endl;
        std::cin >> input;
    }

    return input;
}

// prompt the user for the addition or removal of a specific part
int promptAddRemovePart(){
    int choice;
    std::cin >> choice;

    // 1 - add parts
    // 2 - remove parts
    while (choice != 1 && choice != 2){
        std::cout << "INVALID SELECTION: Only choices are (1 - Add Parts, 2 - Remove Parts)" << std::endl;
        std::cin >> choice;
    }
    return choice;
}

// Provide the menu for user adding or removing parts and take an integer input for their decision
int promptHowManyParts(int choice){

    switch (choice) {
        case 1:
            std::cout << "How many parts would you like to add?\n" <<
            "--------------------------------------\n"<< std::endl;
            break;
        case 2:
            std::cout << "How many parts would you like to remove?\n" <<
            "--------------------------------------\n"<<std::endl;
            break;
        default:
            break;
    }
    int input;
    std::cin >> input;
    return input;
}

// Prompt the user for which specific part they would like to modify
int promptWhichPartToChange(){
    displaySelectPartMenu();

    int input;
    std::cout << "--------------------------------------\n"<<
                 "Input the part to Change: " << std::endl;
    std::cin >> input;
    return input;
}

// Do the hard processing of what parts to modify. This is the main control of the program and modifies the structures
void processPartDecision(int input, Part array[]){
    // pre-process to handle array subsections
    input -= 1;

    // Check if more parts can be added or if the bin is full (MAX: 30 parts)
    if (canAddMoreParts(array[input])){
        addRemovePartMenu();
        int choice = promptAddRemovePart();

        // Choice to add a parts to the bin
        if (choice == 1){
            int quantity = array[input].quantity;
            int addedParts = promptHowManyParts(choice);

            addedParts = validateInputForRange(0, inf, addedParts);

            // Check if the bin would overflow with the added parts
            if (!tooManyParts(quantity + addedParts)) {
                array[input].quantity = addParts(quantity, addedParts);
            }

        // Choice to Remove parts from the bin
        } else if (choice == 2){
            int quantity = array[input].quantity;
            int removedParts = promptHowManyParts(choice);

            // Validate the parts input and remove the specified quantity from the inventory
            removedParts = validateInputForRange(0, inf, removedParts);
            array[input].quantity = removeParts(quantity, removedParts);
        }
    }
}