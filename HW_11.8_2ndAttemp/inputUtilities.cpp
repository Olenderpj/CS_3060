//
// Created by PJ Olender on 8/30/22.
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

std::string validateTextInput(std::string input){

    while (input.empty()){
        getline(std::cin, input);
    }

    return input;
}

std::string updateTextField(std::string message){
    std::string input;
    std::cout << message << std::endl;
    getline(std::cin, input);
    input = validateTextInput(input);

    return input;
}

double validateNonNegativeInput(double value){
    while (value < 0){
        std::cout << "This field can not be negative, try again: " << std::endl;
        std::cin >> value;
    }
    return value;
}

double updateDoubleField(std::string field){
    double input;
    std::cout << "Enter a new value for " << field << " (REQUIRED) " << std::endl;
    std::cin >> input;

    input = validateNonNegativeInput(input);

    return input;
}