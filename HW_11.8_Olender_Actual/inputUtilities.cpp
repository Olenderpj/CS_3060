//
// Created by PJ Olender on 8/28/22.
//

#include "inputUtilities.h"

int validateChoice(int min, int max, int choice){
   while (choice < min || choice > max){
       std::cout << "Invalid Selection, Try again." << std::endl;
       std::cin >> choice;
   }
   return choice;
}

//
int promptUserChoice(std::string prompt){
    int input;
    std::cout << prompt << std::endl;
    std::cin >> input;
    input = validateChoice(0, 12, input);
    return input;
}

