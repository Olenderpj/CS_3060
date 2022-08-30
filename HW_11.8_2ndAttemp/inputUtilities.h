//
// Created by PJ Olender on 8/30/22.
//

#ifndef HW_11_8_2NDATTEMP_INPUTUTILITIES_H
#define HW_11_8_2NDATTEMP_INPUTUTILITIES_H

#include <iostream>
#include <cstdlib>

int validateChoice(int min, int max, int choice);

int promptUserChoice(std::string prompt);

std::string validateTextInput(std::string input);

std::string updateTextField(std::string message);

double validateNonNegativeInput(double value);

double updateDoubleField(std::string field);

#endif //HW_11_8_2NDATTEMP_INPUTUTILITIES_H
